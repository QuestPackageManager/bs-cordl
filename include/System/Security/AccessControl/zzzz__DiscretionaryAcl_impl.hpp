#pragma once
// IWYU pragma private; include "System/Security/AccessControl/DiscretionaryAcl.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_impl.hpp"
#include "System/Security/AccessControl/zzzz__DiscretionaryAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::DiscretionaryAcl::*)(bool, bool, int32_t)>(
    &::System::Security::AccessControl::DiscretionaryAcl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1d034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.AddAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::DiscretionaryAcl::*)(
    ::System::Security::AccessControl::AccessControlType, ::System::Security::Principal::SecurityIdentifier*, int32_t, ::System::Security::AccessControl::InheritanceFlags,
    ::System::Security::AccessControl::PropagationFlags)>(&::System::Security::AccessControl::DiscretionaryAcl::AddAccess)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b1d038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                            { "AddAccess",
                              {},
                              { ::i2c::type_of<::System::Security::AccessControl::AccessControlType>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(), ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.ApplyCanonicalSortToExplicitAces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::DiscretionaryAcl::*)()>(
    &::System::Security::AccessControl::DiscretionaryAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b1d204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.GetAceInsertPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::DiscretionaryAcl::*)(::System::Security::AccessControl::AceQualifier)>(
    &::System::Security::AccessControl::DiscretionaryAcl::GetAceInsertPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b1d24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.GetAceQualifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AceQualifier (*)(::System::Security::AccessControl::AccessControlType)>(
    &::System::Security::AccessControl::DiscretionaryAcl::GetAceQualifier)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b1d1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                                                                                           { "GetAceQualifier", {}, { ::i2c::type_of<::System::Security::AccessControl::AccessControlType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.IsAceMeaningless
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::DiscretionaryAcl::*)(::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::DiscretionaryAcl::IsAceMeaningless)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b1d25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::DiscretionaryAcl::_ctor(bool isContainer, bool isDS, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, isDS, capacity);
}
inline void System::Security::AccessControl::DiscretionaryAcl::AddAccess(::System::Security::AccessControl::AccessControlType accessType, ::System::Security::Principal::SecurityIdentifier* sid,
                                                                         int32_t accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                         ::System::Security::AccessControl::PropagationFlags propagationFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                          { "AddAccess",
                            {},
                            { ::i2c::type_of<::System::Security::AccessControl::AccessControlType>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(), ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accessType, sid, accessMask, inheritanceFlags, propagationFlags);
}
inline void System::Security::AccessControl::DiscretionaryAcl::ApplyCanonicalSortToExplicitAces() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::DiscretionaryAcl::GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, aceQualifier);
}
inline ::System::Security::AccessControl::AceQualifier System::Security::AccessControl::DiscretionaryAcl::GetAceQualifier(::System::Security::AccessControl::AccessControlType accessType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(),
                                                                                         { "GetAceQualifier", {}, { ::i2c::type_of<::System::Security::AccessControl::AccessControlType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceQualifier>(nullptr, ___internal_method, accessType);
}
inline bool System::Security::AccessControl::DiscretionaryAcl::IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::DiscretionaryAcl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ace);
}
inline ::System::Security::AccessControl::DiscretionaryAcl* System::Security::AccessControl::DiscretionaryAcl::New_ctor(bool isContainer, bool isDS, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::DiscretionaryAcl*>(isContainer, isDS, capacity));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::DiscretionaryAcl::DiscretionaryAcl() {}
