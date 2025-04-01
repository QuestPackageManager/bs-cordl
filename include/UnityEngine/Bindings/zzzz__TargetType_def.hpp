#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/TargetType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TargetType)
// Forward declare root types
namespace UnityEngine::Bindings {
struct TargetType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::TargetType);
// Dependencies
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.TargetType
struct CORDL_TYPE TargetType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TargetType_Unwrapped
  enum struct __TargetType_Unwrapped : int32_t {
    __E_Function = static_cast<int32_t>(0x0),
    __E_Field = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TargetType_Unwrapped() const noexcept {
    return static_cast<__TargetType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TargetType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TargetType(int32_t value__) noexcept;

  /// @brief Field Field value: I32(1)
  static ::UnityEngine::Bindings::TargetType const Field;

  /// @brief Field Function value: I32(0)
  static ::UnityEngine::Bindings::TargetType const Function;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18710 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::TargetType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::TargetType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::TargetType, "UnityEngine.Bindings", "TargetType");
