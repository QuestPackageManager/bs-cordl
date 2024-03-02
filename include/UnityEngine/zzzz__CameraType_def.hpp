#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraType)
// Forward declare root types
namespace UnityEngine {
struct CameraType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CameraType);
// Type: UnityEngine::CameraType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::CameraType
struct CORDL_TYPE CameraType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CameraType_Unwrapped
  enum struct __CameraType_Unwrapped : int32_t {
    __E_Game = static_cast<int32_t>(0x1),
    __E_SceneView = static_cast<int32_t>(0x2),
    __E_Preview = static_cast<int32_t>(0x4),
    __E_VR = static_cast<int32_t>(0x8),
    __E_Reflection = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CameraType_Unwrapped() const noexcept {
    return static_cast<__CameraType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CameraType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Game value: static_cast<int32_t>(0x1)
  static ::UnityEngine::CameraType const Game;

  /// @brief Field Preview value: static_cast<int32_t>(0x4)
  static ::UnityEngine::CameraType const Preview;

  /// @brief Field Reflection value: static_cast<int32_t>(0x10)
  static ::UnityEngine::CameraType const Reflection;

  /// @brief Field SceneView value: static_cast<int32_t>(0x2)
  static ::UnityEngine::CameraType const SceneView;

  /// @brief Field VR value: static_cast<int32_t>(0x8)
  static ::UnityEngine::CameraType const VR;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CameraType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CameraType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CameraType, "UnityEngine", "CameraType");
