#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundPositionKeyword.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundPositionKeyword)
// Forward declare root types
namespace UnityEngine::UIElements {
struct BackgroundPositionKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BackgroundPositionKeyword);
// Type: UnityEngine.UIElements::BackgroundPositionKeyword
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::BackgroundPositionKeyword
struct CORDL_TYPE BackgroundPositionKeyword {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BackgroundPositionKeyword_Unwrapped
  enum struct __BackgroundPositionKeyword_Unwrapped : int32_t {
    __E_Center = static_cast<int32_t>(0x0),
    __E_Top = static_cast<int32_t>(0x1),
    __E_Bottom = static_cast<int32_t>(0x2),
    __E_Left = static_cast<int32_t>(0x3),
    __E_Right = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BackgroundPositionKeyword_Unwrapped() const noexcept {
    return static_cast<__BackgroundPositionKeyword_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundPositionKeyword();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BackgroundPositionKeyword(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bottom value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::BackgroundPositionKeyword const Bottom;

  /// @brief Field Center value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::BackgroundPositionKeyword const Center;

  /// @brief Field Left value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::BackgroundPositionKeyword const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::BackgroundPositionKeyword const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::BackgroundPositionKeyword const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6102 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundPositionKeyword, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundPositionKeyword, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundPositionKeyword, "UnityEngine.UIElements", "BackgroundPositionKeyword");
