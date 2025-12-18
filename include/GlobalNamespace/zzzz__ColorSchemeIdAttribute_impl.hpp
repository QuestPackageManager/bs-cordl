#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeIdAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeIdAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeIdAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeIdAttribute::*)(::StringW)>(&::GlobalNamespace::ColorSchemeIdAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x35fbbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeIdAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_get_emptyIsAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyIsAllowed;
}
constexpr bool const& GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_get_emptyIsAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyIsAllowed;
}
constexpr void GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_set_emptyIsAllowed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyIsAllowed = value;
}
constexpr ::StringW& GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_get_emptyExplanation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyExplanation;
}
constexpr ::StringW const& GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_get_emptyExplanation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyExplanation;
}
constexpr void GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_set_emptyExplanation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___emptyExplanation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ColorSchemeIdAttribute::_ctor(::StringW emptyExplanation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeIdAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, emptyExplanation);
}
inline ::GlobalNamespace::ColorSchemeIdAttribute* GlobalNamespace::ColorSchemeIdAttribute::New_ctor(::StringW emptyExplanation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorSchemeIdAttribute*>(emptyExplanation));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeIdAttribute::ColorSchemeIdAttribute() {}
