#pragma once
// IWYU pragma private; include "UnityEngine/InspectorNameAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__InspectorNameAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::InspectorNameAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InspectorNameAttribute::*)(::StringW)>(&::UnityEngine::InspectorNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48a6c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorNameAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InspectorNameAttribute::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& UnityEngine::InspectorNameAttribute::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void UnityEngine::InspectorNameAttribute::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InspectorNameAttribute::_ctor(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InspectorNameAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName);
}
inline ::UnityEngine::InspectorNameAttribute* UnityEngine::InspectorNameAttribute::New_ctor(::StringW displayName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InspectorNameAttribute*>(displayName));
}
// Ctor Parameters []
constexpr ::UnityEngine::InspectorNameAttribute::InspectorNameAttribute() {}
