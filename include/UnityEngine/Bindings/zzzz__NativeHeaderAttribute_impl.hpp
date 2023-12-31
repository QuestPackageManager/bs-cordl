#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeHeaderAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeHeaderAttribute.set_Header
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeHeaderAttribute::*)(::StringW)>(
    &::UnityEngine::Bindings::NativeHeaderAttribute::set_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d18270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeHeaderAttribute*>::get(), "set_Header",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeHeaderAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeHeaderAttribute::*)(::StringW)>(
    &::UnityEngine::Bindings::NativeHeaderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2d18278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeHeaderAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Bindings::NativeHeaderAttribute::__get__Header_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Header_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::NativeHeaderAttribute::__get__Header_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Header_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeHeaderAttribute::__set__Header_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Header_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Bindings::NativeHeaderAttribute::set_Header(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeHeaderAttribute*>::get(), "set_Header",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Bindings::NativeHeaderAttribute* UnityEngine::Bindings::NativeHeaderAttribute::New_ctor(::StringW header) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Bindings::NativeHeaderAttribute*>(header));
}
inline void UnityEngine::Bindings::NativeHeaderAttribute::_ctor(::StringW header) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeHeaderAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NativeHeaderAttribute::NativeHeaderAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
