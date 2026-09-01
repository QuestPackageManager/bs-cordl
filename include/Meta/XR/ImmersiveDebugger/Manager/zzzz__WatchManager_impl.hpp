#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\WatchManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__WatchManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__IDebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__ManagerUtils_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__WatchManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a695d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c._ProcessType_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::*)(
    ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(&::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::_ProcessType_b__4_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a695d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(),
                                         { "<ProcessType>b__4_0", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c._ProcessType_b__4_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IMember*, ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::_ProcessType_b__4_1)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5a695e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(),
                                                { "<ProcessType>b__4_1",
                                                  {},
                                                  { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(),
                                                    ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::setStaticF___9(::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*, "<>9", ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(
      std::forward<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c* Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*, "<>9", ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::setStaticF___9__4_0(::System::Func_3<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>*, "<>9__4_0",
                                    ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(
      std::forward<::System::Func_3<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>*>(value));
}
inline ::System::Func_3<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>* Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>*, "<>9__4_0",
                                           ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>();
}
inline void
Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::setStaticF___9__4_1(::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MemberInfo*>* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MemberInfo*>*, "<>9__4_1",
                                    ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(
      std::forward<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MemberInfo*>*>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MemberInfo*>* Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<::System::Reflection::MemberInfo*>*, "<>9__4_1",
                                           ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>();
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::_ProcessType_b__4_0(::System::Reflection::MemberInfo* info, ::Meta::XR::ImmersiveDebugger::DebugMember* _) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(),
                                              { "<ProcessType>b__4_0", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info, _);
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::_ProcessType_b__4_1(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController,
                                                                                        ::System::Reflection::MemberInfo* member, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                                                                        ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>(),
                                              { "<ProcessType>b__4_1",
                                                {},
                                                { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(),
                                                  ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberController, member, attribute, instance);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c* Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchManager___c::WatchManager___c() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::WatchManager::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*)>(&::Meta::XR::ImmersiveDebugger::Manager::WatchManager::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a68f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(),
                         { "Setup", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager.ProcessType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::WatchManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::WatchManager::ProcessType)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5a68f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(), { "ProcessType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager.IsMemberValidForWatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Manager::WatchManager::IsMemberValidForWatch)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a67b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(),
                                                                                           { "IsMemberValidForWatch", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager.ProcessTypeFromInspector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::WatchManager::*)(::System::Type*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle,
                                                                                                                      ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::WatchManager::ProcessTypeFromInspector)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a6939c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(),
                                                             { "ProcessTypeFromInspector",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                                 ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager.ProcessTypeFromHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::WatchManager::*)(
    ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Manager::WatchManager::ProcessTypeFromHierarchy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a693d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(),
                            { "ProcessTypeFromHierarchy", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager.get_TelemetryAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::WatchManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::WatchManager::get_TelemetryAnnotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a6940c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(), { "get_TelemetryAnnotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager.GetCountPerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Manager::WatchManager::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::WatchManager::GetCountPerType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a69450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(), { "GetCountPerType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::WatchManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::WatchManager::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::WatchManager::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a694e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<
    ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>*&
Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_get_WatchesDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WatchesDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>* const&
Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_get_WatchesDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WatchesDict;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_set_WatchesDict(
    ::System::Collections::Generic::Dictionary_2<
        ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___WatchesDict = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_get__uiPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiPanel;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_get__uiPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiPanel;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_set__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiPanel = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_get__instanceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_get__instanceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::WatchManager::__cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instanceCache = value;
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* panel, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(),
                       { "Setup", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel, cache);
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager::ProcessType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(), { "ProcessType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::WatchManager::IsMemberValidForWatch(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(),
                                                                                         { "IsMemberValidForWatch", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member);
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager::ProcessTypeFromInspector(::System::Type* type, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle,
                                                                                         ::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(),
                                                           { "ProcessTypeFromInspector",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                               ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, handle, memberInfo, memberAttribute);
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager::ProcessTypeFromHierarchy(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item, ::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(),
                          { "ProcessTypeFromHierarchy", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, memberInfo);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::WatchManager::get_TelemetryAnnotation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(), { "get_TelemetryAnnotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Manager::WatchManager::GetCountPerType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(), { "GetCountPerType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void Meta::XR::ImmersiveDebugger::Manager::WatchManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::WatchManager* Meta::XR::ImmersiveDebugger::Manager::WatchManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::WatchManager*>());
}
/// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
constexpr Meta::XR::ImmersiveDebugger::Manager::WatchManager::operator ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
constexpr ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager* Meta::XR::ImmersiveDebugger::Manager::WatchManager::i___Meta__XR__ImmersiveDebugger__Manager__IDebugManager() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchManager::WatchManager() {}
