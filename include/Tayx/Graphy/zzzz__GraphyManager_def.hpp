#pragma once
// IWYU pragma private; include "Tayx/Graphy/GraphyManager.hpp"
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
namespace Tayx::Graphy::Advanced {
class G_AdvancedData;
}
namespace Tayx::Graphy::Audio {
class G_AudioManager;
}
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace Tayx::Graphy::Fps {
class G_FpsManager;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy::Ram {
class G_RamManager;
}
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
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
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine {
class AudioListener;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FFTWindow;
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__Mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FULL value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__Mode const FULL;

  /// @brief Field LIGHT value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__Mode const LIGHT;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyManager__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::ModuleType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__ModuleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__ModuleType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ADVANCED value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyManager__ModuleType const ADVANCED;

  /// @brief Field AUDIO value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__ModuleType const AUDIO;

  /// @brief Field FPS value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__ModuleType const FPS;

  /// @brief Field RAM value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__ModuleType const RAM;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__ModuleType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyManager__ModuleType, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::ModuleState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__ModuleState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__ModuleState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BACKGROUND value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const BACKGROUND;

  /// @brief Field BASIC value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const BASIC;

  /// @brief Field FULL value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const FULL;

  /// @brief Field OFF value: static_cast<int32_t>(0x4)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const OFF;

  /// @brief Field TEXT value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__ModuleState const TEXT;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__ModuleState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyManager__ModuleState, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::ModulePosition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__ModulePosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__ModulePosition(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BOTTOM_LEFT value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const BOTTOM_LEFT;

  /// @brief Field BOTTOM_RIGHT value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const BOTTOM_RIGHT;

  /// @brief Field FREE value: static_cast<int32_t>(0x4)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const FREE;

  /// @brief Field TOP_LEFT value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const TOP_LEFT;

  /// @brief Field TOP_RIGHT value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__ModulePosition const TOP_RIGHT;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__ModulePosition, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyManager__ModulePosition, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::LookForAudioListener
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__LookForAudioListener();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__LookForAudioListener(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ALWAYS value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__LookForAudioListener const ALWAYS;

  /// @brief Field NEVER value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__LookForAudioListener const NEVER;

  /// @brief Field ON_SCENE_LOAD value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__LookForAudioListener const ON_SCENE_LOAD;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__LookForAudioListener, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyManager__LookForAudioListener, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: ::ModulePreset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphyManager__ModulePreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphyManager__ModulePreset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FPS_BASIC value: static_cast<int32_t>(0x0)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_BASIC;

  /// @brief Field FPS_BASIC_ADVANCED_FULL value: static_cast<int32_t>(0xb)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_BASIC_ADVANCED_FULL;

  /// @brief Field FPS_FULL value: static_cast<int32_t>(0x2)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL;

  /// @brief Field FPS_FULL_RAM_FULL value: static_cast<int32_t>(0x5)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL;

  /// @brief Field FPS_FULL_RAM_FULL_AUDIO_FULL value: static_cast<int32_t>(0x9)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_FULL;

  /// @brief Field FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL value: static_cast<int32_t>(0xa)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL;

  /// @brief Field FPS_FULL_RAM_FULL_AUDIO_TEXT value: static_cast<int32_t>(0x8)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_FULL_AUDIO_TEXT;

  /// @brief Field FPS_FULL_RAM_TEXT value: static_cast<int32_t>(0x4)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_TEXT;

  /// @brief Field FPS_FULL_RAM_TEXT_AUDIO_TEXT value: static_cast<int32_t>(0x7)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_FULL_RAM_TEXT_AUDIO_TEXT;

  /// @brief Field FPS_TEXT value: static_cast<int32_t>(0x1)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_TEXT;

  /// @brief Field FPS_TEXT_RAM_TEXT value: static_cast<int32_t>(0x3)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_TEXT_RAM_TEXT;

  /// @brief Field FPS_TEXT_RAM_TEXT_AUDIO_TEXT value: static_cast<int32_t>(0x6)
  static ::Tayx::Graphy::__GraphyManager__ModulePreset const FPS_TEXT_RAM_TEXT_AUDIO_TEXT;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::__GraphyManager__ModulePreset, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::__GraphyManager__ModulePreset, value__) == 0x0, "Offset mismatch!");

} // namespace Tayx::Graphy
// Type: Tayx.Graphy::GraphyManager
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 324, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// CS Name: ::Tayx.Graphy::GraphyManager*
class CORDL_TYPE GraphyManager : public ::Tayx::Graphy::Utils::G_Singleton_1<::UnityW<::Tayx::Graphy::GraphyManager>> {
public:
  // Declarations
  using LookForAudioListener = ::Tayx::Graphy::__GraphyManager__LookForAudioListener;

  using Mode = ::Tayx::Graphy::__GraphyManager__Mode;

  using ModulePosition = ::Tayx::Graphy::__GraphyManager__ModulePosition;

  using ModulePreset = ::Tayx::Graphy::__GraphyManager__ModulePreset;

  using ModuleState = ::Tayx::Graphy::__GraphyManager__ModuleState;

  using ModuleType = ::Tayx::Graphy::__GraphyManager__ModuleType;

  __declspec(property(get = get_AdvancedModulePosition, put = set_AdvancedModulePosition))::Tayx::Graphy::__GraphyManager__ModulePosition AdvancedModulePosition;

  __declspec(property(get = get_AdvancedModuleState, put = set_AdvancedModuleState))::Tayx::Graphy::__GraphyManager__ModuleState AdvancedModuleState;

  __declspec(property(get = get_AllocatedRam)) float_t AllocatedRam;

