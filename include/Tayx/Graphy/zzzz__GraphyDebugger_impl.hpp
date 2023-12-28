#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_impl.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_impl.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamMonitor_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable::__GraphyDebugger__DebugVariable(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable::__GraphyDebugger__DebugVariable() {}
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable Tayx::Graphy::__GraphyDebugger__DebugVariable::Fps{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable Tayx::Graphy::__GraphyDebugger__DebugVariable::Fps_Min{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable Tayx::Graphy::__GraphyDebugger__DebugVariable::Fps_Max{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable Tayx::Graphy::__GraphyDebugger__DebugVariable::Fps_Avg{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable Tayx::Graphy::__GraphyDebugger__DebugVariable::Ram_Allocated{ static_cast<int32_t>(0x4) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable Tayx::Graphy::__GraphyDebugger__DebugVariable::Ram_Reserved{ static_cast<int32_t>(0x5) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable Tayx::Graphy::__GraphyDebugger__DebugVariable::Ram_Mono{ static_cast<int32_t>(0x6) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable Tayx::Graphy::__GraphyDebugger__DebugVariable::Audio_DB{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer::__GraphyDebugger__DebugComparer(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer::__GraphyDebugger__DebugComparer() {}
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer Tayx::Graphy::__GraphyDebugger__DebugComparer::Less_than{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer Tayx::Graphy::__GraphyDebugger__DebugComparer::Equals_or_less_than{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer Tayx::Graphy::__GraphyDebugger__DebugComparer::Equals{ static_cast<int32_t>(0x2) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer Tayx::Graphy::__GraphyDebugger__DebugComparer::Equals_or_greater_than{ static_cast<int32_t>(0x3) };
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer Tayx::Graphy::__GraphyDebugger__DebugComparer::Greater_than{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::__GraphyDebugger__ConditionEvaluation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::__GraphyDebugger__ConditionEvaluation() {}
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::All_conditions_must_be_met{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::Only_one_condition_has_to_be_met{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType::__GraphyDebugger__MessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType::__GraphyDebugger__MessageType() {}
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType Tayx::Graphy::__GraphyDebugger__MessageType::Log{ static_cast<int32_t>(0x0) };
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType Tayx::Graphy::__GraphyDebugger__MessageType::Warning{ static_cast<int32_t>(0x1) };
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType Tayx::Graphy::__GraphyDebugger__MessageType::Error{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "Variable", ty: "::Tayx::Graphy::__GraphyDebugger__DebugVariable", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comparer", ty:
// "::Tayx::Graphy::__GraphyDebugger__DebugComparer", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugCondition::__GraphyDebugger__DebugCondition(::Tayx::Graphy::__GraphyDebugger__DebugVariable Variable,
                                                                                             ::Tayx::Graphy::__GraphyDebugger__DebugComparer Comparer, float_t Value) noexcept {
  this->Variable = Variable;
  this->Comparer = Comparer;
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugCondition::__GraphyDebugger__DebugCondition() {}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger__DebugPacket.get_Check
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger__DebugPacket::*)()>(
    &::Tayx::Graphy::__GraphyDebugger__DebugPacket::get_Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a005d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                                                                               "get_Check", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger__DebugPacket.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger__DebugPacket::*)()>(&::Tayx::Graphy::__GraphyDebugger__DebugPacket::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29ffed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger__DebugPacket.Executed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger__DebugPacket::*)()>(
    &::Tayx::Graphy::__GraphyDebugger__DebugPacket::Executed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a005cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                                                                               "Executed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger__DebugPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger__DebugPacket::*)()>(&::Tayx::Graphy::__GraphyDebugger__DebugPacket::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x29ff4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Active;
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Active;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_Active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Active = value;
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_Id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ExecuteOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExecuteOnce;
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ExecuteOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExecuteOnce;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_ExecuteOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExecuteOnce = value;
}
constexpr float_t& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_InitSleepTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitSleepTime;
}
constexpr float_t const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_InitSleepTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitSleepTime;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_InitSleepTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitSleepTime = value;
}
constexpr float_t& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ExecuteSleepTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExecuteSleepTime;
}
constexpr float_t const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ExecuteSleepTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExecuteSleepTime;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_ExecuteSleepTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExecuteSleepTime = value;
}
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ConditionEvaluation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConditionEvaluation;
}
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ConditionEvaluation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConditionEvaluation;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_ConditionEvaluation(::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConditionEvaluation = value;
}
constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_DebugConditions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugConditions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*> const&
Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_DebugConditions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugConditions;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_DebugConditions(::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DebugConditions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_MessageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageType;
}
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_MessageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageType;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_MessageType(::Tayx::Graphy::__GraphyDebugger__MessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MessageType = value;
}
constexpr ::StringW& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Message;
}
constexpr ::StringW const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Message;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_Message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_TakeScreenshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TakeScreenshot;
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_TakeScreenshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TakeScreenshot;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_TakeScreenshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TakeScreenshot = value;
}
constexpr ::StringW& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ScreenshotFileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ScreenshotFileName;
}
constexpr ::StringW const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ScreenshotFileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ScreenshotFileName;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_ScreenshotFileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ScreenshotFileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_DebugBreak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugBreak;
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_DebugBreak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugBreak;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_DebugBreak(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DebugBreak = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_UnityEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnityEvents;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_UnityEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnityEvents;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_UnityEvents(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UnityEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Action*>*> const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callbacks;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_Callbacks(::System::Collections::Generic::List_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Callbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_canBeChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canBeChecked;
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_canBeChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canBeChecked;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_canBeChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canBeChecked = value;
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_executed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executed;
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_executed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executed;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_executed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___executed = value;
}
constexpr float_t& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_timePassed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePassed;
}
constexpr float_t const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_timePassed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePassed;
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_timePassed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timePassed = value;
}
inline bool Tayx::Graphy::__GraphyDebugger__DebugPacket::get_Check() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(), "get_Check",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Tayx::Graphy::__GraphyDebugger__DebugPacket::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::__GraphyDebugger__DebugPacket::Executed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(), "Executed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyDebugger__DebugPacket* Tayx::Graphy::__GraphyDebugger__DebugPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>());
}
inline void Tayx::Graphy::__GraphyDebugger__DebugPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugPacket::__GraphyDebugger__DebugPacket() {}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::*)()>(
    &::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ff9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0._GetFirstDebugPacketWithId_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(
    &::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::_GetFirstDebugPacketWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a005e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>::get(), "<GetFirstDebugPacketWithId>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::__get_packetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::__get_packetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr void Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::__set_packetId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packetId = value;
}
inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0* Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>());
}
inline void Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::_GetFirstDebugPacketWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>::get(), "<GetFirstDebugPacketWithId>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::__GraphyDebugger____c__DisplayClass18_0() {}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::*)()>(
    &::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ffa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0._GetAllDebugPacketsWithId_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(
    &::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::_GetAllDebugPacketsWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a00604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>::get(), "<GetAllDebugPacketsWithId>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::__get_packetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::__get_packetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr void Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::__set_packetId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packetId = value;
}
inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0* Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>());
}
inline void Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::_GetAllDebugPacketsWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>::get(), "<GetAllDebugPacketsWithId>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::__GraphyDebugger____c__DisplayClass19_0() {}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::*)()>(
    &::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ffc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0._RemoveAllDebugPacketsWithId_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(
    &::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::_RemoveAllDebugPacketsWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a00628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>::get(), "<RemoveAllDebugPacketsWithId>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::__get_packetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::__get_packetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packetId;
}
constexpr void Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::__set_packetId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packetId = value;
}
inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0* Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>());
}
inline void Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::_RemoveAllDebugPacketsWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>::get(), "<RemoveAllDebugPacketsWithId>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::__GraphyDebugger____c__DisplayClass21_0() {}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger____c::*)()>(&::Tayx::Graphy::__GraphyDebugger____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a006b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c._CheckDebugPackets_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger____c::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(
    &::Tayx::Graphy::__GraphyDebugger____c::_CheckDebugPackets_b__24_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a006b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get(), "<CheckDebugPackets>b__24_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::__GraphyDebugger____c::setStaticF___9(::Tayx::Graphy::__GraphyDebugger____c* value) {
  ::cordl_internals::setStaticField<::Tayx::Graphy::__GraphyDebugger____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get>(
      std::forward<::Tayx::Graphy::__GraphyDebugger____c*>(value));
}
inline ::Tayx::Graphy::__GraphyDebugger____c* Tayx::Graphy::__GraphyDebugger____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Tayx::Graphy::__GraphyDebugger____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get>();
}
inline void Tayx::Graphy::__GraphyDebugger____c::setStaticF___9__24_0(::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, "<>9__24_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get>(
      std::forward<::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*>(value));
}
inline ::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* Tayx::Graphy::__GraphyDebugger____c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, "<>9__24_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get>();
}
inline ::Tayx::Graphy::__GraphyDebugger____c* Tayx::Graphy::__GraphyDebugger____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger____c*>());
}
inline void Tayx::Graphy::__GraphyDebugger____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Tayx::Graphy::__GraphyDebugger____c::_CheckDebugPackets_b__24_0(::Tayx::Graphy::__GraphyDebugger__DebugPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get(), "<CheckDebugPackets>b__24_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::__GraphyDebugger____c::__GraphyDebugger____c() {}
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29fed00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29fedbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29fee5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(
    &::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29ff27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::Tayx::Graphy::__GraphyDebugger__DebugCondition, ::Tayx::Graphy::__GraphyDebugger__MessageType, ::StringW, bool, ::System::Action*)>(
        &::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x29ff324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
            ::std::vector<Il2CppType const*>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(
    int32_t, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*, ::Tayx::Graphy::__GraphyDebugger__MessageType, ::StringW, bool, ::System::Action*)>(
    &::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x29ff5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(
    int32_t, ::Tayx::Graphy::__GraphyDebugger__DebugCondition, ::Tayx::Graphy::__GraphyDebugger__MessageType, ::StringW, bool, ::System::Collections::Generic::List_1<::System::Action*>*)>(
    &::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29ff6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Action*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(
    int32_t, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*, ::Tayx::Graphy::__GraphyDebugger__MessageType, ::StringW, bool,
    ::System::Collections::Generic::List_1<::System::Action*>*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29ff824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Action*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetFirstDebugPacketWithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyDebugger__DebugPacket* (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(
    &::Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29ff8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "GetFirstDebugPacketWithId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetAllDebugPacketsWithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* (
    ::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29ff9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "GetAllDebugPacketsWithId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.RemoveFirstDebugPacketWithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29ffa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "RemoveFirstDebugPacketWithId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.RemoveAllDebugPacketsWithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x29ffb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "RemoveAllDebugPacketsWithId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddCallbackToFirstDebugPacketWithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::System::Action*, int32_t)>(
    &::Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29ffc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddCallbackToFirstDebugPacketWithId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddCallbackToAllDebugPacketWithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::System::Action*, int32_t)>(
    &::Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x29ffcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddCallbackToAllDebugPacketWithId", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.CheckDebugPackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::CheckDebugPackets)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x29fee60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "CheckDebugPackets",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.CheckIfConditionIsMet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::__GraphyDebugger__DebugCondition)>(
    &::Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x29fff34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "CheckIfConditionIsMet", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetRequestedValueFromDebugVariable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::__GraphyDebugger__DebugVariable)>(
    &::Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2a00400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "GetRequestedValueFromDebugVariable", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugVariable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.ExecuteOperationsInDebugPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(
    &::Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2a00044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "ExecuteOperationsInDebugPacket", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*& Tayx::Graphy::GraphyDebugger::__get_m_debugPackets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_debugPackets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*> const&
Tayx::Graphy::GraphyDebugger::__get_m_debugPackets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_debugPackets;
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_debugPackets(::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_debugPackets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tayx::Graphy::Fps::G_FpsMonitor*& Tayx::Graphy::GraphyDebugger::__get_m_fpsMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsMonitor*> const& Tayx::Graphy::GraphyDebugger::__get_m_fpsMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_fpsMonitor(::Tayx::Graphy::Fps::G_FpsMonitor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fpsMonitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tayx::Graphy::Ram::G_RamMonitor*& Tayx::Graphy::GraphyDebugger::__get_m_ramMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramMonitor;
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamMonitor*> const& Tayx::Graphy::GraphyDebugger::__get_m_ramMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramMonitor;
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_ramMonitor(::Tayx::Graphy::Ram::G_RamMonitor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ramMonitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tayx::Graphy::Audio::G_AudioMonitor*& Tayx::Graphy::GraphyDebugger::__get_m_audioMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioMonitor*> const& Tayx::Graphy::GraphyDebugger::__get_m_audioMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_audioMonitor(::Tayx::Graphy::Audio::G_AudioMonitor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_audioMonitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Tayx::Graphy::GraphyDebugger* Tayx::Graphy::GraphyDebugger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::GraphyDebugger*>());
}
inline void Tayx::Graphy::GraphyDebugger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(::Tayx::Graphy::__GraphyDebugger__DebugPacket* newDebugPacket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newDebugPacket);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, ::Tayx::Graphy::__GraphyDebugger__DebugCondition newDebugCondition,
                                                            ::Tayx::Graphy::__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, ::System::Action* newCallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
          ::std::vector<Il2CppType const*>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newId, newDebugCondition, newMessageType, newMessage, newDebugBreak, newCallback);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* newDebugConditions,
                                                            ::Tayx::Graphy::__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, ::System::Action* newCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newId, newDebugConditions, newMessageType, newMessage, newDebugBreak, newCallback);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, ::Tayx::Graphy::__GraphyDebugger__DebugCondition newDebugCondition,
                                                            ::Tayx::Graphy::__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak,
                                                            ::System::Collections::Generic::List_1<::System::Action*>* newCallbacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Action*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newId, newDebugCondition, newMessageType, newMessage, newDebugBreak, newCallbacks);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* newDebugConditions,
                                                            ::Tayx::Graphy::__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak,
                                                            ::System::Collections::Generic::List_1<::System::Action*>* newCallbacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddNewDebugPacket", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Action*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newId, newDebugConditions, newMessageType, newMessage, newDebugBreak, newCallbacks);
}
inline ::Tayx::Graphy::__GraphyDebugger__DebugPacket* Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId(int32_t packetId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "GetFirstDebugPacketWithId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyDebugger__DebugPacket*, false>(this, ___internal_method, packetId);
}
inline ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId(int32_t packetId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "GetAllDebugPacketsWithId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, false>(this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId(int32_t packetId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "RemoveFirstDebugPacketWithId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId(int32_t packetId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "RemoveAllDebugPacketsWithId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId(::System::Action* callback, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddCallbackToFirstDebugPacketWithId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, id);
}
inline void Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId(::System::Action* callback, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "AddCallbackToAllDebugPacketWithId", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, id);
}
inline void Tayx::Graphy::GraphyDebugger::CheckDebugPackets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "CheckDebugPackets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet(::Tayx::Graphy::__GraphyDebugger__DebugCondition debugCondition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "CheckIfConditionIsMet", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, debugCondition);
}
inline float_t Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable(::Tayx::Graphy::__GraphyDebugger__DebugVariable debugVariable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "GetRequestedValueFromDebugVariable", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugVariable>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, debugVariable);
}
inline void Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket(::Tayx::Graphy::__GraphyDebugger__DebugPacket* debugPacket) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(), "ExecuteOperationsInDebugPacket", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugPacket);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::GraphyDebugger::GraphyDebugger() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
