#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/SpanAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__SpanAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::SpanAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::SpanAttribute::*)(::StringW, bool)>(&::UnityEngine::Bindings::SpanAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x489dd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::SpanAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Bindings::SpanAttribute::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::Bindings::SpanAttribute::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::Bindings::SpanAttribute::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Bindings::SpanAttribute::__cordl_internal_get__SizeParameter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SizeParameter_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::SpanAttribute::__cordl_internal_get__SizeParameter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SizeParameter_k__BackingField;
}
constexpr void UnityEngine::Bindings::SpanAttribute::__cordl_internal_set__SizeParameter_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SizeParameter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param isReadOnly: bool (default: false)
inline ::UnityEngine::Bindings::SpanAttribute* UnityEngine::Bindings::SpanAttribute::New_ctor(::StringW sizeParameter, bool isReadOnly) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::SpanAttribute*>(sizeParameter, isReadOnly));
}
/// @param isReadOnly: bool (default: false)
inline void UnityEngine::Bindings::SpanAttribute::_ctor(::StringW sizeParameter, bool isReadOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::SpanAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sizeParameter, isReadOnly);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::SpanAttribute::SpanAttribute() {}