  __declspec(property(get = get_AllocatedRamColor, put = set_AllocatedRamColor))::UnityEngine::Color AllocatedRamColor;

  __declspec(property(get = get_AudioGraphColor, put = set_AudioGraphColor))::UnityEngine::Color AudioGraphColor;

  __declspec(property(get = get_AudioGraphResolution, put = set_AudioGraphResolution)) int32_t AudioGraphResolution;

  __declspec(property(get = get_AudioListener, put = set_AudioListener))::UnityW<::UnityEngine::AudioListener> AudioListener;

  __declspec(property(get = get_AudioModuleState, put = set_AudioModuleState))::Tayx::Graphy::__GraphyManager__ModuleState AudioModuleState;

  __declspec(property(get = get_AudioTextUpdateRate, put = set_AudioTextUpdateRate)) int32_t AudioTextUpdateRate;

  __declspec(property(get = get_AverageFPS)) float_t AverageFPS;

  __declspec(property(get = get_Background, put = set_Background)) bool Background;

  __declspec(property(get = get_BackgroundColor, put = set_BackgroundColor))::UnityEngine::Color BackgroundColor;

  __declspec(property(get = get_CautionFPSColor, put = set_CautionFPSColor))::UnityEngine::Color CautionFPSColor;

  __declspec(property(get = get_CautionFPSThreshold, put = set_CautionFPSThreshold)) int32_t CautionFPSThreshold;

  __declspec(property(get = get_CriticalFPSColor, put = set_CriticalFPSColor))::UnityEngine::Color CriticalFPSColor;

  __declspec(property(get = get_CurrentFPS)) float_t CurrentFPS;

  __declspec(property(get = get_EnableOnStartup)) bool EnableOnStartup;

  __declspec(property(get = get_FftWindow, put = set_FftWindow))::UnityEngine::FFTWindow FftWindow;

  __declspec(property(get = get_FindAudioListenerInCameraIfNull, put = set_FindAudioListenerInCameraIfNull))::Tayx::Graphy::__GraphyManager__LookForAudioListener FindAudioListenerInCameraIfNull;

  __declspec(property(get = get_FpsGraphResolution, put = set_FpsGraphResolution)) int32_t FpsGraphResolution;

  __declspec(property(get = get_FpsModuleState, put = set_FpsModuleState))::Tayx::Graphy::__GraphyManager__ModuleState FpsModuleState;

  __declspec(property(get = get_FpsTextUpdateRate, put = set_FpsTextUpdateRate)) int32_t FpsTextUpdateRate;

  __declspec(property(get = get_GoodFPSColor, put = set_GoodFPSColor))::UnityEngine::Color GoodFPSColor;

  __declspec(property(get = get_GoodFPSThreshold, put = set_GoodFPSThreshold)) int32_t GoodFPSThreshold;

  __declspec(property(get = get_GraphModulePosition, put = set_GraphModulePosition))::Tayx::Graphy::__GraphyManager__ModulePosition GraphModulePosition;

  __declspec(property(get = get_GraphyMode, put = set_GraphyMode))::Tayx::Graphy::__GraphyManager__Mode GraphyMode;

  __declspec(property(get = get_KeepAlive)) bool KeepAlive;

  __declspec(property(get = get_MaxDB)) float_t MaxDB;

  __declspec(property(get = get_MaxFPS)) float_t MaxFPS;

  __declspec(property(get = get_MinFPS)) float_t MinFPS;

  __declspec(property(get = get_MonoRam)) float_t MonoRam;

  __declspec(property(get = get_MonoRamColor, put = set_MonoRamColor))::UnityEngine::Color MonoRamColor;

  __declspec(property(get = get_RamGraphResolution, put = set_RamGraphResolution)) int32_t RamGraphResolution;

  __declspec(property(get = get_RamModuleState, put = set_RamModuleState))::Tayx::Graphy::__GraphyManager__ModuleState RamModuleState;

  __declspec(property(get = get_RamTextUpdateRate, put = set_RamTextUpdateRate)) int32_t RamTextUpdateRate;

  __declspec(property(get = get_ReservedRam)) float_t ReservedRam;

  __declspec(property(get = get_ReservedRamColor, put = set_ReservedRamColor))::UnityEngine::Color ReservedRamColor;

  __declspec(property(get = get_Spectrum))::ArrayW<float_t, ::Array<float_t>*> Spectrum;

  __declspec(property(get = get_SpectrumSize, put = set_SpectrumSize)) int32_t SpectrumSize;

  /// @brief Field m_FFTWindow, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FFTWindow, put = __cordl_internal_set_m_FFTWindow))::UnityEngine::FFTWindow m_FFTWindow;

  /// @brief Field m_active, offset 0x101, size 0x1
  __declspec(property(get = __cordl_internal_get_m_active, put = __cordl_internal_set_m_active)) bool m_active;

  /// @brief Field m_advancedData, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_advancedData, put = __cordl_internal_set_m_advancedData))::UnityW<::Tayx::Graphy::Advanced::G_AdvancedData> m_advancedData;

