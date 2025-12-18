#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidUIModeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidUIModeType)
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidUIModeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::AndroidUIModeType);
// Dependencies
namespace UnityEngine::Android {
// Is value type: true
// CS Name: UnityEngine.Android.AndroidUIModeType
struct CORDL_TYPE AndroidUIModeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidUIModeType_Unwrapped
  enum struct __AndroidUIModeType_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
    __E_Desk = static_cast<int32_t>(0x2),
    __E_Car = static_cast<int32_t>(0x3),
    __E_Television = static_cast<int32_t>(0x4),
    __E_Appliance = static_cast<int32_t>(0x5),
    __E_Watch = static_cast<int32_t>(0x6),
    __E_VrHeadset = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidUIModeType_Unwrapped() const noexcept {
    return static_cast<__AndroidUIModeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidUIModeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidUIModeType(int32_t value__) noexcept;

  /// @brief Field Appliance value: I32(5)
  static ::UnityEngine::Android::AndroidUIModeType const Appliance;

  /// @brief Field Car value: I32(3)
  static ::UnityEngine::Android::AndroidUIModeType const Car;

  /// @brief Field Desk value: I32(2)
  static ::UnityEngine::Android::AndroidUIModeType const Desk;

  /// @brief Field Normal value: I32(1)
  static ::UnityEngine::Android::AndroidUIModeType const Normal;

  /// @brief Field Television value: I32(4)
  static ::UnityEngine::Android::AndroidUIModeType const Television;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::Android::AndroidUIModeType const Undefined;

  /// @brief Field VrHeadset value: I32(7)
  static ::UnityEngine::Android::AndroidUIModeType const VrHeadset;

  /// @brief Field Watch value: I32(6)
  static ::UnityEngine::Android::AndroidUIModeType const Watch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19965 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidUIModeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidUIModeType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidUIModeType, "UnityEngine.Android", "AndroidUIModeType");
