#pragma once
#include "System/Security/AccessControl/zzzz__GenericAce_impl.hpp"
#include "System/Security/AccessControl/zzzz__KnownAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::KnownAce::*)(
    ::System::Security::AccessControl::AceType, ::System::Security::AccessControl::AceFlags)>(&::System::Security::AccessControl::KnownAce::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2483ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::KnownAce::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Security::AccessControl::KnownAce::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2483ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce.get_AccessMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::KnownAce::*)()>(
    &::System::Security::AccessControl::KnownAce::get_AccessMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(),
                                                                               "get_AccessMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce.set_AccessMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::KnownAce::*)(int32_t)>(
    &::System::Security::AccessControl::KnownAce::set_AccessMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(), "set_AccessMask",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce.get_SecurityIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::SecurityIdentifier* (::System::Security::AccessControl::KnownAce::*)()>(
    &::System::Security::AccessControl::KnownAce::get_SecurityIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(),
                                                                               "get_SecurityIdentifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce.set_SecurityIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::KnownAce::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::AccessControl::KnownAce::set_SecurityIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(), "set_SecurityIdentifier", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::AccessControl::KnownAce::__get_access_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___access_mask;
}
constexpr int32_t const& System::Security::AccessControl::KnownAce::__get_access_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___access_mask;
}
constexpr void System::Security::AccessControl::KnownAce::__set_access_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___access_mask = value;
}
constexpr ::System::Security::Principal::SecurityIdentifier*& System::Security::AccessControl::KnownAce::__get_identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::SecurityIdentifier*> const& System::Security::AccessControl::KnownAce::__get_identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr void System::Security::AccessControl::KnownAce::__set_identifier(::System::Security::Principal::SecurityIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::AccessControl::KnownAce* System::Security::AccessControl::KnownAce::New_ctor(::System::Security::AccessControl::AceType type,
                                                                                                        ::System::Security::AccessControl::AceFlags flags) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::KnownAce*>(type, flags));
}
inline void System::Security::AccessControl::KnownAce::_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, flags);
}
inline ::System::Security::AccessControl::KnownAce* System::Security::AccessControl::KnownAce::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::KnownAce*>(binaryForm, offset));
}
inline void System::Security::AccessControl::KnownAce::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryForm, offset);
}
inline int32_t System::Security::AccessControl::KnownAce::get_AccessMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(),
                                                                             "get_AccessMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::KnownAce::set_AccessMask(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(), "set_AccessMask",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Principal::SecurityIdentifier* System::Security::AccessControl::KnownAce::get_SecurityIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(),
                                                                             "get_SecurityIdentifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::SecurityIdentifier*, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::KnownAce::set_SecurityIdentifier(::System::Security::Principal::SecurityIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::KnownAce*>::get(), "set_SecurityIdentifier", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::KnownAce::KnownAce() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
