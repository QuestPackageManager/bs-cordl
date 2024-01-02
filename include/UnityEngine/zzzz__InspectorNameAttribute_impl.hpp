#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__InspectorNameAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::InspectorNameAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InspectorNameAttribute::*)(::StringW)>(&::UnityEngine::InspectorNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ccc0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorNameAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InspectorNameAttribute::__get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& UnityEngine::InspectorNameAttribute::__get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void UnityEngine::InspectorNameAttribute::__set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InspectorNameAttribute* UnityEngine::InspectorNameAttribute::New_ctor(::StringW displayName) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InspectorNameAttribute*>(displayName));
}
inline void UnityEngine::InspectorNameAttribute::_ctor(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorNameAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName);
}
// Ctor Parameters []
constexpr ::UnityEngine::InspectorNameAttribute::InspectorNameAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
