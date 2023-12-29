#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPsPlusFeatureNotifier_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPsPlusFeatureNotifier::*)()>(
    &::GlobalNamespace::MultiplayerPsPlusFeatureNotifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21149a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier* GlobalNamespace::MultiplayerPsPlusFeatureNotifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*>());
}
inline void GlobalNamespace::MultiplayerPsPlusFeatureNotifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPsPlusFeatureNotifier*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPsPlusFeatureNotifier::MultiplayerPsPlusFeatureNotifier() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
