#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NumberTag_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NumberTag._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NumberTag::*)()>(&::GlobalNamespace::NumberTag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f977fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumberTag*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NumberTag::__get_number() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___number;
}
constexpr int32_t const& GlobalNamespace::NumberTag::__get_number() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___number;
}
constexpr void GlobalNamespace::NumberTag::__set_number(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___number = value;
}
inline ::GlobalNamespace::NumberTag* GlobalNamespace::NumberTag::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NumberTag*>());
}
inline void GlobalNamespace::NumberTag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NumberTag*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NumberTag::NumberTag() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif