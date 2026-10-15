#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AppInitQuitRequestedException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AppInitQuitRequestedException_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AppInitQuitRequestedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AppInitQuitRequestedException::*)(int32_t)>(
    &::BGLib::AppFlow::Initialization::AppInitQuitRequestedException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35b38c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AppInitQuitRequestedException*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BGLib::AppFlow::Initialization::AppInitQuitRequestedException::__cordl_internal_get_exitCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitCode;
}
constexpr int32_t const& BGLib::AppFlow::Initialization::AppInitQuitRequestedException::__cordl_internal_get_exitCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitCode;
}
constexpr void BGLib::AppFlow::Initialization::AppInitQuitRequestedException::__cordl_internal_set_exitCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exitCode = value;
}
inline void BGLib::AppFlow::Initialization::AppInitQuitRequestedException::_ctor(int32_t exitCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AppInitQuitRequestedException*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exitCode);
}
inline ::BGLib::AppFlow::Initialization::AppInitQuitRequestedException* BGLib::AppFlow::Initialization::AppInitQuitRequestedException::New_ctor(int32_t exitCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AppInitQuitRequestedException*>(exitCode));
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AppInitQuitRequestedException::AppInitQuitRequestedException() {}
