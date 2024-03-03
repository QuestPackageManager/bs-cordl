#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRTextureUsage)
// Forward declare root types
namespace UnityEngine {
struct VRTextureUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VRTextureUsage);
// Type: UnityEngine::VRTextureUsage
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::VRTextureUsage
struct CORDL_TYPE VRTextureUsage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VRTextureUsage_Unwrapped
  enum struct __VRTextureUsage_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OneEye = static_cast<int32_t>(0x1),
    __E_TwoEyes = static_cast<int32_t>(0x2),
    __E_DeviceSpecific = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VRTextureUsage_Unwrapped() const noexcept {
    return static_cast<__VRTextureUsage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRTextureUsage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VRTextureUsage(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DeviceSpecific value: static_cast<int32_t>(0x3)
  static ::UnityEngine::VRTextureUsage const DeviceSpecific;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::VRTextureUsage const None;

  /// @brief Field OneEye value: static_cast<int32_t>(0x1)
  static ::UnityEngine::VRTextureUsage const OneEye;

  /// @brief Field TwoEyes value: static_cast<int32_t>(0x2)
  static ::UnityEngine::VRTextureUsage const TwoEyes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::VRTextureUsage, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::VRTextureUsage, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VRTextureUsage, "UnityEngine", "VRTextureUsage");
