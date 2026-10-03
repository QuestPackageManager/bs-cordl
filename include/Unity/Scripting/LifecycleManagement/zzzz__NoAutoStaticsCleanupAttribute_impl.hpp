#pragma once
// IWYU pragma private; include "Unity/Scripting/LifecycleManagement/NoAutoStaticsCleanupAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Scripting/LifecycleManagement/zzzz__NoAutoStaticsCleanupAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute::*)()>(
    &::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ead42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute* Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Scripting::LifecycleManagement::NoAutoStaticsCleanupAttribute::NoAutoStaticsCleanupAttribute() {}
