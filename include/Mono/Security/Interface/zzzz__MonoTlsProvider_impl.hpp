#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoTlsProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoTlsProvider::*)()>(&::Mono::Security::Interface::MonoTlsProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a9be6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProvider.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Mono::Security::Interface::MonoTlsProvider::*)()>(&::Mono::Security::Interface::MonoTlsProvider::get_ID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProvider.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Interface::MonoTlsProvider::*)()>(&::Mono::Security::Interface::MonoTlsProvider::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProvider.get_SupportsSslStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::MonoTlsProvider::*)()>(&::Mono::Security::Interface::MonoTlsProvider::get_SupportsSslStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProvider.get_SupportsConnectionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::MonoTlsProvider::*)()>(&::Mono::Security::Interface::MonoTlsProvider::get_SupportsConnectionInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProvider.get_SupportsMonoExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::MonoTlsProvider::*)()>(&::Mono::Security::Interface::MonoTlsProvider::get_SupportsMonoExtensions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProvider.get_SupportedProtocols
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::SslProtocols (::Mono::Security::Interface::MonoTlsProvider::*)()>(
    &::Mono::Security::Interface::MonoTlsProvider::get_SupportedProtocols)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProvider.get_SupportsCleanShutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Interface::MonoTlsProvider::*)()>(&::Mono::Security::Interface::MonoTlsProvider::get_SupportsCleanShutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 10 }));
    return ___internal_method;
  }
};
inline void Mono::Security::Interface::MonoTlsProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Guid Mono::Security::Interface::MonoTlsProvider::get_ID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW Mono::Security::Interface::MonoTlsProvider::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Mono::Security::Interface::MonoTlsProvider::get_SupportsSslStream() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Security::Interface::MonoTlsProvider::get_SupportsConnectionInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Security::Interface::MonoTlsProvider::get_SupportsMonoExtensions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Authentication::SslProtocols Mono::Security::Interface::MonoTlsProvider::get_SupportedProtocols() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols>(this, ___internal_method);
}
inline bool Mono::Security::Interface::MonoTlsProvider::get_SupportsCleanShutdown() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoTlsProvider*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsProvider* Mono::Security::Interface::MonoTlsProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::MonoTlsProvider*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoTlsProvider::MonoTlsProvider() {}
