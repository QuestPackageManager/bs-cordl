#pragma once
// IWYU pragma private; include "System/Security/AccessControl/QualifiedAce.hpp"
#include "System/Security/AccessControl/zzzz__KnownAce_impl.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::QualifiedAce::*)(
    ::System::Security::AccessControl::AceType, ::System::Security::AccessControl::AceFlags, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::AccessControl::QualifiedAce::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x596cd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::QualifiedAce::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Security::AccessControl::QualifiedAce::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596cfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.get_AceQualifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceQualifier (::System::Security::AccessControl::QualifiedAce::*)()>(
    &::System::Security::AccessControl::QualifiedAce::get_AceQualifier)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596dd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(),
                                                                               "get_AceQualifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.get_IsCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::QualifiedAce::*)()>(
    &::System::Security::AccessControl::QualifiedAce::get_IsCallback)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x596e5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(),
                                                                               "get_IsCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.get_OpaqueLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::QualifiedAce::*)()>(
    &::System::Security::AccessControl::QualifiedAce::get_OpaqueLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x596d12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(),
                                                                               "get_OpaqueLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.GetOpaque
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::AccessControl::QualifiedAce::*)()>(
    &::System::Security::AccessControl::QualifiedAce::GetOpaque)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x596d2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(),
                                                                               "GetOpaque", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.SetOpaque
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::QualifiedAce::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::AccessControl::QualifiedAce::SetOpaque)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x596d058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(), "SetOpaque", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::AccessControl::QualifiedAce::__cordl_internal_get_opaque() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaque;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::AccessControl::QualifiedAce::__cordl_internal_get_opaque() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaque;
}
constexpr void System::Security::AccessControl::QualifiedAce::__cordl_internal_set_opaque(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___opaque)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::AccessControl::QualifiedAce::_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, flags, opaque);
}
inline void System::Security::AccessControl::QualifiedAce::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryForm, offset);
}
inline ::System::Security::AccessControl::AceQualifier System::Security::AccessControl::QualifiedAce::get_AceQualifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(),
                                                                             "get_AceQualifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceQualifier, false>(this, ___internal_method);
}
inline bool System::Security::AccessControl::QualifiedAce::get_IsCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(),
                                                                             "get_IsCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::QualifiedAce::get_OpaqueLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(),
                                                                             "get_OpaqueLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::AccessControl::QualifiedAce::GetOpaque() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(),
                                                                             "GetOpaque", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::QualifiedAce::SetOpaque(::ArrayW<uint8_t, ::Array<uint8_t>*> opaque) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::QualifiedAce*>::get(), "SetOpaque", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, opaque);
}
inline ::System::Security::AccessControl::QualifiedAce* System::Security::AccessControl::QualifiedAce::New_ctor(::System::Security::AccessControl::AceType type,
                                                                                                                ::System::Security::AccessControl::AceFlags flags,
                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::QualifiedAce*>(type, flags, opaque));
}
inline ::System::Security::AccessControl::QualifiedAce* System::Security::AccessControl::QualifiedAce::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::QualifiedAce*>(binaryForm, offset));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::QualifiedAce::QualifiedAce() {}
