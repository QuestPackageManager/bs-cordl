#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeThrowsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeThrowsAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeThrowsAttribute.set_ThrowsException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeThrowsAttribute::*)(bool)>(
    &::UnityEngine::Bindings::NativeThrowsAttribute::set_ThrowsException)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x49191ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeThrowsAttribute*>::get(), "set_ThrowsException",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeThrowsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeThrowsAttribute::*)()>(&::UnityEngine::Bindings::NativeThrowsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x49191f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeThrowsAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Bindings::NativeThrowsAttribute::__cordl_internal_get__ThrowsException_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ThrowsException_k__BackingField;
}
constexpr bool const& UnityEngine::Bindings::NativeThrowsAttribute::__cordl_internal_get__ThrowsException_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ThrowsException_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeThrowsAttribute::__cordl_internal_set__ThrowsException_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ThrowsException_k__BackingField = value;
}
inline void UnityEngine::Bindings::NativeThrowsAttribute::set_ThrowsException(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeThrowsAttribute*>::get(), "set_ThrowsException",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NativeThrowsAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeThrowsAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::NativeThrowsAttribute* UnityEngine::Bindings::NativeThrowsAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::NativeThrowsAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NativeThrowsAttribute::NativeThrowsAttribute() {}
