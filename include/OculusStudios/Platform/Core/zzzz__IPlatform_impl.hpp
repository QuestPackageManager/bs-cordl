#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Core\IPlatform.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IRichPresenceDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceRuntimeInstance_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Vendor_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IPlatform::*)()>(&::OculusStudios::Platform::Core::IPlatform::get_displayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.get_key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IPlatform::*)()>(&::OculusStudios::Platform::Core::IPlatform::get_key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.get_vendor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::Vendor (::OculusStudios::Platform::Core::IPlatform::*)()>(
    &::OculusStudios::Platform::Core::IPlatform::get_vendor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.get_user
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::IPlatformUser* (::OculusStudios::Platform::Core::IPlatform::*)()>(
    &::OculusStudios::Platform::Core::IPlatform::get_user)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.get_entitlements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::IPlatformEntitlements* (::OculusStudios::Platform::Core::IPlatform::*)()>(
    &::OculusStudios::Platform::Core::IPlatform::get_entitlements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.add_destinationRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatform::*)(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*)>(
    &::OculusStudios::Platform::Core::IPlatform::add_destinationRequestedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.remove_destinationRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatform::*)(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*)>(
    &::OculusStudios::Platform::Core::IPlatform::remove_destinationRequestedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatform::*)(float_t)>(&::OculusStudios::Platform::Core::IPlatform::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.GetAppVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IPlatform::*)()>(&::OculusStudios::Platform::Core::IPlatform::GetAppVersion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.SetRichPresenceStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatform::*)(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance)>(
    &::OculusStudios::Platform::Core::IPlatform::SetRichPresenceStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.ClearRichPresenceStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatform::*)()>(&::OculusStudios::Platform::Core::IPlatform::ClearRichPresenceStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatform.GetDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> (::OculusStudios::Platform::Core::IPlatform::*)()>(
    &::OculusStudios::Platform::Core::IPlatform::GetDestination)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 11 }));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::Platform::Core::IPlatform::get_displayName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::IPlatform::get_key() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Core::IPlatform::get_vendor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::Vendor>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformUser* OculusStudios::Platform::Core::IPlatform::get_user() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformUser*>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::IPlatformEntitlements* OculusStudios::Platform::Core::IPlatform::get_entitlements() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::IPlatformEntitlements*>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::IPlatform::add_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::Platform::Core::IPlatform::remove_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::Platform::Core::IPlatform::Tick(float_t deltaTime) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline ::StringW OculusStudios::Platform::Core::IPlatform::GetAppVersion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::IPlatform::SetRichPresenceStatus(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance status) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline void OculusStudios::Platform::Core::IPlatform::ClearRichPresenceStatus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> OculusStudios::Platform::Core::IPlatform::GetDestination() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatform*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OculusStudios::Platform::Core::IPlatform::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OculusStudios::Platform::Core::IPlatform::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
