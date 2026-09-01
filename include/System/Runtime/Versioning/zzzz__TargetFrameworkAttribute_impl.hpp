#pragma once
// IWYU pragma private; include "System\Runtime\Versioning\TargetFrameworkAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Versioning/zzzz__TargetFrameworkAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Versioning::TargetFrameworkAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Versioning::TargetFrameworkAttribute::*)(::StringW)>(&::System::Runtime::Versioning::TargetFrameworkAttribute::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b4bb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Versioning::TargetFrameworkAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Versioning::TargetFrameworkAttribute.set_FrameworkDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Versioning::TargetFrameworkAttribute::*)(::StringW)>(
    &::System::Runtime::Versioning::TargetFrameworkAttribute::set_FrameworkDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Versioning::TargetFrameworkAttribute*>(), { "set_FrameworkDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_get__frameworkName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameworkName;
}
constexpr ::StringW const& System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_get__frameworkName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameworkName;
}
constexpr void System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_set__frameworkName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameworkName = value;
}
constexpr ::StringW& System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_get__frameworkDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameworkDisplayName;
}
constexpr ::StringW const& System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_get__frameworkDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameworkDisplayName;
}
constexpr void System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_set__frameworkDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frameworkDisplayName = value;
}
inline void System::Runtime::Versioning::TargetFrameworkAttribute::_ctor(::StringW frameworkName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Versioning::TargetFrameworkAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameworkName);
}
inline void System::Runtime::Versioning::TargetFrameworkAttribute::set_FrameworkDisplayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Versioning::TargetFrameworkAttribute*>(), { "set_FrameworkDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Versioning::TargetFrameworkAttribute* System::Runtime::Versioning::TargetFrameworkAttribute::New_ctor(::StringW frameworkName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Versioning::TargetFrameworkAttribute*>(frameworkName));
}
// Ctor Parameters []
constexpr ::System::Runtime::Versioning::TargetFrameworkAttribute::TargetFrameworkAttribute() {}
