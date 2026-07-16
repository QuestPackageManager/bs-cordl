#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertiesInitialization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__PropertiesInitialization_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::PropertiesInitialization.InitializeProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Properties::Internal::PropertiesInitialization::InitializeProperties)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6bae804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertiesInitialization*>(), { "InitializeProperties", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::PropertiesInitialization::InitializeProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::PropertiesInitialization*>(), { "InitializeProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::PropertiesInitialization::PropertiesInitialization() {}
