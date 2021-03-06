/******************************************************************************

  Copyright (C), 2016-2018 Hisilicon Tech. Co., Ltd.

 ******************************************************************************
  File Name     : mpi_avs.h
  Version       : Initial Draft
  Author        : Hisilicon multimedia software group
  Created       : 2016/10/20
  Description   :

******************************************************************************/
#ifndef __MPI_AVS_H__
#define __MPI_AVS_H__

#include "hi_comm_avs.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"
{
#endif
#endif /* __cplusplus */


    HI_S32 HI_MPI_AVS_CreateGrp(AVS_GRP AVSGrp, AVS_GRP_ATTR_S* pstGrpAttr);
    HI_S32 HI_MPI_AVS_DestroyGrp(AVS_GRP AVSGrp);

    HI_S32 HI_MPI_AVS_StartGrp(AVS_GRP AVSGrp);
    HI_S32 HI_MPI_AVS_StopGrp(AVS_GRP AVSGrp);

    HI_S32 HI_MPI_AVS_ResetGrp(AVS_GRP AVSGrp);

    HI_S32 HI_MPI_AVS_GetGrpAttr(AVS_GRP AVSGrp, AVS_GRP_ATTR_S* pstGrpAttr);
    HI_S32 HI_MPI_AVS_SetGrpAttr(AVS_GRP AVSGrp, AVS_GRP_ATTR_S* pstGrpAttr);

    HI_S32 HI_MPI_AVS_SendPipeFrame(AVS_GRP AVSGrp, AVS_PIPE AVSPipe, VIDEO_FRAME_INFO_S* pstVideoFrame, HI_S32 s32MilliSec);

    HI_S32 HI_MPI_AVS_GetPipeFrame(AVS_GRP AVSGrp, AVS_PIPE AVSPipe, VIDEO_FRAME_INFO_S* pstVideoFrame);
    HI_S32 HI_MPI_AVS_ReleasePipeFrame(AVS_GRP AVSGrp, AVS_PIPE AVSPipe, VIDEO_FRAME_INFO_S* pstVideoFrame);

    HI_S32 HI_MPI_AVS_SetChnAttr(AVS_GRP AVSGrp, AVS_CHN AVSChn, AVS_CHN_ATTR_S* pstChnAttr);
    HI_S32 HI_MPI_AVS_GetChnAttr(AVS_GRP AVSGrp, AVS_CHN AVSChn, AVS_CHN_ATTR_S* pstChnAttr);

    HI_S32 HI_MPI_AVS_EnableChn(AVS_GRP AVSGrp, AVS_CHN AVSChn);
    HI_S32 HI_MPI_AVS_DisableChn(AVS_GRP AVSGrp, AVS_CHN AVSChn);

    HI_S32 HI_MPI_AVS_GetChnFrame(AVS_GRP AVSGrp, AVS_CHN AVSChn, VIDEO_FRAME_INFO_S* pstVideoFrame, HI_S32 s32MilliSec);
    HI_S32 HI_MPI_AVS_ReleaseChnFrame(AVS_GRP AVSGrp, AVS_CHN AVSChn, VIDEO_FRAME_INFO_S* pstVideoFrame);

    HI_S32 HI_MPI_AVS_GetModParam(AVS_MOD_PARAM_S* pstModParam);
    HI_S32 HI_MPI_AVS_SetModParam(AVS_MOD_PARAM_S* pstModParam);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /*__MPI_AVS_H__ */

