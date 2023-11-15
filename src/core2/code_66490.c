#include <ultra64.h>
#include "functions.h"
#include "variables.h"


/**
 * Seems to check if a bounding box is within the camera's view
 */ 
bool checkBoundingBoxesPartial(BKModelBBoxList *arg0, u8 *start, u32 count) {
    BKModelBBox *start_ptr;

    start_ptr = (BKModelBBox *)(arg0 + 1);
    while(count != 0){
        if (start_ptr[*start].boundingBoolean != FALSE) {
            // returns true if any bounding box is true
            return TRUE;
        }
        count--; 
        start++;
    }
    // only returns false if all bounding boxes are false
    return FALSE;
}

/**
 * Seems to be multiple bounding box checks
 */
void checkBoundingBoxes(BKModelBBoxList *bboxData, f32 modelRenderCameraPosition[3], f32 scale) {
    BKModelBBox *start_ptr;
    BKModelBBox *end_ptr;
    BKModelBBox *i_ptr;
    s32 i;
    s16 position[3];
    
    start_ptr = ( BKModelBBox *)(bboxData + 1);
    position[0] = modelRenderCameraPosition[0] * (1.0 / scale);
    position[1] = modelRenderCameraPosition[1] * (1.0 / scale);
    position[2] = modelRenderCameraPosition[2] * (1.0 / scale);
    end_ptr = start_ptr + bboxData->numberOfBoxes;
    for(i_ptr = start_ptr; i_ptr < end_ptr; i_ptr++) {
        // loop through each axis
        for(i = 0; i < 3; i++){

            if ((position[i] < i_ptr->lower[i]) || (i_ptr->upper[i] < position[i])) {
               break;
            }
        }
        // below sets true when within a bounding box
        i_ptr->boundingBoolean = (i == 3); // if we break, this will be false
    }
}
