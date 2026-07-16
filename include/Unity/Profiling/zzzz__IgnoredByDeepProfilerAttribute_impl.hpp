#pragma once
// IWYU pragma private; include "Unity/Profiling/IgnoredByDeepProfilerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Profiling/zzzz__IgnoredByDeepProfilerAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::IgnoredByDeepProfilerAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::IgnoredByDeepProfilerAttribute::*)()>(&::Unity::Profiling::IgnoredByDeepProfilerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a5785c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::IgnoredByDeepProfilerAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Profiling::IgnoredByDeepProfilerAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::IgnoredByDeepProfilerAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Profiling::IgnoredByDeepProfilerAttribute* Unity::Profiling::IgnoredByDeepProfilerAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Profiling::IgnoredByDeepProfilerAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Profiling::IgnoredByDeepProfilerAttribute::IgnoredByDeepProfilerAttribute() {}
