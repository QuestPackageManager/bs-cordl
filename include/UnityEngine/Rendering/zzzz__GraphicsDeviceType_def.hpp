#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsDeviceType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GraphicsDeviceType);
// Type: UnityEngine.Rendering::GraphicsDeviceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10264))
// CS Name: ::UnityEngine.Rendering::GraphicsDeviceType
struct CORDL_TYPE GraphicsDeviceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphicsDeviceType_Unwrapped
  enum struct __GraphicsDeviceType_Unwrapped : int32_t {
    __E_OpenGL2 = static_cast<int32_t>(0x0),
    __E_Direct3D9 = static_cast<int32_t>(0x1),
    __E_Direct3D11 = static_cast<int32_t>(0x2),
    __E_PlayStation3 = static_cast<int32_t>(0x3),
    __E_Null = static_cast<int32_t>(0x4),
    __E_Xbox360 = static_cast<int32_t>(0x6),
    __E_OpenGLES2 = static_cast<int32_t>(0x8),
    __E_OpenGLES3 = static_cast<int32_t>(0xb),
    __E_PlayStationVita = static_cast<int32_t>(0xc),
    __E_PlayStation4 = static_cast<int32_t>(0xd),
    __E_XboxOne = static_cast<int32_t>(0xe),
    __E_PlayStationMobile = static_cast<int32_t>(0xf),
    __E_Metal = static_cast<int32_t>(0x10),
    __E_OpenGLCore = static_cast<int32_t>(0x11),
    __E_Direct3D12 = static_cast<int32_t>(0x12),
    __E_N3DS = static_cast<int32_t>(0x13),
    __E_Vulkan = static_cast<int32_t>(0x15),
    __E_Switch = static_cast<int32_t>(0x16),
    __E_XboxOneD3D12 = static_cast<int32_t>(0x17),
    __E_GameCoreXboxOne = static_cast<int32_t>(0x18),
    __E_GameCoreScarlett = static_cast<int32_t>(0xffffffff),
    __E_GameCoreXboxSeries = static_cast<int32_t>(0x19),
    __E_PlayStation5 = static_cast<int32_t>(0x1a),
    __E_PlayStation5NGGC = static_cast<int32_t>(0x1b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphicsDeviceType_Unwrapped() const noexcept {
    return static_cast<__GraphicsDeviceType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphicsDeviceType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsDeviceType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OpenGL2 value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::GraphicsDeviceType const OpenGL2;

  /// @brief Field Direct3D9 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::GraphicsDeviceType const Direct3D9;

  /// @brief Field Direct3D11 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::GraphicsDeviceType const Direct3D11;

  /// @brief Field PlayStation3 value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::GraphicsDeviceType const PlayStation3;

  /// @brief Field Null value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::GraphicsDeviceType const Null;

  /// @brief Field Xbox360 value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::GraphicsDeviceType const Xbox360;

  /// @brief Field OpenGLES2 value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::GraphicsDeviceType const OpenGLES2;

  /// @brief Field OpenGLES3 value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::GraphicsDeviceType const OpenGLES3;

  /// @brief Field PlayStationVita value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Rendering::GraphicsDeviceType const PlayStationVita;

  /// @brief Field PlayStation4 value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Rendering::GraphicsDeviceType const PlayStation4;

  /// @brief Field XboxOne value: static_cast<int32_t>(0xe)
  static ::UnityEngine::Rendering::GraphicsDeviceType const XboxOne;

  /// @brief Field PlayStationMobile value: static_cast<int32_t>(0xf)
  static ::UnityEngine::Rendering::GraphicsDeviceType const PlayStationMobile;

  /// @brief Field Metal value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::GraphicsDeviceType const Metal;

  /// @brief Field OpenGLCore value: static_cast<int32_t>(0x11)
  static ::UnityEngine::Rendering::GraphicsDeviceType const OpenGLCore;

  /// @brief Field Direct3D12 value: static_cast<int32_t>(0x12)
  static ::UnityEngine::Rendering::GraphicsDeviceType const Direct3D12;

  /// @brief Field N3DS value: static_cast<int32_t>(0x13)
  static ::UnityEngine::Rendering::GraphicsDeviceType const N3DS;

  /// @brief Field Vulkan value: static_cast<int32_t>(0x15)
  static ::UnityEngine::Rendering::GraphicsDeviceType const Vulkan;

  /// @brief Field Switch value: static_cast<int32_t>(0x16)
  static ::UnityEngine::Rendering::GraphicsDeviceType const Switch;

  /// @brief Field XboxOneD3D12 value: static_cast<int32_t>(0x17)
  static ::UnityEngine::Rendering::GraphicsDeviceType const XboxOneD3D12;

  /// @brief Field GameCoreXboxOne value: static_cast<int32_t>(0x18)
  static ::UnityEngine::Rendering::GraphicsDeviceType const GameCoreXboxOne;

  /// @brief Field GameCoreScarlett value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::Rendering::GraphicsDeviceType const GameCoreScarlett;

  /// @brief Field GameCoreXboxSeries value: static_cast<int32_t>(0x19)
  static ::UnityEngine::Rendering::GraphicsDeviceType const GameCoreXboxSeries;

  /// @brief Field PlayStation5 value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::Rendering::GraphicsDeviceType const PlayStation5;

  /// @brief Field PlayStation5NGGC value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::Rendering::GraphicsDeviceType const PlayStation5NGGC;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsDeviceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GraphicsDeviceType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsDeviceType, "UnityEngine.Rendering", "GraphicsDeviceType");
