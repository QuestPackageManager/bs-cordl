#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/IgnoreAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__IgnoreAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::IgnoreAttribute.set_DoesNotContributeToSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::IgnoreAttribute::*)(bool)>(
    &::UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6982204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::IgnoreAttribute*>::get(), "set_DoesNotContributeToSize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::IgnoreAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::IgnoreAttribute::*)()>(&::UnityEngine::Bindings::IgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x698220c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::IgnoreAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Bindings::IgnoreAttribute::__cordl_internal_get__DoesNotContributeToSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DoesNotContributeToSize_k__BackingField;
}
constexpr bool const& UnityEngine::Bindings::IgnoreAttribute::__cordl_internal_get__DoesNotContributeToSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DoesNotContributeToSize_k__BackingField;
}
constexpr void UnityEngine::Bindings::IgnoreAttribute::__cordl_internal_set__DoesNotContributeToSize_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DoesNotContributeToSize_k__BackingField = value;
}
inline void UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::IgnoreAttribute*>::get(), "set_DoesNotContributeToSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::IgnoreAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::IgnoreAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::IgnoreAttribute* UnityEngine::Bindings::IgnoreAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::IgnoreAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::IgnoreAttribute::IgnoreAttribute() {}
