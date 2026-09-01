#pragma once
// IWYU pragma private; include "GlobalNamespace\__JobReflectionRegistrationOutput__1652832624114795843.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz____JobReflectionRegistrationOutput__1652832624114795843_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843.CreateJobReflectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x64d0080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843*>(), { "CreateJobReflectionData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843.EarlyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843::EarlyInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64d038c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843*>(), { "EarlyInit", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843::CreateJobReflectionData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843*>(), { "CreateJobReflectionData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843::EarlyInit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843*>(), { "EarlyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__JobReflectionRegistrationOutput__1652832624114795843::__JobReflectionRegistrationOutput__1652832624114795843() {}
