cmake_minimum_required(VERSION 3.25.3)

project(
   pEcuReSim_LATEST
   VERSION 0.1
)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
   -std=c2x
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
   -D NOT_READY_FOR_TESTING_OR_DEPLOYMENT
   -D IBTCM_SW_ANPASSUNGEN
   -D BUILD_RIVIAN
)

add_executable(
   pEcuReSim_LATEST

   ${PROJECT_SOURCE_DIR}/source/SwcServiceStartUp/SwcServiceStartUp.c
   ${PROJECT_SOURCE_DIR}/source/McalGpt/McalGpt.c
   ${PROJECT_SOURCE_DIR}/source/wrappers/wrappers.c

##   ${PROJECT_SOURCE_DIR}/source/McalAdc/adc.c
##   ${PROJECT_SOURCE_DIR}/source/wrappers/FBL_APPL/applvect.c
##   ${PROJECT_SOURCE_DIR}/source/wrappers/McalAta/ata_dev_5785.c
##   ${PROJECT_SOURCE_DIR}/source/wrappers/McalAta/ata_Rec.c
##   ${PROJECT_SOURCE_DIR}/source/wrappers/Bfx/Bfx_Bit.c
##   ${PROJECT_SOURCE_DIR}/source/wrappers/Bfx/Bfx_GetVersionInfo.c
##   ${PROJECT_SOURCE_DIR}/source/wrappers/Bfx/Bfx_TstParityEven_u16_u8.c
##   ${PROJECT_SOURCE_DIR}/source/wrappers/Bfx/Bfx_TstParityEven_u32_u8.c
##   ${PROJECT_SOURCE_DIR}/source/wrappers/Bfx/Bfx_TstParityEven_u8_u8.c
##   ${PROJECT_SOURCE_DIR}/source/McalMcu/BrsStartup_c0.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceBswM/BswM.c
##   ${PROJECT_SOURCE_DIR}/source/McalCan/can.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/can_table.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_Controller.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_Init.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CanIf_PBcfg.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_PduMode.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_Prv.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_Rb_Apis.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_ReadNotifStatus.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_RxIndication.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_Transmit.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanIf/CanIf_TxConfirmation.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CanManager.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_ControllerBusoff.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_ControllerModeIndication.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_GetCurrentComMode.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_Init.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_InternalStateTransition.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_Main.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_NetworkModes.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CanSM_PBcfg.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_RequestComMode.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_StartWakeupSource.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_StopWakeupSource.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm/CanSM_TxTimeoutException.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanTp/CanTp.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CanTp_Cfg.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCanTp/CanTp_Prv.c
##   ${PROJECT_SOURCE_DIR}/source/EcuabCanTrcv/CanTrcv.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgMcalAdc.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgMcalDio.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgSwcServiceDcm_DslDsd.c
##   ${PROJECT_SOURCE_DIR}/source/McalGpt/clocks.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_BusLoadManagement.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ByteCopy.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ByteCopyInit.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/Com_Cfg.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_DeInit.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_EnableRxDm.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_Filter.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_GetStatus.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_GetVersionInfo.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_Init.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_InvalidateShadowSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_InvalidateSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_InvalidateSignalGroup.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_IpduGroupStart.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_IpduGroupStop.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_MainFunctionRouteSignals.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_MainFunctionRx.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_MainFunctionTx.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_PackGwMappings.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_PackSignal.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/Com_PBcfg.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ProcessSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ProcessSignalGroup.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ReceiveDynSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ReceiveShadowSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ReceiveSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ReceiveSignalGroup.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ReceiveSignalGroupArray.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_RxIndication.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_SendDynSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_SendIpdu.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_SendSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_SendSignalGroup.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_SendSignalGroupArray.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_ShadowBuffToIpduBuff.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_SwitchIpduTxMode.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_TriggerIPDUSend.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_TriggerTransmit.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_TxChangeMode.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_TxConfirmation.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_UnpackSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceCom/Com_UpdateShadowSignal.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_BusSM_ModeIndication.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/ComM_Cfg.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_CommunicationAllowed.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_Dcm_ActiveDiagnostic.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_Dcm_InactiveDiagnostic.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_DeInit.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_EcuM_WakeupIndication.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_GetCurrentComMode.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_Init.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_LChannelMainFunction.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_Main.c
##   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/ComM_PBcfg.c
##   ${PROJECT_SOURCE_DIR}/source/SwcServiceComM/ComM_RequestComMode.c
# Crc.c
# Crc_16.c
# Crc_32.c
# Crc_32P4.c
# Dcm_Dsd_Lib.c
# Dcm_Dsd_StateMachine.c
# Dcm_Dsl_ComMInteraction.c
# Dcm_Dsl_CopyRxData.c
# Dcm_Dsl_CopyTxData.c
# Dcm_Dsl_Protocol.c
# Dcm_Dsl_RxIndication.c
# Dcm_Dsl_Security.c
# Dcm_Dsl_Session.c
# Dcm_Dsl_StartOfReception.c
# Dcm_Dsl_StateMachine.c
# Dcm_Dsl_TxResponse.c
# Dcm_Lcfg_DspUds.c
# DcmAppl_CheckEncryptionCompressionMethod.c
# DcmAppl_ConfirmationRespPend.c
# DcmAppl_Dcm_GetProgConditions.c
# DcmAppl_Dcm_ProcessRequestDownload.c
# DcmAppl_Dcm_ProcessRequestTransferExit.c
# DcmAppl_Dcm_ReadMemory.c
# DcmAppl_Dcm_SetProgConditions.c
# DcmAppl_Dcm_WriteMemory.c
# DcmAppl_DcmCheckCDTCRecord.c
# DcmAppl_DcmCheckRdbiResponseLength.c
# DcmAppl_DcmCheckRoutineControlOptionRecord.c
# DcmAppl_DcmCheckSeed.c
# DcmAppl_DcmCheckWDBIReqLen.c
# DcmAppl_DcmCommControlConditionCheck.c
# DcmAppl_DcmComModeError.c
# DcmAppl_DcmConfirmation.c
# DcmAppl_DcmConfirmation_GeneralReject.c
# DcmAppl_DcmControlDtcSettingEnableStatus.c
# DcmAppl_DcmCopyRxData.c
# DcmAppl_DcmEcuResetPreparation.c
# DcmAppl_DcmGetNRCForMinLengthCheck.c
# DcmAppl_DcmGetPermissionForMemoryAccess_u8.c
# DcmAppl_DcmGetPermTxWarmResp.c
# DcmAppl_DcmGetRxPermission.c
# DcmAppl_DcmGetSesChgPermission.c
# DcmAppl_DcmGetStoreType.c
# DcmAppl_DcmGetUpdatedDelayForPowerOn.c
# DcmAppl_DcmGetUpdatedDelayTime.c
# DcmAppl_DcmIsComModeDefault.c
# DcmAppl_DcmMemSizeCheckForTransferData.c
# DcmAppl_DcmModifyResponse.c
# DcmAppl_DcmNotification.c
# DcmAppl_DcmReadDataNRC.c
# DcmAppl_DcmRxIndication.c
# DcmAppl_DcmSecaInvalidKey.c
# DcmAppl_DcmSecaValidKey.c
# DcmAppl_DcmSecurityLevelLocked.c
# DcmAppl_DcmStartProtocol.c
# DcmAppl_DcmStopProtocol.c
# DcmAppl_DcmSwitchCommunicationControl.c
# DcmAppl_DcmTransferDataCheckPermission.c
# DcmAppl_DisableDTCSetting.c
# DcmAppl_Switch_DcmBootLoaderReset.c
# DcmAppl_Switch_DcmExecuteEcuReset.c
# DcmAppl_Switch_DcmSysSupplierReset.c
# DcmAppl_UserCommCtrlReEnableModeRuleService.c
# DcmAppl_UserDIDModeRuleService.c
# DcmAppl_UserRIDModeRuleService.c
# DcmAppl_UserServiceModeRuleService.c
# DcmAppl_UserSubServiceModeRuleService.c
# DcmCore_DslDsd_BootLoader.c
# DcmCore_DslDsd_ConfirmRespPend.c
# DcmCore_DslDsd_GetKwpTimingValues.c
# DcmCore_DslDsd_InternalApi.c
# DcmCore_DslDsd_PrepareKwpTimingValues.c
# DcmCore_DslDsd_RestartP3Timer.c
# DcmCore_DslDsd_RestoreSecaTimer.c
# DcmCore_DslDsd_SetKwpDefaultTimingValues.c
# DcmCore_DslDsd_SetKwpTimingValues.c
# DcmCore_DslDsd_SetP3MaxMonitoring.c
# DcmCore_DslDsd_SetServiceTable.c
# DcmCore_DslDsd_SignalLib.c
# DcmCore_DslDsd_WarmStart.c
# DcmCore_Main.c
# DcmCore_Main_Init.c
# DcmDspObd_Mode1.c
# DcmDspObd_Mode2.c
# DcmDspObd_Mode37A.c
# DcmDspObd_Mode4.c
# DcmDspObd_Mode6.c
# DcmDspObd_Mode8.c
# DcmDspObd_Mode9.c
# DcmDspUds_CC.c
# DcmDspUds_Cdi.c
# DcmDspUds_Cdtcs.c
# DcmDspUds_Dddi.c
# DcmDspUds_Did_Support.c
# DcmDspUds_Dsc.c
# DcmDspUds_Er.c
# DcmDspUds_GetVIN.c
# DcmDspUds_Iocbi.c
# DcmDspUds_Memaddress_Calc.c
# DcmDspUds_Rc.c
# DcmDspUds_Rdbi.c
# DcmDspUds_Rdpi.c
# DcmDspUds_Rdtc.c
# DcmDspUds_Rdtc_GetFreezeFrameDataByRecord.c
# DcmDspUds_Rdtc_RepDataRecordByDTC.c
# DcmDspUds_Rdtc_RepDTCFaultDetectionCounter.c
# DcmDspUds_Rdtc_RepFailedDTC.c
# DcmDspUds_Rdtc_RepNumDTCByStatusMask.c
# DcmDspUds_Rdtc_ReportDTCBySevMaskRec.c
# DcmDspUds_Rdtc_ReportDTCSnapshotRecId.c
# DcmDspUds_Rdtc_RepSeverityOfDTC.c
# DcmDspUds_Rdtc_RepSuppDTC.c
# DcmDspUds_RequestDownload.c
# DcmDspUds_RequestTransferExit.c
# DcmDspUds_RequestUpload.c
# DcmDspUds_Rmba.c
# DcmDspUds_Roe.c
# DcmDspUds_Seca.c
# DcmDspUds_Seca_ChgSecurity.c
# DcmDspUds_Seca_RestoreDelayCount.c
# DcmDspUds_Seca_SecurityIni.c
# DcmDspUds_Tp.c
# DcmDspUds_TransferData.c
# DcmDspUds_Uds_Did_F186.c
# DcmDspUds_Wdbi.c
# DcmDspUds_Wmba.c
# DcmManager.c
# DcmMemCheck.c
# Dem_Cfg_DTC_DataStructures.c
# Dem_Cfg_Events_DataStructures.c
# Dem_Cfg_NvmCallbacks.c
# Dem_Cfg_OperationCycle_DataStructures.c
# Dem_Clear.c
# Dem_Client.c
# Dem_ClientClearMachine.c
# Dem_ClientRequestDispatcher.c
# Dem_ConsisChk.c
# Dem_Deb.c
# Dem_DebArTime.c
# Dem_DebBase.c
# Dem_DebCtrBaseClass.c
# Dem_Dependencies.c
# Dem_DisturbanceMemory.c
# Dem_DTCFilter.c
# Dem_DTCGroup.c
# Dem_DTCs.c
# Dem_DTCStatusByte.c
# Dem_EnableCondition.c
# Dem_EnvDataElement.c
# Dem_EnvDid.c
# Dem_EnvExtendedData.c
# Dem_EnvExtendedDataRec.c
# Dem_EnvFFRecNumeration.c
# Dem_EnvFreezeFrame.c
# Dem_EnvMain.c
# Dem_EvBuff.c
# Dem_EvBuffDistributor.c
# Dem_EventFHandling.c
# Dem_EventRecheck.c
# Dem_Events.c
# Dem_EventStatus.c
# Dem_EvMem.c
# Dem_EvMemApi.c
# Dem_EvMemGen.c
# Dem_EvtRelatedData.c
# Dem_GenericNvData.c
# Dem_Indicator.c
# Dem_IndicatorAttributes.c
# Dem_J1939EnvFreezeFrame.c
# Dem_KL15Persistence.c
# Dem_Lok_J1939Dcm.c
# Dem_Main.c
# Dem_Mapping.c
# Dem_Nvm.c
# Dem_NvmCallbacks.c
# Dem_OperationCycle.c
# Dem_PrjChronoSorting.c
# Dem_PrjDisturbanceMemory.c
# Dem_PrjEnvDataElement.c
# Dem_PrjEraseAllNvMDataHandling.c
# Dem_PrjEvmemProjectExtension.c
# Dem_StorageCondition.c
# DemAppInterface.c
# DemManager.c
# det.c
# EcuDiag.c
# EcuM_BootTarget.c
# EcuM_Callout_Stubs.c
# EcuM_Cfg.c
# EcuM_Lcfg.c
# EcuM_MainFunction.c
# EcuM_PBcfg.c
# EcuM_Prv.c
# EcuM_Shutdown.c
# EcuM_ShutdownServices.c
# EcuM_Startup.c
# EcuM_WakeupServices.c
# EnvManager.c
# fbl_apnv_fee.c
# fdl_descriptor.c
# Fee_30_SmallSector.c
# Fee_30_SmallSector_BlockHandler.c
# Fee_30_SmallSector_Cfg.c
# Fee_30_SmallSector_DatasetHandler.c
# Fee_30_SmallSector_FlsCoordinator.c
# Fee_30_SmallSector_InstanceHandler.c
# Fee_30_SmallSector_Layer1_Read.c
# Fee_30_SmallSector_Layer1_Write.c
# Fee_30_SmallSector_Layer2_DatasetEraser.c
# Fee_30_SmallSector_Layer2_InstanceFinder.c
# Fee_30_SmallSector_Layer2_WriteInstance.c
# Fee_30_SmallSector_Layer3_ReadManagementBytes.c
# Fee_30_SmallSector_PartitionHandler.c
# Fee_30_SmallSector_TaskManager.c
# FeeFblBlockInterface.c
# FiM.c
# FiM_Cfg_PbCfg.c
# FiM_Dem.c
# FiM_Init.c
# FiM_Monitor.c
# FiM_Permission.c
# FiM_Status.c
# FiM_Version.c
# Fls.c
# Fls_Internal.c
# Fls_Irq.c
# Fls_PBcfg.c
# Fls_Ram.c
# Fls_Version.c
# gpio.c
# hmac_sha2.c
# McalAdc.c
# McalDio.c
# McalMcu.c
# McalWdg.c
# Mcu.c
# MemConversion.c
# MemIf.c
# MemIf_Cfg.c
# NvM.c
# NvM_Act.c
# NvM_Cfg.c
# NvM_Crc.c
# NvM_JobProc.c
# NvM_Qry.c
# NvM_Queue.c
# NvmManager.c
# Os_SwcApplTpms.c
# ostm0.c
# PduR_dLoIf.c
# PduR_EnableDisableRouting.c
# PduR_Gateway_DDIfTxConf_NoBuf.c
# PduR_GetConfigurationId.c
# PduR_Globals.c
# PduR_Init.c
# PduR_InvalidId_If.c
# PduR_InvalidId_Tp.c
# PduR_InvalidId_UpTx.c
# PduR_LoTp.c
# PduR_Multicast_UpToLo.c
# PduR_Multicast_UpTx.c
# PduR_NullFunc_TrigTx.c
# PduR_PBcfg.c
# PduR_UpIf.c
# PduR_UpTp.c
# ProductionFlashInterface.c
# r_fdl_hw_access.c
# r_fdl_user_if.c
# r_fdl_user_if_init.c
# rba_BswSrv_MemCompare.c
# rba_BswSrv_MemCopy.c
# rba_BswSrv_MemSet.c
# rba_DiagLib_ByteOrderUtils.c
# RdcManager.c
# RdcRingbuffer.c
# rlin30.c
# rscan.c
# Rte_Dem_NvM.c
# Rte_Nvm_Type.c
# SchM.c
# sha2.c
# SignalCallbacks.c
# SwcApplDcm.c
# SwcApplDcm_MsgAuthentication.c
# SwcApplEcuM.c
# SwcApplTpms_DTC.c
# SwcApplTpms_NvM.c
# SwcApplTpms_NvM_Cat01_If.c
# SwcApplTpms_NvM_Cat02_If.c
# SwcApplTpms_NvM_Cat03_If.c
# SwcApplTpms_NvM_Cat04_If.c
# SwcApplTpms_NvM_Cat05_If.c
# SwcApplTpms_NvM_Cat06_If.c
# SwcApplTpms_NvM_Cat10_If.c
# SwcApplTpms_Nvm_If.c
# SwcApplTpms_abs_lin.c
# SwcApplTpms_FPA.c
# SwcApplTpms_Rte.c
# SwcApplTpms_Version.c
# Break.c
# busmsg.c
# calibr.c
# CD_DecoderSlim.c
# ctrl.c
# DevCanHandling.c
# eeiface.c
# IDOM.c
# IDOM_If.c
# multiframe.c
# procdat.c
# procdat_if.c
# REDiag.c
# REDiag_if.c
# sila.c
# statemanager.c
# state_bz.c
# state_fzz.c
# state_zk.c
# statistics.c
# statistics_if.c
# SwcApplTpms_CAN_If.c
# SwcApplTpms_Common.c
# SwcApplTpms_DevCanMessages.c
# SwcApplTpms_Diag.c
# SwcApplTpms_LearnEOL.c
# SwcApplTpms_OSEK_If.c
# SwcApplTpms_Vehstate.c
# TmsManager.c
# TSSMsg.c
# USCS.c
# USWarn.c
# uswarn_If.c
# USWTime.c
# WAlloc.c
# Walloc_IF.c
# watcf.c
# WTAxImb.c
# WTDHW.c
# WTEuF.c
# WTFT.c
# WTHiP.c
# WTHTDR.c
# WTHTVDR.c
# WTLowP.c
# WTPminDR.c
# WTT.c
# SwcServiceEcuM.c
# tau.c
# version.c
# VStdLib.c
# wdt.o
)

