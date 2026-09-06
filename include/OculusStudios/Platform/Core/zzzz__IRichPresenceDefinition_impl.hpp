#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IRichPresenceDefinition.hpp"
#include "OculusStudios/Platform/Core/zzzz__IRichPresenceDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceRuntimeInstance_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::IRichPresenceDefinition.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IRichPresenceDefinition::*)()>(&::OculusStudios::Platform::Core::IRichPresenceDefinition::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IRichPresenceDefinition.get_activity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IRichPresenceDefinition::*)()>(
    &::OculusStudios::Platform::Core::IRichPresenceDefinition::get_activity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IRichPresenceDefinition.get_imageIdSmall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IRichPresenceDefinition::*)()>(
    &::OculusStudios::Platform::Core::IRichPresenceDefinition::get_imageIdSmall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IRichPresenceDefinition.get_imageIdLarge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IRichPresenceDefinition::*)()>(
    &::OculusStudios::Platform::Core::IRichPresenceDefinition::get_imageIdLarge)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IRichPresenceDefinition.CreateRuntime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance (::OculusStudios::Platform::Core::IRichPresenceDefinition::*)()>(
    &::OculusStudios::Platform::Core::IRichPresenceDefinition::CreateRuntime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 4 }));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::Platform::Core::IRichPresenceDefinition::get_id() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::IRichPresenceDefinition::get_activity() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::IRichPresenceDefinition::get_imageIdSmall() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::IRichPresenceDefinition::get_imageIdLarge() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance OculusStudios::Platform::Core::IRichPresenceDefinition::CreateRuntime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IRichPresenceDefinition*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance>(this, ___internal_method);
}
