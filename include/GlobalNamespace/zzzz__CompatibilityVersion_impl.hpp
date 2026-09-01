#pragma once
// IWYU pragma private; include "GlobalNamespace\CompatibilityVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CompatibilityVersion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompatibilityVersion.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::CompatibilityVersion::Get)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32a8ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompatibilityVersion*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompatibilityVersion.Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CompatibilityVersion::Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a8cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompatibilityVersion*>(), { "Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompatibilityVersion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompatibilityVersion::*)()>(&::GlobalNamespace::CompatibilityVersion::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a8cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompatibilityVersion*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::CompatibilityVersion::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompatibilityVersion*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CompatibilityVersion::Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompatibilityVersion*>(), { "Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CompatibilityVersion::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompatibilityVersion*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompatibilityVersion* GlobalNamespace::CompatibilityVersion::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompatibilityVersion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompatibilityVersion::CompatibilityVersion() {}
