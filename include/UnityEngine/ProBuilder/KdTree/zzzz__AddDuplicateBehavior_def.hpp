#pragma once
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
// Type: UnityEngine.ProBuilder.KdTree::AddDuplicateBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15914))
// CS Name: ::UnityEngine.ProBuilder.KdTree::AddDuplicateBehavior
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AddDuplicateBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AddDuplicateBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Skip value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Skip;

  /// @brief Field Error value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Error;

  /// @brief Field Update value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Update;

  /// @brief Field Collect value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Collect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, "UnityEngine.ProBuilder.KdTree", "AddDuplicateBehavior");
