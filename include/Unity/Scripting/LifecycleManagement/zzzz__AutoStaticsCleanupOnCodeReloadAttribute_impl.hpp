#pragma once
// IWYU pragma private; include "Unity/Scripting/LifecycleManagement/AutoStaticsCleanupOnCodeReloadAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Scripting/LifecycleManagement/zzzz__AutoStaticsCleanupOnCodeReloadAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute::*)()>(
    &::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ead428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute* Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Scripting::LifecycleManagement::AutoStaticsCleanupOnCodeReloadAttribute::AutoStaticsCleanupOnCodeReloadAttribute() {}
