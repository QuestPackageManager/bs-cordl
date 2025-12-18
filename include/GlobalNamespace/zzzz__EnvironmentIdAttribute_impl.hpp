#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIdAttribute.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIdFilter_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIdAttribute_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIdFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentIdAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentIdAttribute::*)(::StringW, ::GlobalNamespace::EnvironmentIdFilter)>(
    &::GlobalNamespace::EnvironmentIdAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36301c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIdAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIdFilter>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_get_emptyIsAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyIsAllowed;
}
constexpr bool const& GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_get_emptyIsAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyIsAllowed;
}
constexpr void GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_set_emptyIsAllowed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyIsAllowed = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_get_emptyExplanation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyExplanation;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_get_emptyExplanation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyExplanation;
}
constexpr void GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_set_emptyExplanation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___emptyExplanation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentIdFilter& GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_get_filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr ::GlobalNamespace::EnvironmentIdFilter const& GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_get_filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter;
}
constexpr void GlobalNamespace::EnvironmentIdAttribute::__cordl_internal_set_filter(::GlobalNamespace::EnvironmentIdFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filter = value;
}
inline void GlobalNamespace::EnvironmentIdAttribute::_ctor(::StringW emptyExplanation, ::GlobalNamespace::EnvironmentIdFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentIdAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIdFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, emptyExplanation, filter);
}
inline ::GlobalNamespace::EnvironmentIdAttribute* GlobalNamespace::EnvironmentIdAttribute::New_ctor(::StringW emptyExplanation, ::GlobalNamespace::EnvironmentIdFilter filter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentIdAttribute*>(emptyExplanation, filter));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentIdAttribute::EnvironmentIdAttribute() {}
