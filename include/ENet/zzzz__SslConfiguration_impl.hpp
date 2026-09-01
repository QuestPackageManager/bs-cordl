#pragma once
// IWYU pragma private; include "ENet\SslConfiguration.hpp"
#include "ENet/zzzz__ENetSslConfiguration_impl.hpp"
#include "ENet/zzzz__SslConfiguration_def.hpp"
#include "ENet/zzzz__ENetSslConfiguration_def.hpp"
#include "ENet/zzzz__SslMode_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::ENet::SslConfiguration.get_NativeSslConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::ENetSslConfiguration (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_NativeSslConfiguration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58922c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_NativeSslConfiguration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_NativeSslConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::ENet::ENetSslConfiguration)>(&::ENet::SslConfiguration::set_NativeSslConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58922d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_NativeSslConfiguration", {}, { ::i2c::type_of<::ENet::ENetSslConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::ENet::ENetSslConfiguration)>(&::ENet::SslConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58922dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { ".ctor", {}, { ::i2c::type_of<::ENet::ENetSslConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58922e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::SslMode (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_Mode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::ENet::SslMode)>(&::ENet::SslConfiguration::set_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589233c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_Mode", {}, { ::i2c::type_of<::ENet::SslMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_CertificatePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_CertificatePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_CertificatePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_CertificatePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::StringW)>(&::ENet::SslConfiguration::set_CertificatePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58922fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_CertificatePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589234c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_Certificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::StringW)>(&::ENet::SslConfiguration::set_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_Certificate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_PrivateKeyPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_PrivateKeyPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_PrivateKeyPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_PrivateKeyPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::StringW)>(&::ENet::SslConfiguration::set_PrivateKeyPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_PrivateKeyPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_PrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_PrivateKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589235c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_PrivateKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_PrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::StringW)>(&::ENet::SslConfiguration::set_PrivateKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_PrivateKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_ValidateCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_ValidateCertificate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5892364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_ValidateCertificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_ValidateCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(bool)>(&::ENet::SslConfiguration::set_ValidateCertificate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5892374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_ValidateCertificate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_RootCertificatePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_RootCertificatePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_RootCertificatePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_RootCertificatePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::StringW)>(&::ENet::SslConfiguration::set_RootCertificatePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589231c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_RootCertificatePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_RootCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_RootCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_RootCertificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_RootCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::StringW)>(&::ENet::SslConfiguration::set_RootCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_RootCertificate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.get_HostName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::SslConfiguration::*)()>(&::ENet::SslConfiguration::get_HostName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_HostName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::SslConfiguration.set_HostName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::SslConfiguration::*)(::StringW)>(&::ENet::SslConfiguration::set_HostName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589232c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_HostName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::ENet::ENetSslConfiguration ENet::SslConfiguration::get_NativeSslConfiguration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_NativeSslConfiguration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::ENetSslConfiguration>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_NativeSslConfiguration(::ENet::ENetSslConfiguration value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_NativeSslConfiguration", {}, { ::i2c::type_of<::ENet::ENetSslConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void ENet::SslConfiguration::_ctor(::ENet::ENetSslConfiguration sslConfiguration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { ".ctor", {}, { ::i2c::type_of<::ENet::ENetSslConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sslConfiguration);
}
inline void ENet::SslConfiguration::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::ENet::SslMode ENet::SslConfiguration::get_Mode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_Mode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::SslMode>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_Mode(::ENet::SslMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_Mode", {}, { ::i2c::type_of<::ENet::SslMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW ENet::SslConfiguration::get_CertificatePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_CertificatePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_CertificatePath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_CertificatePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW ENet::SslConfiguration::get_Certificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_Certificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_Certificate(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_Certificate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW ENet::SslConfiguration::get_PrivateKeyPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_PrivateKeyPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_PrivateKeyPath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_PrivateKeyPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW ENet::SslConfiguration::get_PrivateKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_PrivateKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_PrivateKey(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_PrivateKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool ENet::SslConfiguration::get_ValidateCertificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_ValidateCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_ValidateCertificate(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_ValidateCertificate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW ENet::SslConfiguration::get_RootCertificatePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_RootCertificatePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_RootCertificatePath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_RootCertificatePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW ENet::SslConfiguration::get_RootCertificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_RootCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_RootCertificate(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_RootCertificate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW ENet::SslConfiguration::get_HostName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "get_HostName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void ENet::SslConfiguration::set_HostName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::SslConfiguration>(), { "set_HostName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr ENet::SslConfiguration::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ENet::SslConfiguration::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "nativeSslConfiguration", ty: "::ENet::ENetSslConfiguration", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::SslConfiguration::SslConfiguration(::ENet::ENetSslConfiguration nativeSslConfiguration) noexcept {
  this->nativeSslConfiguration = nativeSslConfiguration;
}
// Ctor Parameters []
constexpr ::ENet::SslConfiguration::SslConfiguration() {}
