// pole_base.inc.c

void bhv_pole_base_loop(void) {
    if (o->oPosY - 10.0f < gMarioObject->oPosY
        && gMarioObject->oPosY < o->oPosY + o->hitboxHeight + 30.0f)
        if (o->oTimer > 10)
            if (!(gMarioStates->action & MARIO_PUNCHING))
                cur_obj_push_mario_away(70.0f);
}



void bhv_tree_loop(void) {
    s32 isClear = 0;
    if (o->oBehParams2ndByte != 0) {
        if (o->parentObj->header.gfx.sharedChild == gLoadedGraphNodes[MODEL_COURTYARD_SPIKY_TREE]) {
            isClear = 1;
        }
        if (o->oPosX == gMarioObject->oPosX) {
            if (isClear == 0) {
                spawn_mist_particles_variable(0, 40, 200.0f);
                o->parentObj->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_COURTYARD_SPIKY_TREE];
            }
        }
    }
}
