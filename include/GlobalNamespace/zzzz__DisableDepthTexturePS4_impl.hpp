#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableDepthTexturePS4_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableDepthTexturePS4._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableDepthTexturePS4::*)()>(&::GlobalNamespace::DisableDepthTexturePS4::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2807490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableDepthTexturePS4*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::DisableDepthTexturePS4::__get__depthTextureEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthTextureEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::DisableDepthTexturePS4::__get__depthTextureEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthTextureEnabled;
}
constexpr void GlobalNamespace::DisableDepthTexturePS4::__set__depthTextureEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____depthTextureEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::DisableDepthTexturePS4* GlobalNamespace::DisableDepthTexturePS4::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisableDepthTexturePS4*>());
}
inline void GlobalNamespace::DisableDepthTexturePS4::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableDepthTexturePS4*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableDepthTexturePS4::DisableDepthTexturePS4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
