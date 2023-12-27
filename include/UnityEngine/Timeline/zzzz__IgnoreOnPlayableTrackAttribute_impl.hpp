#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__IgnoreOnPlayableTrackAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::*)()>(
    &::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6e758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute* UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*>());
}
inline void UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::IgnoreOnPlayableTrackAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
