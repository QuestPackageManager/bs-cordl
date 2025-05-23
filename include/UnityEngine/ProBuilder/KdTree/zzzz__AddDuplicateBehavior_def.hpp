#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/AddDuplicateBehavior.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddDuplicateBehavior)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
struct AddDuplicateBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior);
// Dependencies
namespace UnityEngine::ProBuilder::KdTree {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
struct CORDL_TYPE AddDuplicateBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AddDuplicateBehavior_Unwrapped
  enum struct __AddDuplicateBehavior_Unwrapped : int32_t {
    __E_Skip = static_cast<int32_t>(0x0),
    __E_Error = static_cast<int32_t>(0x1),
    __E_Update = static_cast<int32_t>(0x2),
    __E_Collect = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AddDuplicateBehavior_Unwrapped() const noexcept {
    return static_cast<__AddDuplicateBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AddDuplicateBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AddDuplicateBehavior(int32_t value__) noexcept;

  /// @brief Field Collect value: I32(3)
  static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Collect;

  /// @brief Field Error value: I32(1)
  static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Error;

  /// @brief Field Skip value: I32(0)
  static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Skip;

  /// @brief Field Update value: I32(2)
  static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Update;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18551 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, "UnityEngine.ProBuilder.KdTree", "AddDuplicateBehavior");
