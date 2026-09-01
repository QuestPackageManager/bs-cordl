#pragma once
// IWYU pragma private; include "Tayx\Graphy\GraphyDebugger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_impl.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamMonitor_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable::GraphyDebugger_DebugVariable(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable::GraphyDebugger_DebugVariable() {}
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable Tayx::Graphy::GraphyDebugger_DebugVariable::Fps{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable Tayx::Graphy::GraphyDebugger_DebugVariable::Fps_Min{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable Tayx::Graphy::GraphyDebugger_DebugVariable::Fps_Max{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable Tayx::Graphy::GraphyDebugger_DebugVariable::Fps_Avg{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable Tayx::Graphy::GraphyDebugger_DebugVariable::Ram_Allocated{ static_cast<int32_t>(0x4) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable Tayx::Graphy::GraphyDebugger_DebugVariable::Ram_Reserved{ static_cast<int32_t>(0x5) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable Tayx::Graphy::GraphyDebugger_DebugVariable::Ram_Mono{ static_cast<int32_t>(0x6) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugVariable Tayx::Graphy::GraphyDebugger_DebugVariable::Audio_DB{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyDebugger_DebugComparer::GraphyDebugger_DebugComparer(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger_DebugComparer::GraphyDebugger_DebugComparer() {}
constexpr ::Tayx::Graphy::GraphyDebugger_DebugComparer Tayx::Graphy::GraphyDebugger_DebugComparer::Less_than{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugComparer Tayx::Graphy::GraphyDebugger_DebugComparer::Equals_or_less_than{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugComparer Tayx::Graphy::GraphyDebugger_DebugComparer::Equals{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugComparer Tayx::Graphy::GraphyDebugger_DebugComparer::Equals_or_greater_than{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::GraphyDebugger_DebugComparer Tayx::Graphy::GraphyDebugger_DebugComparer::Greater_than{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation::GraphyDebugger_ConditionEvaluation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation::GraphyDebugger_ConditionEvaluation() {}
constexpr ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation Tayx::Graphy::GraphyDebugger_ConditionEvaluation::All_conditions_must_be_met{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation Tayx::Graphy::GraphyDebugger_ConditionEvaluation::Only_one_condition_has_to_be_met{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyDebugger_MessageType::GraphyDebugger_MessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger_MessageType::GraphyDebugger_MessageType() {}
constexpr ::Tayx::Graphy::GraphyDebugger_MessageType Tayx::Graphy::GraphyDebugger_MessageType::Log{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::GraphyDebugger_MessageType Tayx::Graphy::GraphyDebugger_MessageType::Warning{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::GraphyDebugger_MessageType Tayx::Graphy::GraphyDebugger_MessageType::Error{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "Variable", ty: "::Tayx::Graphy::GraphyDebugger_DebugVariable", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comparer", ty:
// "::Tayx::Graphy::GraphyDebugger_DebugComparer", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::GraphyDebugger_DebugCondition::GraphyDebugger_DebugCondition(::Tayx::Graphy::GraphyDebugger_DebugVariable Variable, ::Tayx::Graphy::GraphyDebugger_DebugComparer Comparer,
                                                                                       float_t Value) noexcept {
  this->Variable = Variable;
  this->Comparer = Comparer;
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger_DebugCondition::GraphyDebugger_DebugCondition() {}
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger_DebugPacket.get_Check
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyDebugger_DebugPacket::*)()>(&::Tayx::Graphy::GraphyDebugger_DebugPacket::get_Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6437f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(), { "get_Check", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger_DebugPacket.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger_DebugPacket::*)()>(&::Tayx::Graphy::GraphyDebugger_DebugPacket::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64377cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger_DebugPacket.Executed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger_DebugPacket::*)()>(&::Tayx::Graphy::GraphyDebugger_DebugPacket::Executed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6437f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(), { "Executed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger_DebugPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger_DebugPacket::*)()>(&::Tayx::Graphy::GraphyDebugger_DebugPacket::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6436df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Active;
}
constexpr bool const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Active;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_Active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Active = value;
}
constexpr int32_t& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr int32_t const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_Id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
constexpr bool& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_ExecuteOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExecuteOnce;
}
constexpr bool const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_ExecuteOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExecuteOnce;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_ExecuteOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExecuteOnce = value;
}
constexpr float_t& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_InitSleepTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitSleepTime;
}
constexpr float_t const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_InitSleepTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitSleepTime;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_InitSleepTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitSleepTime = value;
}
constexpr float_t& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_ExecuteSleepTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExecuteSleepTime;
}
constexpr float_t const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_ExecuteSleepTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExecuteSleepTime;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_ExecuteSleepTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExecuteSleepTime = value;
}
constexpr ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_ConditionEvaluation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConditionEvaluation;
}
constexpr ::Tayx::Graphy::GraphyDebugger_ConditionEvaluation const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_ConditionEvaluation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConditionEvaluation;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_ConditionEvaluation(::Tayx::Graphy::GraphyDebugger_ConditionEvaluation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConditionEvaluation = value;
}
constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>*& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_DebugConditions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugConditions;
}
constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_DebugConditions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugConditions;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_DebugConditions(::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DebugConditions = value;
}
constexpr ::Tayx::Graphy::GraphyDebugger_MessageType& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_MessageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageType;
}
constexpr ::Tayx::Graphy::GraphyDebugger_MessageType const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_MessageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageType;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_MessageType(::Tayx::Graphy::GraphyDebugger_MessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MessageType = value;
}
constexpr ::StringW& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_Message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Message;
}
constexpr ::StringW const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_Message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Message;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_Message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Message = value;
}
constexpr bool& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_TakeScreenshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TakeScreenshot;
}
constexpr bool const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_TakeScreenshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TakeScreenshot;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_TakeScreenshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TakeScreenshot = value;
}
constexpr ::StringW& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_ScreenshotFileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ScreenshotFileName;
}
constexpr ::StringW const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_ScreenshotFileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ScreenshotFileName;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_ScreenshotFileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ScreenshotFileName = value;
}
constexpr bool& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_DebugBreak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugBreak;
}
constexpr bool const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_DebugBreak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugBreak;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_DebugBreak(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DebugBreak = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_UnityEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnityEvents;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_UnityEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnityEvents;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_UnityEvents(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UnityEvents = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_Callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callbacks;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_Callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callbacks;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_Callbacks(::System::Collections::Generic::List_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Callbacks = value;
}
constexpr bool& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_canBeChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canBeChecked;
}
constexpr bool const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_canBeChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canBeChecked;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_canBeChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canBeChecked = value;
}
constexpr bool& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_executed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executed;
}
constexpr bool const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_executed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executed;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_executed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___executed = value;
}
constexpr float_t& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_timePassed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePassed;
}
constexpr float_t const& Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_get_timePassed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePassed;
}
constexpr void Tayx::Graphy::GraphyDebugger_DebugPacket::__cordl_internal_set_timePassed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timePassed = value;
}
inline bool Tayx::Graphy::GraphyDebugger_DebugPacket::get_Check() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(), { "get_Check", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger_DebugPacket::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger_DebugPacket::Executed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(), { "Executed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger_DebugPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::GraphyDebugger_DebugPacket* Tayx::Graphy::GraphyDebugger_DebugPacket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::GraphyDebugger_DebugPacket*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger_DebugPacket::GraphyDebugger_DebugPacket() {}
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger___c::*)()>(&::Tayx::Graphy::GraphyDebugger___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6437fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger___c._CheckDebugPackets_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyDebugger___c::*)(::Tayx::Graphy::GraphyDebugger_DebugPacket*)>(
    &::Tayx::Graphy::GraphyDebugger___c::_CheckDebugPackets_b__24_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6437fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c*>(),
                                                                                           { "<CheckDebugPackets>b__24_0", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::GraphyDebugger___c::setStaticF___9(::Tayx::Graphy::GraphyDebugger___c* value) {
  ::cordl_internals::setStaticField<::Tayx::Graphy::GraphyDebugger___c*, "<>9", ::Tayx::Graphy::GraphyDebugger___c*>(std::forward<::Tayx::Graphy::GraphyDebugger___c*>(value));
}
inline ::Tayx::Graphy::GraphyDebugger___c* Tayx::Graphy::GraphyDebugger___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Tayx::Graphy::GraphyDebugger___c*, "<>9", ::Tayx::Graphy::GraphyDebugger___c*>();
}
inline void Tayx::Graphy::GraphyDebugger___c::setStaticF___9__24_0(::System::Predicate_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>*, "<>9__24_0", ::Tayx::Graphy::GraphyDebugger___c*>(
      std::forward<::System::Predicate_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>*>(value));
}
inline ::System::Predicate_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* Tayx::Graphy::GraphyDebugger___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>*, "<>9__24_0", ::Tayx::Graphy::GraphyDebugger___c*>();
}
inline void Tayx::Graphy::GraphyDebugger___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyDebugger___c::_CheckDebugPackets_b__24_0(::Tayx::Graphy::GraphyDebugger_DebugPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c*>(),
                                                                                         { "<CheckDebugPackets>b__24_0", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet);
}
inline ::Tayx::Graphy::GraphyDebugger___c* Tayx::Graphy::GraphyDebugger___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::GraphyDebugger___c*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger___c::GraphyDebugger___c() {}
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::*)()>(&::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64372d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0._GetFirstDebugPacketWithId_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::*)(::Tayx::Graphy::GraphyDebugger_DebugPacket*)>(
    &::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::_GetFirstDebugPacketWithId_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6437fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0*>(),
                                                             { "<GetFirstDebugPacketWithId>b__0", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::__cordl_internal_get_packetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr int32_t const& Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::__cordl_internal_get_packetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr void Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::__cordl_internal_set_packetId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packetId = value;
}
inline void Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::_GetFirstDebugPacketWithId_b__0(::Tayx::Graphy::GraphyDebugger_DebugPacket* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0*>(),
                                                           { "<GetFirstDebugPacketWithId>b__0", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0* Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger___c__DisplayClass18_0::GraphyDebugger___c__DisplayClass18_0() {}
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::*)()>(&::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64373bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0._GetAllDebugPacketsWithId_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::*)(::Tayx::Graphy::GraphyDebugger_DebugPacket*)>(
    &::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::_GetAllDebugPacketsWithId_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6438000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0*>(),
                                                             { "<GetAllDebugPacketsWithId>b__0", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::__cordl_internal_get_packetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr int32_t const& Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::__cordl_internal_get_packetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr void Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::__cordl_internal_set_packetId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packetId = value;
}
inline void Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::_GetAllDebugPacketsWithId_b__0(::Tayx::Graphy::GraphyDebugger_DebugPacket* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0*>(),
                                                                                         { "<GetAllDebugPacketsWithId>b__0", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0* Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger___c__DisplayClass19_0::GraphyDebugger___c__DisplayClass19_0() {}
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::*)()>(&::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643754c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0._RemoveAllDebugPacketsWithId_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::*)(::Tayx::Graphy::GraphyDebugger_DebugPacket*)>(
    &::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::_RemoveAllDebugPacketsWithId_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6438020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0*>(),
                                                             { "<RemoveAllDebugPacketsWithId>b__0", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::__cordl_internal_get_packetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr int32_t const& Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::__cordl_internal_get_packetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr void Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::__cordl_internal_set_packetId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packetId = value;
}
inline void Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::_RemoveAllDebugPacketsWithId_b__0(::Tayx::Graphy::GraphyDebugger_DebugPacket* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0*>(),
                                                           { "<RemoveAllDebugPacketsWithId>b__0", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0* Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger___c__DisplayClass21_0::GraphyDebugger___c__DisplayClass21_0() {}
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6436678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x643672c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64367d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::GraphyDebugger_DebugPacket*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6436ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "AddNewDebugPacket", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::Tayx::Graphy::GraphyDebugger_DebugCondition, ::Tayx::Graphy::GraphyDebugger_MessageType,
                                                                                                ::StringW, bool, ::System::Action*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6436c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                                         { "AddNewDebugPacket",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugCondition>(), ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_MessageType>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>*,
                                                                                                ::Tayx::Graphy::GraphyDebugger_MessageType, ::StringW, bool, ::System::Action*)>(
    &::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6436efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                            { "AddNewDebugPacket",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>*>(),
                                ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_MessageType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::Tayx::Graphy::GraphyDebugger_DebugCondition, ::Tayx::Graphy::GraphyDebugger_MessageType,
                                                                                                ::StringW, bool, ::System::Collections::Generic::List_1<::System::Action*>*)>(
    &::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6437018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                                         { "AddNewDebugPacket",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugCondition>(), ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_MessageType>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Action*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>*, ::Tayx::Graphy::GraphyDebugger_MessageType,
                                                         ::StringW, bool, ::System::Collections::Generic::List_1<::System::Action*>*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x643714c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                                                             { "AddNewDebugPacket",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>*>(),
                                                                 ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_MessageType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::Action*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetFirstDebugPacketWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tayx::Graphy::GraphyDebugger_DebugPacket* (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(
    &::Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64371fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "GetFirstDebugPacketWithId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetAllDebugPacketsWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(
    &::Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x64372dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "GetAllDebugPacketsWithId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.RemoveFirstDebugPacketWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64373c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "RemoveFirstDebugPacketWithId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.RemoveAllDebugPacketsWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x643745c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "RemoveAllDebugPacketsWithId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddCallbackToFirstDebugPacketWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::System::Action*, int32_t)>(&::Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6437550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "AddCallbackToFirstDebugPacketWithId", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddCallbackToAllDebugPacketWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::System::Action*, int32_t)>(&::Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6437628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "AddCallbackToAllDebugPacketWithId", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.CheckDebugPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::CheckDebugPackets)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x64367d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "CheckDebugPackets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.CheckIfConditionIsMet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::GraphyDebugger_DebugCondition)>(
    &::Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x643784c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "CheckIfConditionIsMet", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugCondition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetRequestedValueFromDebugVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::GraphyDebugger_DebugVariable)>(
    &::Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6437d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "GetRequestedValueFromDebugVariable", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugVariable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.ExecuteOperationsInDebugPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::GraphyDebugger_DebugPacket*)>(
    &::Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x643796c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "ExecuteOperationsInDebugPacket", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>*& Tayx::Graphy::GraphyDebugger::__cordl_internal_get_m_debugPackets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_debugPackets;
}
constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* const& Tayx::Graphy::GraphyDebugger::__cordl_internal_get_m_debugPackets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_debugPackets;
}
constexpr void Tayx::Graphy::GraphyDebugger::__cordl_internal_set_m_debugPackets(::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_debugPackets = value;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& Tayx::Graphy::GraphyDebugger::__cordl_internal_get_m_fpsMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& Tayx::Graphy::GraphyDebugger::__cordl_internal_get_m_fpsMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr void Tayx::Graphy::GraphyDebugger::__cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsMonitor = value;
}
constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor>& Tayx::Graphy::GraphyDebugger::__cordl_internal_get_m_ramMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> const& Tayx::Graphy::GraphyDebugger::__cordl_internal_get_m_ramMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramMonitor;
}
constexpr void Tayx::Graphy::GraphyDebugger::__cordl_internal_set_m_ramMonitor(::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ramMonitor = value;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& Tayx::Graphy::GraphyDebugger::__cordl_internal_get_m_audioMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& Tayx::Graphy::GraphyDebugger::__cordl_internal_get_m_audioMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr void Tayx::Graphy::GraphyDebugger::__cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioMonitor = value;
}
inline void Tayx::Graphy::GraphyDebugger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(::Tayx::Graphy::GraphyDebugger_DebugPacket* newDebugPacket) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "AddNewDebugPacket", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newDebugPacket);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, ::Tayx::Graphy::GraphyDebugger_DebugCondition newDebugCondition, ::Tayx::Graphy::GraphyDebugger_MessageType newMessageType,
                                                            ::StringW newMessage, bool newDebugBreak, ::System::Action* newCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                                       { "AddNewDebugPacket",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugCondition>(), ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_MessageType>(),
                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newId, newDebugCondition, newMessageType, newMessage, newDebugBreak, newCallback);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* newDebugConditions,
                                                            ::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, ::System::Action* newCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                          { "AddNewDebugPacket",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>*>(),
                              ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_MessageType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newId, newDebugConditions, newMessageType, newMessage, newDebugBreak, newCallback);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, ::Tayx::Graphy::GraphyDebugger_DebugCondition newDebugCondition, ::Tayx::Graphy::GraphyDebugger_MessageType newMessageType,
                                                            ::StringW newMessage, bool newDebugBreak, ::System::Collections::Generic::List_1<::System::Action*>* newCallbacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                                       { "AddNewDebugPacket",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugCondition>(), ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_MessageType>(),
                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Action*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newId, newDebugCondition, newMessageType, newMessage, newDebugBreak, newCallbacks);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>* newDebugConditions,
                                                            ::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, ::StringW newMessage, bool newDebugBreak,
                                                            ::System::Collections::Generic::List_1<::System::Action*>* newCallbacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                                                           { "AddNewDebugPacket",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugCondition>*>(),
                                                               ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_MessageType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::System::Action*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newId, newDebugConditions, newMessageType, newMessage, newDebugBreak, newCallbacks);
}
inline ::Tayx::Graphy::GraphyDebugger_DebugPacket* Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId(int32_t packetId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "GetFirstDebugPacketWithId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::GraphyDebugger_DebugPacket*>(this, ___internal_method, packetId);
}
inline ::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>* Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId(int32_t packetId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "GetAllDebugPacketsWithId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Tayx::Graphy::GraphyDebugger_DebugPacket*>*>(this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId(int32_t packetId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "RemoveFirstDebugPacketWithId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId(int32_t packetId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "RemoveAllDebugPacketsWithId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId(::System::Action* callback, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "AddCallbackToFirstDebugPacketWithId", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, id);
}
inline void Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId(::System::Action* callback, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "AddCallbackToAllDebugPacketWithId", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, id);
}
inline void Tayx::Graphy::GraphyDebugger::CheckDebugPackets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "CheckDebugPackets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet(::Tayx::Graphy::GraphyDebugger_DebugCondition debugCondition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "CheckIfConditionIsMet", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugCondition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, debugCondition);
}
inline float_t Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable(::Tayx::Graphy::GraphyDebugger_DebugVariable debugVariable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(), { "GetRequestedValueFromDebugVariable", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugVariable>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, debugVariable);
}
inline void Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket(::Tayx::Graphy::GraphyDebugger_DebugPacket* debugPacket) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::GraphyDebugger*>(),
                                                                                         { "ExecuteOperationsInDebugPacket", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyDebugger_DebugPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugPacket);
}
inline ::Tayx::Graphy::GraphyDebugger* Tayx::Graphy::GraphyDebugger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::GraphyDebugger*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger::GraphyDebugger() {}
