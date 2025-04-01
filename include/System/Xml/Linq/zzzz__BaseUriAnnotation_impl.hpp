#pragma once
// IWYU pragma private; include "System/Xml/Linq/BaseUriAnnotation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__BaseUriAnnotation_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::BaseUriAnnotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::BaseUriAnnotation::*)(::StringW)>(&::System::Xml::Linq::BaseUriAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4240908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::BaseUriAnnotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Linq::BaseUriAnnotation::__cordl_internal_get_baseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr ::StringW const& System::Xml::Linq::BaseUriAnnotation::__cordl_internal_get_baseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr void System::Xml::Linq::BaseUriAnnotation::__cordl_internal_set_baseUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Linq::BaseUriAnnotation::_ctor(::StringW baseUri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::BaseUriAnnotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri);
}
inline ::System::Xml::Linq::BaseUriAnnotation* System::Xml::Linq::BaseUriAnnotation::New_ctor(::StringW baseUri) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Linq::BaseUriAnnotation*>(baseUri));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::BaseUriAnnotation::BaseUriAnnotation() {}
