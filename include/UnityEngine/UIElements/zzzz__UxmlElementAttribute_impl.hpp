#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlElementAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlElementAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlElementAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlElementAttribute::*)(::StringW)>(
    &::UnityEngine::UIElements::UxmlElementAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af44ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlElementAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UxmlElementAttribute::_ctor(::StringW uxmlName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlElementAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uxmlName);
}
inline ::UnityEngine::UIElements::UxmlElementAttribute* UnityEngine::UIElements::UxmlElementAttribute::New_ctor(::StringW uxmlName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlElementAttribute*>(uxmlName));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlElementAttribute::UxmlElementAttribute() {}
