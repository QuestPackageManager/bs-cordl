#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/ActionManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ActionManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ActionManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__IDebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ManagerUtils_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x584b618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c._ProcessType_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IMember*, ::System::Reflection::MethodInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::_ProcessType_b__4_0)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x584b61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>::get(), "<ProcessType>b__4_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::setStaticF___9(::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>::get>(
      std::forward<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c* Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>::get>();
}
inline void
Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::setStaticF___9__4_0(::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MethodInfo*>* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MethodInfo*>*, "<>9__4_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>::get>(
      std::forward<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MethodInfo*>*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MethodInfo*>* Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MethodInfo*>*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::_ProcessType_b__4_0(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController,
                                                                                         ::System::Reflection::MethodInfo* member, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                                         ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>::get(), "<ProcessType>b__4_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberController, member, attribute, instance);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c* Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionManager___c::ActionManager___c() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::ActionManager::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*)>(&::Meta::XR::ImmersiveDebugger::Manager::ActionManager::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584b068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager.ProcessType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::ActionManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManager::ProcessType)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x584b070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "ProcessType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager.ProcessTypeFromInspector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::ActionManager::*)(
    ::System::Type*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManager::ProcessTypeFromInspector)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x584b3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "ProcessTypeFromInspector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager.ProcessTypeFromHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::ActionManager::*)(
    ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Manager::ActionManager::ProcessTypeFromHierarchy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x584b418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "ProcessTypeFromHierarchy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager.get_TelemetryAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::ActionManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManager::get_TelemetryAnnotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x584b450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(),
                                                                               "get_TelemetryAnnotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager.GetCountPerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Manager::ActionManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManager::GetCountPerType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x584b494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "GetCountPerType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::ActionManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::ActionManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::ActionManager::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x584b52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<
    ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MethodInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>*&
Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_get_ActionsDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActionsDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MethodInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>* const&
Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_get_ActionsDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActionsDict;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_set_ActionsDict(
    ::System::Collections::Generic::Dictionary_2<
        ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MethodInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ActionsDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_get__uiPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiPanel;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_get__uiPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiPanel;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_set__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uiPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_get__instanceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_get__instanceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::ActionManager::__cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instanceCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManager::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* uiPanel,
                                                                       ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* instanceCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uiPanel, instanceCache);
}
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManager::ProcessType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "ProcessType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManager::ProcessTypeFromInspector(::System::Type* type, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle,
                                                                                          ::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "ProcessTypeFromInspector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, handle, memberInfo, memberAttribute);
}
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManager::ProcessTypeFromHierarchy(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item, ::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "ProcessTypeFromHierarchy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, memberInfo);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::ActionManager::get_TelemetryAnnotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(),
                                                                             "get_TelemetryAnnotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Manager::ActionManager::GetCountPerType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(), "GetCountPerType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
inline void Meta::XR::ImmersiveDebugger::Manager::ActionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ActionManager* Meta::XR::ImmersiveDebugger::Manager::ActionManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::ActionManager*>());
}
/// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
constexpr Meta::XR::ImmersiveDebugger::Manager::ActionManager::operator ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
constexpr ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager* Meta::XR::ImmersiveDebugger::Manager::ActionManager::i___Meta__XR__ImmersiveDebugger__Manager__IDebugManager() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionManager::ActionManager() {}
