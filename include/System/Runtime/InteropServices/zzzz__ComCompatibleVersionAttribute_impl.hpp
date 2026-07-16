#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ComCompatibleVersionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ComCompatibleVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComCompatibleVersionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::ComCompatibleVersionAttribute::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::System::Runtime::InteropServices::ComCompatibleVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b6a2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ComCompatibleVersionAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_get__major() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____major;
}
constexpr int32_t const& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_get__major() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____major;
}
constexpr void System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_set__major(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____major = value;
}
constexpr int32_t& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_get__minor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minor;
}
constexpr int32_t const& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_get__minor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minor;
}
constexpr void System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_set__minor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minor = value;
}
constexpr int32_t& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_get__build() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____build;
}
constexpr int32_t const& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_get__build() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____build;
}
constexpr void System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_set__build(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____build = value;
}
constexpr int32_t& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_get__revision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revision;
}
constexpr int32_t const& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_get__revision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revision;
}
constexpr void System::Runtime::InteropServices::ComCompatibleVersionAttribute::__cordl_internal_set__revision(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____revision = value;
}
inline void System::Runtime::InteropServices::ComCompatibleVersionAttribute::_ctor(int32_t major, int32_t minor, int32_t build, int32_t revision) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ComCompatibleVersionAttribute*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, major, minor, build, revision);
}
inline ::System::Runtime::InteropServices::ComCompatibleVersionAttribute* System::Runtime::InteropServices::ComCompatibleVersionAttribute::New_ctor(int32_t major, int32_t minor, int32_t build,
                                                                                                                                                    int32_t revision) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::ComCompatibleVersionAttribute*>(major, minor, build, revision));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::ComCompatibleVersionAttribute() {}
