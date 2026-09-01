#pragma once
// IWYU pragma private; include "System\Security\AccessControl\ObjectSecurity.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/AccessControl/zzzz__ObjectSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessRule_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRuleCollection_def.hpp"
#include "System/Security/AccessControl/zzzz__CommonSecurityDescriptor_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLock_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectSecurity::*)(::System::Security::AccessControl::CommonSecurityDescriptor*)>(
    &::System::Security::AccessControl::ObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b207d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::AccessControl::CommonSecurityDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectSecurity::*)(bool, bool)>(&::System::Security::AccessControl::ObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b1ed48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.set_AccessControlSectionsModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectSecurity::*)(::System::Security::AccessControl::AccessControlSections)>(
    &::System::Security::AccessControl::ObjectSecurity::set_AccessControlSectionsModified)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b2015c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(),
                                                             { "set_AccessControlSectionsModified", {}, { ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.AccessRuleFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AccessRule* (
    ::System::Security::AccessControl::ObjectSecurity::*)(::System::Security::Principal::IdentityReference*, int32_t, bool, ::System::Security::AccessControl::InheritanceFlags,
                                                          ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType)>(
    &::System::Security::AccessControl::ObjectSecurity::AccessRuleFactory)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { ::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.ReadLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectSecurity::*)()>(&::System::Security::AccessControl::ObjectSecurity::ReadLock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b208f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "ReadLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.ReadUnlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectSecurity::*)()>(&::System::Security::AccessControl::ObjectSecurity::ReadUnlock)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b20914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "ReadUnlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.Writing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectSecurity::*)()>(&::System::Security::AccessControl::ObjectSecurity::Writing)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b2088c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "Writing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.WriteLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectSecurity::*)()>(&::System::Security::AccessControl::ObjectSecurity::WriteLock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b20140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "WriteLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.WriteUnlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectSecurity::*)()>(&::System::Security::AccessControl::ObjectSecurity::WriteUnlock)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b2092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "WriteUnlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.InternalGetAccessRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AuthorizationRuleCollection* (
    ::System::Security::AccessControl::ObjectSecurity::*)(bool, bool, ::System::Type*)>(&::System::Security::AccessControl::ObjectSecurity::InternalGetAccessRules)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5b1ee30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(),
                                                             { "InternalGetAccessRules", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectSecurity.InternalAccessRuleFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AccessRule* (
    ::System::Security::AccessControl::ObjectSecurity::*)(::System::Security::AccessControl::QualifiedAce*, ::System::Type*, ::System::Security::AccessControl::AccessControlType)>(
    &::System::Security::AccessControl::ObjectSecurity::InternalAccessRuleFactory)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b20944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { ::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::AccessControl::CommonSecurityDescriptor*& System::Security::AccessControl::ObjectSecurity::__cordl_internal_get_descriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descriptor;
}
constexpr ::System::Security::AccessControl::CommonSecurityDescriptor* const& System::Security::AccessControl::ObjectSecurity::__cordl_internal_get_descriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descriptor;
}
constexpr void System::Security::AccessControl::ObjectSecurity::__cordl_internal_set_descriptor(::System::Security::AccessControl::CommonSecurityDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descriptor = value;
}
constexpr ::System::Security::AccessControl::AccessControlSections& System::Security::AccessControl::ObjectSecurity::__cordl_internal_get_sections_modified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sections_modified;
}
constexpr ::System::Security::AccessControl::AccessControlSections const& System::Security::AccessControl::ObjectSecurity::__cordl_internal_get_sections_modified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sections_modified;
}
constexpr void System::Security::AccessControl::ObjectSecurity::__cordl_internal_set_sections_modified(::System::Security::AccessControl::AccessControlSections value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sections_modified = value;
}
constexpr ::System::Threading::ReaderWriterLock*& System::Security::AccessControl::ObjectSecurity::__cordl_internal_get_rw_lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rw_lock;
}
constexpr ::System::Threading::ReaderWriterLock* const& System::Security::AccessControl::ObjectSecurity::__cordl_internal_get_rw_lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rw_lock;
}
constexpr void System::Security::AccessControl::ObjectSecurity::__cordl_internal_set_rw_lock(::System::Threading::ReaderWriterLock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rw_lock = value;
}
inline void System::Security::AccessControl::ObjectSecurity::_ctor(::System::Security::AccessControl::CommonSecurityDescriptor* securityDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Security::AccessControl::CommonSecurityDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, securityDescriptor);
}
inline void System::Security::AccessControl::ObjectSecurity::_ctor(bool isContainer, bool isDS) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, isDS);
}
inline void System::Security::AccessControl::ObjectSecurity::set_AccessControlSectionsModified(::System::Security::AccessControl::AccessControlSections value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(),
                                                           { "set_AccessControlSectionsModified", {}, { ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::AccessControl::AccessRule* System::Security::AccessControl::ObjectSecurity::AccessRuleFactory(::System::Security::Principal::IdentityReference* identityReference,
                                                                                                                         int32_t accessMask, bool isInherited,
                                                                                                                         ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                                         ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                                                         ::System::Security::AccessControl::AccessControlType type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AccessRule*>(this, ___internal_method, identityReference, accessMask, isInherited, inheritanceFlags, propagationFlags,
                                                                                             type);
}
inline void System::Security::AccessControl::ObjectSecurity::ReadLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "ReadLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectSecurity::ReadUnlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "ReadUnlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectSecurity::Writing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "Writing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectSecurity::WriteLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "WriteLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectSecurity::WriteUnlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), { "WriteUnlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::AccessControl::AuthorizationRuleCollection* System::Security::AccessControl::ObjectSecurity::InternalGetAccessRules(bool includeExplicit, bool includeInherited,
                                                                                                                                               ::System::Type* targetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(),
                                                           { "InternalGetAccessRules", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AuthorizationRuleCollection*>(this, ___internal_method, includeExplicit, includeInherited, targetType);
}
inline ::System::Security::AccessControl::AccessRule* System::Security::AccessControl::ObjectSecurity::InternalAccessRuleFactory(::System::Security::AccessControl::QualifiedAce* ace,
                                                                                                                                 ::System::Type* targetType,
                                                                                                                                 ::System::Security::AccessControl::AccessControlType type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::ObjectSecurity*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AccessRule*>(this, ___internal_method, ace, targetType, type);
}
inline ::System::Security::AccessControl::ObjectSecurity* System::Security::AccessControl::ObjectSecurity::New_ctor(::System::Security::AccessControl::CommonSecurityDescriptor* securityDescriptor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::ObjectSecurity*>(securityDescriptor));
}
inline ::System::Security::AccessControl::ObjectSecurity* System::Security::AccessControl::ObjectSecurity::New_ctor(bool isContainer, bool isDS) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::ObjectSecurity*>(isContainer, isDS));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::ObjectSecurity::ObjectSecurity() {}
