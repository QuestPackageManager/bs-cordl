#pragma once
// IWYU pragma private; include "Mono/SystemDependencyProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__SystemDependencyProvider_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
#include "Mono/zzzz__SystemCertificateProvider_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::SystemDependencyProvider.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::SystemDependencyProvider* (*)()>(&::Mono::SystemDependencyProvider::get_Instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fca8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::SystemDependencyProvider::Initialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fca93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider.Mono_ISystemDependencyProvider_get_CertificateProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::ISystemCertificateProvider* (::Mono::SystemDependencyProvider::*)()>(
    &::Mono::SystemDependencyProvider::Mono_ISystemDependencyProvider_get_CertificateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcab04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "Mono.ISystemDependencyProvider.get_CertificateProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider.get_CertificateProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::SystemCertificateProvider* (::Mono::SystemDependencyProvider::*)()>(&::Mono::SystemDependencyProvider::get_CertificateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcab0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "get_CertificateProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider.get_X509Pal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::X509PalImpl* (::Mono::SystemDependencyProvider::*)()>(&::Mono::SystemDependencyProvider::get_X509Pal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fcab14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "get_X509Pal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::SystemDependencyProvider::*)()>(&::Mono::SystemDependencyProvider::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fcaa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Mono::SystemCertificateProvider*& Mono::SystemDependencyProvider::__cordl_internal_get__CertificateProvider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateProvider_k__BackingField;
}
constexpr ::Mono::SystemCertificateProvider* const& Mono::SystemDependencyProvider::__cordl_internal_get__CertificateProvider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateProvider_k__BackingField;
}
constexpr void Mono::SystemDependencyProvider::__cordl_internal_set__CertificateProvider_k__BackingField(::Mono::SystemCertificateProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CertificateProvider_k__BackingField = value;
}
inline void Mono::SystemDependencyProvider::setStaticF_instance(::Mono::SystemDependencyProvider* value) {
  ::cordl_internals::setStaticField<::Mono::SystemDependencyProvider*, "instance", ::Mono::SystemDependencyProvider*>(std::forward<::Mono::SystemDependencyProvider*>(value));
}
inline ::Mono::SystemDependencyProvider* Mono::SystemDependencyProvider::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::Mono::SystemDependencyProvider*, "instance", ::Mono::SystemDependencyProvider*>();
}
inline void Mono::SystemDependencyProvider::setStaticF_syncRoot(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "syncRoot", ::Mono::SystemDependencyProvider*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::SystemDependencyProvider::getStaticF_syncRoot() {
  return ::cordl_internals::getStaticField<::System::Object*, "syncRoot", ::Mono::SystemDependencyProvider*>();
}
inline ::Mono::SystemDependencyProvider* Mono::SystemDependencyProvider::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::SystemDependencyProvider*>(nullptr, ___internal_method);
}
inline void Mono::SystemDependencyProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Mono::ISystemCertificateProvider* Mono::SystemDependencyProvider::Mono_ISystemDependencyProvider_get_CertificateProvider() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "Mono.ISystemDependencyProvider.get_CertificateProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemCertificateProvider*>(this, ___internal_method);
}
inline ::Mono::SystemCertificateProvider* Mono::SystemDependencyProvider::get_CertificateProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "get_CertificateProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::SystemCertificateProvider*>(this, ___internal_method);
}
inline ::Mono::X509PalImpl* Mono::SystemDependencyProvider::get_X509Pal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { "get_X509Pal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl*>(this, ___internal_method);
}
inline void Mono::SystemDependencyProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemDependencyProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::SystemDependencyProvider* Mono::SystemDependencyProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::SystemDependencyProvider*>());
}
/// @brief Convert operator to "::Mono::ISystemDependencyProvider"
constexpr Mono::SystemDependencyProvider::operator ::Mono::ISystemDependencyProvider*() noexcept {
  return static_cast<::Mono::ISystemDependencyProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mono::ISystemDependencyProvider"
constexpr ::Mono::ISystemDependencyProvider* Mono::SystemDependencyProvider::i___Mono__ISystemDependencyProvider() noexcept {
  return static_cast<::Mono::ISystemDependencyProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::SystemDependencyProvider::SystemDependencyProvider() {}
