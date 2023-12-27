#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__HeaderAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::HeaderAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::HeaderAttribute::*)(::StringW)>(&::UnityEngine::HeaderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ccc190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HeaderAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::HeaderAttribute::__get_header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___header;
}
constexpr ::StringW const& UnityEngine::HeaderAttribute::__get_header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___header;
}
constexpr void UnityEngine::HeaderAttribute::__set_header(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___header)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::HeaderAttribute* UnityEngine::HeaderAttribute::New_ctor(::StringW header) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::HeaderAttribute*>(header));
}
inline void UnityEngine::HeaderAttribute::_ctor(::StringW header) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HeaderAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header);
}
// Ctor Parameters []
constexpr ::UnityEngine::HeaderAttribute::HeaderAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
