#pragma once
// IWYU pragma private; include "UnityEngine/RuntimePlatform.hpp"
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
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RuntimePlatform
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
    __E_CloudRendering = static_cast<int32_t>(0xffffffff),
    __E_LinuxHeadlessSimulation = static_cast<int32_t>(0x23),
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
    __E_QNXArm32 = static_cast<int32_t>(0x2e),
    __E_QNXArm64 = static_cast<int32_t>(0x2f),
    __E_QNXX64 = static_cast<int32_t>(0x30),
    __E_QNXX86 = static_cast<int32_t>(0x31),
    __E_VisionOS = static_cast<int32_t>(0x32),
    __E_ReservedCFE = static_cast<int32_t>(0x33),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RuntimePlatform_Unwrapped() const noexcept {
    return static_cast<__RuntimePlatform_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePlatform();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RuntimePlatform(int32_t value__) noexcept;

  /// @brief Field Android value: I32(11)
  static ::UnityEngine::RuntimePlatform const Android;

  /// @brief Field BlackBerryPlayer value: I32(22)
  static ::UnityEngine::RuntimePlatform const BlackBerryPlayer;

  /// @brief Field CloudRendering value: I32(-1)
  static ::UnityEngine::RuntimePlatform const CloudRendering;

  /// @brief Field EmbeddedLinuxArm32 value: I32(40)
  static ::UnityEngine::RuntimePlatform const EmbeddedLinuxArm32;

  /// @brief Field EmbeddedLinuxArm64 value: I32(39)
  static ::UnityEngine::RuntimePlatform const EmbeddedLinuxArm64;

  /// @brief Field EmbeddedLinuxX64 value: I32(41)
  static ::UnityEngine::RuntimePlatform const EmbeddedLinuxX64;

  /// @brief Field EmbeddedLinuxX86 value: I32(42)
  static ::UnityEngine::RuntimePlatform const EmbeddedLinuxX86;

  /// @brief Field FlashPlayer value: I32(15)
  static ::UnityEngine::RuntimePlatform const FlashPlayer;

  /// @brief Field GameCoreScarlett value: I32(-1)
  static ::UnityEngine::RuntimePlatform const GameCoreScarlett;

  /// @brief Field GameCoreXboxOne value: I32(37)
  static ::UnityEngine::RuntimePlatform const GameCoreXboxOne;

  /// @brief Field GameCoreXboxSeries value: I32(36)
  static ::UnityEngine::RuntimePlatform const GameCoreXboxSeries;

  /// @brief Field IPhonePlayer value: I32(8)
  static ::UnityEngine::RuntimePlatform const IPhonePlayer;

  /// @brief Field LinuxEditor value: I32(16)
  static ::UnityEngine::RuntimePlatform const LinuxEditor;

  /// @brief Field LinuxHeadlessSimulation value: I32(35)
  static ::UnityEngine::RuntimePlatform const LinuxHeadlessSimulation;

  /// @brief Field LinuxPlayer value: I32(13)
  static ::UnityEngine::RuntimePlatform const LinuxPlayer;

  /// @brief Field LinuxServer value: I32(43)
  static ::UnityEngine::RuntimePlatform const LinuxServer;

  /// @brief Field Lumin value: I32(33)
  static ::UnityEngine::RuntimePlatform const Lumin;

  /// @brief Field MetroPlayerARM value: I32(20)
  static ::UnityEngine::RuntimePlatform const MetroPlayerARM;

  /// @brief Field MetroPlayerX64 value: I32(19)
  static ::UnityEngine::RuntimePlatform const MetroPlayerX64;

  /// @brief Field MetroPlayerX86 value: I32(18)
  static ::UnityEngine::RuntimePlatform const MetroPlayerX86;

  /// @brief Field NaCl value: I32(12)
  static ::UnityEngine::RuntimePlatform const NaCl;

  /// @brief Field OSXDashboardPlayer value: I32(4)
  static ::UnityEngine::RuntimePlatform const OSXDashboardPlayer;

  /// @brief Field OSXEditor value: I32(0)
  static ::UnityEngine::RuntimePlatform const OSXEditor;

  /// @brief Field OSXPlayer value: I32(1)
  static ::UnityEngine::RuntimePlatform const OSXPlayer;

  /// @brief Field OSXServer value: I32(45)
  static ::UnityEngine::RuntimePlatform const OSXServer;

  /// @brief Field OSXWebPlayer value: I32(3)
  static ::UnityEngine::RuntimePlatform const OSXWebPlayer;

  /// @brief Field PS3 value: I32(9)
  static ::UnityEngine::RuntimePlatform const PS3;

  /// @brief Field PS4 value: I32(25)
  static ::UnityEngine::RuntimePlatform const PS4;

  /// @brief Field PS5 value: I32(38)
  static ::UnityEngine::RuntimePlatform const PS5;

  /// @brief Field PSM value: I32(26)
  static ::UnityEngine::RuntimePlatform const PSM;

  /// @brief Field PSP2 value: I32(24)
  static ::UnityEngine::RuntimePlatform const PSP2;

  /// @brief Field QNXArm32 value: I32(46)
  static ::UnityEngine::RuntimePlatform const QNXArm32;

  /// @brief Field QNXArm64 value: I32(47)
  static ::UnityEngine::RuntimePlatform const QNXArm64;

  /// @brief Field QNXX64 value: I32(48)
  static ::UnityEngine::RuntimePlatform const QNXX64;

  /// @brief Field QNXX86 value: I32(49)
  static ::UnityEngine::RuntimePlatform const QNXX86;

  /// @brief Field ReservedCFE value: I32(51)
  static ::UnityEngine::RuntimePlatform const ReservedCFE;

  /// @brief Field SamsungTVPlayer value: I32(28)
  static ::UnityEngine::RuntimePlatform const SamsungTVPlayer;

  /// @brief Field Stadia value: I32(34)
  static ::UnityEngine::RuntimePlatform const Stadia;

  /// @brief Field Switch value: I32(32)
  static ::UnityEngine::RuntimePlatform const Switch;

  /// @brief Field TizenPlayer value: I32(23)
  static ::UnityEngine::RuntimePlatform const TizenPlayer;

  /// @brief Field VisionOS value: I32(50)
  static ::UnityEngine::RuntimePlatform const VisionOS;

  /// @brief Field WP8Player value: I32(21)
  static ::UnityEngine::RuntimePlatform const WP8Player;

  /// @brief Field WSAPlayerARM value: I32(20)
  static ::UnityEngine::RuntimePlatform const WSAPlayerARM;

  /// @brief Field WSAPlayerX64 value: I32(19)
  static ::UnityEngine::RuntimePlatform const WSAPlayerX64;

  /// @brief Field WSAPlayerX86 value: I32(18)
  static ::UnityEngine::RuntimePlatform const WSAPlayerX86;

  /// @brief Field WebGLPlayer value: I32(17)
  static ::UnityEngine::RuntimePlatform const WebGLPlayer;

  /// @brief Field WiiU value: I32(30)
  static ::UnityEngine::RuntimePlatform const WiiU;

  /// @brief Field WindowsEditor value: I32(7)
  static ::UnityEngine::RuntimePlatform const WindowsEditor;

  /// @brief Field WindowsPlayer value: I32(2)
  static ::UnityEngine::RuntimePlatform const WindowsPlayer;

  /// @brief Field WindowsServer value: I32(44)
  static ::UnityEngine::RuntimePlatform const WindowsServer;

  /// @brief Field WindowsWebPlayer value: I32(5)
  static ::UnityEngine::RuntimePlatform const WindowsWebPlayer;

  /// @brief Field XBOX360 value: I32(10)
  static ::UnityEngine::RuntimePlatform const XBOX360;

  /// @brief Field XboxOne value: I32(27)
  static ::UnityEngine::RuntimePlatform const XboxOne;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10045 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field tvOS value: I32(31)
  static ::UnityEngine::RuntimePlatform const tvOS;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RuntimePlatform, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimePlatform, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimePlatform, "UnityEngine", "RuntimePlatform");
