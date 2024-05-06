#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LanguagePackInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LanguagePackInfo_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LanguagePackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LanguagePackInfo::*)(void*)>(
    &::Oculus::Platform::Models::LanguagePackInfo::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ada8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LanguagePackInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_get_EnglishName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnglishName;
}
constexpr ::StringW const& Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_get_EnglishName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnglishName;
}
constexpr void Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_set_EnglishName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EnglishName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_get_NativeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NativeName;
}
constexpr ::StringW const& Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_get_NativeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NativeName;
}
constexpr void Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_set_NativeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NativeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_get_Tag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tag;
}
constexpr ::StringW const& Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_get_Tag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tag;
}
constexpr void Oculus::Platform::Models::LanguagePackInfo::__cordl_internal_set_Tag(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Tag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::LanguagePackInfo* Oculus::Platform::Models::LanguagePackInfo::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LanguagePackInfo*>(o));
}
inline void Oculus::Platform::Models::LanguagePackInfo::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LanguagePackInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LanguagePackInfo::LanguagePackInfo() {}
