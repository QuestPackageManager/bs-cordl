#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeSortingCriteria)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReflectionProbeSortingCriteria;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ReflectionProbeSortingCriteria);
// Type: UnityEngine.Rendering::ReflectionProbeSortingCriteria
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9114))
// CS Name: ::UnityEngine.Rendering::ReflectionProbeSortingCriteria
struct CORDL_TYPE ReflectionProbeSortingCriteria {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReflectionProbeSortingCriteria_Unwrapped
  enum struct __ReflectionProbeSortingCriteria_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Importance = static_cast<int32_t>(0x1),
    __E_Size = static_cast<int32_t>(0x2),
    __E_ImportanceThenSize = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReflectionProbeSortingCriteria_Unwrapped() const noexcept {
    return static_cast<__ReflectionProbeSortingCriteria_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReflectionProbeSortingCriteria(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeSortingCriteria();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::ReflectionProbeSortingCriteria const None;

  /// @brief Field Importance value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::ReflectionProbeSortingCriteria const Importance;

  /// @brief Field Size value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::ReflectionProbeSortingCriteria const Size;

  /// @brief Field ImportanceThenSize value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::ReflectionProbeSortingCriteria const ImportanceThenSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReflectionProbeSortingCriteria, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ReflectionProbeSortingCriteria, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReflectionProbeSortingCriteria, "UnityEngine.Rendering", "ReflectionProbeSortingCriteria");
