#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidUIModeNight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidUIModeNight)
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidUIModeNight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::AndroidUIModeNight);
// Dependencies
namespace UnityEngine::Android {
// Is value type: true
// CS Name: UnityEngine.Android.AndroidUIModeNight
struct CORDL_TYPE AndroidUIModeNight {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidUIModeNight_Unwrapped
  enum struct __AndroidUIModeNight_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_No = static_cast<int32_t>(0x10),
    __E_Yes = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidUIModeNight_Unwrapped() const noexcept {
    return static_cast<__AndroidUIModeNight_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidUIModeNight();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidUIModeNight(int32_t value__) noexcept;

  /// @brief Field No value: I32(16)
  static ::UnityEngine::Android::AndroidUIModeNight const No;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::Android::AndroidUIModeNight const Undefined;

  /// @brief Field Yes value: I32(32)
  static ::UnityEngine::Android::AndroidUIModeNight const Yes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19937 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidUIModeNight, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidUIModeNight, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidUIModeNight, "UnityEngine.Android", "AndroidUIModeNight");
