#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortMethod)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct SortMethod;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::SortMethod);
// Type: UnityEngine.ProBuilder::SortMethod
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12162))
// CS Name: ::UnityEngine.ProBuilder::SortMethod
struct CORDL_TYPE SortMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SortMethod_Unwrapped
  enum struct __SortMethod_Unwrapped : int32_t {
    __E_Clockwise = static_cast<int32_t>(0x0),
    __E_CounterClockwise = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SortMethod_Unwrapped() const noexcept {
    return static_cast<__SortMethod_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortMethod(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortMethod();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Clockwise value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::SortMethod const Clockwise;

  /// @brief Field CounterClockwise value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::SortMethod const CounterClockwise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SortMethod, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SortMethod, "UnityEngine.ProBuilder", "SortMethod");
