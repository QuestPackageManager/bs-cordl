#pragma once
// IWYU pragma private; include "Internal\Cryptography\OidLookup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Cryptography/zzzz__OidLookup_def.hpp"
#include "Internal/Cryptography/zzzz__OidLookup_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Security/Cryptography/zzzz__OidGroup_def.hpp"
//  Writing Method size for method: ::Internal::Cryptography::OidLookup___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Internal::Cryptography::OidLookup___c::*)()>(&::Internal::Cryptography::OidLookup___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fe2aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::OidLookup___c.__cctor_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Internal::Cryptography::OidLookup___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>)>(
    &::Internal::Cryptography::OidLookup___c::__cctor_b__10_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fe2aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup___c*>(),
                                                             { "<.cctor>b__10_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::OidLookup___c.__cctor_b__10_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Internal::Cryptography::OidLookup___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>)>(
    &::Internal::Cryptography::OidLookup___c::__cctor_b__10_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fe2af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup___c*>(),
                                                             { "<.cctor>b__10_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
    return ___internal_method;
  }
};
inline void Internal::Cryptography::OidLookup___c::setStaticF___9(::Internal::Cryptography::OidLookup___c* value) {
  ::cordl_internals::setStaticField<::Internal::Cryptography::OidLookup___c*, "<>9", ::Internal::Cryptography::OidLookup___c*>(std::forward<::Internal::Cryptography::OidLookup___c*>(value));
}
inline ::Internal::Cryptography::OidLookup___c* Internal::Cryptography::OidLookup___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Internal::Cryptography::OidLookup___c*, "<>9", ::Internal::Cryptography::OidLookup___c*>();
}
inline void Internal::Cryptography::OidLookup___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Internal::Cryptography::OidLookup___c::__cctor_b__10_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup___c*>(),
                                                           { "<.cctor>b__10_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kvp);
}
inline ::StringW Internal::Cryptography::OidLookup___c::__cctor_b__10_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup___c*>(),
                                                           { "<.cctor>b__10_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kvp);
}
inline ::Internal::Cryptography::OidLookup___c* Internal::Cryptography::OidLookup___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Internal::Cryptography::OidLookup___c*>());
}
// Ctor Parameters []
constexpr ::Internal::Cryptography::OidLookup___c::OidLookup___c() {}
//  Writing Method size for method: ::Internal::Cryptography::OidLookup.ToFriendlyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Security::Cryptography::OidGroup, bool)>(&::Internal::Cryptography::OidLookup::ToFriendlyName)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5fdf744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(),
                                                { "ToFriendlyName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::OidLookup.ToOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Security::Cryptography::OidGroup, bool)>(&::Internal::Cryptography::OidLookup::ToOid)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fdfd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(),
                                                             { "ToOid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::OidLookup.ShouldUseCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::OidGroup)>(&::Internal::Cryptography::OidLookup::ShouldUseCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdf934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(), { "ShouldUseCache", {}, { ::i2c::type_of<::System::Security::Cryptography::OidGroup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::OidLookup.NativeOidToFriendlyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Security::Cryptography::OidGroup, bool)>(&::Internal::Cryptography::OidLookup::NativeOidToFriendlyName)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5fdf93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(),
                                         { "NativeOidToFriendlyName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::OidLookup.NativeFriendlyNameToOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Security::Cryptography::OidGroup, bool)>(&::Internal::Cryptography::OidLookup::NativeFriendlyNameToOid)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5fdff04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(),
                                         { "NativeFriendlyNameToOid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Internal::Cryptography::OidLookup::setStaticF_s_lateBoundOidToFriendlyName(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>*, "s_lateBoundOidToFriendlyName", ::Internal::Cryptography::OidLookup*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* Internal::Cryptography::OidLookup::getStaticF_s_lateBoundOidToFriendlyName() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>*, "s_lateBoundOidToFriendlyName", ::Internal::Cryptography::OidLookup*>();
}
inline void Internal::Cryptography::OidLookup::setStaticF_s_lateBoundFriendlyNameToOid(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>*, "s_lateBoundFriendlyNameToOid", ::Internal::Cryptography::OidLookup*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>* Internal::Cryptography::OidLookup::getStaticF_s_lateBoundFriendlyNameToOid() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::StringW>*, "s_lateBoundFriendlyNameToOid", ::Internal::Cryptography::OidLookup*>();
}
inline void Internal::Cryptography::OidLookup::setStaticF_s_friendlyNameToOid(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_friendlyNameToOid", ::Internal::Cryptography::OidLookup*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Internal::Cryptography::OidLookup::getStaticF_s_friendlyNameToOid() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_friendlyNameToOid", ::Internal::Cryptography::OidLookup*>();
}
inline void Internal::Cryptography::OidLookup::setStaticF_s_oidToFriendlyName(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_oidToFriendlyName", ::Internal::Cryptography::OidLookup*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Internal::Cryptography::OidLookup::getStaticF_s_oidToFriendlyName() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_oidToFriendlyName", ::Internal::Cryptography::OidLookup*>();
}
inline void Internal::Cryptography::OidLookup::setStaticF_s_compatOids(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_compatOids", ::Internal::Cryptography::OidLookup*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Internal::Cryptography::OidLookup::getStaticF_s_compatOids() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_compatOids", ::Internal::Cryptography::OidLookup*>();
}
inline ::StringW Internal::Cryptography::OidLookup::ToFriendlyName(::StringW oid, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(),
                                              { "ToFriendlyName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid, oidGroup, fallBackToAllGroups);
}
inline ::StringW Internal::Cryptography::OidLookup::ToOid(::StringW friendlyName, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(),
                                                           { "ToOid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, friendlyName, oidGroup, fallBackToAllGroups);
}
inline bool Internal::Cryptography::OidLookup::ShouldUseCache(::System::Security::Cryptography::OidGroup oidGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(), { "ShouldUseCache", {}, { ::i2c::type_of<::System::Security::Cryptography::OidGroup>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, oidGroup);
}
inline ::StringW Internal::Cryptography::OidLookup::NativeOidToFriendlyName(::StringW oid, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(),
                                       { "NativeOidToFriendlyName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oid, oidGroup, fallBackToAllGroups);
}
inline ::StringW Internal::Cryptography::OidLookup::NativeFriendlyNameToOid(::StringW friendlyName, ::System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::OidLookup*>(),
                                       { "NativeFriendlyNameToOid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, friendlyName, oidGroup, fallBackToAllGroups);
}
// Ctor Parameters []
constexpr ::Internal::Cryptography::OidLookup::OidLookup() {}
