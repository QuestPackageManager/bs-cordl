#pragma once
// IWYU pragma private; include "Mono/SystemDependencyProvider.hpp"
#include "Mono/zzzz__ISystemDependencyProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__SystemDependencyProvider_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "Mono/zzzz__SystemCertificateProvider_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::SystemDependencyProvider.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::SystemDependencyProvider* (*)()>(&::Mono::SystemDependencyProvider::get_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4109d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Mono::SystemDependencyProvider::Initialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4109d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider.Mono_ISystemDependencyProvider_get_CertificateProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::ISystemCertificateProvider* (::Mono::SystemDependencyProvider::*)()>(
    &::Mono::SystemDependencyProvider::Mono_ISystemDependencyProvider_get_CertificateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4109f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(),
                                                 "Mono.ISystemDependencyProvider.get_CertificateProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider.get_CertificateProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::SystemCertificateProvider* (::Mono::SystemDependencyProvider::*)()>(
    &::Mono::SystemDependencyProvider::get_CertificateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4109f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(),
                                                                               "get_CertificateProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider.get_X509Pal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::X509PalImpl* (::Mono::SystemDependencyProvider::*)()>(&::Mono::SystemDependencyProvider::get_X509Pal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4109f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(), "get_X509Pal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemDependencyProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::SystemDependencyProvider::*)()>(&::Mono::SystemDependencyProvider::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4109ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CertificateProvider_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::SystemDependencyProvider::setStaticF_instance(::Mono::SystemDependencyProvider* value) {
  ::cordl_internals::setStaticField<::Mono::SystemDependencyProvider*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get>(
      std::forward<::Mono::SystemDependencyProvider*>(value));
}
inline ::Mono::SystemDependencyProvider* Mono::SystemDependencyProvider::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::Mono::SystemDependencyProvider*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get>();
}
inline void Mono::SystemDependencyProvider::setStaticF_syncRoot(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "syncRoot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::SystemDependencyProvider::getStaticF_syncRoot() {
  return ::cordl_internals::getStaticField<::System::Object*, "syncRoot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get>();
}
inline ::Mono::SystemDependencyProvider* Mono::SystemDependencyProvider::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::SystemDependencyProvider*, false>(nullptr, ___internal_method);
}
inline void Mono::SystemDependencyProvider::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Mono::ISystemCertificateProvider* Mono::SystemDependencyProvider::Mono_ISystemDependencyProvider_get_CertificateProvider() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(),
                                               "Mono.ISystemDependencyProvider.get_CertificateProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemCertificateProvider*, false>(this, ___internal_method);
}
inline ::Mono::SystemCertificateProvider* Mono::SystemDependencyProvider::get_CertificateProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(),
                                                                             "get_CertificateProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::SystemCertificateProvider*, false>(this, ___internal_method);
}
inline ::Mono::X509PalImpl* Mono::SystemDependencyProvider::get_X509Pal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(), "get_X509Pal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl*, false>(this, ___internal_method);
}
inline void Mono::SystemDependencyProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemDependencyProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::SystemDependencyProvider* Mono::SystemDependencyProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::SystemDependencyProvider*>());
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
