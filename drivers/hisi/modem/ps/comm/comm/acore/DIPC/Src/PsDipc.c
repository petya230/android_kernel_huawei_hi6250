


/*lint -e767*/
#define    THIS_FILE_ID        PS_FILE_ID_PSDIPC_C
/*lint +e767*/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "product_config.h"


/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "PsTypeDef.h"
#include "mdrv.h"

/*****************************************************************************
  3 函数实现
*****************************************************************************/
/*****************************************************************************
 函 数 名  : DIPC_GetDevHandleByRabId
 功能描述  : 通过RabId获取设备句柄，此函数是给AT使用 (STUB !!!)
 输入参数  : VOS_UINT8 ucRabId  用来查询设备句柄的Rab Id

 输出参数  : 无
 返 回 值  : RabId对应的句柄,无效时为UDI_INVALID_HANDLE

 修改历史      :
  1.日    期   : 2012年2月15日
    作    者   : x59651
    修改内容   : 新生成函数

*****************************************************************************/
UDI_HANDLE DIPC_GetDevHandleByRabId(VOS_UINT8 ucRabId)
{
    return UDI_INVAL_DEV_ID;
}

/*****************************************************************************
 函 数 名  : DIPC_Pid_InitFunc
 功能描述  : DIPC PID初始化
 输入参数  : VOS_INIT_PHASE_DEFINE ip   初始化类型
 输出参数  : 无
 返 回 值  : VOS_UINT32

 修改历史      :
  1.日    期   : 2012年2月16日
    作    者   : x59651
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 DIPC_Pid_InitFunc( enum VOS_INIT_PHASE_DEFINE ip )
{
    return PS_SUCC;
}

/*****************************************************************************
 函 数 名  : DIPC_MsgProc
 功能描述  : DIPC的消息处理函数
 输入参数  : MsgBlock *pMsgBlock    从AT发来的消息

 输出参数  : 无
 返 回 值  : VOS_UINT32

 修改历史      :
  1.日    期   : 2012年2月15日
    作    者   : x59651
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 DIPC_AtMsgProc( const MsgBlock *pMsgBlock )
{
    return VOS_OK;
}





