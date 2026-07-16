#pragma once
// IWYU pragma private; include "GlobalNamespace/CenterStageScreenController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CenterStageScreenController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__CountdownController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterScreenLayoutAnimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.get_countdownShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CenterStageScreenController::*)()>(&::GlobalNamespace::CenterStageScreenController::get_countdownShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1492c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "get_countdownShown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.set_countdownShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(bool)>(&::GlobalNamespace::CenterStageScreenController::set_countdownShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a14934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "set_countdownShown", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(bool)>(&::GlobalNamespace::CenterStageScreenController::Setup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a1493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "Setup", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.Show
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)()>(&::GlobalNamespace::CenterStageScreenController::Show)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a1496c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "Show", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)()>(&::GlobalNamespace::CenterStageScreenController::Hide)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5a14c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.ShowCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(int64_t)>(&::GlobalNamespace::CenterStageScreenController::ShowCountdown)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a14dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "ShowCountdown", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.HideCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(bool)>(&::GlobalNamespace::CenterStageScreenController::HideCountdown)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a14db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "HideCountdown", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.SetCountdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(int64_t)>(&::GlobalNamespace::CenterStageScreenController::SetCountdownEndTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a14e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "SetCountdownEndTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.ShowCountdownColorPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(bool)>(&::GlobalNamespace::CenterStageScreenController::ShowCountdownColorPreset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a14e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "ShowCountdownColorPreset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.ShowLobbyColorPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(bool)>(&::GlobalNamespace::CenterStageScreenController::ShowLobbyColorPreset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a14b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "ShowLobbyColorPreset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::CenterStageScreenController::HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a14ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(),
                                                { "HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController.SetNextGameplaySetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::CenterStageScreenController::SetNextGameplaySetupData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a14b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(),
                                                                                           { "SetNextGameplaySetupData", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CenterStageScreenController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CenterStageScreenController::*)()>(&::GlobalNamespace::CenterStageScreenController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a14ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__defaultMenuLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMenuLightsPreset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__defaultMenuLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMenuLightsPreset;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__defaultMenuLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultMenuLightsPreset = value;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__lobbyLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyLightsPreset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__lobbyLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyLightsPreset;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__lobbyLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyLightsPreset = value;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__countdownMenuLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownMenuLightsPreset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__countdownMenuLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownMenuLightsPreset;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__countdownMenuLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownMenuLightsPreset = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView>& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__beatmapSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView> const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__beatmapSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSelectionView;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::BeatmapSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapSelectionView = value;
}
constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView>& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__modifiersSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView> const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__modifiersSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersSelectionView;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::ModifiersSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiersSelectionView = value;
}
constexpr ::UnityW<::GlobalNamespace::CountdownController>& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__countdownController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownController;
}
constexpr ::UnityW<::GlobalNamespace::CountdownController> const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__countdownController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownController;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__countdownController(::UnityW<::GlobalNamespace::CountdownController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownController = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator>& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__multiplayerLobbyCenterScreenLayoutAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyCenterScreenLayoutAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator> const&
GlobalNamespace::CenterStageScreenController::__cordl_internal_get__multiplayerLobbyCenterScreenLayoutAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyCenterScreenLayoutAnimator;
}
constexpr void
GlobalNamespace::CenterStageScreenController::__cordl_internal_set__multiplayerLobbyCenterScreenLayoutAnimator(::UnityW<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLobbyCenterScreenLayoutAnimator = value;
}
constexpr ::GlobalNamespace::ILobbyGameStateController*& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__lobbyGameStateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr ::GlobalNamespace::ILobbyGameStateController* const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__lobbyGameStateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyGameStateController = value;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__menuLightsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__menuLightsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuLightsManager = value;
}
constexpr bool& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__countdownShown_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownShown_k__BackingField;
}
constexpr bool const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__countdownShown_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownShown_k__BackingField;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__countdownShown_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownShown_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__countdownEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownEndTime;
}
constexpr int64_t const& GlobalNamespace::CenterStageScreenController::__cordl_internal_get__countdownEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownEndTime;
}
constexpr void GlobalNamespace::CenterStageScreenController::__cordl_internal_set__countdownEndTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownEndTime = value;
}
inline bool GlobalNamespace::CenterStageScreenController::get_countdownShown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "get_countdownShown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CenterStageScreenController::set_countdownShown(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "set_countdownShown", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CenterStageScreenController::Setup(bool showModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "Setup", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showModifiers);
}
inline void GlobalNamespace::CenterStageScreenController::Show() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "Show", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CenterStageScreenController::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CenterStageScreenController::ShowCountdown(int64_t countdownEndTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "ShowCountdown", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CenterStageScreenController::HideCountdown(bool instant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "HideCountdown", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instant);
}
inline void GlobalNamespace::CenterStageScreenController::SetCountdownEndTime(int64_t countdownEndTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "SetCountdownEndTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CenterStageScreenController::ShowCountdownColorPreset(bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "ShowCountdownColorPreset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated);
}
inline void GlobalNamespace::CenterStageScreenController::ShowLobbyColorPreset(bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { "ShowLobbyColorPreset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated);
}
inline void GlobalNamespace::CenterStageScreenController::HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(),
                                              { "HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::CenterStageScreenController::SetNextGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(),
                                                                                         { "SetNextGameplaySetupData", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::CenterStageScreenController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CenterStageScreenController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CenterStageScreenController* GlobalNamespace::CenterStageScreenController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CenterStageScreenController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CenterStageScreenController::CenterStageScreenController() {}
