#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/CustomStyleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__CustomStyleAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::CustomStyleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::CustomStyleAttribute::*)(::StringW)>(
    &::UnityEngine::Timeline::CustomStyleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x482f1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::CustomStyleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Timeline::CustomStyleAttribute::__cordl_internal_get_ussStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ussStyle;
}
constexpr ::StringW const& UnityEngine::Timeline::CustomStyleAttribute::__cordl_internal_get_ussStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ussStyle;
}
constexpr void UnityEngine::Timeline::CustomStyleAttribute::__cordl_internal_set_ussStyle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ussStyle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Timeline::CustomStyleAttribute::_ctor(::StringW ussStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::CustomStyleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ussStyle);
}
inline ::UnityEngine::Timeline::CustomStyleAttribute* UnityEngine::Timeline::CustomStyleAttribute::New_ctor(::StringW ussStyle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::CustomStyleAttribute*>(ussStyle));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::CustomStyleAttribute::CustomStyleAttribute() {}
