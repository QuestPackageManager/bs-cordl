#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__MultilineAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::MultilineAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::MultilineAttribute::*)()>(&::UnityEngine::MultilineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b65d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MultilineAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::MultilineAttribute::__get_lines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lines;
}
constexpr int32_t const& UnityEngine::MultilineAttribute::__get_lines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lines;
}
constexpr void UnityEngine::MultilineAttribute::__set_lines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lines = value;
}
inline ::UnityEngine::MultilineAttribute* UnityEngine::MultilineAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::MultilineAttribute*>());
}
inline void UnityEngine::MultilineAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MultilineAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::MultilineAttribute::MultilineAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
