#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestBoostController.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__QuestBoostController_def.hpp"
#include "GlobalNamespace/zzzz__BoolCvar_def.hpp"
#include "GlobalNamespace/zzzz__FloatCvar_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__IPerformanceBoostController_def.hpp"
#include "GlobalNamespace/zzzz__IntCvar_def.hpp"
#include "GlobalNamespace/zzzz__QuestBoostController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::QuestBoostController_BoostModeReason::QuestBoostController_BoostModeReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestBoostController_BoostModeReason::QuestBoostController_BoostModeReason() {}
constexpr ::GlobalNamespace::QuestBoostController_BoostModeReason GlobalNamespace::QuestBoostController_BoostModeReason::DontBoost{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::QuestBoostController_BoostModeReason GlobalNamespace::QuestBoostController_BoostModeReason::StartupWindow{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::QuestBoostController_BoostModeReason GlobalNamespace::QuestBoostController_BoostModeReason::Loading{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::QuestBoostController_BoostModeReason GlobalNamespace::QuestBoostController_BoostModeReason::FrameTimeThreshold{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::QuestBoostController_BoostModeReason GlobalNamespace::QuestBoostController_BoostModeReason::Requested{ static_cast<int32_t>(0x10) };
//  Writing Method size for method: ::GlobalNamespace::QuestBoostController.AskForBoost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestBoostController::*)()>(&::GlobalNamespace::QuestBoostController::AskForBoost)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58f72b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "AskForBoost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestBoostController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestBoostController::*)()>(&::GlobalNamespace::QuestBoostController::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58f72c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestBoostController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestBoostController::*)()>(&::GlobalNamespace::QuestBoostController::Update)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x58f7390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestBoostController.EnableBoost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestBoostController::*)(::GlobalNamespace::QuestBoostController_BoostModeReason)>(
    &::GlobalNamespace::QuestBoostController::EnableBoost)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x58f77c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(),
                                                                                           { "EnableBoost", {}, { ::i2c::type_of<::GlobalNamespace::QuestBoostController_BoostModeReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestBoostController.UpdateFrameTimeHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestBoostController::*)()>(&::GlobalNamespace::QuestBoostController::UpdateFrameTimeHistory)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x58f75c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "UpdateFrameTimeHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestBoostController.GetMaxFrameTimeInHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::QuestBoostController::*)()>(&::GlobalNamespace::QuestBoostController::GetMaxFrameTimeInHistory)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58f777c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "GetMaxFrameTimeInHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestBoostController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuestBoostController::*)()>(&::GlobalNamespace::QuestBoostController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f7b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::QuestBoostController::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::QuestBoostController::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::QuestBoostController::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr bool& GlobalNamespace::QuestBoostController::__cordl_internal_get__boostEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostEnabled;
}
constexpr bool const& GlobalNamespace::QuestBoostController::__cordl_internal_get__boostEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostEnabled;
}
constexpr void GlobalNamespace::QuestBoostController::__cordl_internal_set__boostEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boostEnabled = value;
}
constexpr bool& GlobalNamespace::QuestBoostController::__cordl_internal_get__boostRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostRequested;
}
constexpr bool const& GlobalNamespace::QuestBoostController::__cordl_internal_get__boostRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostRequested;
}
constexpr void GlobalNamespace::QuestBoostController::__cordl_internal_set__boostRequested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boostRequested = value;
}
constexpr float_t& GlobalNamespace::QuestBoostController::__cordl_internal_get__boostTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostTime;
}
constexpr float_t const& GlobalNamespace::QuestBoostController::__cordl_internal_get__boostTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostTime;
}
constexpr void GlobalNamespace::QuestBoostController::__cordl_internal_set__boostTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boostTime = value;
}
constexpr ::ArrayW<double_t>& GlobalNamespace::QuestBoostController::__cordl_internal_get__frameTimeHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameTimeHistory;
}
constexpr ::ArrayW<double_t> const& GlobalNamespace::QuestBoostController::__cordl_internal_get__frameTimeHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameTimeHistory;
}
constexpr void GlobalNamespace::QuestBoostController::__cordl_internal_set__frameTimeHistory(::ArrayW<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameTimeHistory = value;
}
constexpr int32_t& GlobalNamespace::QuestBoostController::__cordl_internal_get__frameTimeHistoryIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameTimeHistoryIndex;
}
constexpr int32_t const& GlobalNamespace::QuestBoostController::__cordl_internal_get__frameTimeHistoryIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameTimeHistoryIndex;
}
constexpr void GlobalNamespace::QuestBoostController::__cordl_internal_set__frameTimeHistoryIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameTimeHistoryIndex = value;
}
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel& GlobalNamespace::QuestBoostController::__cordl_internal_get_currentCPUPerformanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentCPUPerformanceLevel;
}
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const& GlobalNamespace::QuestBoostController::__cordl_internal_get_currentCPUPerformanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentCPUPerformanceLevel;
}
constexpr void GlobalNamespace::QuestBoostController::__cordl_internal_set_currentCPUPerformanceLevel(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentCPUPerformanceLevel = value;
}
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel& GlobalNamespace::QuestBoostController::__cordl_internal_get_currentGPUPerformanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentGPUPerformanceLevel;
}
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const& GlobalNamespace::QuestBoostController::__cordl_internal_get_currentGPUPerformanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentGPUPerformanceLevel;
}
constexpr void GlobalNamespace::QuestBoostController::__cordl_internal_set_currentGPUPerformanceLevel(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentGPUPerformanceLevel = value;
}
inline void GlobalNamespace::QuestBoostController::setStaticF__allowBoost(::GlobalNamespace::BoolCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolCvar*, "_allowBoost", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::BoolCvar*>(value));
}
inline ::GlobalNamespace::BoolCvar* GlobalNamespace::QuestBoostController::getStaticF__allowBoost() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolCvar*, "_allowBoost", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__enableLogging(::GlobalNamespace::BoolCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolCvar*, "_enableLogging", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::BoolCvar*>(value));
}
inline ::GlobalNamespace::BoolCvar* GlobalNamespace::QuestBoostController::getStaticF__enableLogging() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolCvar*, "_enableLogging", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__dutyCycle(::GlobalNamespace::FloatCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FloatCvar*, "_dutyCycle", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::FloatCvar*>(value));
}
inline ::GlobalNamespace::FloatCvar* GlobalNamespace::QuestBoostController::getStaticF__dutyCycle() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FloatCvar*, "_dutyCycle", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__maxDuration(::GlobalNamespace::FloatCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FloatCvar*, "_maxDuration", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::FloatCvar*>(value));
}
inline ::GlobalNamespace::FloatCvar* GlobalNamespace::QuestBoostController::getStaticF__maxDuration() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FloatCvar*, "_maxDuration", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__margin(::GlobalNamespace::FloatCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FloatCvar*, "_margin", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::FloatCvar*>(value));
}
inline ::GlobalNamespace::FloatCvar* GlobalNamespace::QuestBoostController::getStaticF__margin() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FloatCvar*, "_margin", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__startupWindow(::GlobalNamespace::FloatCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FloatCvar*, "_startupWindow", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::FloatCvar*>(value));
}
inline ::GlobalNamespace::FloatCvar* GlobalNamespace::QuestBoostController::getStaticF__startupWindow() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FloatCvar*, "_startupWindow", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__frameTimeThreshold(::GlobalNamespace::FloatCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FloatCvar*, "_frameTimeThreshold", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::FloatCvar*>(value));
}
inline ::GlobalNamespace::FloatCvar* GlobalNamespace::QuestBoostController::getStaticF__frameTimeThreshold() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FloatCvar*, "_frameTimeThreshold", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__frameTimeHistorySize(::GlobalNamespace::IntCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::IntCvar*, "_frameTimeHistorySize", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::IntCvar*>(value));
}
inline ::GlobalNamespace::IntCvar* GlobalNamespace::QuestBoostController::getStaticF__frameTimeHistorySize() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::IntCvar*, "_frameTimeHistorySize", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__baseCPULevel(::GlobalNamespace::IntCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::IntCvar*, "_baseCPULevel", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::IntCvar*>(value));
}
inline ::GlobalNamespace::IntCvar* GlobalNamespace::QuestBoostController::getStaticF__baseCPULevel() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::IntCvar*, "_baseCPULevel", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::setStaticF__gpuLevel(::GlobalNamespace::IntCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::IntCvar*, "_gpuLevel", ::GlobalNamespace::QuestBoostController*>(std::forward<::GlobalNamespace::IntCvar*>(value));
}
inline ::GlobalNamespace::IntCvar* GlobalNamespace::QuestBoostController::getStaticF__gpuLevel() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::IntCvar*, "_gpuLevel", ::GlobalNamespace::QuestBoostController*>();
}
inline void GlobalNamespace::QuestBoostController::AskForBoost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "AskForBoost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::QuestBoostController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::QuestBoostController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::QuestBoostController::EnableBoost(::GlobalNamespace::QuestBoostController_BoostModeReason boostModeReason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(),
                                                                                         { "EnableBoost", {}, { ::i2c::type_of<::GlobalNamespace::QuestBoostController_BoostModeReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boostModeReason);
}
inline void GlobalNamespace::QuestBoostController::UpdateFrameTimeHistory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "UpdateFrameTimeHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t GlobalNamespace::QuestBoostController::GetMaxFrameTimeInHistory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { "GetMaxFrameTimeInHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::QuestBoostController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuestBoostController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuestBoostController* GlobalNamespace::QuestBoostController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuestBoostController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IPerformanceBoostController"
constexpr GlobalNamespace::QuestBoostController::operator ::GlobalNamespace::IPerformanceBoostController*() noexcept {
  return static_cast<::GlobalNamespace::IPerformanceBoostController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPerformanceBoostController"
constexpr ::GlobalNamespace::IPerformanceBoostController* GlobalNamespace::QuestBoostController::i___GlobalNamespace__IPerformanceBoostController() noexcept {
  return static_cast<::GlobalNamespace::IPerformanceBoostController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestBoostController::QuestBoostController() {}
