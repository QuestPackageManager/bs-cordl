#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidScreenLayoutSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidScreenLayoutSize)
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidScreenLayoutSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::AndroidScreenLayoutSize);
// Dependencies
namespace UnityEngine::Android {
// Is value type: true
// CS Name: UnityEngine.Android.AndroidScreenLayoutSize
struct CORDL_TYPE AndroidScreenLayoutSize {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidScreenLayoutSize_Unwrapped
  enum struct __AndroidScreenLayoutSize_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Small = static_cast<int32_t>(0x1),
    __E_Normal = static_cast<int32_t>(0x2),
    __E_Large = static_cast<int32_t>(0x3),
    __E_XLarge = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidScreenLayoutSize_Unwrapped() const noexcept {
    return static_cast<__AndroidScreenLayoutSize_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidScreenLayoutSize();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidScreenLayoutSize(int32_t value__) noexcept;

  /// @brief Field Large value: I32(3)
  static ::UnityEngine::Android::AndroidScreenLayoutSize const Large;

  /// @brief Field Normal value: I32(2)
  static ::UnityEngine::Android::AndroidScreenLayoutSize const Normal;

  /// @brief Field Small value: I32(1)
  static ::UnityEngine::Android::AndroidScreenLayoutSize const Small;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::Android::AndroidScreenLayoutSize const Undefined;

  /// @brief Field XLarge value: I32(4)
  static ::UnityEngine::Android::AndroidScreenLayoutSize const XLarge;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19935 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidScreenLayoutSize, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidScreenLayoutSize, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidScreenLayoutSize, "UnityEngine.Android", "AndroidScreenLayoutSize");
