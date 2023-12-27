#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphyManager)
namespace Tayx::Graphy {
struct __GraphyManager__LookForAudioListener;
}
namespace UnityEngine {
struct FFTWindow;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModuleType;
}
namespace Tayx::Graphy::Ram {
class G_RamManager;
}
namespace UnityEngine {
struct Color;
}
namespace Tayx::Graphy::Fps {
class G_FpsManager;
}
namespace UnityEngine {
class AudioListener;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace Tayx::Graphy {
struct __GraphyManager__Mode;
}
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
namespace Tayx::Graphy::Advanced {
class G_AdvancedData;
}
namespace Tayx::Graphy::Audio {
class G_AudioManager;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModuleState;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePreset;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePosition;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
// Forward declare root types
namespace Tayx::Graphy {
struct __GraphyManager__LookForAudioListener;
}
namespace Tayx::Graphy {
struct __GraphyManager__Mode;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePosition;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePreset;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModuleState;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModuleType;
}
namespace Tayx::Graphy {
class GraphyManager;
}
// Write type traits
MARK_VAL_T(::Tayx::Graphy::__GraphyManager__LookForAudioListener);
MARK_VAL_T(::Tayx::Graphy::__GraphyManager__Mode);
MARK_VAL_T(::Tayx::Graphy::__GraphyManager__ModulePosition);
MARK_VAL_T(::Tayx::Graphy::__GraphyManager__ModulePreset);
MARK_VAL_T(::Tayx::Graphy::__GraphyManager__ModuleState);
MARK_VAL_T(::Tayx::Graphy::__GraphyManager__ModuleType);
MARK_REF_PTR_T(::Tayx::Graphy::GraphyManager);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15062))
// CS Name: ::GraphyManager::Mode
struct CORDL_TYPE __GraphyManager__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyManager__Mode_Unwrapped
  enum struct ____GraphyManager__Mode_Unwrapped : int32_t {
    __E_FULL = static_cast<int32_t>(0x0),
    __E_LIGHT = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyManager__Mode_Unwrapped() const noexcept {
    return static_cast<____GraphyManager__Mode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__Mode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__Mode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FULL value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__Mode const FULL;

  /// @brief Field LIGHT value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__Mode const LIGHT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__Mode, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Type: ::ModuleType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15063))
// CS Name: ::GraphyManager::ModuleType
struct CORDL_TYPE __GraphyManager__ModuleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyManager__ModuleType_Unwrapped
  enum struct ____GraphyManager__ModuleType_Unwrapped : int32_t {
    __E_FPS = static_cast<int32_t>(0x0),
    __E_RAM = static_cast<int32_t>(0x1),
    __E_AUDIO = static_cast<int32_t>(0x2),
    __E_ADVANCED = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyManager__ModuleType_Unwrapped() const noexcept {
    return static_cast<____GraphyManager__ModuleType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__ModuleType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__ModuleType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FPS value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__ModuleType const FPS;

  /// @brief Field RAM value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__ModuleType const RAM;

  /// @brief Field AUDIO value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__ModuleType const AUDIO;

  /// @brief Field ADVANCED value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyManager__ModuleType const ADVANCED;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__ModuleType, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Type: ::ModuleState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15064))
// CS Name: ::GraphyManager::ModuleState
struct CORDL_TYPE __GraphyManager__ModuleState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyManager__ModuleState_Unwrapped
  enum struct ____GraphyManager__ModuleState_Unwrapped : int32_t {
    __E_FULL = static_cast<int32_t>(0x0),
    __E_TEXT = static_cast<int32_t>(0x1),
    __E_BASIC = static_cast<int32_t>(0x2),
    __E_BACKGROUND = static_cast<int32_t>(0x3),
    __E_OFF = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyManager__ModuleState_Unwrapped() const noexcept {
    return static_cast<____GraphyManager__ModuleState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__ModuleState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__ModuleState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FULL value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const FULL;

  /// @brief Field TEXT value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const TEXT;

  /// @brief Field BASIC value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const BASIC;

  /// @brief Field BACKGROUND value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const BACKGROUND;

  /// @brief Field OFF value: static_cast<int32_t>(0x4)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const OFF;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__ModuleState, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Type: ::ModulePosition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15065))
// CS Name: ::GraphyManager::ModulePosition
struct CORDL_TYPE __GraphyManager__ModulePosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyManager__ModulePosition_Unwrapped
  enum struct ____GraphyManager__ModulePosition_Unwrapped : int32_t {
    __E_TOP_RIGHT = static_cast<int32_t>(0x0),
    __E_TOP_LEFT = static_cast<int32_t>(0x1),
    __E_BOTTOM_RIGHT = static_cast<int32_t>(0x2),
    __E_BOTTOM_LEFT = static_cast<int32_t>(0x3),
    __E_FREE = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyManager__ModulePosition_Unwrapped() const noexcept {
    return static_cast<____GraphyManager__ModulePosition_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__ModulePosition(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__ModulePosition();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field TOP_RIGHT value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const TOP_RIGHT;

  /// @brief Field TOP_LEFT value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const TOP_LEFT;

  /// @brief Field BOTTOM_RIGHT value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const BOTTOM_RIGHT;

  /// @brief Field BOTTOM_LEFT value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const BOTTOM_LEFT;

  /// @brief Field FREE value: static_cast<int32_t>(0x4)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const FREE;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__ModulePosition, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Type: ::LookForAudioListener
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15066))
// CS Name: ::GraphyManager::LookForAudioListener
struct CORDL_TYPE __GraphyManager__LookForAudioListener {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyManager__LookForAudioListener_Unwrapped
  enum struct ____GraphyManager__LookForAudioListener_Unwrapped : int32_t {
    __E_ALWAYS = static_cast<int32_t>(0x0),
    __E_ON_SCENE_LOAD = static_cast<int32_t>(0x1),
    __E_NEVER = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyManager__LookForAudioListener_Unwrapped() const noexcept {
    return static_cast<____GraphyManager__LookForAudioListener_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__LookForAudioListener(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__LookForAudioListener();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ALWAYS value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__LookForAudioListener const ALWAYS;

  /// @brief Field ON_SCENE_LOAD value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__LookForAudioListener const ON_SCENE_LOAD;

  /// @brief Field NEVER value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__LookForAudioListener const NEVER;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__LookForAudioListener, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Type: ::ModulePreset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15067))
// CS Name: ::GraphyManager::ModulePreset
struct CORDL_TYPE __GraphyManager__ModulePreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphyManager__ModulePreset_Unwrapped
  enum struct ____GraphyManager__ModulePreset_Unwrapped : int32_t {
    __E_FPS_BASIC = static_cast<int32_t>(0x0),
    __E_FPS_TEXT = static_cast<int32_t>(0x1),
    __E_FPS_FULL = static_cast<int32_t>(0x2),
    __E_FPS_TEXT_RAM_TEXT = static_cast<int32_t>(0x3),
    __E_FPS_FULL_RAM_TEXT = static_cast<int32_t>(0x4),
    __E_FPS_FULL_RAM_FULL = static_cast<int32_t>(0x5),
    __E_FPS_TEXT_RAM_TEXT_AUDIO_TEXT = static_cast<int32_t>(0x6),
    __E_FPS_FULL_RAM_TEXT_AUDIO_TEXT = static_cast<int32_t>(0x7),
    __E_FPS_FULL_RAM_FULL_AUDIO_TEXT = static_cast<int32_t>(0x8),
    __E_FPS_FULL_RAM_FULL_AUDIO_FULL = static_cast<int32_t>(0x9),
    __E_FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL = static_cast<int32_t>(0xa),
    __E_FPS_BASIC_ADVANCED_FULL = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphyManager__ModulePreset_Unwrapped() const noexcept {
    return static_cast<____GraphyManager__ModulePreset_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__ModulePreset(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__ModulePreset();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FPS_BASIC value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_BASIC;

  /// @brief Field FPS_TEXT value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_TEXT;

  /// @brief Field FPS_FULL value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL;

  /// @brief Field FPS_TEXT_RAM_TEXT value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_TEXT_RAM_TEXT;

  /// @brief Field FPS_FULL_RAM_TEXT value: static_cast<int32_t>(0x4)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_TEXT;

  /// @brief Field FPS_FULL_RAM_FULL value: static_cast<int32_t>(0x5)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL;

  /// @brief Field FPS_TEXT_RAM_TEXT_AUDIO_TEXT value: static_cast<int32_t>(0x6)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_TEXT_RAM_TEXT_AUDIO_TEXT;

  /// @brief Field FPS_FULL_RAM_TEXT_AUDIO_TEXT value: static_cast<int32_t>(0x7)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_TEXT_AUDIO_TEXT;

  /// @brief Field FPS_FULL_RAM_FULL_AUDIO_TEXT value: static_cast<int32_t>(0x8)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_TEXT;

  /// @brief Field FPS_FULL_RAM_FULL_AUDIO_FULL value: static_cast<int32_t>(0x9)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_FULL;

  /// @brief Field FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL value: static_cast<int32_t>(0xa)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL;

  /// @brief Field FPS_BASIC_ADVANCED_FULL value: static_cast<int32_t>(0xb)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_BASIC_ADVANCED_FULL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__ModulePreset, 0x4>, "Size mismatch!");

} // namespace Tayx::Graphy
// Type: Tayx.Graphy::GraphyManager
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 324, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15071), inst: 2553 }), TypeDefinitionIndex(TypeDefinitionIndex(15062)),
// TypeDefinitionIndex(TypeDefinitionIndex(15588)), TypeDefinitionIndex(TypeDefinitionIndex(15071)), TypeDefinitionIndex(TypeDefinitionIndex(15065)), TypeDefinitionIndex(TypeDefinitionIndex(10251)),
// TypeDefinitionIndex(TypeDefinitionIndex(15066)), TypeDefinitionIndex(TypeDefinitionIndex(6242)), TypeDefinitionIndex(TypeDefinitionIndex(15067)), TypeDefinitionIndex(TypeDefinitionIndex(15064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15068))
// CS Name: ::Tayx.Graphy::GraphyManager*
class CORDL_TYPE GraphyManager : public ::Tayx::Graphy::Utils::G_Singleton_1<::Tayx::Graphy::GraphyManager*> {
public:
  // Declarations
  using ModulePreset = ::Tayx::Graphy::__GraphyManager__ModulePreset;

  using LookForAudioListener = ::Tayx::Graphy::__GraphyManager__LookForAudioListener;

  using ModulePosition = ::Tayx::Graphy::__GraphyManager__ModulePosition;

  using ModuleState = ::Tayx::Graphy::__GraphyManager__ModuleState;

  using ModuleType = ::Tayx::Graphy::__GraphyManager__ModuleType;

  using Mode = ::Tayx::Graphy::__GraphyManager__Mode;

  /// @brief Field m_graphyMode, offset 0x18, size 0x4
  __declspec(property(get = __get_m_graphyMode, put = __set_m_graphyMode))::Tayx::Graphy::__GraphyManager__Mode m_graphyMode;

  /// @brief Field m_enableOnStartup, offset 0x1c, size 0x1
  __declspec(property(get = __get_m_enableOnStartup, put = __set_m_enableOnStartup)) bool m_enableOnStartup;

  /// @brief Field m_keepAlive, offset 0x1d, size 0x1
  __declspec(property(get = __get_m_keepAlive, put = __set_m_keepAlive)) bool m_keepAlive;

  /// @brief Field m_background, offset 0x1e, size 0x1
  __declspec(property(get = __get_m_background, put = __set_m_background)) bool m_background;

  /// @brief Field m_backgroundColor, offset 0x20, size 0x10
  __declspec(property(get = __get_m_backgroundColor, put = __set_m_backgroundColor))::UnityEngine::Color m_backgroundColor;

  /// @brief Field m_enableHotkeys, offset 0x30, size 0x1
  __declspec(property(get = __get_m_enableHotkeys, put = __set_m_enableHotkeys)) bool m_enableHotkeys;

  /// @brief Field m_toggleModeKeyCode, offset 0x34, size 0x4
  __declspec(property(get = __get_m_toggleModeKeyCode, put = __set_m_toggleModeKeyCode))::UnityEngine::InputSystem::Key m_toggleModeKeyCode;

  /// @brief Field m_toggleModeCtrl, offset 0x38, size 0x1
  __declspec(property(get = __get_m_toggleModeCtrl, put = __set_m_toggleModeCtrl)) bool m_toggleModeCtrl;

  /// @brief Field m_toggleModeAlt, offset 0x39, size 0x1
  __declspec(property(get = __get_m_toggleModeAlt, put = __set_m_toggleModeAlt)) bool m_toggleModeAlt;

  /// @brief Field m_toggleActiveKeyCode, offset 0x3c, size 0x4
  __declspec(property(get = __get_m_toggleActiveKeyCode, put = __set_m_toggleActiveKeyCode))::UnityEngine::InputSystem::Key m_toggleActiveKeyCode;

  /// @brief Field m_toggleActiveCtrl, offset 0x40, size 0x1
  __declspec(property(get = __get_m_toggleActiveCtrl, put = __set_m_toggleActiveCtrl)) bool m_toggleActiveCtrl;

  /// @brief Field m_toggleActiveAlt, offset 0x41, size 0x1
  __declspec(property(get = __get_m_toggleActiveAlt, put = __set_m_toggleActiveAlt)) bool m_toggleActiveAlt;

  /// @brief Field m_graphModulePosition, offset 0x44, size 0x4
  __declspec(property(get = __get_m_graphModulePosition, put = __set_m_graphModulePosition))::Tayx::Graphy::__GraphyManager__ModulePosition m_graphModulePosition;

  /// @brief Field m_fpsModuleState, offset 0x48, size 0x4
  __declspec(property(get = __get_m_fpsModuleState, put = __set_m_fpsModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_fpsModuleState;

  /// @brief Field m_goodFpsColor, offset 0x4c, size 0x10
  __declspec(property(get = __get_m_goodFpsColor, put = __set_m_goodFpsColor))::UnityEngine::Color m_goodFpsColor;

  /// @brief Field m_goodFpsThreshold, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_goodFpsThreshold, put = __set_m_goodFpsThreshold)) int32_t m_goodFpsThreshold;

  /// @brief Field m_cautionFpsColor, offset 0x60, size 0x10
  __declspec(property(get = __get_m_cautionFpsColor, put = __set_m_cautionFpsColor))::UnityEngine::Color m_cautionFpsColor;

  /// @brief Field m_cautionFpsThreshold, offset 0x70, size 0x4
  __declspec(property(get = __get_m_cautionFpsThreshold, put = __set_m_cautionFpsThreshold)) int32_t m_cautionFpsThreshold;

  /// @brief Field m_criticalFpsColor, offset 0x74, size 0x10
  __declspec(property(get = __get_m_criticalFpsColor, put = __set_m_criticalFpsColor))::UnityEngine::Color m_criticalFpsColor;

  /// @brief Field m_fpsGraphResolution, offset 0x84, size 0x4
  __declspec(property(get = __get_m_fpsGraphResolution, put = __set_m_fpsGraphResolution)) int32_t m_fpsGraphResolution;

  /// @brief Field m_fpsTextUpdateRate, offset 0x88, size 0x4
  __declspec(property(get = __get_m_fpsTextUpdateRate, put = __set_m_fpsTextUpdateRate)) int32_t m_fpsTextUpdateRate;

  /// @brief Field m_ramModuleState, offset 0x8c, size 0x4
  __declspec(property(get = __get_m_ramModuleState, put = __set_m_ramModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_ramModuleState;

  /// @brief Field m_allocatedRamColor, offset 0x90, size 0x10
  __declspec(property(get = __get_m_allocatedRamColor, put = __set_m_allocatedRamColor))::UnityEngine::Color m_allocatedRamColor;

  /// @brief Field m_reservedRamColor, offset 0xa0, size 0x10
  __declspec(property(get = __get_m_reservedRamColor, put = __set_m_reservedRamColor))::UnityEngine::Color m_reservedRamColor;

  /// @brief Field m_monoRamColor, offset 0xb0, size 0x10
  __declspec(property(get = __get_m_monoRamColor, put = __set_m_monoRamColor))::UnityEngine::Color m_monoRamColor;

  /// @brief Field m_ramGraphResolution, offset 0xc0, size 0x4
  __declspec(property(get = __get_m_ramGraphResolution, put = __set_m_ramGraphResolution)) int32_t m_ramGraphResolution;

  /// @brief Field m_ramTextUpdateRate, offset 0xc4, size 0x4
  __declspec(property(get = __get_m_ramTextUpdateRate, put = __set_m_ramTextUpdateRate)) int32_t m_ramTextUpdateRate;

  /// @brief Field m_audioModuleState, offset 0xc8, size 0x4
  __declspec(property(get = __get_m_audioModuleState, put = __set_m_audioModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_audioModuleState;

  /// @brief Field m_findAudioListenerInCameraIfNull, offset 0xcc, size 0x4
  __declspec(property(get = __get_m_findAudioListenerInCameraIfNull,
                      put = __set_m_findAudioListenerInCameraIfNull))::Tayx::Graphy::__GraphyManager__LookForAudioListener m_findAudioListenerInCameraIfNull;

  /// @brief Field m_audioListener, offset 0xd0, size 0x8
  __declspec(property(get = __get_m_audioListener, put = __set_m_audioListener))::UnityEngine::AudioListener* m_audioListener;

  /// @brief Field m_audioGraphColor, offset 0xd8, size 0x10
  __declspec(property(get = __get_m_audioGraphColor, put = __set_m_audioGraphColor))::UnityEngine::Color m_audioGraphColor;

  /// @brief Field m_audioGraphResolution, offset 0xe8, size 0x4
  __declspec(property(get = __get_m_audioGraphResolution, put = __set_m_audioGraphResolution)) int32_t m_audioGraphResolution;

  /// @brief Field m_audioTextUpdateRate, offset 0xec, size 0x4
  __declspec(property(get = __get_m_audioTextUpdateRate, put = __set_m_audioTextUpdateRate)) int32_t m_audioTextUpdateRate;

  /// @brief Field m_FFTWindow, offset 0xf0, size 0x4
  __declspec(property(get = __get_m_FFTWindow, put = __set_m_FFTWindow))::UnityEngine::FFTWindow m_FFTWindow;

  /// @brief Field m_spectrumSize, offset 0xf4, size 0x4
  __declspec(property(get = __get_m_spectrumSize, put = __set_m_spectrumSize)) int32_t m_spectrumSize;

  /// @brief Field m_advancedModulePosition, offset 0xf8, size 0x4
  __declspec(property(get = __get_m_advancedModulePosition, put = __set_m_advancedModulePosition))::Tayx::Graphy::__GraphyManager__ModulePosition m_advancedModulePosition;

  /// @brief Field m_advancedModuleState, offset 0xfc, size 0x4
  __declspec(property(get = __get_m_advancedModuleState, put = __set_m_advancedModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_advancedModuleState;

  /// @brief Field m_initialized, offset 0x100, size 0x1
  __declspec(property(get = __get_m_initialized, put = __set_m_initialized)) bool m_initialized;

  /// @brief Field m_active, offset 0x101, size 0x1
  __declspec(property(get = __get_m_active, put = __set_m_active)) bool m_active;

  /// @brief Field m_focused, offset 0x102, size 0x1
  __declspec(property(get = __get_m_focused, put = __set_m_focused)) bool m_focused;

  /// @brief Field m_fpsManager, offset 0x108, size 0x8
  __declspec(property(get = __get_m_fpsManager, put = __set_m_fpsManager))::Tayx::Graphy::Fps::G_FpsManager* m_fpsManager;

  /// @brief Field m_ramManager, offset 0x110, size 0x8
  __declspec(property(get = __get_m_ramManager, put = __set_m_ramManager))::Tayx::Graphy::Ram::G_RamManager* m_ramManager;

  /// @brief Field m_audioManager, offset 0x118, size 0x8
  __declspec(property(get = __get_m_audioManager, put = __set_m_audioManager))::Tayx::Graphy::Audio::G_AudioManager* m_audioManager;

  /// @brief Field m_advancedData, offset 0x120, size 0x8
  __declspec(property(get = __get_m_advancedData, put = __set_m_advancedData))::Tayx::Graphy::Advanced::G_AdvancedData* m_advancedData;

  /// @brief Field m_fpsMonitor, offset 0x128, size 0x8
  __declspec(property(get = __get_m_fpsMonitor, put = __set_m_fpsMonitor))::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;

  /// @brief Field m_ramMonitor, offset 0x130, size 0x8
  __declspec(property(get = __get_m_ramMonitor, put = __set_m_ramMonitor))::Tayx::Graphy::Ram::G_RamMonitor* m_ramMonitor;

  /// @brief Field m_audioMonitor, offset 0x138, size 0x8
  __declspec(property(get = __get_m_audioMonitor, put = __set_m_audioMonitor))::Tayx::Graphy::Audio::G_AudioMonitor* m_audioMonitor;

  /// @brief Field m_modulePresetState, offset 0x140, size 0x4
  __declspec(property(get = __get_m_modulePresetState, put = __set_m_modulePresetState))::Tayx::Graphy::__GraphyManager__ModulePreset m_modulePresetState;

  __declspec(property(get = get_GraphyMode, put = set_GraphyMode))::Tayx::Graphy::__GraphyManager__Mode GraphyMode;

  __declspec(property(get = get_EnableOnStartup)) bool EnableOnStartup;

  __declspec(property(get = get_KeepAlive)) bool KeepAlive;

  __declspec(property(get = get_Background, put = set_Background)) bool Background;

  __declspec(property(get = get_BackgroundColor, put = set_BackgroundColor))::UnityEngine::Color BackgroundColor;

  __declspec(property(get = get_GraphModulePosition, put = set_GraphModulePosition))::Tayx::Graphy::__GraphyManager__ModulePosition GraphModulePosition;

  __declspec(property(get = get_FpsModuleState, put = set_FpsModuleState))::Tayx::Graphy::__GraphyManager__ModuleState FpsModuleState;

  __declspec(property(get = get_GoodFPSColor, put = set_GoodFPSColor))::UnityEngine::Color GoodFPSColor;

  __declspec(property(get = get_CautionFPSColor, put = set_CautionFPSColor))::UnityEngine::Color CautionFPSColor;

  __declspec(property(get = get_CriticalFPSColor, put = set_CriticalFPSColor))::UnityEngine::Color CriticalFPSColor;

  __declspec(property(get = get_GoodFPSThreshold, put = set_GoodFPSThreshold)) int32_t GoodFPSThreshold;

  __declspec(property(get = get_CautionFPSThreshold, put = set_CautionFPSThreshold)) int32_t CautionFPSThreshold;

  __declspec(property(get = get_FpsGraphResolution, put = set_FpsGraphResolution)) int32_t FpsGraphResolution;

  __declspec(property(get = get_FpsTextUpdateRate, put = set_FpsTextUpdateRate)) int32_t FpsTextUpdateRate;

  __declspec(property(get = get_CurrentFPS)) float_t CurrentFPS;

  __declspec(property(get = get_AverageFPS)) float_t AverageFPS;

  __declspec(property(get = get_MinFPS)) float_t MinFPS;

  __declspec(property(get = get_MaxFPS)) float_t MaxFPS;

  __declspec(property(get = get_RamModuleState, put = set_RamModuleState))::Tayx::Graphy::__GraphyManager__ModuleState RamModuleState;

  __declspec(property(get = get_AllocatedRamColor, put = set_AllocatedRamColor))::UnityEngine::Color AllocatedRamColor;

  __declspec(property(get = get_ReservedRamColor, put = set_ReservedRamColor))::UnityEngine::Color ReservedRamColor;

  __declspec(property(get = get_MonoRamColor, put = set_MonoRamColor))::UnityEngine::Color MonoRamColor;

  __declspec(property(get = get_RamGraphResolution, put = set_RamGraphResolution)) int32_t RamGraphResolution;

  __declspec(property(get = get_RamTextUpdateRate, put = set_RamTextUpdateRate)) int32_t RamTextUpdateRate;

  __declspec(property(get = get_AllocatedRam)) float_t AllocatedRam;

  __declspec(property(get = get_ReservedRam)) float_t ReservedRam;

  __declspec(property(get = get_MonoRam)) float_t MonoRam;

  __declspec(property(get = get_AudioModuleState, put = set_AudioModuleState))::Tayx::Graphy::__GraphyManager__ModuleState AudioModuleState;

  __declspec(property(get = get_AudioListener, put = set_AudioListener))::UnityEngine::AudioListener* AudioListener;

  __declspec(property(get = get_FindAudioListenerInCameraIfNull, put = set_FindAudioListenerInCameraIfNull))::Tayx::Graphy::__GraphyManager__LookForAudioListener FindAudioListenerInCameraIfNull;

  __declspec(property(get = get_AudioGraphColor, put = set_AudioGraphColor))::UnityEngine::Color AudioGraphColor;

  __declspec(property(get = get_AudioGraphResolution, put = set_AudioGraphResolution)) int32_t AudioGraphResolution;

  __declspec(property(get = get_AudioTextUpdateRate, put = set_AudioTextUpdateRate)) int32_t AudioTextUpdateRate;

  __declspec(property(get = get_FftWindow, put = set_FftWindow))::UnityEngine::FFTWindow FftWindow;

  __declspec(property(get = get_SpectrumSize, put = set_SpectrumSize)) int32_t SpectrumSize;

  __declspec(property(get = get_Spectrum))::ArrayW<float_t, ::Array<float_t>*> Spectrum;

  __declspec(property(get = get_MaxDB)) float_t MaxDB;

  __declspec(property(get = get_AdvancedModuleState, put = set_AdvancedModuleState))::Tayx::Graphy::__GraphyManager__ModuleState AdvancedModuleState;

  __declspec(property(get = get_AdvancedModulePosition, put = set_AdvancedModulePosition))::Tayx::Graphy::__GraphyManager__ModulePosition AdvancedModulePosition;

  constexpr ::Tayx::Graphy::__GraphyManager__Mode& __get_m_graphyMode();

  constexpr ::Tayx::Graphy::__GraphyManager__Mode const& __get_m_graphyMode() const;

  constexpr void __set_m_graphyMode(::Tayx::Graphy::__GraphyManager__Mode value);

  constexpr bool& __get_m_enableOnStartup();

  constexpr bool const& __get_m_enableOnStartup() const;

  constexpr void __set_m_enableOnStartup(bool value);

  constexpr bool& __get_m_keepAlive();

  constexpr bool const& __get_m_keepAlive() const;

  constexpr void __set_m_keepAlive(bool value);

  constexpr bool& __get_m_background();

  constexpr bool const& __get_m_background() const;

  constexpr void __set_m_background(bool value);

  constexpr ::UnityEngine::Color& __get_m_backgroundColor();

  constexpr ::UnityEngine::Color const& __get_m_backgroundColor() const;

  constexpr void __set_m_backgroundColor(::UnityEngine::Color value);

  constexpr bool& __get_m_enableHotkeys();

  constexpr bool const& __get_m_enableHotkeys() const;

  constexpr void __set_m_enableHotkeys(bool value);

  constexpr ::UnityEngine::InputSystem::Key& __get_m_toggleModeKeyCode();

  constexpr ::UnityEngine::InputSystem::Key const& __get_m_toggleModeKeyCode() const;

  constexpr void __set_m_toggleModeKeyCode(::UnityEngine::InputSystem::Key value);

  constexpr bool& __get_m_toggleModeCtrl();

  constexpr bool const& __get_m_toggleModeCtrl() const;

  constexpr void __set_m_toggleModeCtrl(bool value);

  constexpr bool& __get_m_toggleModeAlt();

  constexpr bool const& __get_m_toggleModeAlt() const;

  constexpr void __set_m_toggleModeAlt(bool value);

  constexpr ::UnityEngine::InputSystem::Key& __get_m_toggleActiveKeyCode();

  constexpr ::UnityEngine::InputSystem::Key const& __get_m_toggleActiveKeyCode() const;

  constexpr void __set_m_toggleActiveKeyCode(::UnityEngine::InputSystem::Key value);

  constexpr bool& __get_m_toggleActiveCtrl();

  constexpr bool const& __get_m_toggleActiveCtrl() const;

  constexpr void __set_m_toggleActiveCtrl(bool value);

  constexpr bool& __get_m_toggleActiveAlt();

  constexpr bool const& __get_m_toggleActiveAlt() const;

  constexpr void __set_m_toggleActiveAlt(bool value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition& __get_m_graphModulePosition();

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition const& __get_m_graphModulePosition() const;

  constexpr void __set_m_graphModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_fpsModuleState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_fpsModuleState() const;

  constexpr void __set_m_fpsModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr ::UnityEngine::Color& __get_m_goodFpsColor();

  constexpr ::UnityEngine::Color const& __get_m_goodFpsColor() const;

  constexpr void __set_m_goodFpsColor(::UnityEngine::Color value);

  constexpr int32_t& __get_m_goodFpsThreshold();

  constexpr int32_t const& __get_m_goodFpsThreshold() const;

  constexpr void __set_m_goodFpsThreshold(int32_t value);

  constexpr ::UnityEngine::Color& __get_m_cautionFpsColor();

  constexpr ::UnityEngine::Color const& __get_m_cautionFpsColor() const;

  constexpr void __set_m_cautionFpsColor(::UnityEngine::Color value);

  constexpr int32_t& __get_m_cautionFpsThreshold();

  constexpr int32_t const& __get_m_cautionFpsThreshold() const;

  constexpr void __set_m_cautionFpsThreshold(int32_t value);

  constexpr ::UnityEngine::Color& __get_m_criticalFpsColor();

  constexpr ::UnityEngine::Color const& __get_m_criticalFpsColor() const;

  constexpr void __set_m_criticalFpsColor(::UnityEngine::Color value);

  constexpr int32_t& __get_m_fpsGraphResolution();

  constexpr int32_t const& __get_m_fpsGraphResolution() const;

  constexpr void __set_m_fpsGraphResolution(int32_t value);

  constexpr int32_t& __get_m_fpsTextUpdateRate();

  constexpr int32_t const& __get_m_fpsTextUpdateRate() const;

  constexpr void __set_m_fpsTextUpdateRate(int32_t value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_ramModuleState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_ramModuleState() const;

  constexpr void __set_m_ramModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr ::UnityEngine::Color& __get_m_allocatedRamColor();

  constexpr ::UnityEngine::Color const& __get_m_allocatedRamColor() const;

  constexpr void __set_m_allocatedRamColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_m_reservedRamColor();

  constexpr ::UnityEngine::Color const& __get_m_reservedRamColor() const;

  constexpr void __set_m_reservedRamColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_m_monoRamColor();

  constexpr ::UnityEngine::Color const& __get_m_monoRamColor() const;

  constexpr void __set_m_monoRamColor(::UnityEngine::Color value);

  constexpr int32_t& __get_m_ramGraphResolution();

  constexpr int32_t const& __get_m_ramGraphResolution() const;

  constexpr void __set_m_ramGraphResolution(int32_t value);

  constexpr int32_t& __get_m_ramTextUpdateRate();

  constexpr int32_t const& __get_m_ramTextUpdateRate() const;

  constexpr void __set_m_ramTextUpdateRate(int32_t value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_audioModuleState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_audioModuleState() const;

  constexpr void __set_m_audioModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener& __get_m_findAudioListenerInCameraIfNull();

  constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener const& __get_m_findAudioListenerInCameraIfNull() const;

  constexpr void __set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener value);

  constexpr ::UnityEngine::AudioListener*& __get_m_audioListener();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioListener*> const& __get_m_audioListener() const;

  constexpr void __set_m_audioListener(::UnityEngine::AudioListener* value);

  constexpr ::UnityEngine::Color& __get_m_audioGraphColor();

  constexpr ::UnityEngine::Color const& __get_m_audioGraphColor() const;

  constexpr void __set_m_audioGraphColor(::UnityEngine::Color value);

  constexpr int32_t& __get_m_audioGraphResolution();

  constexpr int32_t const& __get_m_audioGraphResolution() const;

  constexpr void __set_m_audioGraphResolution(int32_t value);

  constexpr int32_t& __get_m_audioTextUpdateRate();

  constexpr int32_t const& __get_m_audioTextUpdateRate() const;

  constexpr void __set_m_audioTextUpdateRate(int32_t value);

  constexpr ::UnityEngine::FFTWindow& __get_m_FFTWindow();

  constexpr ::UnityEngine::FFTWindow const& __get_m_FFTWindow() const;

  constexpr void __set_m_FFTWindow(::UnityEngine::FFTWindow value);

  constexpr int32_t& __get_m_spectrumSize();

  constexpr int32_t const& __get_m_spectrumSize() const;

  constexpr void __set_m_spectrumSize(int32_t value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition& __get_m_advancedModulePosition();

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition const& __get_m_advancedModulePosition() const;

  constexpr void __set_m_advancedModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_advancedModuleState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_advancedModuleState() const;

  constexpr void __set_m_advancedModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr bool& __get_m_initialized();

  constexpr bool const& __get_m_initialized() const;

  constexpr void __set_m_initialized(bool value);

  constexpr bool& __get_m_active();

  constexpr bool const& __get_m_active() const;

  constexpr void __set_m_active(bool value);

  constexpr bool& __get_m_focused();

  constexpr bool const& __get_m_focused() const;

  constexpr void __set_m_focused(bool value);

  constexpr ::Tayx::Graphy::Fps::G_FpsManager*& __get_m_fpsManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsManager*> const& __get_m_fpsManager() const;

  constexpr void __set_m_fpsManager(::Tayx::Graphy::Fps::G_FpsManager* value);

  constexpr ::Tayx::Graphy::Ram::G_RamManager*& __get_m_ramManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamManager*> const& __get_m_ramManager() const;

  constexpr void __set_m_ramManager(::Tayx::Graphy::Ram::G_RamManager* value);

  constexpr ::Tayx::Graphy::Audio::G_AudioManager*& __get_m_audioManager();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioManager*> const& __get_m_audioManager() const;

  constexpr void __set_m_audioManager(::Tayx::Graphy::Audio::G_AudioManager* value);

  constexpr ::Tayx::Graphy::Advanced::G_AdvancedData*& __get_m_advancedData();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Advanced::G_AdvancedData*> const& __get_m_advancedData() const;

  constexpr void __set_m_advancedData(::Tayx::Graphy::Advanced::G_AdvancedData* value);

  constexpr ::Tayx::Graphy::Fps::G_FpsMonitor*& __get_m_fpsMonitor();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsMonitor*> const& __get_m_fpsMonitor() const;

  constexpr void __set_m_fpsMonitor(::Tayx::Graphy::Fps::G_FpsMonitor* value);

  constexpr ::Tayx::Graphy::Ram::G_RamMonitor*& __get_m_ramMonitor();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamMonitor*> const& __get_m_ramMonitor() const;

  constexpr void __set_m_ramMonitor(::Tayx::Graphy::Ram::G_RamMonitor* value);

  constexpr ::Tayx::Graphy::Audio::G_AudioMonitor*& __get_m_audioMonitor();

  constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioMonitor*> const& __get_m_audioMonitor() const;

  constexpr void __set_m_audioMonitor(::Tayx::Graphy::Audio::G_AudioMonitor* value);

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset& __get_m_modulePresetState();

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset const& __get_m_modulePresetState() const;

  constexpr void __set_m_modulePresetState(::Tayx::Graphy::__GraphyManager__ModulePreset value);

  static inline ::Tayx::Graphy::GraphyManager* New_ctor();

  /// @brief Method .ctor addr 0x2a006c4 size 0x134 virtual false final false
  inline void _ctor();

  /// @brief Method get_GraphyMode addr 0x2a007f8 size 0x8 virtual false final false
  inline ::Tayx::Graphy::__GraphyManager__Mode get_GraphyMode();

  /// @brief Method set_GraphyMode addr 0x2a00800 size 0x8 virtual false final false
  inline void set_GraphyMode(::Tayx::Graphy::__GraphyManager__Mode value);

  /// @brief Method get_EnableOnStartup addr 0x2a00848 size 0x8 virtual false final false
  inline bool get_EnableOnStartup();

  /// @brief Method get_KeepAlive addr 0x2a00850 size 0x8 virtual false final false
  inline bool get_KeepAlive();

  /// @brief Method get_Background addr 0x2a00858 size 0x8 virtual false final false
  inline bool get_Background();

  /// @brief Method set_Background addr 0x2a00860 size 0xc virtual false final false
  inline void set_Background(bool value);

  /// @brief Method get_BackgroundColor addr 0x2a0086c size 0xc virtual false final false
  inline ::UnityEngine::Color get_BackgroundColor();

  /// @brief Method set_BackgroundColor addr 0x2a00878 size 0xc virtual false final false
  inline void set_BackgroundColor(::UnityEngine::Color value);

  /// @brief Method get_GraphModulePosition addr 0x2a00884 size 0x8 virtual false final false
  inline ::Tayx::Graphy::__GraphyManager__ModulePosition get_GraphModulePosition();

  /// @brief Method set_GraphModulePosition addr 0x2a0088c size 0x40 virtual false final false
  inline void set_GraphModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value);

  /// @brief Method get_FpsModuleState addr 0x2a0119c size 0x8 virtual false final false
  inline ::Tayx::Graphy::__GraphyManager__ModuleState get_FpsModuleState();

  /// @brief Method set_FpsModuleState addr 0x2a011a4 size 0x24 virtual false final false
  inline void set_FpsModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method get_GoodFPSColor addr 0x2a01378 size 0xc virtual false final false
  inline ::UnityEngine::Color get_GoodFPSColor();

  /// @brief Method set_GoodFPSColor addr 0x2a01384 size 0x24 virtual false final false
  inline void set_GoodFPSColor(::UnityEngine::Color value);

  /// @brief Method get_CautionFPSColor addr 0x2a015a4 size 0xc virtual false final false
  inline ::UnityEngine::Color get_CautionFPSColor();

  /// @brief Method set_CautionFPSColor addr 0x2a015b0 size 0x24 virtual false final false
  inline void set_CautionFPSColor(::UnityEngine::Color value);

  /// @brief Method get_CriticalFPSColor addr 0x2a015d4 size 0xc virtual false final false
  inline ::UnityEngine::Color get_CriticalFPSColor();

  /// @brief Method set_CriticalFPSColor addr 0x2a015e0 size 0x24 virtual false final false
  inline void set_CriticalFPSColor(::UnityEngine::Color value);

  /// @brief Method get_GoodFPSThreshold addr 0x2a01604 size 0x8 virtual false final false
  inline int32_t get_GoodFPSThreshold();

  /// @brief Method set_GoodFPSThreshold addr 0x2a0160c size 0x20 virtual false final false
  inline void set_GoodFPSThreshold(int32_t value);

  /// @brief Method get_CautionFPSThreshold addr 0x2a0162c size 0x8 virtual false final false
  inline int32_t get_CautionFPSThreshold();

  /// @brief Method set_CautionFPSThreshold addr 0x2a01634 size 0x20 virtual false final false
  inline void set_CautionFPSThreshold(int32_t value);

  /// @brief Method get_FpsGraphResolution addr 0x2a01654 size 0x8 virtual false final false
  inline int32_t get_FpsGraphResolution();

  /// @brief Method set_FpsGraphResolution addr 0x2a0165c size 0x20 virtual false final false
  inline void set_FpsGraphResolution(int32_t value);

  /// @brief Method get_FpsTextUpdateRate addr 0x2a0167c size 0x8 virtual false final false
  inline int32_t get_FpsTextUpdateRate();

  /// @brief Method set_FpsTextUpdateRate addr 0x2a01684 size 0x20 virtual false final false
  inline void set_FpsTextUpdateRate(int32_t value);

  /// @brief Method get_CurrentFPS addr 0x2a016a4 size 0x20 virtual false final false
  inline float_t get_CurrentFPS();

  /// @brief Method get_AverageFPS addr 0x2a016c4 size 0x20 virtual false final false
  inline float_t get_AverageFPS();

  /// @brief Method get_MinFPS addr 0x2a016e4 size 0x20 virtual false final false
  inline float_t get_MinFPS();

  /// @brief Method get_MaxFPS addr 0x2a01704 size 0x20 virtual false final false
  inline float_t get_MaxFPS();

  /// @brief Method get_RamModuleState addr 0x2a01724 size 0x8 virtual false final false
  inline ::Tayx::Graphy::__GraphyManager__ModuleState get_RamModuleState();

  /// @brief Method set_RamModuleState addr 0x2a0172c size 0x24 virtual false final false
  inline void set_RamModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method get_AllocatedRamColor addr 0x2a018a0 size 0xc virtual false final false
  inline ::UnityEngine::Color get_AllocatedRamColor();

  /// @brief Method set_AllocatedRamColor addr 0x2a018ac size 0x24 virtual false final false
  inline void set_AllocatedRamColor(::UnityEngine::Color value);

  /// @brief Method get_ReservedRamColor addr 0x2a01a7c size 0xc virtual false final false
  inline ::UnityEngine::Color get_ReservedRamColor();

  /// @brief Method set_ReservedRamColor addr 0x2a01a88 size 0x24 virtual false final false
  inline void set_ReservedRamColor(::UnityEngine::Color value);

  /// @brief Method get_MonoRamColor addr 0x2a01aac size 0xc virtual false final false
  inline ::UnityEngine::Color get_MonoRamColor();

  /// @brief Method set_MonoRamColor addr 0x2a01ab8 size 0x24 virtual false final false
  inline void set_MonoRamColor(::UnityEngine::Color value);

  /// @brief Method get_RamGraphResolution addr 0x2a01adc size 0x8 virtual false final false
  inline int32_t get_RamGraphResolution();

  /// @brief Method set_RamGraphResolution addr 0x2a01ae4 size 0x20 virtual false final false
  inline void set_RamGraphResolution(int32_t value);

  /// @brief Method get_RamTextUpdateRate addr 0x2a01b04 size 0x8 virtual false final false
  inline int32_t get_RamTextUpdateRate();

  /// @brief Method set_RamTextUpdateRate addr 0x2a01b0c size 0x20 virtual false final false
  inline void set_RamTextUpdateRate(int32_t value);

  /// @brief Method get_AllocatedRam addr 0x2a01b2c size 0x1c virtual false final false
  inline float_t get_AllocatedRam();

  /// @brief Method get_ReservedRam addr 0x2a01b48 size 0x1c virtual false final false
  inline float_t get_ReservedRam();

  /// @brief Method get_MonoRam addr 0x2a01b64 size 0x1c virtual false final false
  inline float_t get_MonoRam();

  /// @brief Method get_AudioModuleState addr 0x2a01b80 size 0x8 virtual false final false
  inline ::Tayx::Graphy::__GraphyManager__ModuleState get_AudioModuleState();

  /// @brief Method set_AudioModuleState addr 0x2a01b88 size 0x24 virtual false final false
  inline void set_AudioModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method get_AudioListener addr 0x2a01cfc size 0x8 virtual false final false
  inline ::UnityEngine::AudioListener* get_AudioListener();

  /// @brief Method set_AudioListener addr 0x2a01d04 size 0x20 virtual false final false
  inline void set_AudioListener(::UnityEngine::AudioListener* value);

  /// @brief Method get_FindAudioListenerInCameraIfNull addr 0x2a01ee8 size 0x8 virtual false final false
  inline ::Tayx::Graphy::__GraphyManager__LookForAudioListener get_FindAudioListenerInCameraIfNull();

  /// @brief Method set_FindAudioListenerInCameraIfNull addr 0x2a01ef0 size 0x20 virtual false final false
  inline void set_FindAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener value);

  /// @brief Method get_AudioGraphColor addr 0x2a01f10 size 0xc virtual false final false
  inline ::UnityEngine::Color get_AudioGraphColor();

  /// @brief Method set_AudioGraphColor addr 0x2a01f1c size 0x24 virtual false final false
  inline void set_AudioGraphColor(::UnityEngine::Color value);

  /// @brief Method get_AudioGraphResolution addr 0x2a01f40 size 0x8 virtual false final false
  inline int32_t get_AudioGraphResolution();

  /// @brief Method set_AudioGraphResolution addr 0x2a01f48 size 0x20 virtual false final false
  inline void set_AudioGraphResolution(int32_t value);

  /// @brief Method get_AudioTextUpdateRate addr 0x2a01f68 size 0x8 virtual false final false
  inline int32_t get_AudioTextUpdateRate();

  /// @brief Method set_AudioTextUpdateRate addr 0x2a01f70 size 0x20 virtual false final false
  inline void set_AudioTextUpdateRate(int32_t value);

  /// @brief Method get_FftWindow addr 0x2a01f90 size 0x8 virtual false final false
  inline ::UnityEngine::FFTWindow get_FftWindow();

  /// @brief Method set_FftWindow addr 0x2a01f98 size 0x20 virtual false final false
  inline void set_FftWindow(::UnityEngine::FFTWindow value);

  /// @brief Method get_SpectrumSize addr 0x2a01fb8 size 0x8 virtual false final false
  inline int32_t get_SpectrumSize();

  /// @brief Method set_SpectrumSize addr 0x2a01fc0 size 0x20 virtual false final false
  inline void set_SpectrumSize(int32_t value);

  /// @brief Method get_Spectrum addr 0x2a01fe0 size 0x1c virtual false final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_Spectrum();

  /// @brief Method get_MaxDB addr 0x2a01ffc size 0x1c virtual false final false
  inline float_t get_MaxDB();

  /// @brief Method get_AdvancedModuleState addr 0x2a02018 size 0x8 virtual false final false
  inline ::Tayx::Graphy::__GraphyManager__ModuleState get_AdvancedModuleState();

  /// @brief Method set_AdvancedModuleState addr 0x2a02020 size 0x24 virtual false final false
  inline void set_AdvancedModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method get_AdvancedModulePosition addr 0x2a020bc size 0x8 virtual false final false
  inline ::Tayx::Graphy::__GraphyManager__ModulePosition get_AdvancedModulePosition();

  /// @brief Method set_AdvancedModulePosition addr 0x2a020c4 size 0x20 virtual false final false
  inline void set_AdvancedModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value);

  /// @brief Method Start addr 0x2a02744 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2a02cd8 size 0x74 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x2a02e7c size 0x18 virtual false final false
  inline void Update();

  /// @brief Method OnApplicationFocus addr 0x2a02ffc size 0x1c virtual false final false
  inline void OnApplicationFocus(bool isFocused);

  /// @brief Method SetModulePosition addr 0x2a03058 size 0x80 virtual false final false
  inline void SetModulePosition(::Tayx::Graphy::__GraphyManager__ModuleType moduleType, ::Tayx::Graphy::__GraphyManager__ModulePosition modulePosition);

  /// @brief Method SetModuleMode addr 0x2a030d8 size 0x94 virtual false final false
  inline void SetModuleMode(::Tayx::Graphy::__GraphyManager__ModuleType moduleType, ::Tayx::Graphy::__GraphyManager__ModuleState moduleState);

  /// @brief Method ToggleModes addr 0x2a0316c size 0xe8 virtual false final false
  inline void ToggleModes();

  /// @brief Method SetPreset addr 0x2a03254 size 0x294 virtual false final false
  inline void SetPreset(::Tayx::Graphy::__GraphyManager__ModulePreset modulePreset);

  /// @brief Method ToggleActive addr 0x2a034e8 size 0x10 virtual false final false
  inline void ToggleActive();

  /// @brief Method Enable addr 0x2a034f8 size 0x88 virtual false final false
  inline void Enable();

  /// @brief Method Disable addr 0x2a03580 size 0x70 virtual false final false
  inline void Disable();

  /// @brief Method Init addr 0x2a02748 size 0x590 virtual false final false
  inline void Init();

  /// @brief Method CheckForHotkeyPresses addr 0x2a02e94 size 0x168 virtual false final false
  inline void CheckForHotkeyPresses();

  /// @brief Method CheckFor1KeyPress addr 0x2a05960 size 0x74 virtual false final false
  inline bool CheckFor1KeyPress(::UnityEngine::InputSystem::Key key);

  /// @brief Method CheckFor2KeyPress addr 0x2a057f8 size 0x168 virtual false final false
  inline bool CheckFor2KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2);

  /// @brief Method CheckFor3KeyPress addr 0x2a05524 size 0x2d4 virtual false final false
  inline bool CheckFor3KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2, ::UnityEngine::InputSystem::Key key3);

  /// @brief Method UpdateAllParameters addr 0x2a00808 size 0x40 virtual false final false
  inline void UpdateAllParameters();

  /// @brief Method RefreshAllParameters addr 0x2a03018 size 0x40 virtual false final false
  inline void RefreshAllParameters();

  // Ctor Parameters [CppParam { name: "", ty: "GraphyManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyManager(GraphyManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyManager(GraphyManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyManager();

public:
  /// @brief Field m_graphyMode, offset: 0x18, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__Mode ___m_graphyMode;

  /// @brief Field m_enableOnStartup, offset: 0x1c, size: 0x1, def value: None
  bool ___m_enableOnStartup;

  /// @brief Field m_keepAlive, offset: 0x1d, size: 0x1, def value: None
  bool ___m_keepAlive;

  /// @brief Field m_background, offset: 0x1e, size: 0x1, def value: None
  bool ___m_background;

  /// @brief Field m_backgroundColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___m_backgroundColor;

  /// @brief Field m_enableHotkeys, offset: 0x30, size: 0x1, def value: None
  bool ___m_enableHotkeys;

  /// @brief Field m_toggleModeKeyCode, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Key ___m_toggleModeKeyCode;

  /// @brief Field m_toggleModeCtrl, offset: 0x38, size: 0x1, def value: None
  bool ___m_toggleModeCtrl;

  /// @brief Field m_toggleModeAlt, offset: 0x39, size: 0x1, def value: None
  bool ___m_toggleModeAlt;

  /// @brief Field m_toggleActiveKeyCode, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Key ___m_toggleActiveKeyCode;

  /// @brief Field m_toggleActiveCtrl, offset: 0x40, size: 0x1, def value: None
  bool ___m_toggleActiveCtrl;

  /// @brief Field m_toggleActiveAlt, offset: 0x41, size: 0x1, def value: None
  bool ___m_toggleActiveAlt;

  /// @brief Field m_graphModulePosition, offset: 0x44, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModulePosition ___m_graphModulePosition;

  /// @brief Field m_fpsModuleState, offset: 0x48, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_fpsModuleState;

  /// @brief Field m_goodFpsColor, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Color ___m_goodFpsColor;

  /// @brief Field m_goodFpsThreshold, offset: 0x5c, size: 0x4, def value: None
  int32_t ___m_goodFpsThreshold;

  /// @brief Field m_cautionFpsColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ___m_cautionFpsColor;

  /// @brief Field m_cautionFpsThreshold, offset: 0x70, size: 0x4, def value: None
  int32_t ___m_cautionFpsThreshold;

  /// @brief Field m_criticalFpsColor, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Color ___m_criticalFpsColor;

  /// @brief Field m_fpsGraphResolution, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_fpsGraphResolution;

  /// @brief Field m_fpsTextUpdateRate, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_fpsTextUpdateRate;

  /// @brief Field m_ramModuleState, offset: 0x8c, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_ramModuleState;

  /// @brief Field m_allocatedRamColor, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Color ___m_allocatedRamColor;

  /// @brief Field m_reservedRamColor, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Color ___m_reservedRamColor;

  /// @brief Field m_monoRamColor, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Color ___m_monoRamColor;

  /// @brief Field m_ramGraphResolution, offset: 0xc0, size: 0x4, def value: None
  int32_t ___m_ramGraphResolution;

  /// @brief Field m_ramTextUpdateRate, offset: 0xc4, size: 0x4, def value: None
  int32_t ___m_ramTextUpdateRate;

  /// @brief Field m_audioModuleState, offset: 0xc8, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_audioModuleState;

  /// @brief Field m_findAudioListenerInCameraIfNull, offset: 0xcc, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__LookForAudioListener ___m_findAudioListenerInCameraIfNull;

  /// @brief Field m_audioListener, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::AudioListener* ___m_audioListener;

  /// @brief Field m_audioGraphColor, offset: 0xd8, size: 0x10, def value: None
  ::UnityEngine::Color ___m_audioGraphColor;

  /// @brief Field m_audioGraphResolution, offset: 0xe8, size: 0x4, def value: None
  int32_t ___m_audioGraphResolution;

  /// @brief Field m_audioTextUpdateRate, offset: 0xec, size: 0x4, def value: None
  int32_t ___m_audioTextUpdateRate;

  /// @brief Field m_FFTWindow, offset: 0xf0, size: 0x4, def value: None
  ::UnityEngine::FFTWindow ___m_FFTWindow;

  /// @brief Field m_spectrumSize, offset: 0xf4, size: 0x4, def value: None
  int32_t ___m_spectrumSize;

  /// @brief Field m_advancedModulePosition, offset: 0xf8, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModulePosition ___m_advancedModulePosition;

  /// @brief Field m_advancedModuleState, offset: 0xfc, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModuleState ___m_advancedModuleState;

  /// @brief Field m_initialized, offset: 0x100, size: 0x1, def value: None
  bool ___m_initialized;

  /// @brief Field m_active, offset: 0x101, size: 0x1, def value: None
  bool ___m_active;

  /// @brief Field m_focused, offset: 0x102, size: 0x1, def value: None
  bool ___m_focused;

  /// @brief Field m_fpsManager, offset: 0x108, size: 0x8, def value: None
  ::Tayx::Graphy::Fps::G_FpsManager* ___m_fpsManager;

  /// @brief Field m_ramManager, offset: 0x110, size: 0x8, def value: None
  ::Tayx::Graphy::Ram::G_RamManager* ___m_ramManager;

  /// @brief Field m_audioManager, offset: 0x118, size: 0x8, def value: None
  ::Tayx::Graphy::Audio::G_AudioManager* ___m_audioManager;

  /// @brief Field m_advancedData, offset: 0x120, size: 0x8, def value: None
  ::Tayx::Graphy::Advanced::G_AdvancedData* ___m_advancedData;

  /// @brief Field m_fpsMonitor, offset: 0x128, size: 0x8, def value: None
  ::Tayx::Graphy::Fps::G_FpsMonitor* ___m_fpsMonitor;

  /// @brief Field m_ramMonitor, offset: 0x130, size: 0x8, def value: None
  ::Tayx::Graphy::Ram::G_RamMonitor* ___m_ramMonitor;

  /// @brief Field m_audioMonitor, offset: 0x138, size: 0x8, def value: None
  ::Tayx::Graphy::Audio::G_AudioMonitor* ___m_audioMonitor;

  /// @brief Field m_modulePresetState, offset: 0x140, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModulePreset ___m_modulePresetState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyManager, 0x148>, "Size mismatch!");

} // namespace Tayx::Graphy
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__LookForAudioListener, "Tayx.Graphy", "GraphyManager/LookForAudioListener");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__Mode, "Tayx.Graphy", "GraphyManager/Mode");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__ModulePosition, "Tayx.Graphy", "GraphyManager/ModulePosition");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__ModulePreset, "Tayx.Graphy", "GraphyManager/ModulePreset");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__ModuleState, "Tayx.Graphy", "GraphyManager/ModuleState");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__ModuleType, "Tayx.Graphy", "GraphyManager/ModuleType");
NEED_NO_BOX(::Tayx::Graphy::GraphyManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyManager*, "Tayx.Graphy", "GraphyManager");
