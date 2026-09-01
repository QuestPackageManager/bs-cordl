#pragma once
// IWYU pragma private; include "Unity\IO\LowLevel\Unsafe\AsyncReadManagerMetricsFilters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__AssetLoadingSubsystem_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileReadType_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__Priority_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ProcessingState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReadManagerMetricsFilters)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
class AsyncReadManagerMetricsFilters;
}
// Write type traits
MARK_REF_T(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters*);
DEFINE_IL2CPP_CLASS(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters*, "Unity.IO.LowLevel.Unsafe", "AsyncReadManagerMetricsFilters");
// Dependencies System.Object, Unity.IO.LowLevel.Unsafe.AssetLoadingSubsystem, Unity.IO.LowLevel.Unsafe.FileReadType, Unity.IO.LowLevel.Unsafe.Priority, Unity.IO.LowLevel.Unsafe.ProcessingState
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters
class CORDL_TYPE AsyncReadManagerMetricsFilters : public ::System::Object {
public:
  // Declarations
  /// @brief Field PriorityLevels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PriorityLevels, put = __cordl_internal_set_PriorityLevels)) ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority> PriorityLevels;

  /// @brief Field ReadTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ReadTypes, put = __cordl_internal_set_ReadTypes)) ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType> ReadTypes;

  /// @brief Field States, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_States, put = __cordl_internal_set_States)) ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState> States;

  /// @brief Field Subsystems, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Subsystems, put = __cordl_internal_set_Subsystems)) ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> Subsystems;

  /// @brief Field TypeIDs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeIDs, put = __cordl_internal_set_TypeIDs)) ::ArrayW<uint64_t> TypeIDs;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority> const& __cordl_internal_get_PriorityLevels() const;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority>& __cordl_internal_get_PriorityLevels();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType> const& __cordl_internal_get_ReadTypes() const;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType>& __cordl_internal_get_ReadTypes();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState> const& __cordl_internal_get_States() const;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState>& __cordl_internal_get_States();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> const& __cordl_internal_get_Subsystems() const;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>& __cordl_internal_get_Subsystems();

  constexpr ::ArrayW<uint64_t> const& __cordl_internal_get_TypeIDs() const;

  constexpr ::ArrayW<uint64_t>& __cordl_internal_get_TypeIDs();

  constexpr void __cordl_internal_set_PriorityLevels(::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority> value);

  constexpr void __cordl_internal_set_ReadTypes(::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType> value);

  constexpr void __cordl_internal_set_States(::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState> value);

  constexpr void __cordl_internal_set_Subsystems(::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> value);

  constexpr void __cordl_internal_set_TypeIDs(::ArrayW<uint64_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncReadManagerMetricsFilters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadManagerMetricsFilters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncReadManagerMetricsFilters(AsyncReadManagerMetricsFilters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadManagerMetricsFilters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncReadManagerMetricsFilters(AsyncReadManagerMetricsFilters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9977 };

  /// @brief Field TypeIDs, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t> ___TypeIDs;

  /// @brief Field States, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState> ___States;

  /// @brief Field ReadTypes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType> ___ReadTypes;

  /// @brief Field PriorityLevels, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority> ___PriorityLevels;

  /// @brief Field Subsystems, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> ___Subsystems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___TypeIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___States) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___ReadTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___PriorityLevels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___Subsystems) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters) == 0x38, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
