#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/AsyncReadManagerRequestMetric.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__AssetLoadingSubsystem_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileReadType_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__Priority_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ProcessingState_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__AsyncReadManagerRequestMetric_def.hpp"
// Ctor Parameters [CppParam { name: "_AssetName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FileName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OffsetBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AssetTypeId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentBytesRead_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_BatchReadCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsBatchRead_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_State_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::ProcessingState", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReadType_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::FileReadType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PriorityLevel_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::Priority", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Subsystem_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RequestTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TimeInQueueMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TotalTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::AsyncReadManagerRequestMetric(::StringW  _AssetName_k__BackingField, ::StringW  _FileName_k__BackingField, uint64_t  _OffsetBytes_k__BackingField, uint64_t  _SizeBytes_k__BackingField, uint64_t  _AssetTypeId_k__BackingField, uint64_t  _CurrentBytesRead_k__BackingField, uint32_t  _BatchReadCount_k__BackingField, bool  _IsBatchRead_k__BackingField, ::Unity::IO::LowLevel::Unsafe::ProcessingState  _State_k__BackingField, ::Unity::IO::LowLevel::Unsafe::FileReadType  _ReadType_k__BackingField, ::Unity::IO::LowLevel::Unsafe::Priority  _PriorityLevel_k__BackingField, ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  _Subsystem_k__BackingField, double_t  _RequestTimeMicroseconds_k__BackingField, double_t  _TimeInQueueMicroseconds_k__BackingField, double_t  _TotalTimeMicroseconds_k__BackingField) noexcept  {
this->_AssetName_k__BackingField = _AssetName_k__BackingField;
this->_FileName_k__BackingField = _FileName_k__BackingField;
this->_OffsetBytes_k__BackingField = _OffsetBytes_k__BackingField;
this->_SizeBytes_k__BackingField = _SizeBytes_k__BackingField;
this->_AssetTypeId_k__BackingField = _AssetTypeId_k__BackingField;
this->_CurrentBytesRead_k__BackingField = _CurrentBytesRead_k__BackingField;
this->_BatchReadCount_k__BackingField = _BatchReadCount_k__BackingField;
this->_IsBatchRead_k__BackingField = _IsBatchRead_k__BackingField;
this->_State_k__BackingField = _State_k__BackingField;
this->_ReadType_k__BackingField = _ReadType_k__BackingField;
this->_PriorityLevel_k__BackingField = _PriorityLevel_k__BackingField;
this->_Subsystem_k__BackingField = _Subsystem_k__BackingField;
this->_RequestTimeMicroseconds_k__BackingField = _RequestTimeMicroseconds_k__BackingField;
this->_TimeInQueueMicroseconds_k__BackingField = _TimeInQueueMicroseconds_k__BackingField;
this->_TotalTimeMicroseconds_k__BackingField = _TotalTimeMicroseconds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric::AsyncReadManagerRequestMetric()   {
}
