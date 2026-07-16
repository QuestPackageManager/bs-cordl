#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonAcl.hpp"
#include "System/Security/AccessControl/zzzz__GenericAcl_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AuditFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAce_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "System/Security/AccessControl/zzzz__RawAcl_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T> inline bool System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>::Invoke(T ace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ace);
}
template <typename T>
inline ::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>* System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>::CommonAcl_RemoveAcesCallback_1() {}
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(bool, bool, uint8_t, int32_t)>(&::System::Security::AccessControl::CommonAcl::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b1b024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(bool, bool, int32_t)>(&::System::Security::AccessControl::CommonAcl::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b1b1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(bool, bool, ::System::Security::AccessControl::RawAcl*)>(
    &::System::Security::AccessControl::CommonAcl::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b1b198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::RawAcl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b1b318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_IsCanonical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::get_IsCanonical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1b334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_IsCanonical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_IsContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1b33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_IsContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_IsDS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::get_IsDS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1b344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_IsDS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.set_IsAefa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(bool)>(&::System::Security::AccessControl::CommonAcl::set_IsAefa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1b34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "set_IsAefa", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::GenericAce* (::System::Security::AccessControl::CommonAcl::*)(int32_t)>(
    &::System::Security::AccessControl::CommonAcl::get_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b1b354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(int32_t, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::CommonAcl::set_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b1b408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                             { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.RequireCanonicity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::RequireCanonicity)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b1b440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "RequireCanonicity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.CanonicalizeAndClearAefa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::CanonicalizeAndClearAefa)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b1b250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "CanonicalizeAndClearAefa", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.IsAceMeaningless
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::CommonAcl::IsAceMeaningless)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b1b780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.TestCanonicity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::TestCanonicity)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b1b498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "TestCanonicity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetCanonicalExplicitDenyAceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::GetCanonicalExplicitDenyAceCount)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5b1bb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "GetCanonicalExplicitDenyAceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetCanonicalExplicitAceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::GetCanonicalExplicitAceCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b1bdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "GetCanonicalExplicitAceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.MergeExplicitAces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::MergeExplicitAces)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b1b660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "MergeExplicitAces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.MergeExplicitAcePair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::GenericAce* (
    ::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::GenericAce*, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::CommonAcl::MergeExplicitAcePair)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5b1be34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                            { "MergeExplicitAcePair", {}, { ::i2c::type_of<::System::Security::AccessControl::GenericAce*>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetObjectAceTypeGuids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Security::AccessControl::ObjectAce*, ::by_ref<::System::Guid>, ::by_ref<::System::Guid>)>(
    &::System::Security::AccessControl::CommonAcl::GetObjectAceTypeGuids)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b1c2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                            { "GetObjectAceTypeGuids",
                              {},
                              { ::i2c::type_of<::System::Security::AccessControl::ObjectAce*>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.ApplyCanonicalSortToExplicitAces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.ApplyCanonicalSortToExplicitAces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(int32_t, int32_t)>(
    &::System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b1c3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                                                           { "ApplyCanonicalSortToExplicitAces", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.AddAce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(
    ::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, int32_t, ::System::Security::AccessControl::InheritanceFlags,
    ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags)>(&::System::Security::AccessControl::CommonAcl::AddAce)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b1c5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                { "AddAce",
                                                  {},
                                                  { ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(), ::i2c::type_of<::System::Security::AccessControl::AuditFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.AddAceGetQualifiedAce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::QualifiedAce* (
    ::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, int32_t,
                                                     ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags,
                                                     ::System::Security::AccessControl::AuditFlags)>(&::System::Security::AccessControl::CommonAcl::AddAceGetQualifiedAce)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b1c5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                { "AddAceGetQualifiedAce",
                                                  {},
                                                  { ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(), ::i2c::type_of<::System::Security::AccessControl::AuditFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.AddAce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::QualifiedAce*)>(
    &::System::Security::AccessControl::CommonAcl::AddAce)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b1c67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "AddAce", {}, { ::i2c::type_of<::System::Security::AccessControl::QualifiedAce*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.CopyAce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::GenericAce* (*)(::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::CommonAcl::CopyAce)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b1b378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "CopyAce", {}, { ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetAceInsertPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::AceQualifier)>(
    &::System::Security::AccessControl::CommonAcl::GetAceInsertPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetAceFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AceFlags (::System::Security::AccessControl::CommonAcl::*)(
    ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags)>(
    &::System::Security::AccessControl::CommonAcl::GetAceFlags)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b1c6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                { "GetAceFlags",
                                                  {},
                                                  { ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(), ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::AuditFlags>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_aefa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_aefa;
}
constexpr bool const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_aefa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_aefa;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_is_aefa(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_aefa = value;
}
constexpr bool& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_canonical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_canonical;
}
constexpr bool const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_canonical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_canonical;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_is_canonical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_canonical = value;
}
constexpr bool& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_container;
}
constexpr bool const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_container;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_is_container(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_container = value;
}
constexpr bool& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_ds;
}
constexpr bool const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_ds;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_is_ds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_ds = value;
}
constexpr ::System::Security::AccessControl::RawAcl*& System::Security::AccessControl::CommonAcl::__cordl_internal_get_raw_acl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raw_acl;
}
constexpr ::System::Security::AccessControl::RawAcl* const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_raw_acl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raw_acl;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_raw_acl(::System::Security::AccessControl::RawAcl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raw_acl = value;
}
inline void System::Security::AccessControl::CommonAcl::_ctor(bool isContainer, bool isDS, uint8_t revision, int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, isDS, revision, capacity);
}
inline void System::Security::AccessControl::CommonAcl::_ctor(bool isContainer, bool isDS, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, isDS, capacity);
}
inline void System::Security::AccessControl::CommonAcl::Init(bool isContainer, bool isDS, ::System::Security::AccessControl::RawAcl* rawAcl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::RawAcl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, isDS, rawAcl);
}
inline int32_t System::Security::AccessControl::CommonAcl::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonAcl::get_IsCanonical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_IsCanonical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonAcl::get_IsContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_IsContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonAcl::get_IsDS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_IsDS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAcl::set_IsAefa(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "set_IsAefa", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::CommonAcl::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*>(this, ___internal_method, index);
}
inline void System::Security::AccessControl::CommonAcl::set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Security::AccessControl::CommonAcl::RequireCanonicity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "RequireCanonicity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAcl::CanonicalizeAndClearAefa() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "CanonicalizeAndClearAefa", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonAcl::IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ace);
}
inline bool System::Security::AccessControl::CommonAcl::TestCanonicity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "TestCanonicity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::CommonAcl::GetCanonicalExplicitDenyAceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "GetCanonicalExplicitDenyAceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::CommonAcl::GetCanonicalExplicitAceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "GetCanonicalExplicitAceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAcl::MergeExplicitAces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "MergeExplicitAces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::CommonAcl::MergeExplicitAcePair(::System::Security::AccessControl::GenericAce* ace1,
                                                                                                                       ::System::Security::AccessControl::GenericAce* ace2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                          { "MergeExplicitAcePair", {}, { ::i2c::type_of<::System::Security::AccessControl::GenericAce*>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*>(this, ___internal_method, ace1, ace2);
}
inline void System::Security::AccessControl::CommonAcl::GetObjectAceTypeGuids(::System::Security::AccessControl::ObjectAce* ace, ::by_ref<::System::Guid> type,
                                                                              ::by_ref<::System::Guid> inheritedType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                          { "GetObjectAceTypeGuids",
                            {},
                            { ::i2c::type_of<::System::Security::AccessControl::ObjectAce*>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ace, type, inheritedType);
}
inline void System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces(int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                                                         { "ApplyCanonicalSortToExplicitAces", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, count);
}
template <typename T> inline void System::Security::AccessControl::CommonAcl::RemoveAces(::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                                           { "RemoveAces", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void System::Security::AccessControl::CommonAcl::AddAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, int32_t accessMask,
                                                               ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                               ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                              { "AddAce",
                                                {},
                                                { ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(), ::i2c::type_of<::System::Security::AccessControl::AuditFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags);
}
inline ::System::Security::AccessControl::QualifiedAce* System::Security::AccessControl::CommonAcl::AddAceGetQualifiedAce(::System::Security::AccessControl::AceQualifier aceQualifier,
                                                                                                                          ::System::Security::Principal::SecurityIdentifier* sid, int32_t accessMask,
                                                                                                                          ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                                          ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                                                          ::System::Security::AccessControl::AuditFlags auditFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(),
                                              { "AddAceGetQualifiedAce",
                                                {},
                                                { ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(), ::i2c::type_of<::System::Security::AccessControl::AuditFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::QualifiedAce*>(this, ___internal_method, aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags);
}
inline void System::Security::AccessControl::CommonAcl::AddAce(::System::Security::AccessControl::QualifiedAce* newAce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "AddAce", {}, { ::i2c::type_of<::System::Security::AccessControl::QualifiedAce*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAce);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::CommonAcl::CopyAce(::System::Security::AccessControl::GenericAce* ace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "CopyAce", {}, { ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*>(nullptr, ___internal_method, ace);
}
inline int32_t System::Security::AccessControl::CommonAcl::GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, aceQualifier);
}
inline ::System::Security::AccessControl::AceFlags System::Security::AccessControl::CommonAcl::GetAceFlags(::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                           ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                                           ::System::Security::AccessControl::AuditFlags auditFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAcl*>(), { "GetAceFlags",
                                                                                                                               {},
                                                                                                                               { ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(),
                                                                                                                                 ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(),
                                                                                                                                 ::i2c::type_of<::System::Security::AccessControl::AuditFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceFlags>(this, ___internal_method, inheritanceFlags, propagationFlags, auditFlags);
}
inline ::System::Security::AccessControl::CommonAcl* System::Security::AccessControl::CommonAcl::New_ctor(bool isContainer, bool isDS, uint8_t revision, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::CommonAcl*>(isContainer, isDS, revision, capacity));
}
inline ::System::Security::AccessControl::CommonAcl* System::Security::AccessControl::CommonAcl::New_ctor(bool isContainer, bool isDS, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::CommonAcl*>(isContainer, isDS, capacity));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::CommonAcl::CommonAcl() {}
