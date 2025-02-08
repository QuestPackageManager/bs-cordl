#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/AsyncReadManagerRequestMetric.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IO/LowLevel/Unsafe/zzzz__AssetLoadingSubsystem_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileReadType_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__Priority_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ProcessingState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReadManagerRequestMetric)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct AsyncReadManagerRequestMetric;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric);
// Dependencies Unity.IO.LowLevel.Unsafe.AssetLoadingSubsystem, Unity.IO.LowLevel.Unsafe.FileReadType, Unity.IO.LowLevel.Unsafe.Priority, Unity.IO.LowLevel.Unsafe.ProcessingState
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.IO.LowLevel.Unsafe.AsyncReadManagerRequestMetric
struct CORDL_TYPE AsyncReadManagerRequestMetric {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncReadManagerRequestMetric();

  // Ctor Parameters [CppParam { name: "_AssetName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_FileName_k__BackingField", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_OffsetBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_SizeBytes_k__BackingField", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "_AssetTypeId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentBytesRead_k__BackingField", ty: "uint64_t",
  // modifiers: "", def_value: None }, CppParam { name: "_BatchReadCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_IsBatchRead_k__BackingField", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "_State_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::ProcessingState", modifiers: "", def_value: None }, CppParam { name:
  // "_ReadType_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::FileReadType", modifiers: "", def_value: None }, CppParam { name: "_PriorityLevel_k__BackingField", ty:
  // "::Unity::IO::LowLevel::Unsafe::Priority", modifiers: "", def_value: None }, CppParam { name: "_Subsystem_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem", modifiers:
  // "", def_value: None }, CppParam { name: "_RequestTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_TimeInQueueMicroseconds_k__BackingField",
  // ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_TotalTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: None }]
  constexpr AsyncReadManagerRequestMetric(::StringW _AssetName_k__BackingField, ::StringW _FileName_k__BackingField, uint64_t _OffsetBytes_k__BackingField, uint64_t _SizeBytes_k__BackingField,
                                          uint64_t _AssetTypeId_k__BackingField, uint64_t _CurrentBytesRead_k__BackingField, uint32_t _BatchReadCount_k__BackingField,
                                          bool _IsBatchRead_k__BackingField, ::Unity::IO::LowLevel::Unsafe::ProcessingState _State_k__BackingField,
                                          ::Unity::IO::LowLevel::Unsafe::FileReadType _ReadType_k__BackingField, ::Unity::IO::LowLevel::Unsafe::Priority _PriorityLevel_k__BackingField,
                                          ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem _Subsystem_k__BackingField, double_t _RequestTimeMicroseconds_k__BackingField,
                                          double_t _TimeInQueueMicroseconds_k__BackingField, double_t _TotalTimeMicroseconds_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <AssetName>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _AssetName_k__BackingField;

  /// @brief Field <FileName>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _FileName_k__BackingField;

  /// @brief Field <OffsetBytes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  uint64_t _OffsetBytes_k__BackingField;

  /// @brief Field <SizeBytes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t _SizeBytes_k__BackingField;

  /// @brief Field <AssetTypeId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  uint64_t _AssetTypeId_k__BackingField;

  /// @brief Field <CurrentBytesRead>k__BackingField, offset: 0x28, size: 0x8, def value: None
  uint64_t _CurrentBytesRead_k__BackingField;

  /// @brief Field <BatchReadCount>k__BackingField, offset: 0x30, size: 0x4, def value: None
  uint32_t _BatchReadCount_k__BackingField;

  /// @brief Field <IsBatchRead>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool _IsBatchRead_k__BackingField;

  /// @brief Field <State>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::Unity::IO::LowLevel::Unsafe::ProcessingState _State_k__BackingField;

  /// @brief Field <ReadType>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::Unity::IO::LowLevel::Unsafe::FileReadType _ReadType_k__BackingField;

  /// @brief Field <PriorityLevel>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::Unity::IO::LowLevel::Unsafe::Priority _PriorityLevel_k__BackingField;

  /// @brief Field <Subsystem>k__BackingField, offset: 0x44, size: 0x4, def value: None
  ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem _Subsystem_k__BackingField;

  /// @brief Field <RequestTimeMicroseconds>k__BackingField, offset: 0x48, size: 0x8, def value: None
  double_t _RequestTimeMicroseconds_k__BackingField;

  /// @brief Field <TimeInQueueMicroseconds>k__BackingField, offset: 0x50, size: 0x8, def value: None
  double_t _TimeInQueueMicroseconds_k__BackingField;

  /// @brief Field <TotalTimeMicroseconds>k__BackingField, offset: 0x58, size: 0x8, def value: None
  double_t _TotalTimeMicroseconds_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _AssetName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _FileName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _OffsetBytes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _SizeBytes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _AssetTypeId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _CurrentBytesRead_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _BatchReadCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _IsBatchRead_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _State_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _ReadType_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _PriorityLevel_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _Subsystem_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _RequestTimeMicroseconds_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _TimeInQueueMicroseconds_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, _TotalTimeMicroseconds_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, 0x60>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, "Unity.IO.LowLevel.Unsafe", "AsyncReadManagerRequestMetric");
