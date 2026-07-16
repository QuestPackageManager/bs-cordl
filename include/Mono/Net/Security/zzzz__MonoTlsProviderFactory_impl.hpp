#pragma once
// IWYU pragma private; include "Mono/Net/Security/MonoTlsProviderFactory.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsProviderFactory_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsProviderFactory.GetProviderInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsProvider* (*)()>(&::Mono::Net::Security::MonoTlsProviderFactory::GetProviderInternal)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5fd3554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "GetProviderInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsProviderFactory.InitializeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::Net::Security::MonoTlsProviderFactory::InitializeInternal)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5fd786c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "InitializeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsProviderFactory.LookupProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsProvider* (*)(::StringW, bool)>(&::Mono::Net::Security::MonoTlsProviderFactory::LookupProvider)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x5fd804c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "LookupProvider", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsProviderFactory.InitializeProviderRegistration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::Net::Security::MonoTlsProviderFactory::InitializeProviderRegistration)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5fd7c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "InitializeProviderRegistration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsProviderFactory.PopulateUnityProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::Net::Security::MonoTlsProviderFactory::PopulateUnityProviders)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5fd8630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "PopulateUnityProviders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsProviderFactory.PopulateProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::Net::Security::MonoTlsProviderFactory::PopulateProviders)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fd8798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "PopulateProviders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsProviderFactory.CreateDefaultProviderImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsProvider* (*)()>(&::Mono::Net::Security::MonoTlsProviderFactory::CreateDefaultProviderImpl)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5fd7ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "CreateDefaultProviderImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsProviderFactory.GetProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsProvider* (*)()>(&::Mono::Net::Security::MonoTlsProviderFactory::GetProvider)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fd8810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "GetProvider", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::MonoTlsProviderFactory::setStaticF_locker(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "locker", ::Mono::Net::Security::MonoTlsProviderFactory*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::Net::Security::MonoTlsProviderFactory::getStaticF_locker() {
  return ::cordl_internals::getStaticField<::System::Object*, "locker", ::Mono::Net::Security::MonoTlsProviderFactory*>();
}
inline void Mono::Net::Security::MonoTlsProviderFactory::setStaticF_initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "initialized", ::Mono::Net::Security::MonoTlsProviderFactory*>(std::forward<bool>(value));
}
inline bool Mono::Net::Security::MonoTlsProviderFactory::getStaticF_initialized() {
  return ::cordl_internals::getStaticField<bool, "initialized", ::Mono::Net::Security::MonoTlsProviderFactory*>();
}
inline void Mono::Net::Security::MonoTlsProviderFactory::setStaticF_defaultProvider(::Mono::Net::Security::MobileTlsProvider* value) {
  ::cordl_internals::setStaticField<::Mono::Net::Security::MobileTlsProvider*, "defaultProvider", ::Mono::Net::Security::MonoTlsProviderFactory*>(
      std::forward<::Mono::Net::Security::MobileTlsProvider*>(value));
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MonoTlsProviderFactory::getStaticF_defaultProvider() {
  return ::cordl_internals::getStaticField<::Mono::Net::Security::MobileTlsProvider*, "defaultProvider", ::Mono::Net::Security::MonoTlsProviderFactory*>();
}
inline void
Mono::Net::Security::MonoTlsProviderFactory::setStaticF_providerRegistration(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>*, "providerRegistration",
                                    ::Mono::Net::Security::MonoTlsProviderFactory*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* Mono::Net::Security::MonoTlsProviderFactory::getStaticF_providerRegistration() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>*, "providerRegistration",
                                           ::Mono::Net::Security::MonoTlsProviderFactory*>();
}
inline void Mono::Net::Security::MonoTlsProviderFactory::setStaticF_providerCache(::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>*, "providerCache",
                                    ::Mono::Net::Security::MonoTlsProviderFactory*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>* Mono::Net::Security::MonoTlsProviderFactory::getStaticF_providerCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>*, "providerCache",
                                           ::Mono::Net::Security::MonoTlsProviderFactory*>();
}
inline void Mono::Net::Security::MonoTlsProviderFactory::setStaticF_UnityTlsId(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "UnityTlsId", ::Mono::Net::Security::MonoTlsProviderFactory*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Mono::Net::Security::MonoTlsProviderFactory::getStaticF_UnityTlsId() {
  return ::cordl_internals::getStaticField<::System::Guid, "UnityTlsId", ::Mono::Net::Security::MonoTlsProviderFactory*>();
}
inline void Mono::Net::Security::MonoTlsProviderFactory::setStaticF_AppleTlsId(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "AppleTlsId", ::Mono::Net::Security::MonoTlsProviderFactory*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Mono::Net::Security::MonoTlsProviderFactory::getStaticF_AppleTlsId() {
  return ::cordl_internals::getStaticField<::System::Guid, "AppleTlsId", ::Mono::Net::Security::MonoTlsProviderFactory*>();
}
inline void Mono::Net::Security::MonoTlsProviderFactory::setStaticF_BtlsId(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "BtlsId", ::Mono::Net::Security::MonoTlsProviderFactory*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Mono::Net::Security::MonoTlsProviderFactory::getStaticF_BtlsId() {
  return ::cordl_internals::getStaticField<::System::Guid, "BtlsId", ::Mono::Net::Security::MonoTlsProviderFactory*>();
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MonoTlsProviderFactory::GetProviderInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "GetProviderInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider*>(nullptr, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsProviderFactory::InitializeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "InitializeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MonoTlsProviderFactory::LookupProvider(::StringW name, bool throwOnError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "LookupProvider", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider*>(nullptr, ___internal_method, name, throwOnError);
}
inline void Mono::Net::Security::MonoTlsProviderFactory::InitializeProviderRegistration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "InitializeProviderRegistration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsProviderFactory::PopulateUnityProviders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "PopulateUnityProviders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsProviderFactory::PopulateProviders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "PopulateProviders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MonoTlsProviderFactory::CreateDefaultProviderImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "CreateDefaultProviderImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider*>(nullptr, ___internal_method);
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MonoTlsProviderFactory::GetProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MonoTlsProviderFactory*>(), { "GetProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MonoTlsProviderFactory::MonoTlsProviderFactory() {}
