#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValue_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncVoipAttenuationValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncVoipAttenuationValue::*)(void*)>(
    &::Oculus::Platform::Models::NetSyncVoipAttenuationValue::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2707a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncVoipAttenuationValue*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Platform::Models::NetSyncVoipAttenuationValue::__get_Decibels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Decibels;
}
constexpr float_t const& Oculus::Platform::Models::NetSyncVoipAttenuationValue::__get_Decibels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Decibels;
}
constexpr void Oculus::Platform::Models::NetSyncVoipAttenuationValue::__set_Decibels(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Decibels = value;
}
constexpr float_t& Oculus::Platform::Models::NetSyncVoipAttenuationValue::__get_Distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Distance;
}
constexpr float_t const& Oculus::Platform::Models::NetSyncVoipAttenuationValue::__get_Distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Distance;
}
constexpr void Oculus::Platform::Models::NetSyncVoipAttenuationValue::__set_Distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Distance = value;
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValue* Oculus::Platform::Models::NetSyncVoipAttenuationValue::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::NetSyncVoipAttenuationValue*>(o));
}
inline void Oculus::Platform::Models::NetSyncVoipAttenuationValue::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncVoipAttenuationValue*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncVoipAttenuationValue::NetSyncVoipAttenuationValue() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
