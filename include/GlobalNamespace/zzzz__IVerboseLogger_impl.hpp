#pragma once
// IWYU pragma private; include "GlobalNamespace\IVerboseLogger.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IVerboseLogger.get_loggerPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IVerboseLogger::*)()>(&::GlobalNamespace::IVerboseLogger::get_loggerPrefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVerboseLogger*>(), { ::i2c::class_of<::GlobalNamespace::IVerboseLogger*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::IVerboseLogger::get_loggerPrefix() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVerboseLogger*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
