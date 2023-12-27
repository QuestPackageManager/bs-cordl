#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimePlatform)
// Forward declare root types
namespace UnityEngine {
struct RuntimePlatform;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RuntimePlatform);
// Type: UnityEngine::RuntimePlatform
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10034))
// CS Name: ::UnityEngine::RuntimePlatform
struct CORDL_TYPE RuntimePlatform {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RuntimePlatform_Unwrapped
  enum struct __RuntimePlatform_Unwrapped : int32_t {
    __E_OSXEditor = static_cast<int32_t>(0x0),
    __E_OSXPlayer = static_cast<int32_t>(0x1),
    __E_WindowsPlayer = static_cast<int32_t>(0x2),
    __E_OSXWebPlayer = static_cast<int32_t>(0x3),
    __E_OSXDashboardPlayer = static_cast<int32_t>(0x4),
    __E_WindowsWebPlayer = static_cast<int32_t>(0x5),
    __E_WindowsEditor = static_cast<int32_t>(0x7),
    __E_IPhonePlayer = static_cast<int32_t>(0x8),
    __E_XBOX360 = static_cast<int32_t>(0xa),
    __E_PS3 = static_cast<int32_t>(0x9),
    __E_Android = static_cast<int32_t>(0xb),
    __E_NaCl = static_cast<int32_t>(0xc),
    __E_FlashPlayer = static_cast<int32_t>(0xf),
    __E_LinuxPlayer = static_cast<int32_t>(0xd),
    __E_LinuxEditor = static_cast<int32_t>(0x10),
    __E_WebGLPlayer = static_cast<int32_t>(0x11),
    __E_MetroPlayerX86 = static_cast<int32_t>(0x12),
    __E_WSAPlayerX86 = static_cast<int32_t>(0x12),
    __E_MetroPlayerX64 = static_cast<int32_t>(0x13),
    __E_WSAPlayerX64 = static_cast<int32_t>(0x13),
    __E_MetroPlayerARM = static_cast<int32_t>(0x14),
    __E_WSAPlayerARM = static_cast<int32_t>(0x14),
    __E_WP8Player = static_cast<int32_t>(0x15),
    __E_BlackBerryPlayer = static_cast<int32_t>(0x16),
    __E_TizenPlayer = static_cast<int32_t>(0x17),
    __E_PSP2 = static_cast<int32_t>(0x18),
    __E_PS4 = static_cast<int32_t>(0x19),
    __E_PSM = static_cast<int32_t>(0x1a),
    __E_XboxOne = static_cast<int32_t>(0x1b),
    __E_SamsungTVPlayer = static_cast<int32_t>(0x1c),
    __E_WiiU = static_cast<int32_t>(0x1e),
    __E_tvOS = static_cast<int32_t>(0x1f),
    __E_Switch = static_cast<int32_t>(0x20),
    __E_Lumin = static_cast<int32_t>(0x21),
    __E_Stadia = static_cast<int32_t>(0x22),
    __E_CloudRendering = static_cast<int32_t>(0x23),
    __E_GameCoreScarlett = static_cast<int32_t>(0xffffffff),
    __E_GameCoreXboxSeries = static_cast<int32_t>(0x24),
    __E_GameCoreXboxOne = static_cast<int32_t>(0x25),
    __E_PS5 = static_cast<int32_t>(0x26),
    __E_EmbeddedLinuxArm64 = static_cast<int32_t>(0x27),
    __E_EmbeddedLinuxArm32 = static_cast<int32_t>(0x28),
    __E_EmbeddedLinuxX64 = static_cast<int32_t>(0x29),
    __E_EmbeddedLinuxX86 = static_cast<int32_t>(0x2a),
    __E_LinuxServer = static_cast<int32_t>(0x2b),
    __E_WindowsServer = static_cast<int32_t>(0x2c),
    __E_OSXServer = static_cast<int32_t>(0x2d),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RuntimePlatform_Unwrapped() const noexcept {
    return static_cast<__RuntimePlatform_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RuntimePlatform(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePlatform();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OSXEditor value: static_cast<int32_t>(0x0)
  static ::UnityEngine::RuntimePlatform const OSXEditor;

  /// @brief Field OSXPlayer value: static_cast<int32_t>(0x1)
  static ::UnityEngine::RuntimePlatform const OSXPlayer;

  /// @brief Field WindowsPlayer value: static_cast<int32_t>(0x2)
  static ::UnityEngine::RuntimePlatform const WindowsPlayer;

  /// @brief Field OSXWebPlayer value: static_cast<int32_t>(0x3)
  static ::UnityEngine::RuntimePlatform const OSXWebPlayer;

  /// @brief Field OSXDashboardPlayer value: static_cast<int32_t>(0x4)
  static ::UnityEngine::RuntimePlatform const OSXDashboardPlayer;

  /// @brief Field WindowsWebPlayer value: static_cast<int32_t>(0x5)
  static ::UnityEngine::RuntimePlatform const WindowsWebPlayer;

  /// @brief Field WindowsEditor value: static_cast<int32_t>(0x7)
  static ::UnityEngine::RuntimePlatform const WindowsEditor;

  /// @brief Field IPhonePlayer value: static_cast<int32_t>(0x8)
  static ::UnityEngine::RuntimePlatform const IPhonePlayer;

  /// @brief Field XBOX360 value: static_cast<int32_t>(0xa)
  static ::UnityEngine::RuntimePlatform const XBOX360;

  /// @brief Field PS3 value: static_cast<int32_t>(0x9)
  static ::UnityEngine::RuntimePlatform const PS3;

  /// @brief Field Android value: static_cast<int32_t>(0xb)
  static ::UnityEngine::RuntimePlatform const Android;

  /// @brief Field NaCl value: static_cast<int32_t>(0xc)
  static ::UnityEngine::RuntimePlatform const NaCl;

  /// @brief Field FlashPlayer value: static_cast<int32_t>(0xf)
  static ::UnityEngine::RuntimePlatform const FlashPlayer;

  /// @brief Field LinuxPlayer value: static_cast<int32_t>(0xd)
  static ::UnityEngine::RuntimePlatform const LinuxPlayer;

  /// @brief Field LinuxEditor value: static_cast<int32_t>(0x10)
  static ::UnityEngine::RuntimePlatform const LinuxEditor;

  /// @brief Field WebGLPlayer value: static_cast<int32_t>(0x11)
  static ::UnityEngine::RuntimePlatform const WebGLPlayer;

  /// @brief Field MetroPlayerX86 value: static_cast<int32_t>(0x12)
  static ::UnityEngine::RuntimePlatform const MetroPlayerX86;

  /// @brief Field WSAPlayerX86 value: static_cast<int32_t>(0x12)
  static ::UnityEngine::RuntimePlatform const WSAPlayerX86;

  /// @brief Field MetroPlayerX64 value: static_cast<int32_t>(0x13)
  static ::UnityEngine::RuntimePlatform const MetroPlayerX64;

  /// @brief Field WSAPlayerX64 value: static_cast<int32_t>(0x13)
  static ::UnityEngine::RuntimePlatform const WSAPlayerX64;

  /// @brief Field MetroPlayerARM value: static_cast<int32_t>(0x14)
  static ::UnityEngine::RuntimePlatform const MetroPlayerARM;

  /// @brief Field WSAPlayerARM value: static_cast<int32_t>(0x14)
  static ::UnityEngine::RuntimePlatform const WSAPlayerARM;

  /// @brief Field WP8Player value: static_cast<int32_t>(0x15)
  static ::UnityEngine::RuntimePlatform const WP8Player;

  /// @brief Field BlackBerryPlayer value: static_cast<int32_t>(0x16)
  static ::UnityEngine::RuntimePlatform const BlackBerryPlayer;

  /// @brief Field TizenPlayer value: static_cast<int32_t>(0x17)
  static ::UnityEngine::RuntimePlatform const TizenPlayer;

  /// @brief Field PSP2 value: static_cast<int32_t>(0x18)
  static ::UnityEngine::RuntimePlatform const PSP2;

  /// @brief Field PS4 value: static_cast<int32_t>(0x19)
  static ::UnityEngine::RuntimePlatform const PS4;

  /// @brief Field PSM value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::RuntimePlatform const PSM;

  /// @brief Field XboxOne value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::RuntimePlatform const XboxOne;

  /// @brief Field SamsungTVPlayer value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::RuntimePlatform const SamsungTVPlayer;

  /// @brief Field WiiU value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::RuntimePlatform const WiiU;

  /// @brief Field tvOS value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::RuntimePlatform const tvOS;

  /// @brief Field Switch value: static_cast<int32_t>(0x20)
  static ::UnityEngine::RuntimePlatform const Switch;

  /// @brief Field Lumin value: static_cast<int32_t>(0x21)
  static ::UnityEngine::RuntimePlatform const Lumin;

  /// @brief Field Stadia value: static_cast<int32_t>(0x22)
  static ::UnityEngine::RuntimePlatform const Stadia;

  /// @brief Field CloudRendering value: static_cast<int32_t>(0x23)
  static ::UnityEngine::RuntimePlatform const CloudRendering;

  /// @brief Field GameCoreScarlett value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::RuntimePlatform const GameCoreScarlett;

  /// @brief Field GameCoreXboxSeries value: static_cast<int32_t>(0x24)
  static ::UnityEngine::RuntimePlatform const GameCoreXboxSeries;

  /// @brief Field GameCoreXboxOne value: static_cast<int32_t>(0x25)
  static ::UnityEngine::RuntimePlatform const GameCoreXboxOne;

  /// @brief Field PS5 value: static_cast<int32_t>(0x26)
  static ::UnityEngine::RuntimePlatform const PS5;

  /// @brief Field EmbeddedLinuxArm64 value: static_cast<int32_t>(0x27)
  static ::UnityEngine::RuntimePlatform const EmbeddedLinuxArm64;

  /// @brief Field EmbeddedLinuxArm32 value: static_cast<int32_t>(0x28)
  static ::UnityEngine::RuntimePlatform const EmbeddedLinuxArm32;

  /// @brief Field EmbeddedLinuxX64 value: static_cast<int32_t>(0x29)
  static ::UnityEngine::RuntimePlatform const EmbeddedLinuxX64;

  /// @brief Field EmbeddedLinuxX86 value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::RuntimePlatform const EmbeddedLinuxX86;

  /// @brief Field LinuxServer value: static_cast<int32_t>(0x2b)
  static ::UnityEngine::RuntimePlatform const LinuxServer;

  /// @brief Field WindowsServer value: static_cast<int32_t>(0x2c)
  static ::UnityEngine::RuntimePlatform const WindowsServer;

  /// @brief Field OSXServer value: static_cast<int32_t>(0x2d)
  static ::UnityEngine::RuntimePlatform const OSXServer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimePlatform, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimePlatform, "UnityEngine", "RuntimePlatform");
