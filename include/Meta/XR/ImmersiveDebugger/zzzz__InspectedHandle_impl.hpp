#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedHandle.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedItemBase_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedMember_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.get_InstanceHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::get_InstanceHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5891eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(),
                                                                               "get_InstanceHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.set_InstanceHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::set_InstanceHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5891f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "set_InstanceHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.set_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "set_Type",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*, ::System::Type*)>(&::Meta::XR::ImmersiveDebugger::InspectedHandle::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5890b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*)>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::Initialize)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x589063c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.TryGetMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(
    ::System::Reflection::MemberInfo*, ::ByRef<::Meta::XR::ImmersiveDebugger::InspectedMember*>)>(&::Meta::XR::ImmersiveDebugger::InspectedHandle::TryGetMember)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5891fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "TryGetMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::ImmersiveDebugger::InspectedMember*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get_inspectedMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedMembers;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* const& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get_inspectedMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedMembers;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_set_inspectedMembers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inspectedMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get__InstanceHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstanceHandle_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get__InstanceHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstanceHandle_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_set__InstanceHandle_k__BackingField(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InstanceHandle_k__BackingField = value;
}
constexpr ::System::Type*& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Type_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::InspectedHandle::get_InstanceHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(),
                                                                             "get_InstanceHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedHandle::set_InstanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "set_InstanceHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* Meta::XR::ImmersiveDebugger::InspectedHandle::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "get_Type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedHandle::set_Type(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "set_Type", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::InspectedHandle::_ctor(::Meta::XR::ImmersiveDebugger::DebugInspector* owner, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, type);
}
inline void Meta::XR::ImmersiveDebugger::InspectedHandle::Initialize(::Meta::XR::ImmersiveDebugger::DebugInspector* owner) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline bool Meta::XR::ImmersiveDebugger::InspectedHandle::TryGetMember(::System::Reflection::MemberInfo* memberInfo, ::ByRef<::Meta::XR::ImmersiveDebugger::InspectedMember*> inspectedMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedHandle*>::get(), "TryGetMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::ImmersiveDebugger::InspectedMember*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, memberInfo, inspectedMember);
}
inline ::Meta::XR::ImmersiveDebugger::InspectedHandle* Meta::XR::ImmersiveDebugger::InspectedHandle::New_ctor(::Meta::XR::ImmersiveDebugger::DebugInspector* owner, ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(owner, type));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedHandle::InspectedHandle() {}
