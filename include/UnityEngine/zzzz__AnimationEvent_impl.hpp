#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AnimationEventSource_impl.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_impl.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_impl.hpp"
#include "UnityEngine/zzzz__AnimationEvent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationState_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimationEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimationEvent::*)()>(&::UnityEngine::AnimationEvent::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c905d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::AnimationEvent::__get_m_Time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Time;
}
constexpr float_t const& UnityEngine::AnimationEvent::__get_m_Time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Time;
}
constexpr void UnityEngine::AnimationEvent::__set_m_Time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Time = value;
}
constexpr ::StringW& UnityEngine::AnimationEvent::__get_m_FunctionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FunctionName;
}
constexpr ::StringW const& UnityEngine::AnimationEvent::__get_m_FunctionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FunctionName;
}
constexpr void UnityEngine::AnimationEvent::__set_m_FunctionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FunctionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::AnimationEvent::__get_m_StringParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StringParameter;
}
constexpr ::StringW const& UnityEngine::AnimationEvent::__get_m_StringParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StringParameter;
}
constexpr void UnityEngine::AnimationEvent::__set_m_StringParameter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StringParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Object*& UnityEngine::AnimationEvent::__get_m_ObjectReferenceParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectReferenceParameter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& UnityEngine::AnimationEvent::__get_m_ObjectReferenceParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectReferenceParameter;
}
constexpr void UnityEngine::AnimationEvent::__set_m_ObjectReferenceParameter(::UnityEngine::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ObjectReferenceParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::AnimationEvent::__get_m_FloatParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FloatParameter;
}
constexpr float_t const& UnityEngine::AnimationEvent::__get_m_FloatParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FloatParameter;
}
constexpr void UnityEngine::AnimationEvent::__set_m_FloatParameter(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FloatParameter = value;
}
constexpr int32_t& UnityEngine::AnimationEvent::__get_m_IntParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntParameter;
}
constexpr int32_t const& UnityEngine::AnimationEvent::__get_m_IntParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntParameter;
}
constexpr void UnityEngine::AnimationEvent::__set_m_IntParameter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntParameter = value;
}
constexpr int32_t& UnityEngine::AnimationEvent::__get_m_MessageOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageOptions;
}
constexpr int32_t const& UnityEngine::AnimationEvent::__get_m_MessageOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageOptions;
}
constexpr void UnityEngine::AnimationEvent::__set_m_MessageOptions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MessageOptions = value;
}
constexpr ::UnityEngine::AnimationEventSource& UnityEngine::AnimationEvent::__get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr ::UnityEngine::AnimationEventSource const& UnityEngine::AnimationEvent::__get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr void UnityEngine::AnimationEvent::__set_m_Source(::UnityEngine::AnimationEventSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Source = value;
}
constexpr ::UnityEngine::AnimationState*& UnityEngine::AnimationEvent::__get_m_StateSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateSender;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationState*> const& UnityEngine::AnimationEvent::__get_m_StateSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateSender;
}
constexpr void UnityEngine::AnimationEvent::__set_m_StateSender(::UnityEngine::AnimationState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StateSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimatorStateInfo& UnityEngine::AnimationEvent::__get_m_AnimatorStateInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimatorStateInfo;
}
constexpr ::UnityEngine::AnimatorStateInfo const& UnityEngine::AnimationEvent::__get_m_AnimatorStateInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimatorStateInfo;
}
constexpr void UnityEngine::AnimationEvent::__set_m_AnimatorStateInfo(::UnityEngine::AnimatorStateInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnimatorStateInfo = value;
}
constexpr ::UnityEngine::AnimatorClipInfo& UnityEngine::AnimationEvent::__get_m_AnimatorClipInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimatorClipInfo;
}
constexpr ::UnityEngine::AnimatorClipInfo const& UnityEngine::AnimationEvent::__get_m_AnimatorClipInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimatorClipInfo;
}
constexpr void UnityEngine::AnimationEvent::__set_m_AnimatorClipInfo(::UnityEngine::AnimatorClipInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnimatorClipInfo = value;
}
inline ::UnityEngine::AnimationEvent* UnityEngine::AnimationEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AnimationEvent*>());
}
inline void UnityEngine::AnimationEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationEvent::AnimationEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
