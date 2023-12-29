#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetChildrenLightId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetChildrenLightId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetChildrenLightId::*)()>(&::GlobalNamespace::SetChildrenLightId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fbd438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetChildrenLightId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SetChildrenLightId::__get__ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ID;
}
constexpr int32_t const& GlobalNamespace::SetChildrenLightId::__get__ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ID;
}
constexpr void GlobalNamespace::SetChildrenLightId::__set__ID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ID = value;
}
inline ::GlobalNamespace::SetChildrenLightId* GlobalNamespace::SetChildrenLightId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SetChildrenLightId*>());
}
inline void GlobalNamespace::SetChildrenLightId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetChildrenLightId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetChildrenLightId::SetChildrenLightId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
