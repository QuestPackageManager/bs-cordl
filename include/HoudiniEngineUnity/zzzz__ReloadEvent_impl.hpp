#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__ReloadEvent_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::ReloadEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::ReloadEvent::*)()>(&::HoudiniEngineUnity::ReloadEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x214e3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::ReloadEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::ReloadEvent* HoudiniEngineUnity::ReloadEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::ReloadEvent*>());
}
inline void HoudiniEngineUnity::ReloadEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::ReloadEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::ReloadEvent::ReloadEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