target_include_directories(
   pEcuReSim_LATEST PUBLIC

   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"
   "${PROJECT_SOURCE_DIR}/source/ProjectCompiler"
   "${PROJECT_SOURCE_DIR}/source/ProjectARA"
   "${PROJECT_SOURCE_DIR}/source/SwcApplDcm"
   "${PROJECT_SOURCE_DIR}/source/SwcApplDem"
   "${PROJECT_SOURCE_DIR}/source/SwcApplEcuM"
   "${PROJECT_SOURCE_DIR}/source/SwcApplNvM"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceBswM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceCanSm"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceCanTp"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceCom"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceComM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDcm"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDem"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDet"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceEcuM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceFiM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceNvM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceOs"
   "${PROJECT_SOURCE_DIR}/source/SwcServicePduR"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceSchM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceStartUp"
   "${PROJECT_SOURCE_DIR}/source/EcuabCanIf"
   "${PROJECT_SOURCE_DIR}/source/EcuabCanTrcv"
   "${PROJECT_SOURCE_DIR}/source/EcuabFee"
   "${PROJECT_SOURCE_DIR}/source/EcuabMemIf"
   "${PROJECT_SOURCE_DIR}/source/McalAdc"
   "${PROJECT_SOURCE_DIR}/source/McalCan"
   "${PROJECT_SOURCE_DIR}/source/McalDio"
   "${PROJECT_SOURCE_DIR}/source/McalFls"
   "${PROJECT_SOURCE_DIR}/source/McalGpt"
   "${PROJECT_SOURCE_DIR}/source/McalLin"
   "${PROJECT_SOURCE_DIR}/source/McalMcu"
   "${PROJECT_SOURCE_DIR}/source/McalWdg"
   "${PROJECT_SOURCE_DIR}/source/wrappers"
   "${PROJECT_SOURCE_DIR}/source/wrappers/Bfx"
   "${PROJECT_SOURCE_DIR}/source/wrappers/Crc"
   "${PROJECT_SOURCE_DIR}/source/wrappers/LibAutosarDiag"
   "${PROJECT_SOURCE_DIR}/source/wrappers/RDC_MANAGER"
   "${PROJECT_SOURCE_DIR}/source/wrappers/ENV_MANAGER"
   "${PROJECT_SOURCE_DIR}/source/wrappers/McalAta"
   "${PROJECT_SOURCE_DIR}/source/wrappers/FBL_APPL"
   "${PROJECT_SOURCE_DIR}/source/wrappers/VStdLib"
   "${PROJECT_SOURCE_DIR}/source/wrappers/rba_BswSrv"
)
