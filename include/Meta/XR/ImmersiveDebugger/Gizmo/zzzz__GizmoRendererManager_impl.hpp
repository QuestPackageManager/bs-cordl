#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Gizmo\GizmoRendererManager.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoRendererManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoRenderer_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::*)(
    ::System::Type*, ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugGizmoType, ::UnityEngine::Color, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::Setup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a63c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(),
                                         { "Setup",
                                           {},
                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>(),
                                             ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6f6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::Update)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5a6f7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager.AddGizmoRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::AddGizmoRenderer)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5a6f6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { "AddGizmoRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager.GetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::*)(::UnityEngine::Object*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::GetState)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a64524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { "GetState", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::*)(::UnityEngine::Object*, bool)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::SetState)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a643bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(),
                                                                                           { "SetState", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a6faac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__classType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____classType;
}
constexpr ::System::Type* const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__classType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____classType;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_set__classType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____classType = value;
}
constexpr ::System::Reflection::MemberInfo*& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__memberInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberInfo;
}
constexpr ::System::Reflection::MemberInfo* const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__memberInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberInfo;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_set__memberInfo(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memberInfo = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__isStatic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isStatic;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__isStatic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isStatic;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_set__isStatic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isStatic = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__instanceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__instanceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instanceCache = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__gizmoType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmoType;
}
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__gizmoType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmoType;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_set__gizmoType(::Meta::XR::ImmersiveDebugger::DebugGizmoType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gizmoType = value;
}
constexpr ::UnityEngine::Color& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__gizmoColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmoColor;
}
constexpr ::UnityEngine::Color const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__gizmoColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gizmoColor;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_set__gizmoColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gizmoColor = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer>>*&
Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer>>* const&
Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_set__renderers(
    ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderers = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__enabledInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledInstances;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_get__enabledInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledInstances;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::__cordl_internal_set__enabledInstances(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledInstances = value;
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::Setup(::System::Type* classType, ::System::Reflection::MemberInfo* memberInfo,
                                                                            ::Meta::XR::ImmersiveDebugger::DebugGizmoType gizmoType, ::UnityEngine::Color gizmoColor,
                                                                            ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* instanceCache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(),
                                       { "Setup",
                                         {},
                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugGizmoType>(),
                                           ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classType, memberInfo, gizmoType, gizmoColor, instanceCache);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::AddGizmoRenderer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { "AddGizmoRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::GetState(::UnityEngine::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { "GetState", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::SetState(::UnityEngine::Object* instance, bool state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(),
                                                                                         { "SetState", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, state);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager* Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager::GizmoRendererManager() {}
