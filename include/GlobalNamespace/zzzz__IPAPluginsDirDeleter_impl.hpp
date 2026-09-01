#pragma once
// IWYU pragma private; include "GlobalNamespace\IPAPluginsDirDeleter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IPAPluginsDirDeleter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IPAPluginsDirDeleter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IPAPluginsDirDeleter::*)()>(&::GlobalNamespace::IPAPluginsDirDeleter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5852c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPAPluginsDirDeleter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IPAPluginsDirDeleter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPAPluginsDirDeleter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IPAPluginsDirDeleter* GlobalNamespace::IPAPluginsDirDeleter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IPAPluginsDirDeleter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IPAPluginsDirDeleter::IPAPluginsDirDeleter() {}
