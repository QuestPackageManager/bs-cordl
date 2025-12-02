#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/GizmoManager.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__GizmoManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoRendererManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__GizmoManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__IDebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x584d61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0._ProcessType_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::*)(
    ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(&::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::_ProcessType_b__0)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x584de58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*>::get(),
                                                 "<ProcessType>b__0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0._ProcessType_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IMember*, ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::_ProcessType_b__1)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x584e02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*>::get(), "<ProcessType>b__1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager* const& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get_gizmosList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gizmosList;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>* const&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get_gizmosList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gizmosList;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_set_gizmosList(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gizmosList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get_membersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___membersList;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>* const&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get_membersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___membersList;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_set_membersList(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___membersList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>*&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get_memberToGizmoRendererManagerDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberToGizmoRendererManagerDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* const&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_get_memberToGizmoRendererManagerDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberToGizmoRendererManagerDict;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::__cordl_internal_set_memberToGizmoRendererManagerDict(
    ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberToGizmoRendererManagerDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::_ProcessType_b__0(::System::Reflection::MemberInfo* info, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*>::get(),
                                               "<ProcessType>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, info, attribute);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::_ProcessType_b__1(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController,
                                                                                                       ::System::Reflection::MemberInfo* member, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                                                       ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*>::get(), "<ProcessType>b__1",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberController, member, attribute, instance);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0* Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0::GizmoManager___c__DisplayClass4_0() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x584e32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1._ProcessType_g__OnStateChanged_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::_ProcessType_g__OnStateChanged_2)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x584e390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1*>::get(), "<ProcessType>g__OnStateChanged|2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1._ProcessType_g__GetState_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::_ProcessType_g__GetState_3)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x584e508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1*>::get(),
                                                 "<ProcessType>g__GetState|3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MemberInfo*& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_get_member() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___member;
}
constexpr ::System::Reflection::MemberInfo* const& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_get_member() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___member;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_set_member(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___member)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_get_instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_get_instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_set_instance(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instance = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*& Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0* const&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void
Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::__cordl_internal_set_CS$__8__locals1(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::_ProcessType_g__OnStateChanged_2(bool state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1*>::get(), "<ProcessType>g__OnStateChanged|2",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::_ProcessType_g__GetState_3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1*>::get(),
                                               "<ProcessType>g__GetState|3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1* Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1::GizmoManager___c__DisplayClass4_1() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*)>(&::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584d0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager.ProcessType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::ProcessType)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x584d0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "ProcessType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager.ProcessTypeFromInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::*)(
    ::System::Type*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::ProcessTypeFromInspector)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x584da94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "ProcessTypeFromInspector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager.ProcessTypeFromHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::*)(
    ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::ProcessTypeFromHierarchy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x584dacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "ProcessTypeFromHierarchy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager.AddGizmo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Type*, ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*,
                         ::ByRef<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>)>(&::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::AddGizmo)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x584d7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "AddGizmo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager.RemoveGizmosForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::RemoveGizmosForType)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x584d620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "RemoveGizmosForType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager.get_TelemetryAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::get_TelemetryAnnotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x584dce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(),
                                                                               "get_TelemetryAnnotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager.GetCountPerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::GetCountPerType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x584dd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "GetCountPerType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x584ddc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<
    ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*>*&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_get_GizmosDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GizmosDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*>* const&
Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_get_GizmosDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GizmosDict;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_set_GizmosDict(
    ::System::Collections::Generic::Dictionary_2<
        ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GizmosDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_get__uiPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiPanel;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_get__uiPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiPanel;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_set__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uiPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_get__instanceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_get__instanceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::__cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instanceCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* panel, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel, cache);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::ProcessType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "ProcessType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::ProcessTypeFromInspector(::System::Type* type, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle,
                                                                                         ::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "ProcessTypeFromInspector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, handle, memberInfo, memberAttribute);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::ProcessTypeFromHierarchy(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item, ::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "ProcessTypeFromHierarchy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, memberInfo);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::GizmoManager::AddGizmo(::System::Type* type, ::System::Reflection::MemberInfo* member, ::Meta::XR::ImmersiveDebugger::DebugMember* gizmoAttribute,
                                                                         ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* instanceCache,
                                                                         ::ByRef<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*> gizmoRendererManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "AddGizmo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, member, gizmoAttribute, instanceCache, gizmoRendererManager);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::RemoveGizmosForType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "RemoveGizmosForType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::GizmoManager::get_TelemetryAnnotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(),
                                                                             "get_TelemetryAnnotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Manager::GizmoManager::GetCountPerType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(), "GetCountPerType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
inline void Meta::XR::ImmersiveDebugger::Manager::GizmoManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager* Meta::XR::ImmersiveDebugger::Manager::GizmoManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*>());
}
/// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
constexpr Meta::XR::ImmersiveDebugger::Manager::GizmoManager::operator ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
constexpr ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager* Meta::XR::ImmersiveDebugger::Manager::GizmoManager::i___Meta__XR__ImmersiveDebugger__Manager__IDebugManager() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager::GizmoManager() {}
