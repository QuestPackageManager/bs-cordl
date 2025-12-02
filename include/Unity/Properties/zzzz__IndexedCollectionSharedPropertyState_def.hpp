#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionSharedPropertyState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexedCollectionSharedPropertyState)
// Forward declare root types
namespace Unity::Properties {
struct IndexedCollectionSharedPropertyState;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::IndexedCollectionSharedPropertyState);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.IndexedCollectionSharedPropertyState
struct CORDL_TYPE IndexedCollectionSharedPropertyState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexedCollectionSharedPropertyState();

  // Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IsReadOnly", ty: "bool", modifiers: "", def_value: None }]
  constexpr IndexedCollectionSharedPropertyState(int32_t Index, bool IsReadOnly) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Index, offset: 0x0, size: 0x4, def value: None
  int32_t Index;

  /// @brief Field IsReadOnly, offset: 0x4, size: 0x1, def value: None
  bool IsReadOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::IndexedCollectionSharedPropertyState, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::IndexedCollectionSharedPropertyState, IsReadOnly) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::IndexedCollectionSharedPropertyState, 0x8>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IndexedCollectionSharedPropertyState, "Unity.Properties", "IndexedCollectionSharedPropertyState");
