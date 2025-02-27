#pragma once
// IWYU pragma private; include "UnityEngine/HelpURLAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__HelpURLAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::HelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::HelpURLAttribute::*)(::StringW)>(&::UnityEngine::HelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x48b53bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HelpURLAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_Url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Url;
}
constexpr ::StringW const& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_Url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Url;
}
constexpr void UnityEngine::HelpURLAttribute::__cordl_internal_set_m_Url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_Dispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dispatcher;
}
constexpr bool const& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_Dispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dispatcher;
}
constexpr void UnityEngine::HelpURLAttribute::__cordl_internal_set_m_Dispatcher(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dispatcher = value;
}
constexpr ::StringW& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_DispatchingFieldName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchingFieldName;
}
constexpr ::StringW const& UnityEngine::HelpURLAttribute::__cordl_internal_get_m_DispatchingFieldName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchingFieldName;
}
constexpr void UnityEngine::HelpURLAttribute::__cordl_internal_set_m_DispatchingFieldName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DispatchingFieldName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::HelpURLAttribute::_ctor(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HelpURLAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url);
}
inline ::UnityEngine::HelpURLAttribute* UnityEngine::HelpURLAttribute::New_ctor(::StringW url) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::HelpURLAttribute*>(url));
}
// Ctor Parameters []
constexpr ::UnityEngine::HelpURLAttribute::HelpURLAttribute() {}
