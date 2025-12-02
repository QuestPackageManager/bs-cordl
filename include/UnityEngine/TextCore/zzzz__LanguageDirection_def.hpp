#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LanguageDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LanguageDirection)
// Forward declare root types
namespace UnityEngine::TextCore {
struct LanguageDirection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LanguageDirection);
// Dependencies
namespace UnityEngine::TextCore {
// Is value type: true
// CS Name: UnityEngine.TextCore.LanguageDirection
struct CORDL_TYPE LanguageDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LanguageDirection_Unwrapped
  enum struct __LanguageDirection_Unwrapped : int32_t {
    __E_LTR = static_cast<int32_t>(0x0),
    __E_RTL = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LanguageDirection_Unwrapped() const noexcept {
    return static_cast<__LanguageDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LanguageDirection(int32_t value__) noexcept;

  /// @brief Field LTR value: I32(0)
  static ::UnityEngine::TextCore::LanguageDirection const LTR;

  /// @brief Field RTL value: I32(1)
  static ::UnityEngine::TextCore::LanguageDirection const RTL;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17143 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LanguageDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LanguageDirection, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LanguageDirection, "UnityEngine.TextCore", "LanguageDirection");
