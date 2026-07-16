#pragma once
// IWYU pragma private; include "System/EnvironmentHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__EnvironmentHelpers_def.hpp"
//  Writing Method size for method: ::System::EnvironmentHelpers.IsWindowsVistaOrAbove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::EnvironmentHelpers::IsWindowsVistaOrAbove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::EnvironmentHelpers*>(), { "IsWindowsVistaOrAbove", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::EnvironmentHelpers::IsWindowsVistaOrAbove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::EnvironmentHelpers*>(), { "IsWindowsVistaOrAbove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::EnvironmentHelpers::EnvironmentHelpers() {}
