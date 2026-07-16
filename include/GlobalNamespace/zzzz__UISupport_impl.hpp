#pragma once
// IWYU pragma private; include "GlobalNamespace/UISupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UISupport_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UISupport.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::UISupport::Initialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64cae0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UISupport*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UISupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UISupport*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UISupport::UISupport() {}
