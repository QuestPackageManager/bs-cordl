#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeWritableSelfAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeWritableSelfAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeWritableSelfAttribute.set_WritableSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeWritableSelfAttribute::*)(bool)>(
    &::UnityEngine::Bindings::NativeWritableSelfAttribute::set_WritableSelf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48b1f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeWritableSelfAttribute*>::get(), "set_WritableSelf",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeWritableSelfAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeWritableSelfAttribute::*)()>(
    &::UnityEngine::Bindings::NativeWritableSelfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x48b1f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeWritableSelfAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Bindings::NativeWritableSelfAttribute::__cordl_internal_get__WritableSelf_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WritableSelf_k__BackingField;
}
constexpr bool const& UnityEngine::Bindings::NativeWritableSelfAttribute::__cordl_internal_get__WritableSelf_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WritableSelf_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeWritableSelfAttribute::__cordl_internal_set__WritableSelf_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WritableSelf_k__BackingField = value;
}
inline void UnityEngine::Bindings::NativeWritableSelfAttribute::set_WritableSelf(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeWritableSelfAttribute*>::get(), "set_WritableSelf",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Bindings::NativeWritableSelfAttribute* UnityEngine::Bindings::NativeWritableSelfAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::NativeWritableSelfAttribute*>());
}
inline void UnityEngine::Bindings::NativeWritableSelfAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeWritableSelfAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NativeWritableSelfAttribute::NativeWritableSelfAttribute() {}
