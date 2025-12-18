#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/AsyncReadManagerMetricsFilters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReadManagerMetricsFilters)
namespace Unity::IO::LowLevel::Unsafe {
struct AssetLoadingSubsystem;
}
namespace Unity::IO::LowLevel::Unsafe {
struct FileReadType;
}
namespace Unity::IO::LowLevel::Unsafe {
struct Priority;
}
namespace Unity::IO::LowLevel::Unsafe {
struct ProcessingState;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
class AsyncReadManagerMetricsFilters;
}
// Write type traits
MARK_REF_PTR_T(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters);
// Dependencies System.Object
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters
class CORDL_TYPE AsyncReadManagerMetricsFilters : public ::System::Object {
public:
  // Declarations
  /// @brief Field PriorityLevels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PriorityLevels,
                      put = __cordl_internal_set_PriorityLevels)) ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*>
      PriorityLevels;

  /// @brief Field ReadTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ReadTypes,
                      put = __cordl_internal_set_ReadTypes)) ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*>
      ReadTypes;

  /// @brief Field States, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_States,
                      put = __cordl_internal_set_States)) ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*>
      States;

  /// @brief Field Subsystems, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Subsystems,
                      put = __cordl_internal_set_Subsystems)) ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*>
      Subsystems;

  /// @brief Field TypeIDs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeIDs, put = __cordl_internal_set_TypeIDs)) ::ArrayW<uint64_t, ::Array<uint64_t>*> TypeIDs;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*> const& __cordl_internal_get_PriorityLevels() const;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*>& __cordl_internal_get_PriorityLevels();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*> const& __cordl_internal_get_ReadTypes() const;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*>& __cordl_internal_get_ReadTypes();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*> const& __cordl_internal_get_States() const;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*>& __cordl_internal_get_States();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*> const& __cordl_internal_get_Subsystems() const;

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*>& __cordl_internal_get_Subsystems();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_TypeIDs() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_TypeIDs();

  constexpr void __cordl_internal_set_PriorityLevels(::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*> value);

  constexpr void __cordl_internal_set_ReadTypes(::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*> value);

  constexpr void __cordl_internal_set_States(::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*> value);

  constexpr void __cordl_internal_set_Subsystems(::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*> value);

  constexpr void __cordl_internal_set_TypeIDs(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9955 };

  /// @brief Field TypeIDs, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___TypeIDs;

  /// @brief Field States, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*> ___States;

  /// @brief Field ReadTypes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*> ___ReadTypes;

  /// @brief Field PriorityLevels, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*> ___PriorityLevels;

  /// @brief Field Subsystems, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*> ___Subsystems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___TypeIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___States) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___ReadTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___PriorityLevels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___Subsystems) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, 0x38>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
NEED_NO_BOX(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters);
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters*, "Unity.IO.LowLevel.Unsafe", "AsyncReadManagerMetricsFilters");
