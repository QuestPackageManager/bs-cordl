#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__BakedEvent_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::BakedEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::BakedEvent::*)()>(&::HoudiniEngineUnity::BakedEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x214e4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::BakedEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::BakedEvent* HoudiniEngineUnity::BakedEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::BakedEvent*>());
}
inline void HoudiniEngineUnity::BakedEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::BakedEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::BakedEvent::BakedEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
