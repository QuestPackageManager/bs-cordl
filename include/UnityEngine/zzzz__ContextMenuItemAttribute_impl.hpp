#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__ContextMenuItemAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContextMenuItemAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContextMenuItemAttribute::*)(::StringW, ::StringW)>(
    &::UnityEngine::ContextMenuItemAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b65bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContextMenuItemAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ContextMenuItemAttribute::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::ContextMenuItemAttribute::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::ContextMenuItemAttribute::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::ContextMenuItemAttribute::__get_function() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___function;
}
constexpr ::StringW const& UnityEngine::ContextMenuItemAttribute::__get_function() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___function;
}
constexpr void UnityEngine::ContextMenuItemAttribute::__set_function(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___function)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ContextMenuItemAttribute* UnityEngine::ContextMenuItemAttribute::New_ctor(::StringW name, ::StringW function) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ContextMenuItemAttribute*>(name, function));
}
inline void UnityEngine::ContextMenuItemAttribute::_ctor(::StringW name, ::StringW function) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContextMenuItemAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, function);
}
// Ctor Parameters []
constexpr ::UnityEngine::ContextMenuItemAttribute::ContextMenuItemAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
