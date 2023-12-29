#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RemoteConfigSettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::RemoteConfigSettings.RemoteConfigSettingsUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RemoteConfigSettings*, bool)>(
    &::UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d424b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteConfigSettings*>::get(), "RemoteConfigSettingsUpdated", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RemoteConfigSettings*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr void*& UnityEngine::RemoteConfigSettings::__get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void* const& UnityEngine::RemoteConfigSettings::__get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::RemoteConfigSettings::__set_m_Ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::System::Action_1<bool>*& UnityEngine::RemoteConfigSettings::__get_Updated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Updated;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& UnityEngine::RemoteConfigSettings::__get_Updated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Updated;
}
constexpr void UnityEngine::RemoteConfigSettings::__set_Updated(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Updated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated(::UnityEngine::RemoteConfigSettings* rcs, bool wasLastUpdatedFromServer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteConfigSettings*>::get(), "RemoteConfigSettingsUpdated", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RemoteConfigSettings*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rcs, wasLastUpdatedFromServer);
}
// Ctor Parameters []
constexpr ::UnityEngine::RemoteConfigSettings::RemoteConfigSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
