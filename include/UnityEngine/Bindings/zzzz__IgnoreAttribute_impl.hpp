#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__IgnoreAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::IgnoreAttribute.set_DoesNotContributeToSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::IgnoreAttribute::*)(bool)>(
    &::UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d189d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::IgnoreAttribute*>::get(), "set_DoesNotContributeToSize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::IgnoreAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::IgnoreAttribute::*)()>(&::UnityEngine::Bindings::IgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d189dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::IgnoreAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Bindings::IgnoreAttribute::__get__DoesNotContributeToSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____DoesNotContributeToSize_k__BackingField;
}
constexpr bool const& UnityEngine::Bindings::IgnoreAttribute::__get__DoesNotContributeToSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____DoesNotContributeToSize_k__BackingField;
}
constexpr void UnityEngine::Bindings::IgnoreAttribute::__set__DoesNotContributeToSize_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____DoesNotContributeToSize_k__BackingField = value;
}
inline void UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::IgnoreAttribute*>::get(), "set_DoesNotContributeToSize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Bindings::IgnoreAttribute* UnityEngine::Bindings::IgnoreAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Bindings::IgnoreAttribute*>());
}
inline void UnityEngine::Bindings::IgnoreAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::IgnoreAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::IgnoreAttribute::IgnoreAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
