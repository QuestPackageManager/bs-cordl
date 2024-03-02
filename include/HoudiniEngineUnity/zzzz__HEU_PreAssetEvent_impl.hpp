#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEventData_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEvent_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PreAssetEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PreAssetEvent::*)()>(&::HoudiniEngineUnity::HEU_PreAssetEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22af4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PreAssetEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::HEU_PreAssetEvent* HoudiniEngineUnity::HEU_PreAssetEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PreAssetEvent*>());
}
inline void HoudiniEngineUnity::HEU_PreAssetEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PreAssetEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PreAssetEvent::HEU_PreAssetEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
