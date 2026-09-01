#pragma once
// IWYU pragma private; include "GlobalNamespace\QuestBoostController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestBoostController)
namespace GlobalNamespace {
class BoolCvar;
}
namespace GlobalNamespace {
class FloatCvar;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class IPerformanceBoostController;
}
namespace GlobalNamespace {
class IntCvar;
}
namespace GlobalNamespace {
struct QuestBoostController_BoostModeReason;
}
// Forward declare root types
namespace GlobalNamespace {
struct QuestBoostController_BoostModeReason;
}
namespace GlobalNamespace {
class QuestBoostController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::QuestBoostController_BoostModeReason);
MARK_REF_T(::GlobalNamespace::QuestBoostController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuestBoostController_BoostModeReason, "", "QuestBoostController/BoostModeReason");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuestBoostController*, "", "QuestBoostController");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: QuestBoostController/BoostModeReason
struct CORDL_TYPE QuestBoostController_BoostModeReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QuestBoostController_BoostModeReason_Unwrapped
  enum struct __QuestBoostController_BoostModeReason_Unwrapped : int32_t {
    __E_DontBoost = static_cast<int32_t>(0x0),
    __E_StartupWindow = static_cast<int32_t>(0x2),
    __E_Loading = static_cast<int32_t>(0x4),
    __E_FrameTimeThreshold = static_cast<int32_t>(0x8),
    __E_Requested = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QuestBoostController_BoostModeReason_Unwrapped() const noexcept {
    return static_cast<__QuestBoostController_BoostModeReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestBoostController_BoostModeReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QuestBoostController_BoostModeReason(int32_t value__) noexcept;

  /// @brief Field DontBoost value: I32(0)
  static ::GlobalNamespace::QuestBoostController_BoostModeReason const DontBoost;

  /// @brief Field FrameTimeThreshold value: I32(8)
  static ::GlobalNamespace::QuestBoostController_BoostModeReason const FrameTimeThreshold;

  /// @brief Field Loading value: I32(4)
  static ::GlobalNamespace::QuestBoostController_BoostModeReason const Loading;

  /// @brief Field Requested value: I32(16)
  static ::GlobalNamespace::QuestBoostController_BoostModeReason const Requested;

  /// @brief Field StartupWindow value: I32(2)
  static ::GlobalNamespace::QuestBoostController_BoostModeReason const StartupWindow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6627 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuestBoostController_BoostModeReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QuestBoostController_BoostModeReason) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::ProcessorPerformanceLevel, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuestBoostController
class CORDL_TYPE QuestBoostController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoostModeReason = ::GlobalNamespace::QuestBoostController_BoostModeReason;

  /// @brief Field _allowBoost, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__allowBoost, put = setStaticF__allowBoost)) ::GlobalNamespace::BoolCvar* _allowBoost;

  /// @brief Field _baseCPULevel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__baseCPULevel, put = setStaticF__baseCPULevel)) ::GlobalNamespace::IntCvar* _baseCPULevel;

  /// @brief Field _boostEnabled, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__boostEnabled, put = __cordl_internal_set__boostEnabled)) bool _boostEnabled;

  /// @brief Field _boostRequested, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__boostRequested, put = __cordl_internal_set__boostRequested)) bool _boostRequested;

  /// @brief Field _boostTime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__boostTime, put = __cordl_internal_set__boostTime)) float_t _boostTime;

  /// @brief Field _dutyCycle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__dutyCycle, put = setStaticF__dutyCycle)) ::GlobalNamespace::FloatCvar* _dutyCycle;

  /// @brief Field _enableLogging, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__enableLogging, put = setStaticF__enableLogging)) ::GlobalNamespace::BoolCvar* _enableLogging;

  /// @brief Field _frameTimeHistory, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__frameTimeHistory, put = __cordl_internal_set__frameTimeHistory)) ::ArrayW<double_t> _frameTimeHistory;

  /// @brief Field _frameTimeHistoryIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__frameTimeHistoryIndex, put = __cordl_internal_set__frameTimeHistoryIndex)) int32_t _frameTimeHistoryIndex;

  /// @brief Field _frameTimeHistorySize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__frameTimeHistorySize, put = setStaticF__frameTimeHistorySize)) ::GlobalNamespace::IntCvar* _frameTimeHistorySize;

  /// @brief Field _frameTimeThreshold, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__frameTimeThreshold, put = setStaticF__frameTimeThreshold)) ::GlobalNamespace::FloatCvar* _frameTimeThreshold;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gpuLevel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__gpuLevel, put = setStaticF__gpuLevel)) ::GlobalNamespace::IntCvar* _gpuLevel;

  /// @brief Field _margin, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__margin, put = setStaticF__margin)) ::GlobalNamespace::FloatCvar* _margin;

  /// @brief Field _maxDuration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__maxDuration, put = setStaticF__maxDuration)) ::GlobalNamespace::FloatCvar* _maxDuration;

  /// @brief Field _startupWindow, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__startupWindow, put = setStaticF__startupWindow)) ::GlobalNamespace::FloatCvar* _startupWindow;

  /// @brief Field currentCPUPerformanceLevel, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_currentCPUPerformanceLevel,
                      put = __cordl_internal_set_currentCPUPerformanceLevel)) ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel currentCPUPerformanceLevel;

  /// @brief Field currentGPUPerformanceLevel, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_currentGPUPerformanceLevel,
                      put = __cordl_internal_set_currentGPUPerformanceLevel)) ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel currentGPUPerformanceLevel;

  /// @brief Convert operator to "::GlobalNamespace::IPerformanceBoostController"
  constexpr operator ::GlobalNamespace::IPerformanceBoostController*() noexcept;

  /// @brief Method AskForBoost, addr 0x58f8e38, size 0xc, virtual true, abstract: false, final true
  inline void AskForBoost();

  /// @brief Method Awake, addr 0x58f8e44, size 0xd0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method EnableBoost, addr 0x58f9344, size 0x3a4, virtual false, abstract: false, final false
  inline void EnableBoost(::GlobalNamespace::QuestBoostController_BoostModeReason boostModeReason);

  /// @brief Method GetMaxFrameTimeInHistory, addr 0x58f9300, size 0x44, virtual false, abstract: false, final false
  inline double_t GetMaxFrameTimeInHistory();

  static inline ::GlobalNamespace::QuestBoostController* New_ctor();

  /// @brief Method Update, addr 0x58f8f14, size 0x234, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateFrameTimeHistory, addr 0x58f9148, size 0x1b8, virtual false, abstract: false, final false
  inline void UpdateFrameTimeHistory();

  constexpr bool const& __cordl_internal_get__boostEnabled() const;

  constexpr bool& __cordl_internal_get__boostEnabled();

  constexpr bool const& __cordl_internal_get__boostRequested() const;

  constexpr bool& __cordl_internal_get__boostRequested();

  constexpr float_t const& __cordl_internal_get__boostTime() const;

  constexpr float_t& __cordl_internal_get__boostTime();

  constexpr ::ArrayW<double_t> const& __cordl_internal_get__frameTimeHistory() const;

  constexpr ::ArrayW<double_t>& __cordl_internal_get__frameTimeHistory();

  constexpr int32_t const& __cordl_internal_get__frameTimeHistoryIndex() const;

  constexpr int32_t& __cordl_internal_get__frameTimeHistoryIndex();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const& __cordl_internal_get_currentCPUPerformanceLevel() const;

  constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel& __cordl_internal_get_currentCPUPerformanceLevel();

  constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const& __cordl_internal_get_currentGPUPerformanceLevel() const;

  constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel& __cordl_internal_get_currentGPUPerformanceLevel();

  constexpr void __cordl_internal_set__boostEnabled(bool value);

  constexpr void __cordl_internal_set__boostRequested(bool value);

  constexpr void __cordl_internal_set__boostTime(float_t value);

  constexpr void __cordl_internal_set__frameTimeHistory(::ArrayW<double_t> value);

  constexpr void __cordl_internal_set__frameTimeHistoryIndex(int32_t value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_currentCPUPerformanceLevel(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel value);

  constexpr void __cordl_internal_set_currentGPUPerformanceLevel(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel value);

  /// @brief Method .ctor, addr 0x58f96e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BoolCvar* getStaticF__allowBoost();

  static inline ::GlobalNamespace::IntCvar* getStaticF__baseCPULevel();

  static inline ::GlobalNamespace::FloatCvar* getStaticF__dutyCycle();

  static inline ::GlobalNamespace::BoolCvar* getStaticF__enableLogging();

  static inline ::GlobalNamespace::IntCvar* getStaticF__frameTimeHistorySize();

  static inline ::GlobalNamespace::FloatCvar* getStaticF__frameTimeThreshold();

  static inline ::GlobalNamespace::IntCvar* getStaticF__gpuLevel();

  static inline ::GlobalNamespace::FloatCvar* getStaticF__margin();

  static inline ::GlobalNamespace::FloatCvar* getStaticF__maxDuration();

  static inline ::GlobalNamespace::FloatCvar* getStaticF__startupWindow();

  /// @brief Convert to "::GlobalNamespace::IPerformanceBoostController"
  constexpr ::GlobalNamespace::IPerformanceBoostController* i___GlobalNamespace__IPerformanceBoostController() noexcept;

  static inline void setStaticF__allowBoost(::GlobalNamespace::BoolCvar* value);

  static inline void setStaticF__baseCPULevel(::GlobalNamespace::IntCvar* value);

  static inline void setStaticF__dutyCycle(::GlobalNamespace::FloatCvar* value);

  static inline void setStaticF__enableLogging(::GlobalNamespace::BoolCvar* value);

  static inline void setStaticF__frameTimeHistorySize(::GlobalNamespace::IntCvar* value);

  static inline void setStaticF__frameTimeThreshold(::GlobalNamespace::FloatCvar* value);

  static inline void setStaticF__gpuLevel(::GlobalNamespace::IntCvar* value);

  static inline void setStaticF__margin(::GlobalNamespace::FloatCvar* value);

  static inline void setStaticF__maxDuration(::GlobalNamespace::FloatCvar* value);

  static inline void setStaticF__startupWindow(::GlobalNamespace::FloatCvar* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestBoostController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuestBoostController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuestBoostController(QuestBoostController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuestBoostController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuestBoostController(QuestBoostController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6628 };

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _boostEnabled, offset: 0x28, size: 0x1, def value: None
  bool ____boostEnabled;

  /// @brief Field _boostRequested, offset: 0x29, size: 0x1, def value: None
  bool ____boostRequested;

  /// @brief Field _boostTime, offset: 0x2c, size: 0x4, def value: None
  float_t ____boostTime;

  /// @brief Field _frameTimeHistory, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<double_t> ____frameTimeHistory;

  /// @brief Field _frameTimeHistoryIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ____frameTimeHistoryIndex;

  /// @brief Field currentCPUPerformanceLevel, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel ___currentCPUPerformanceLevel;

  /// @brief Field currentGPUPerformanceLevel, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel ___currentGPUPerformanceLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuestBoostController, ____gameScenesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestBoostController, ____boostEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestBoostController, ____boostRequested) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestBoostController, ____boostTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestBoostController, ____frameTimeHistory) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestBoostController, ____frameTimeHistoryIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestBoostController, ___currentCPUPerformanceLevel) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestBoostController, ___currentGPUPerformanceLevel) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QuestBoostController) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
