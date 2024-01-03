#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReadManagerMetricsFilters)
namespace Unity::IO::LowLevel::Unsafe {
struct Priority;
}
namespace Unity::IO::LowLevel::Unsafe {
struct FileReadType;
}
namespace Unity::IO::LowLevel::Unsafe {
struct ProcessingState;
}
namespace Unity::IO::LowLevel::Unsafe {
struct AssetLoadingSubsystem;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
class AsyncReadManagerMetricsFilters;
}
// Write type traits
MARK_REF_PTR_T(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters);
// Type: Unity.IO.LowLevel.Unsafe::AsyncReadManagerMetricsFilters
// SizeInfo { instance_size: 56, native_size: 40, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9991))
// CS Name: ::Unity.IO.LowLevel.Unsafe::AsyncReadManagerMetricsFilters*
class CORDL_TYPE AsyncReadManagerMetricsFilters : public ::System::Object {
public:
  // Declarations
  /// @brief Field TypeIDs, offset 0x10, size 0x8
  __declspec(property(get = __get_TypeIDs, put = __set_TypeIDs))::ArrayW<uint64_t, ::Array<uint64_t>*> TypeIDs;

  /// @brief Field States, offset 0x18, size 0x8
  __declspec(property(get = __get_States, put = __set_States))::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*> States;

  /// @brief Field ReadTypes, offset 0x20, size 0x8
  __declspec(property(get = __get_ReadTypes, put = __set_ReadTypes))::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*> ReadTypes;

  /// @brief Field PriorityLevels, offset 0x28, size 0x8
  __declspec(property(get = __get_PriorityLevels, put = __set_PriorityLevels))::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*> PriorityLevels;

  /// @brief Field Subsystems, offset 0x30, size 0x8
  __declspec(property(get = __get_Subsystems,
                      put = __set_Subsystems))::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*> Subsystems;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_TypeIDs();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_TypeIDs() const;

  constexpr void __set_TypeIDs(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*>& __get_States();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*> const& __get_States() const;

  constexpr void __set_States(::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState, ::Array<::Unity::IO::LowLevel::Unsafe::ProcessingState>*> value);

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*>& __get_ReadTypes();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*> const& __get_ReadTypes() const;

  constexpr void __set_ReadTypes(::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType, ::Array<::Unity::IO::LowLevel::Unsafe::FileReadType>*> value);

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*>& __get_PriorityLevels();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*> const& __get_PriorityLevels() const;

  constexpr void __set_PriorityLevels(::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority, ::Array<::Unity::IO::LowLevel::Unsafe::Priority>*> value);

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*>& __get_Subsystems();

  constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*> const& __get_Subsystems() const;

  constexpr void __set_Subsystems(::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, ::Array<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>*> value);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadManagerMetricsFilters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncReadManagerMetricsFilters(AsyncReadManagerMetricsFilters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadManagerMetricsFilters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncReadManagerMetricsFilters(AsyncReadManagerMetricsFilters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncReadManagerMetricsFilters();

public:
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
static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___TypeIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___States) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___ReadTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___PriorityLevels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, ___Subsystems) == 0x30, "Offset mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
NEED_NO_BOX(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters);
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters*, "Unity.IO.LowLevel.Unsafe", "AsyncReadManagerMetricsFilters");
