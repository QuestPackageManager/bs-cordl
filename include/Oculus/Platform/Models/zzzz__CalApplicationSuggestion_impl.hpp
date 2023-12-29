#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationSuggestion_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CalApplicationSuggestion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::CalApplicationSuggestion::*)(void*)>(
    &::Oculus::Platform::Models::CalApplicationSuggestion::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25b1dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CalApplicationSuggestion*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::CalApplicationSuggestion::__get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::CalApplicationSuggestion::__get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::CalApplicationSuggestion::__set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::StringW& Oculus::Platform::Models::CalApplicationSuggestion::__get_SocialContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SocialContext;
}
constexpr ::StringW const& Oculus::Platform::Models::CalApplicationSuggestion::__get_SocialContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SocialContext;
}
constexpr void Oculus::Platform::Models::CalApplicationSuggestion::__set_SocialContext(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SocialContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::CalApplicationSuggestion* Oculus::Platform::Models::CalApplicationSuggestion::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::CalApplicationSuggestion*>(o));
}
inline void Oculus::Platform::Models::CalApplicationSuggestion::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CalApplicationSuggestion*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CalApplicationSuggestion::CalApplicationSuggestion() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
