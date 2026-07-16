#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LanguagePackInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LanguagePackInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LanguagePackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LanguagePackInfo::*)(::System::IntPtr)>(&::Oculus::Platform::Models::LanguagePackInfo::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5dedbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LanguagePackInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
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
  this->___EnglishName = value;
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
  this->___NativeName = value;
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
  this->___Tag = value;
}
inline void Oculus::Platform::Models::LanguagePackInfo::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LanguagePackInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LanguagePackInfo* Oculus::Platform::Models::LanguagePackInfo::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LanguagePackInfo*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LanguagePackInfo::LanguagePackInfo() {}
