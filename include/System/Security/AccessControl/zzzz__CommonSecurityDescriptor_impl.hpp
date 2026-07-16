#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonSecurityDescriptor.hpp"
#include "System/Security/AccessControl/zzzz__ControlFlags_impl.hpp"
#include "System/Security/AccessControl/zzzz__GenericSecurityDescriptor_impl.hpp"
#include "System/Security/AccessControl/zzzz__CommonSecurityDescriptor_def.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__ControlFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__DiscretionaryAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__SystemAcl_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(
    bool, bool, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*,
    ::System::Security::AccessControl::SystemAcl*, ::System::Security::AccessControl::DiscretionaryAcl*)>(&::System::Security::AccessControl::CommonSecurityDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ControlFlags>(),
                                                    ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::SystemAcl*>(), ::i2c::type_of<::System::Security::AccessControl::DiscretionaryAcl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(
    bool, bool, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*,
    ::System::Security::AccessControl::SystemAcl*, ::System::Security::AccessControl::DiscretionaryAcl*)>(&::System::Security::AccessControl::CommonSecurityDescriptor::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b1ce78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                { "Init",
                                                  {},
                                                  { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ControlFlags>(),
                                                    ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::SystemAcl*>(), ::i2c::type_of<::System::Security::AccessControl::DiscretionaryAcl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_DiscretionaryAcl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::DiscretionaryAcl* (::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::get_DiscretionaryAcl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1d02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), { "get_DiscretionaryAcl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_DiscretionaryAcl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::DiscretionaryAcl*)>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::set_DiscretionaryAcl)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b1cf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                             { "set_DiscretionaryAcl", {}, { ::i2c::type_of<::System::Security::AccessControl::DiscretionaryAcl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_Group
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::set_Group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1d160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_IsContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1d168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), { "get_IsContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_IsDS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::get_IsDS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1d170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), { "get_IsDS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_Owner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::set_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1d178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_SystemAcl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::SystemAcl*)>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::set_SystemAcl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b1cef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                                                           { "set_SystemAcl", {}, { ::i2c::type_of<::System::Security::AccessControl::SystemAcl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.CheckAclConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::CommonAcl*)>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::CheckAclConsistency)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b1d0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                                                           { "CheckAclConsistency", {}, { ::i2c::type_of<::System::Security::AccessControl::CommonAcl*>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_is_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_container;
}
constexpr bool const& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_is_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_container;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_set_is_container(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_container = value;
}
constexpr bool& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_is_ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_ds;
}
constexpr bool const& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_is_ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_ds;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_set_is_ds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_ds = value;
}
constexpr ::System::Security::AccessControl::ControlFlags& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::System::Security::AccessControl::ControlFlags const& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_set_flags(::System::Security::AccessControl::ControlFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr ::System::Security::Principal::SecurityIdentifier*& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::System::Security::Principal::SecurityIdentifier* const& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_set_owner(::System::Security::Principal::SecurityIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___owner = value;
}
constexpr ::System::Security::Principal::SecurityIdentifier*& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___group;
}
constexpr ::System::Security::Principal::SecurityIdentifier* const& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___group;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_set_group(::System::Security::Principal::SecurityIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___group = value;
}
constexpr ::System::Security::AccessControl::SystemAcl*& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_system_acl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___system_acl;
}
constexpr ::System::Security::AccessControl::SystemAcl* const& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_system_acl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___system_acl;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_set_system_acl(::System::Security::AccessControl::SystemAcl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___system_acl = value;
}
constexpr ::System::Security::AccessControl::DiscretionaryAcl*& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_discretionary_acl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___discretionary_acl;
}
constexpr ::System::Security::AccessControl::DiscretionaryAcl* const& System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_get_discretionary_acl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___discretionary_acl;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__cordl_internal_set_discretionary_acl(::System::Security::AccessControl::DiscretionaryAcl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___discretionary_acl = value;
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::_ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags,
                                                                             ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group,
                                                                             ::System::Security::AccessControl::SystemAcl* systemAcl,
                                                                             ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ControlFlags>(),
                                                  ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::SystemAcl*>(), ::i2c::type_of<::System::Security::AccessControl::DiscretionaryAcl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::Init(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags,
                                                                            ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group,
                                                                            ::System::Security::AccessControl::SystemAcl* systemAcl,
                                                                            ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                              { "Init",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::ControlFlags>(),
                                                  ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::SystemAcl*>(), ::i2c::type_of<::System::Security::AccessControl::DiscretionaryAcl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl);
}
inline ::System::Security::AccessControl::DiscretionaryAcl* System::Security::AccessControl::CommonSecurityDescriptor::get_DiscretionaryAcl() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), { "get_DiscretionaryAcl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::DiscretionaryAcl*>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::set_DiscretionaryAcl(::System::Security::AccessControl::DiscretionaryAcl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                                                         { "set_DiscretionaryAcl", {}, { ::i2c::type_of<::System::Security::AccessControl::DiscretionaryAcl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::set_Group(::System::Security::Principal::SecurityIdentifier* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Security::AccessControl::CommonSecurityDescriptor::get_IsContainer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), { "get_IsContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonSecurityDescriptor::get_IsDS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), { "get_IsDS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::set_Owner(::System::Security::Principal::SecurityIdentifier* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::set_SystemAcl(::System::Security::AccessControl::SystemAcl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                                                         { "set_SystemAcl", {}, { ::i2c::type_of<::System::Security::AccessControl::SystemAcl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::CheckAclConsistency(::System::Security::AccessControl::CommonAcl* acl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonSecurityDescriptor*>(),
                                                                                         { "CheckAclConsistency", {}, { ::i2c::type_of<::System::Security::AccessControl::CommonAcl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, acl);
}
inline ::System::Security::AccessControl::CommonSecurityDescriptor*
System::Security::AccessControl::CommonSecurityDescriptor::New_ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags,
                                                                    ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group,
                                                                    ::System::Security::AccessControl::SystemAcl* systemAcl, ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::CommonSecurityDescriptor*>(isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::CommonSecurityDescriptor::CommonSecurityDescriptor() {}
