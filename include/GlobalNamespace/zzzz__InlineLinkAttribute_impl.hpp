#pragma once
// IWYU pragma private; include "GlobalNamespace/InlineLinkAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__InlineLinkAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InlineLinkAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InlineLinkAttribute::*)(::StringW)>(&::GlobalNamespace::InlineLinkAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5be251c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InlineLinkAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::InlineLinkAttribute::__cordl_internal_get_DocumentationURL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DocumentationURL;
}
constexpr ::StringW const& GlobalNamespace::InlineLinkAttribute::__cordl_internal_get_DocumentationURL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DocumentationURL;
}
constexpr void GlobalNamespace::InlineLinkAttribute::__cordl_internal_set_DocumentationURL(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DocumentationURL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::InlineLinkAttribute::_ctor(::StringW documentationURL) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InlineLinkAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, documentationURL);
}
inline ::GlobalNamespace::InlineLinkAttribute* GlobalNamespace::InlineLinkAttribute::New_ctor(::StringW documentationURL) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::InlineLinkAttribute*>(documentationURL));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InlineLinkAttribute::InlineLinkAttribute() {}