  /// @brief Field m_advancedModulePosition, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_advancedModulePosition,
                      put = __cordl_internal_set_m_advancedModulePosition))::Tayx::Graphy::__GraphyManager__ModulePosition m_advancedModulePosition;

  /// @brief Field m_advancedModuleState, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_advancedModuleState, put = __cordl_internal_set_m_advancedModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_advancedModuleState;

  /// @brief Field m_allocatedRamColor, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_m_allocatedRamColor, put = __cordl_internal_set_m_allocatedRamColor))::UnityEngine::Color m_allocatedRamColor;

  /// @brief Field m_audioGraphColor, offset 0xd8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_audioGraphColor, put = __cordl_internal_set_m_audioGraphColor))::UnityEngine::Color m_audioGraphColor;

  /// @brief Field m_audioGraphResolution, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_audioGraphResolution, put = __cordl_internal_set_m_audioGraphResolution)) int32_t m_audioGraphResolution;

  /// @brief Field m_audioListener, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioListener, put = __cordl_internal_set_m_audioListener))::UnityW<::UnityEngine::AudioListener> m_audioListener;

  /// @brief Field m_audioManager, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioManager, put = __cordl_internal_set_m_audioManager))::UnityW<::Tayx::Graphy::Audio::G_AudioManager> m_audioManager;

  /// @brief Field m_audioModuleState, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_audioModuleState, put = __cordl_internal_set_m_audioModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_audioModuleState;

  /// @brief Field m_audioMonitor, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_audioMonitor, put = __cordl_internal_set_m_audioMonitor))::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> m_audioMonitor;

  /// @brief Field m_audioTextUpdateRate, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_audioTextUpdateRate, put = __cordl_internal_set_m_audioTextUpdateRate)) int32_t m_audioTextUpdateRate;

  /// @brief Field m_background, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_background, put = __cordl_internal_set_m_background)) bool m_background;

  /// @brief Field m_backgroundColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_backgroundColor, put = __cordl_internal_set_m_backgroundColor))::UnityEngine::Color m_backgroundColor;

  /// @brief Field m_cautionFpsColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_m_cautionFpsColor, put = __cordl_internal_set_m_cautionFpsColor))::UnityEngine::Color m_cautionFpsColor;

  /// @brief Field m_cautionFpsThreshold, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_cautionFpsThreshold, put = __cordl_internal_set_m_cautionFpsThreshold)) int32_t m_cautionFpsThreshold;

  /// @brief Field m_criticalFpsColor, offset 0x74, size 0x10
  __declspec(property(get = __cordl_internal_get_m_criticalFpsColor, put = __cordl_internal_set_m_criticalFpsColor))::UnityEngine::Color m_criticalFpsColor;

  /// @brief Field m_enableHotkeys, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableHotkeys, put = __cordl_internal_set_m_enableHotkeys)) bool m_enableHotkeys;

  /// @brief Field m_enableOnStartup, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enableOnStartup, put = __cordl_internal_set_m_enableOnStartup)) bool m_enableOnStartup;

  /// @brief Field m_findAudioListenerInCameraIfNull, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_findAudioListenerInCameraIfNull,
                      put = __cordl_internal_set_m_findAudioListenerInCameraIfNull))::Tayx::Graphy::__GraphyManager__LookForAudioListener m_findAudioListenerInCameraIfNull;

  /// @brief Field m_focused, offset 0x102, size 0x1
  __declspec(property(get = __cordl_internal_get_m_focused, put = __cordl_internal_set_m_focused)) bool m_focused;

  /// @brief Field m_fpsGraphResolution, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fpsGraphResolution, put = __cordl_internal_set_m_fpsGraphResolution)) int32_t m_fpsGraphResolution;

  /// @brief Field m_fpsManager, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsManager, put = __cordl_internal_set_m_fpsManager))::UnityW<::Tayx::Graphy::Fps::G_FpsManager> m_fpsManager;

  /// @brief Field m_fpsModuleState, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fpsModuleState, put = __cordl_internal_set_m_fpsModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_fpsModuleState;

  /// @brief Field m_fpsMonitor, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fpsMonitor, put = __cordl_internal_set_m_fpsMonitor))::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> m_fpsMonitor;

  /// @brief Field m_fpsTextUpdateRate, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fpsTextUpdateRate, put = __cordl_internal_set_m_fpsTextUpdateRate)) int32_t m_fpsTextUpdateRate;

  /// @brief Field m_goodFpsColor, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_goodFpsColor, put = __cordl_internal_set_m_goodFpsColor))::UnityEngine::Color m_goodFpsColor;

  /// @brief Field m_goodFpsThreshold, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_goodFpsThreshold, put = __cordl_internal_set_m_goodFpsThreshold)) int32_t m_goodFpsThreshold;

  /// @brief Field m_graphModulePosition, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_graphModulePosition, put = __cordl_internal_set_m_graphModulePosition))::Tayx::Graphy::__GraphyManager__ModulePosition m_graphModulePosition;

  /// @brief Field m_graphyMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_graphyMode, put = __cordl_internal_set_m_graphyMode))::Tayx::Graphy::__GraphyManager__Mode m_graphyMode;

  /// @brief Field m_initialized, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_m_initialized, put = __cordl_internal_set_m_initialized)) bool m_initialized;

  /// @brief Field m_keepAlive, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_keepAlive, put = __cordl_internal_set_m_keepAlive)) bool m_keepAlive;

  /// @brief Field m_modulePresetState, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_m_modulePresetState, put = __cordl_internal_set_m_modulePresetState))::Tayx::Graphy::__GraphyManager__ModulePreset m_modulePresetState;

  /// @brief Field m_monoRamColor, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_monoRamColor, put = __cordl_internal_set_m_monoRamColor))::UnityEngine::Color m_monoRamColor;

  /// @brief Field m_ramGraphResolution, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ramGraphResolution, put = __cordl_internal_set_m_ramGraphResolution)) int32_t m_ramGraphResolution;

  /// @brief Field m_ramManager, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ramManager, put = __cordl_internal_set_m_ramManager))::UnityW<::Tayx::Graphy::Ram::G_RamManager> m_ramManager;

  /// @brief Field m_ramModuleState, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ramModuleState, put = __cordl_internal_set_m_ramModuleState))::Tayx::Graphy::__GraphyManager__ModuleState m_ramModuleState;

  /// @brief Field m_ramMonitor, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ramMonitor, put = __cordl_internal_set_m_ramMonitor))::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> m_ramMonitor;

  /// @brief Field m_ramTextUpdateRate, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ramTextUpdateRate, put = __cordl_internal_set_m_ramTextUpdateRate)) int32_t m_ramTextUpdateRate;

  /// @brief Field m_reservedRamColor, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_reservedRamColor, put = __cordl_internal_set_m_reservedRamColor))::UnityEngine::Color m_reservedRamColor;

  /// @brief Field m_spectrumSize, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spectrumSize, put = __cordl_internal_set_m_spectrumSize)) int32_t m_spectrumSize;

  /// @brief Field m_toggleActiveAlt, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_toggleActiveAlt, put = __cordl_internal_set_m_toggleActiveAlt)) bool m_toggleActiveAlt;

  /// @brief Field m_toggleActiveCtrl, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_toggleActiveCtrl, put = __cordl_internal_set_m_toggleActiveCtrl)) bool m_toggleActiveCtrl;

  /// @brief Field m_toggleActiveKeyCode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_toggleActiveKeyCode, put = __cordl_internal_set_m_toggleActiveKeyCode))::UnityEngine::InputSystem::Key m_toggleActiveKeyCode;

  /// @brief Field m_toggleModeAlt, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_toggleModeAlt, put = __cordl_internal_set_m_toggleModeAlt)) bool m_toggleModeAlt;

  /// @brief Field m_toggleModeCtrl, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_toggleModeCtrl, put = __cordl_internal_set_m_toggleModeCtrl)) bool m_toggleModeCtrl;

  /// @brief Field m_toggleModeKeyCode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_toggleModeKeyCode, put = __cordl_internal_set_m_toggleModeKeyCode))::UnityEngine::InputSystem::Key m_toggleModeKeyCode;

  /// @brief Method CheckFor1KeyPress, addr 0x303cabc, size 0x74, virtual false, abstract: false, final false
  inline bool CheckFor1KeyPress(::UnityEngine::InputSystem::Key key);

  /// @brief Method CheckFor2KeyPress, addr 0x303c954, size 0x168, virtual false, abstract: false, final false
  inline bool CheckFor2KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2);

  /// @brief Method CheckFor3KeyPress, addr 0x303c680, size 0x2d4, virtual false, abstract: false, final false
  inline bool CheckFor3KeyPress(::UnityEngine::InputSystem::Key key1, ::UnityEngine::InputSystem::Key key2, ::UnityEngine::InputSystem::Key key3);

  /// @brief Method CheckForHotkeyPresses, addr 0x3039ff0, size 0x168, virtual false, abstract: false, final false
  inline void CheckForHotkeyPresses();

  /// @brief Method Disable, addr 0x303a6dc, size 0x70, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x303a654, size 0x88, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method Init, addr 0x30398a4, size 0x590, virtual false, abstract: false, final false
  inline void Init();

  static inline ::Tayx::Graphy::GraphyManager* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x303a158, size 0x1c, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool isFocused);

  /// @brief Method OnDestroy, addr 0x3039e34, size 0x74, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshAllParameters, addr 0x303a174, size 0x40, virtual false, abstract: false, final false
  inline void RefreshAllParameters();

  /// @brief Method SetModuleMode, addr 0x303a234, size 0x94, virtual false, abstract: false, final false
  inline void SetModuleMode(::Tayx::Graphy::__GraphyManager__ModuleType moduleType, ::Tayx::Graphy::__GraphyManager__ModuleState moduleState);

  /// @brief Method SetModulePosition, addr 0x303a1b4, size 0x80, virtual false, abstract: false, final false
  inline void SetModulePosition(::Tayx::Graphy::__GraphyManager__ModuleType moduleType, ::Tayx::Graphy::__GraphyManager__ModulePosition modulePosition);

  /// @brief Method SetPreset, addr 0x303a3b0, size 0x294, virtual false, abstract: false, final false
  inline void SetPreset(::Tayx::Graphy::__GraphyManager__ModulePreset modulePreset);

  /// @brief Method Start, addr 0x30398a0, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ToggleActive, addr 0x303a644, size 0x10, virtual false, abstract: false, final false
  inline void ToggleActive();

  /// @brief Method ToggleModes, addr 0x303a2c8, size 0xe8, virtual false, abstract: false, final false
  inline void ToggleModes();

  /// @brief Method Update, addr 0x3039fd8, size 0x18, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAllParameters, addr 0x3037964, size 0x40, virtual false, abstract: false, final false
  inline void UpdateAllParameters();

  constexpr ::UnityEngine::FFTWindow const& __cordl_internal_get_m_FFTWindow() const;

  constexpr ::UnityEngine::FFTWindow& __cordl_internal_get_m_FFTWindow();

  constexpr bool const& __cordl_internal_get_m_active() const;

  constexpr bool& __cordl_internal_get_m_active();

  constexpr ::UnityW<::Tayx::Graphy::Advanced::G_AdvancedData> const& __cordl_internal_get_m_advancedData() const;

  constexpr ::UnityW<::Tayx::Graphy::Advanced::G_AdvancedData>& __cordl_internal_get_m_advancedData();

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition const& __cordl_internal_get_m_advancedModulePosition() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition& __cordl_internal_get_m_advancedModulePosition();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __cordl_internal_get_m_advancedModuleState() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __cordl_internal_get_m_advancedModuleState();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_allocatedRamColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_allocatedRamColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_audioGraphColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_audioGraphColor();

  constexpr int32_t const& __cordl_internal_get_m_audioGraphResolution() const;

  constexpr int32_t& __cordl_internal_get_m_audioGraphResolution();

  constexpr ::UnityW<::UnityEngine::AudioListener> const& __cordl_internal_get_m_audioListener() const;

  constexpr ::UnityW<::UnityEngine::AudioListener>& __cordl_internal_get_m_audioListener();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioManager> const& __cordl_internal_get_m_audioManager() const;

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioManager>& __cordl_internal_get_m_audioManager();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __cordl_internal_get_m_audioModuleState() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __cordl_internal_get_m_audioModuleState();

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& __cordl_internal_get_m_audioMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& __cordl_internal_get_m_audioMonitor();

  constexpr int32_t const& __cordl_internal_get_m_audioTextUpdateRate() const;

  constexpr int32_t& __cordl_internal_get_m_audioTextUpdateRate();

  constexpr bool const& __cordl_internal_get_m_background() const;

  constexpr bool& __cordl_internal_get_m_background();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_backgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_backgroundColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_cautionFpsColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_cautionFpsColor();

  constexpr int32_t const& __cordl_internal_get_m_cautionFpsThreshold() const;

  constexpr int32_t& __cordl_internal_get_m_cautionFpsThreshold();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_criticalFpsColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_criticalFpsColor();

  constexpr bool const& __cordl_internal_get_m_enableHotkeys() const;

  constexpr bool& __cordl_internal_get_m_enableHotkeys();

  constexpr bool const& __cordl_internal_get_m_enableOnStartup() const;

  constexpr bool& __cordl_internal_get_m_enableOnStartup();

  constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener const& __cordl_internal_get_m_findAudioListenerInCameraIfNull() const;

  constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener& __cordl_internal_get_m_findAudioListenerInCameraIfNull();

  constexpr bool const& __cordl_internal_get_m_focused() const;

  constexpr bool& __cordl_internal_get_m_focused();

  constexpr int32_t const& __cordl_internal_get_m_fpsGraphResolution() const;

  constexpr int32_t& __cordl_internal_get_m_fpsGraphResolution();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsManager> const& __cordl_internal_get_m_fpsManager() const;

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsManager>& __cordl_internal_get_m_fpsManager();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __cordl_internal_get_m_fpsModuleState() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __cordl_internal_get_m_fpsModuleState();

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& __cordl_internal_get_m_fpsMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& __cordl_internal_get_m_fpsMonitor();

  constexpr int32_t const& __cordl_internal_get_m_fpsTextUpdateRate() const;

  constexpr int32_t& __cordl_internal_get_m_fpsTextUpdateRate();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_goodFpsColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_goodFpsColor();

  constexpr int32_t const& __cordl_internal_get_m_goodFpsThreshold() const;

  constexpr int32_t& __cordl_internal_get_m_goodFpsThreshold();

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition const& __cordl_internal_get_m_graphModulePosition() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition& __cordl_internal_get_m_graphModulePosition();

  constexpr ::Tayx::Graphy::__GraphyManager__Mode const& __cordl_internal_get_m_graphyMode() const;

  constexpr ::Tayx::Graphy::__GraphyManager__Mode& __cordl_internal_get_m_graphyMode();

  constexpr bool const& __cordl_internal_get_m_initialized() const;

  constexpr bool& __cordl_internal_get_m_initialized();

  constexpr bool const& __cordl_internal_get_m_keepAlive() const;

  constexpr bool& __cordl_internal_get_m_keepAlive();

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset const& __cordl_internal_get_m_modulePresetState() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset& __cordl_internal_get_m_modulePresetState();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_monoRamColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_monoRamColor();

  constexpr int32_t const& __cordl_internal_get_m_ramGraphResolution() const;

  constexpr int32_t& __cordl_internal_get_m_ramGraphResolution();

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamManager> const& __cordl_internal_get_m_ramManager() const;

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamManager>& __cordl_internal_get_m_ramManager();

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __cordl_internal_get_m_ramModuleState() const;

  constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __cordl_internal_get_m_ramModuleState();

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> const& __cordl_internal_get_m_ramMonitor() const;

  constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor>& __cordl_internal_get_m_ramMonitor();

  constexpr int32_t const& __cordl_internal_get_m_ramTextUpdateRate() const;

  constexpr int32_t& __cordl_internal_get_m_ramTextUpdateRate();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_reservedRamColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_reservedRamColor();

  constexpr int32_t const& __cordl_internal_get_m_spectrumSize() const;

  constexpr int32_t& __cordl_internal_get_m_spectrumSize();

  constexpr bool const& __cordl_internal_get_m_toggleActiveAlt() const;

  constexpr bool& __cordl_internal_get_m_toggleActiveAlt();

  constexpr bool const& __cordl_internal_get_m_toggleActiveCtrl() const;

  constexpr bool& __cordl_internal_get_m_toggleActiveCtrl();

  constexpr ::UnityEngine::InputSystem::Key const& __cordl_internal_get_m_toggleActiveKeyCode() const;

  constexpr ::UnityEngine::InputSystem::Key& __cordl_internal_get_m_toggleActiveKeyCode();

  constexpr bool const& __cordl_internal_get_m_toggleModeAlt() const;

  constexpr bool& __cordl_internal_get_m_toggleModeAlt();

  constexpr bool const& __cordl_internal_get_m_toggleModeCtrl() const;

  constexpr bool& __cordl_internal_get_m_toggleModeCtrl();

  constexpr ::UnityEngine::InputSystem::Key const& __cordl_internal_get_m_toggleModeKeyCode() const;

  constexpr ::UnityEngine::InputSystem::Key& __cordl_internal_get_m_toggleModeKeyCode();

  constexpr void __cordl_internal_set_m_FFTWindow(::UnityEngine::FFTWindow value);

  constexpr void __cordl_internal_set_m_active(bool value);

  constexpr void __cordl_internal_set_m_advancedData(::UnityW<::Tayx::Graphy::Advanced::G_AdvancedData> value);

  constexpr void __cordl_internal_set_m_advancedModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value);

  constexpr void __cordl_internal_set_m_advancedModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr void __cordl_internal_set_m_allocatedRamColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_audioGraphColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_audioGraphResolution(int32_t value);

  constexpr void __cordl_internal_set_m_audioListener(::UnityW<::UnityEngine::AudioListener> value);

  constexpr void __cordl_internal_set_m_audioManager(::UnityW<::Tayx::Graphy::Audio::G_AudioManager> value);

  constexpr void __cordl_internal_set_m_audioModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr void __cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value);

  constexpr void __cordl_internal_set_m_audioTextUpdateRate(int32_t value);

  constexpr void __cordl_internal_set_m_background(bool value);

  constexpr void __cordl_internal_set_m_backgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_cautionFpsColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_cautionFpsThreshold(int32_t value);

  constexpr void __cordl_internal_set_m_criticalFpsColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_enableHotkeys(bool value);

  constexpr void __cordl_internal_set_m_enableOnStartup(bool value);

  constexpr void __cordl_internal_set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener value);

  constexpr void __cordl_internal_set_m_focused(bool value);

  constexpr void __cordl_internal_set_m_fpsGraphResolution(int32_t value);

  constexpr void __cordl_internal_set_m_fpsManager(::UnityW<::Tayx::Graphy::Fps::G_FpsManager> value);

  constexpr void __cordl_internal_set_m_fpsModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr void __cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value);

  constexpr void __cordl_internal_set_m_fpsTextUpdateRate(int32_t value);

  constexpr void __cordl_internal_set_m_goodFpsColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_goodFpsThreshold(int32_t value);

  constexpr void __cordl_internal_set_m_graphModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value);

  constexpr void __cordl_internal_set_m_graphyMode(::Tayx::Graphy::__GraphyManager__Mode value);

  constexpr void __cordl_internal_set_m_initialized(bool value);

  constexpr void __cordl_internal_set_m_keepAlive(bool value);

  constexpr void __cordl_internal_set_m_modulePresetState(::Tayx::Graphy::__GraphyManager__ModulePreset value);

  constexpr void __cordl_internal_set_m_monoRamColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_ramGraphResolution(int32_t value);

  constexpr void __cordl_internal_set_m_ramManager(::UnityW<::Tayx::Graphy::Ram::G_RamManager> value);

  constexpr void __cordl_internal_set_m_ramModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  constexpr void __cordl_internal_set_m_ramMonitor(::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> value);

  constexpr void __cordl_internal_set_m_ramTextUpdateRate(int32_t value);

  constexpr void __cordl_internal_set_m_reservedRamColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_spectrumSize(int32_t value);

  constexpr void __cordl_internal_set_m_toggleActiveAlt(bool value);

  constexpr void __cordl_internal_set_m_toggleActiveCtrl(bool value);

  constexpr void __cordl_internal_set_m_toggleActiveKeyCode(::UnityEngine::InputSystem::Key value);

  constexpr void __cordl_internal_set_m_toggleModeAlt(bool value);

  constexpr void __cordl_internal_set_m_toggleModeCtrl(bool value);

  constexpr void __cordl_internal_set_m_toggleModeKeyCode(::UnityEngine::InputSystem::Key value);

  /// @brief Method .ctor, addr 0x3037820, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AdvancedModulePosition, addr 0x3039218, size 0x8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyManager__ModulePosition get_AdvancedModulePosition();

  /// @brief Method get_AdvancedModuleState, addr 0x3039174, size 0x8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyManager__ModuleState get_AdvancedModuleState();

  /// @brief Method get_AllocatedRam, addr 0x3038c88, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_AllocatedRam();

  /// @brief Method get_AllocatedRamColor, addr 0x30389fc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_AllocatedRamColor();

  /// @brief Method get_AudioGraphColor, addr 0x303906c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_AudioGraphColor();

  /// @brief Method get_AudioGraphResolution, addr 0x303909c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AudioGraphResolution();

  /// @brief Method get_AudioListener, addr 0x3038e58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioListener> get_AudioListener();

  /// @brief Method get_AudioModuleState, addr 0x3038cdc, size 0x8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyManager__ModuleState get_AudioModuleState();

  /// @brief Method get_AudioTextUpdateRate, addr 0x30390c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AudioTextUpdateRate();

  /// @brief Method get_AverageFPS, addr 0x3038820, size 0x20, virtual false, abstract: false, final false
  inline float_t get_AverageFPS();

  /// @brief Method get_Background, addr 0x30379b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Background();

  /// @brief Method get_BackgroundColor, addr 0x30379c8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_BackgroundColor();

  /// @brief Method get_CautionFPSColor, addr 0x3038700, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_CautionFPSColor();

  /// @brief Method get_CautionFPSThreshold, addr 0x3038788, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CautionFPSThreshold();

  /// @brief Method get_CriticalFPSColor, addr 0x3038730, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_CriticalFPSColor();

  /// @brief Method get_CurrentFPS, addr 0x3038800, size 0x20, virtual false, abstract: false, final false
  inline float_t get_CurrentFPS();

  /// @brief Method get_EnableOnStartup, addr 0x30379a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableOnStartup();

  /// @brief Method get_FftWindow, addr 0x30390ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::FFTWindow get_FftWindow();

  /// @brief Method get_FindAudioListenerInCameraIfNull, addr 0x3039044, size 0x8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyManager__LookForAudioListener get_FindAudioListenerInCameraIfNull();

  /// @brief Method get_FpsGraphResolution, addr 0x30387b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FpsGraphResolution();

  /// @brief Method get_FpsModuleState, addr 0x30382f8, size 0x8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyManager__ModuleState get_FpsModuleState();

  /// @brief Method get_FpsTextUpdateRate, addr 0x30387d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FpsTextUpdateRate();

  /// @brief Method get_GoodFPSColor, addr 0x30384d4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_GoodFPSColor();

  /// @brief Method get_GoodFPSThreshold, addr 0x3038760, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GoodFPSThreshold();

  /// @brief Method get_GraphModulePosition, addr 0x30379e0, size 0x8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyManager__ModulePosition get_GraphModulePosition();

  /// @brief Method get_GraphyMode, addr 0x3037954, size 0x8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyManager__Mode get_GraphyMode();

  /// @brief Method get_KeepAlive, addr 0x30379ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_KeepAlive();

  /// @brief Method get_MaxDB, addr 0x3039158, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_MaxDB();

  /// @brief Method get_MaxFPS, addr 0x3038860, size 0x20, virtual false, abstract: false, final false
  inline float_t get_MaxFPS();

  /// @brief Method get_MinFPS, addr 0x3038840, size 0x20, virtual false, abstract: false, final false
  inline float_t get_MinFPS();

  /// @brief Method get_MonoRam, addr 0x3038cc0, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_MonoRam();

  /// @brief Method get_MonoRamColor, addr 0x3038c08, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_MonoRamColor();

  /// @brief Method get_RamGraphResolution, addr 0x3038c38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RamGraphResolution();

  /// @brief Method get_RamModuleState, addr 0x3038880, size 0x8, virtual false, abstract: false, final false
  inline ::Tayx::Graphy::__GraphyManager__ModuleState get_RamModuleState();

  /// @brief Method get_RamTextUpdateRate, addr 0x3038c60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RamTextUpdateRate();

  /// @brief Method get_ReservedRam, addr 0x3038ca4, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_ReservedRam();

  /// @brief Method get_ReservedRamColor, addr 0x3038bd8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_ReservedRamColor();

  /// @brief Method get_Spectrum, addr 0x303913c, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_Spectrum();

  /// @brief Method get_SpectrumSize, addr 0x3039114, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SpectrumSize();

  /// @brief Method set_AdvancedModulePosition, addr 0x3039220, size 0x20, virtual false, abstract: false, final false
  inline void set_AdvancedModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value);

  /// @brief Method set_AdvancedModuleState, addr 0x303917c, size 0x24, virtual false, abstract: false, final false
  inline void set_AdvancedModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method set_AllocatedRamColor, addr 0x3038a08, size 0x24, virtual false, abstract: false, final false
  inline void set_AllocatedRamColor(::UnityEngine::Color value);

  /// @brief Method set_AudioGraphColor, addr 0x3039078, size 0x24, virtual false, abstract: false, final false
  inline void set_AudioGraphColor(::UnityEngine::Color value);

  /// @brief Method set_AudioGraphResolution, addr 0x30390a4, size 0x20, virtual false, abstract: false, final false
  inline void set_AudioGraphResolution(int32_t value);

  /// @brief Method set_AudioListener, addr 0x3038e60, size 0x20, virtual false, abstract: false, final false
  inline void set_AudioListener(::UnityEngine::AudioListener* value);

  /// @brief Method set_AudioModuleState, addr 0x3038ce4, size 0x24, virtual false, abstract: false, final false
  inline void set_AudioModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method set_AudioTextUpdateRate, addr 0x30390cc, size 0x20, virtual false, abstract: false, final false
  inline void set_AudioTextUpdateRate(int32_t value);

  /// @brief Method set_Background, addr 0x30379bc, size 0xc, virtual false, abstract: false, final false
  inline void set_Background(bool value);

  /// @brief Method set_BackgroundColor, addr 0x30379d4, size 0xc, virtual false, abstract: false, final false
  inline void set_BackgroundColor(::UnityEngine::Color value);

  /// @brief Method set_CautionFPSColor, addr 0x303870c, size 0x24, virtual false, abstract: false, final false
  inline void set_CautionFPSColor(::UnityEngine::Color value);

  /// @brief Method set_CautionFPSThreshold, addr 0x3038790, size 0x20, virtual false, abstract: false, final false
  inline void set_CautionFPSThreshold(int32_t value);

  /// @brief Method set_CriticalFPSColor, addr 0x303873c, size 0x24, virtual false, abstract: false, final false
  inline void set_CriticalFPSColor(::UnityEngine::Color value);

  /// @brief Method set_FftWindow, addr 0x30390f4, size 0x20, virtual false, abstract: false, final false
  inline void set_FftWindow(::UnityEngine::FFTWindow value);

  /// @brief Method set_FindAudioListenerInCameraIfNull, addr 0x303904c, size 0x20, virtual false, abstract: false, final false
  inline void set_FindAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener value);

  /// @brief Method set_FpsGraphResolution, addr 0x30387b8, size 0x20, virtual false, abstract: false, final false
  inline void set_FpsGraphResolution(int32_t value);

  /// @brief Method set_FpsModuleState, addr 0x3038300, size 0x24, virtual false, abstract: false, final false
  inline void set_FpsModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method set_FpsTextUpdateRate, addr 0x30387e0, size 0x20, virtual false, abstract: false, final false
  inline void set_FpsTextUpdateRate(int32_t value);

  /// @brief Method set_GoodFPSColor, addr 0x30384e0, size 0x24, virtual false, abstract: false, final false
  inline void set_GoodFPSColor(::UnityEngine::Color value);

  /// @brief Method set_GoodFPSThreshold, addr 0x3038768, size 0x20, virtual false, abstract: false, final false
  inline void set_GoodFPSThreshold(int32_t value);

  /// @brief Method set_GraphModulePosition, addr 0x30379e8, size 0x40, virtual false, abstract: false, final false
  inline void set_GraphModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition value);

  /// @brief Method set_GraphyMode, addr 0x303795c, size 0x8, virtual false, abstract: false, final false
  inline void set_GraphyMode(::Tayx::Graphy::__GraphyManager__Mode value);

  /// @brief Method set_MonoRamColor, addr 0x3038c14, size 0x24, virtual false, abstract: false, final false
  inline void set_MonoRamColor(::UnityEngine::Color value);

  /// @brief Method set_RamGraphResolution, addr 0x3038c40, size 0x20, virtual false, abstract: false, final false
  inline void set_RamGraphResolution(int32_t value);

  /// @brief Method set_RamModuleState, addr 0x3038888, size 0x24, virtual false, abstract: false, final false
  inline void set_RamModuleState(::Tayx::Graphy::__GraphyManager__ModuleState value);

  /// @brief Method set_RamTextUpdateRate, addr 0x3038c68, size 0x20, virtual false, abstract: false, final false
  inline void set_RamTextUpdateRate(int32_t value);

  /// @brief Method set_ReservedRamColor, addr 0x3038be4, size 0x24, virtual false, abstract: false, final false
  inline void set_ReservedRamColor(::UnityEngine::Color value);

  /// @brief Method set_SpectrumSize, addr 0x303911c, size 0x20, virtual false, abstract: false, final false
  inline void set_SpectrumSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphyManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphyManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphyManager(GraphyManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphyManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphyManager(GraphyManager const&) = delete;

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
  ::UnityW<::UnityEngine::AudioListener> ___m_audioListener;

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
  ::UnityW<::Tayx::Graphy::Fps::G_FpsManager> ___m_fpsManager;

  /// @brief Field m_ramManager, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Ram::G_RamManager> ___m_ramManager;

  /// @brief Field m_audioManager, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioManager> ___m_audioManager;

  /// @brief Field m_advancedData, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Advanced::G_AdvancedData> ___m_advancedData;

  /// @brief Field m_fpsMonitor, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> ___m_fpsMonitor;

  /// @brief Field m_ramMonitor, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> ___m_ramMonitor;

  /// @brief Field m_audioMonitor, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> ___m_audioMonitor;

  /// @brief Field m_modulePresetState, offset: 0x140, size: 0x4, def value: None
  ::Tayx::Graphy::__GraphyManager__ModulePreset ___m_modulePresetState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::GraphyManager, 0x148>, "Size mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_graphyMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_enableOnStartup) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_keepAlive) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_background) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_backgroundColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_enableHotkeys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_toggleModeKeyCode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_toggleModeCtrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_toggleModeAlt) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_toggleActiveKeyCode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_toggleActiveCtrl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_toggleActiveAlt) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_graphModulePosition) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_fpsModuleState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_goodFpsColor) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_goodFpsThreshold) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_cautionFpsColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_cautionFpsThreshold) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_criticalFpsColor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_fpsGraphResolution) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_fpsTextUpdateRate) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_ramModuleState) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_allocatedRamColor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_reservedRamColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_monoRamColor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_ramGraphResolution) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_ramTextUpdateRate) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_audioModuleState) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_findAudioListenerInCameraIfNull) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_audioListener) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_audioGraphColor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_audioGraphResolution) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_audioTextUpdateRate) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_FFTWindow) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_spectrumSize) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_advancedModulePosition) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_advancedModuleState) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_initialized) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_active) == 0x101, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_focused) == 0x102, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_fpsManager) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_ramManager) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_audioManager) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_advancedData) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_fpsMonitor) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_ramMonitor) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_audioMonitor) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::GraphyManager, ___m_modulePresetState) == 0x140, "Offset mismatch!");

} // namespace Tayx::Graphy
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__LookForAudioListener, "Tayx.Graphy", "GraphyManager/LookForAudioListener");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__Mode, "Tayx.Graphy", "GraphyManager/Mode");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__ModulePosition, "Tayx.Graphy", "GraphyManager/ModulePosition");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__ModulePreset, "Tayx.Graphy", "GraphyManager/ModulePreset");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__ModuleState, "Tayx.Graphy", "GraphyManager/ModuleState");
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::__GraphyManager__ModuleType, "Tayx.Graphy", "GraphyManager/ModuleType");
NEED_NO_BOX(::Tayx::Graphy::GraphyManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyManager*, "Tayx.Graphy", "GraphyManager");
