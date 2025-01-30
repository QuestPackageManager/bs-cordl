#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NotNullAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NotNullAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NotNullAttribute.set_Exception
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NotNullAttribute::*)(::StringW)>(
    &::UnityEngine::Bindings::NotNullAttribute::set_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4919bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(), "set_Exception",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NotNullAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NotNullAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NotNullAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4919be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Bindings::NotNullAttribute::__cordl_internal_get__Exception_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Exception_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::NotNullAttribute::__cordl_internal_get__Exception_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Exception_k__BackingField;
}
constexpr void UnityEngine::Bindings::NotNullAttribute::__cordl_internal_set__Exception_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Exception_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Bindings::NotNullAttribute::set_Exception(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(), "set_Exception", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NotNullAttribute::_ctor(::StringW exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline ::UnityEngine::Bindings::NotNullAttribute* UnityEngine::Bindings::NotNullAttribute::New_ctor(::StringW exception) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::NotNullAttribute*>(exception));
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NotNullAttribute::NotNullAttribute() {}
