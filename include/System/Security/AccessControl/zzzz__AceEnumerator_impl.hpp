#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AceEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/AccessControl/zzzz__AceEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAcl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::AceEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::AceEnumerator::*)(::System::Security::AccessControl::GenericAcl*)>(
    &::System::Security::AccessControl::AceEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x596cb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAcl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AceEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (::System::Security::AccessControl::AceEnumerator::*)()>(
    &::System::Security::AccessControl::AceEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x596cb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AceEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Security::AccessControl::AceEnumerator::*)()>(
    &::System::Security::AccessControl::AceEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596cb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AceEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::AceEnumerator::*)()>(
    &::System::Security::AccessControl::AceEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x596cb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AceEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::AceEnumerator::*)()>(
    &::System::Security::AccessControl::AceEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x596cbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Security::AccessControl::GenericAcl*& System::Security::AccessControl::AceEnumerator::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::System::Security::AccessControl::GenericAcl* const& System::Security::AccessControl::AceEnumerator::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void System::Security::AccessControl::AceEnumerator::__cordl_internal_set_owner(::System::Security::AccessControl::GenericAcl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::AccessControl::AceEnumerator::__cordl_internal_get_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr int32_t const& System::Security::AccessControl::AceEnumerator::__cordl_internal_get_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
constexpr void System::Security::AccessControl::AceEnumerator::__cordl_internal_set_current(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___current = value;
}
inline void System::Security::AccessControl::AceEnumerator::_ctor(::System::Security::AccessControl::GenericAcl* owner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAcl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::AceEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*, false>(this, ___internal_method);
}
inline ::System::Object* System::Security::AccessControl::AceEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Security::AccessControl::AceEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::AceEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AceEnumerator*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::AccessControl::AceEnumerator* System::Security::AccessControl::AceEnumerator::New_ctor(::System::Security::AccessControl::GenericAcl* owner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::AceEnumerator*>(owner));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Security::AccessControl::AceEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Security::AccessControl::AceEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AceEnumerator::AceEnumerator() {}
