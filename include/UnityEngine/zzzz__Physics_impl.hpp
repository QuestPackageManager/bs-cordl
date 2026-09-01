#pragma once
// IWYU pragma private; include "UnityEngine\Physics.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Physics_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__IntegrationInfo_def.hpp"
#include "UnityEngine/zzzz__MeshColliderCookingOptions_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Physics_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__SimulationMode_def.hpp"
#include "UnityEngine/zzzz__SimulationOption_def.hpp"
#include "UnityEngine/zzzz__SimulationStage_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Physics_ContactEventDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Physics_ContactEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b8f968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics_ContactEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(
    ::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>)>(&::UnityEngine::Physics_ContactEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b8f9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), { ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics_ContactEventDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::UnityEngine::Physics_ContactEventDelegate::*)(::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>,
                                                                                         ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::Physics_ContactEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b8f9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), { ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics_ContactEventDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::Physics_ContactEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b8faa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), { ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics_ContactEventDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Physics_ContactEventDelegate::Invoke(::UnityEngine::PhysicsScene scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> headerArray) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, headerArray);
}
inline ::System::IAsyncResult* UnityEngine::Physics_ContactEventDelegate::BeginInvoke(::UnityEngine::PhysicsScene scene,
                                                                                      ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> headerArray,
                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, scene, headerArray, callback, object);
}
inline void UnityEngine::Physics_ContactEventDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Physics_ContactEventDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Physics_ContactEventDelegate* UnityEngine::Physics_ContactEventDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Physics_ContactEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics_ContactEventDelegate::Physics_ContactEventDelegate() {}
//  Writing Method size for method: ::UnityEngine::Physics.add_ContactModifyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*)>(
    &::UnityEngine::Physics::add_ContactModifyEvent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b83a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "add_ContactModifyEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.remove_ContactModifyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*)>(
    &::UnityEngine::Physics::remove_ContactModifyEvent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b83b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "remove_ContactModifyEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.add_ContactModifyEventCCD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*)>(
    &::UnityEngine::Physics::add_ContactModifyEventCCD)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b83c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "add_ContactModifyEventCCD", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.remove_ContactModifyEventCCD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*)>(
    &::UnityEngine::Physics::remove_ContactModifyEventCCD)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b83d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "remove_ContactModifyEventCCD",
                                           {},
                                           { ::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.add_GenericContactModifyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*)>(
    &::UnityEngine::Physics::add_GenericContactModifyEvent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b83e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "add_GenericContactModifyEvent", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.remove_GenericContactModifyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*)>(
    &::UnityEngine::Physics::remove_GenericContactModifyEvent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b83f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "remove_GenericContactModifyEvent", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OnSceneContactModify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool)>(&::UnityEngine::Physics::OnSceneContactModify)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b84038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "OnSceneContactModify", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.PhysXOnSceneContactModify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool)>(&::UnityEngine::Physics::PhysXOnSceneContactModify)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b840e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "PhysXOnSceneContactModify", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetIntegrationInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>, ::by_ref<uint64_t>)>(&::UnityEngine::Physics::GetIntegrationInfos)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b841c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIntegrationInfos", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetIntegrationInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::IntegrationInfo> (*)()>(&::UnityEngine::Physics::GetIntegrationInfos)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b8420c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIntegrationInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetCurrentIntegrationId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::Physics::GetCurrentIntegrationId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b842c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetCurrentIntegrationId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_gravity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::UnityEngine::Physics::get_gravity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b842e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_gravity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_gravity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::UnityEngine::Physics::set_gravity)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b843b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_gravity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultContactOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_defaultContactOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b84478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultContactOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_defaultContactOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_defaultContactOffset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b844a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultContactOffset", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_sleepThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_sleepThreshold)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b844d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_sleepThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_sleepThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_sleepThreshold)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b84500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_sleepThreshold", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_queriesHitTriggers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_queriesHitTriggers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b84538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_queriesHitTriggers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_queriesHitTriggers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_queriesHitTriggers)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b84560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_queriesHitTriggers", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_queriesHitBackfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_queriesHitBackfaces)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8459c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_queriesHitBackfaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_queriesHitBackfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_queriesHitBackfaces)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b845c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_queriesHitBackfaces", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_bounceThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_bounceThreshold)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b84600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_bounceThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_bounceThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_bounceThreshold)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b84628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_bounceThreshold", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultMaxDepenetrationVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_defaultMaxDepenetrationVelocity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b84660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultMaxDepenetrationVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_defaultMaxDepenetrationVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_defaultMaxDepenetrationVelocity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b84688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultMaxDepenetrationVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultSolverIterations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Physics::get_defaultSolverIterations)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b846c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultSolverIterations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_defaultSolverIterations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Physics::set_defaultSolverIterations)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b846e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultSolverIterations", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultSolverVelocityIterations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Physics::get_defaultSolverVelocityIterations)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b84724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultSolverVelocityIterations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_defaultSolverVelocityIterations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Physics::set_defaultSolverVelocityIterations)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8474c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultSolverVelocityIterations", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_simulationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SimulationMode (*)()>(&::UnityEngine::Physics::get_simulationMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b84788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_simulationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_simulationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SimulationMode)>(&::UnityEngine::Physics::set_simulationMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b847b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_simulationMode", {}, { ::i2c::type_of<::UnityEngine::SimulationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultMaxAngularSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_defaultMaxAngularSpeed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b847ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultMaxAngularSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_defaultMaxAngularSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_defaultMaxAngularSpeed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b84814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultMaxAngularSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_improvedPatchFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_improvedPatchFriction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8484c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_improvedPatchFriction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_improvedPatchFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_improvedPatchFriction)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b84874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_improvedPatchFriction", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_invokeCollisionCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_invokeCollisionCallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b848b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_invokeCollisionCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_invokeCollisionCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_invokeCollisionCallbacks)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b848d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_invokeCollisionCallbacks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultPhysicsScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (*)()>(&::UnityEngine::Physics::get_defaultPhysicsScene)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b84914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultPhysicsScene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreCollision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*, ::UnityEngine::Collider*, bool)>(&::UnityEngine::Physics::IgnoreCollision)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6b849d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "IgnoreCollision", {}, { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreCollision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*, ::UnityEngine::Collider*)>(&::UnityEngine::Physics::IgnoreCollision)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b84b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "IgnoreCollision", {}, { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Collider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreLayerCollision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, bool)>(&::UnityEngine::Physics::IgnoreLayerCollision)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b84bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "IgnoreLayerCollision", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreLayerCollision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Physics::IgnoreLayerCollision)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b84c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "IgnoreLayerCollision", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetIgnoreLayerCollision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::Physics::GetIgnoreLayerCollision)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b84c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIgnoreLayerCollision", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetIgnoreCollision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*, ::UnityEngine::Collider*)>(&::UnityEngine::Physics::GetIgnoreCollision)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6b84ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIgnoreCollision", {}, { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Collider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b84e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b8510c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b851d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b852a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t,
                                                                ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b8535c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(
    &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b85634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                            ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b85714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b857e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b858ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Physics*>(),
                         { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b85948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b859e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b85a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b85b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b85bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b85c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b85d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b85da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Linecast",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(&::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b85ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "Linecast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b85f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Linecast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b86004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Linecast",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, int32_t)>(&::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b8612c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Linecast",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b861e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "Linecast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t,
                                                                ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b86288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "CapsuleCast",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t)>(
    &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6b863a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCast",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b864ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCast",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b865b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "CapsuleCast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t,
                                                                ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b866b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCast",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                            ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t,
                                                                int32_t)>(&::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6b8679c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "CapsuleCast",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t)>(
    &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6b868b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "CapsuleCast",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>)>(
    &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b869c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCast",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t,
                                                                ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b86ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(
    &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b86bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                            ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t)>(
    &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b86c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b86d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b86dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, float_t, int32_t)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b86edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, float_t)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b86f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b87018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b870b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(),
                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b87180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(),
                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b8722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Physics*>(),
                         { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b872d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, int32_t,
                                                                ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b8737c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "BoxCast",
                              {},
                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, int32_t)>(
    &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6b8749c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BoxCast",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(
    &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6b875d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                            ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b87710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b87810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "BoxCast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion,
                                                                float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6b87914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BoxCast",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion,
                                                                float_t, int32_t)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b87a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                         ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(),
                                                                                         ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion,
                                                                float_t)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6b87b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BoxCast",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b87c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BoxCast",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>)>(
    &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6b87d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float_t, int32_t,
                                                                                               ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Internal_RaycastAll)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6b87ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Internal_RaycastAll",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t,
                                                                                               ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6b88084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(
    &::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b882b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b88364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b88414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b884bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b88574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b88628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b886d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b88770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b88a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "RaycastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b88b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "RaycastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b88bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t,
                                                                   ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b88c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t)>(
    &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b88d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                            ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t)>(
    &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b88df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b88ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "RaycastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_CapsuleCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
                                                                                               ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::Query_CapsuleCastAll)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6b88f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "Query_CapsuleCastAll",
                              {},
                              { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t,
                                                                                               ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CapsuleCastAll)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6b891b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "CapsuleCastAll",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t)>(
    &::UnityEngine::Physics::CapsuleCastAll)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6b89354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCastAll",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::Physics::CapsuleCastAll)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b89460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCastAll",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(
    &::UnityEngine::Physics::CapsuleCastAll)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6b89568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "CapsuleCastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t,
                                                                                               ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Query_SphereCastAll)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6b89664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Query_SphereCastAll",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t,
                                                                                               ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6b89870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t)>(
    &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b899f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b89aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b89b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b89c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t, float_t, int32_t)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b89cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t, float_t)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b89d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b89e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsule_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t,
                                                                                                       ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapCapsule_Internal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b89ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "OverlapCapsule_Internal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t,
                                                                                                       ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapCapsule)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b89fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsule",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(
    &::UnityEngine::Physics::OverlapCapsule)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b8a0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "OverlapCapsule", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::Physics::OverlapCapsule)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b8a160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "OverlapCapsule", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, int32_t,
                                                                                                       ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphere_Internal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b8a210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphere_Internal",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b8a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "OverlapSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b8a3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b8a460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Simulate_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, float_t, ::UnityEngine::SimulationStage, ::UnityEngine::SimulationOption)>(
    &::UnityEngine::Physics::Simulate_Internal)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b8a4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Simulate_Internal",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::SimulationStage>(), ::i2c::type_of<::UnityEngine::SimulationOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Simulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::Simulate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b8a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Simulate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.InterpolateBodies_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::Physics::InterpolateBodies_Internal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b8a6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "InterpolateBodies_Internal", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ResetInterpolationPoses_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::Physics::ResetInterpolationPoses_Internal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b8a7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ResetInterpolationPoses_Internal", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SyncTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Physics::SyncTransforms)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8a868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SyncTransforms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_autoSyncTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_autoSyncTransforms)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8a890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_autoSyncTransforms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_autoSyncTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_autoSyncTransforms)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8a8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_autoSyncTransforms", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_reuseCollisionCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_reuseCollisionCallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8a8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_reuseCollisionCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_reuseCollisionCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_reuseCollisionCallbacks)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8a91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_reuseCollisionCallbacks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ComputePenetration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Collider*, ::UnityEngine::Vector3,
                                                                ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::Physics::Query_ComputePenetration)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6b8a958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "Query_ComputePenetration",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ComputePenetration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Collider*, ::UnityEngine::Vector3,
                                                                ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::Physics::ComputePenetration)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6b8ab68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "ComputePenetration",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ClosestPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(
    &::UnityEngine::Physics::Query_ClosestPoint)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b8aca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Query_ClosestPoint",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ClosestPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Physics::ClosestPoint)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b8ae24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ClosestPoint",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>(),
                                                                                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_interCollisionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_interCollisionDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8aef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_interCollisionDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_interCollisionDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_interCollisionDistance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b8af18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_interCollisionDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_interCollisionStiffness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_interCollisionStiffness)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8af50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_interCollisionStiffness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_interCollisionStiffness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_interCollisionStiffness)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b8af78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_interCollisionStiffness", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_interCollisionSettingsToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_interCollisionSettingsToggle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8afb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_interCollisionSettingsToggle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_interCollisionSettingsToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_interCollisionSettingsToggle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8afd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_interCollisionSettingsToggle", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_clothGravity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::UnityEngine::Physics::get_clothGravity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b8b014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_clothGravity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_clothGravity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::UnityEngine::Physics::set_clothGravity)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b8b0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_clothGravity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b8b1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphereNonAlloc",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t)>(&::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b8b254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphereNonAlloc",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>)>(&::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b8b2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "OverlapSphereNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::CheckSphere_Internal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b8b380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckSphere_Internal",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CheckSphere)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b8b4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "CheckSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::CheckSphere)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b8b548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::CheckSphere)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b8b5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t,
                                                                   int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b8b65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCastNonAlloc",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                            ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t,
                                                                   int32_t)>(&::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6b8b890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "CapsuleCastNonAlloc",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                             ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t)>(
    &::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6b8b9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "CapsuleCastNonAlloc",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>)>(
    &::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b8babc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCastNonAlloc",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t,
                                                                   ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b8bbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                         ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t)>(
    &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b8bdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                            ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t)>(
    &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b8bea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                         ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>)>(
    &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b8bf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, float_t, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b8c024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(),
                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, float_t, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b8c0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(),
                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, float_t, ::ArrayW<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b8c19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "SphereCastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, float_t, ::ArrayW<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b8c240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "SphereCastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::CheckCapsule_Internal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b8c2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "CheckCapsule_Internal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::CheckCapsule)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b8c428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckCapsule",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::CheckCapsule)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b8c4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "CheckCapsule", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::CheckCapsule)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b8c5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "CheckCapsule", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t,
                                                                ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CheckBox_Internal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b8c654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckBox_Internal",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::CheckBox)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b8c78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "CheckBox",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t)>(&::UnityEngine::Physics::CheckBox)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b8c854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "CheckBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::Physics::CheckBox)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b8c958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "CheckBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::CheckBox)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6b8ca50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                                                       ::UnityEngine::Quaternion, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::OverlapBox_Internal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b8cb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapBox_Internal",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t,
                                                                                                       ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapBox)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b8cc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "OverlapBox",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t)>(
    &::UnityEngine::Physics::OverlapBox)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b8cd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "OverlapBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Physics::OverlapBox)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b8ce44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "OverlapBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::OverlapBox)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b8cf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>, ::UnityEngine::Quaternion, int32_t,
                                                                   ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b8d02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "OverlapBoxNonAlloc",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(),
                                                    ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>, ::UnityEngine::Quaternion, int32_t)>(
    &::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6b8d120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "OverlapBoxNonAlloc",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b8d22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapBoxNonAlloc",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                         ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>)>(&::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b8d334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Physics*>(),
                         { "OverlapBoxNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>,
                                                                   ::UnityEngine::Quaternion, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b8d42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BoxCastNonAlloc",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>,
                                                                   ::UnityEngine::Quaternion)>(&::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b8d65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BoxCastNonAlloc",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>,
                                                                   ::UnityEngine::Quaternion, float_t)>(&::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6b8d760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BoxCastNonAlloc",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>,
                                                                   ::UnityEngine::Quaternion, float_t, int32_t)>(&::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b8d8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastNonAlloc",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                         ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(),
                                                                                         ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>)>(
    &::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b8d9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastNonAlloc",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_BoxCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                                               ::UnityEngine::Quaternion, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::Internal_BoxCastAll)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6b8daf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "Internal_BoxCastAll",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                               float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6b8dd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "BoxCastAll",
                              {},
                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                               float_t, int32_t)>(&::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6b8dedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BoxCastAll",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                               float_t)>(&::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6b8e018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastAll",
                                                                          {},
                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                            ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6b8e150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastAll",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b8e24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                         { "BoxCastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsuleNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t,
                                                                   ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapCapsuleNonAlloc)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b8e34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsuleNonAlloc",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsuleNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t)>(
    &::UnityEngine::Physics::OverlapCapsuleNonAlloc)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b8e424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsuleNonAlloc",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsuleNonAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>)>(
    &::UnityEngine::Physics::OverlapCapsuleNonAlloc)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b8e4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsuleNonAlloc",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BakeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool, ::UnityEngine::MeshColliderCookingOptions)>(&::UnityEngine::Physics::BakeMesh)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b8e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "BakeMesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MeshColliderCookingOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BakeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::Physics::BakeMesh)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b8e5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BakeMesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ConnectPhysicsSDKVisualDebugger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::ConnectPhysicsSDKVisualDebugger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8e680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ConnectPhysicsSDKVisualDebugger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.DisconnectPhysicsSDKVisualDebugger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Physics::DisconnectPhysicsSDKVisualDebugger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b8e6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "DisconnectPhysicsSDKVisualDebugger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetColliderByInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (*)(int32_t)>(&::UnityEngine::Physics::GetColliderByInstanceID)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b712f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetColliderByInstanceID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetBodyByInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(int32_t)>(&::UnityEngine::Physics::GetBodyByInstanceID)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b8e70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetBodyByInstanceID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.TranslateTriangleIndexFromID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int32_t, uint32_t)>(&::UnityEngine::Physics::TranslateTriangleIndexFromID)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8e890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "TranslateTriangleIndexFromID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionEnter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b8e8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionEnter", {}, { ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionStay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionStay)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b8e9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionStay", {}, { ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionExit)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b8eacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionExit", {}, { ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_minPenetrationForPenalty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_minPenetrationForPenalty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8ebc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_minPenetrationForPenalty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_minPenetrationForPenalty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_minPenetrationForPenalty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b8ebd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_minPenetrationForPenalty", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_bounceTreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_bounceTreshold)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b8ebd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_bounceTreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_bounceTreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_bounceTreshold)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b8ec40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_bounceTreshold", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_sleepVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_sleepVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8ecbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_sleepVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_sleepVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_sleepVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b8ecc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_sleepVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_sleepAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_sleepAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8ecc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_sleepAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_sleepAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_sleepAngularVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b8ecd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_sleepAngularVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_maxAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_maxAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8ecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_maxAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_maxAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_maxAngularVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b8ecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_maxAngularVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_solverIterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Physics::get_solverIterationCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b8ece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_solverIterationCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_solverIterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Physics::set_solverIterationCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b8ed4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_solverIterationCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_solverVelocityIterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Physics::get_solverVelocityIterationCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b8edc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_solverVelocityIterationCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_solverVelocityIterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Physics::set_solverVelocityIterationCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b8ee30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_solverVelocityIterationCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_penetrationPenaltyForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Physics::get_penetrationPenaltyForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8eea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_penetrationPenaltyForce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_penetrationPenaltyForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Physics::set_penetrationPenaltyForce)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b8eeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_penetrationPenaltyForce", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_autoSimulation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_autoSimulation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b8eeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_autoSimulation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_autoSimulation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_autoSimulation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b8ef2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_autoSimulation", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RebuildBroadphaseRegions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds, int32_t)>(&::UnityEngine::Physics::RebuildBroadphaseRegions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b8efac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RebuildBroadphaseRegions", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.add_ContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Physics_ContactEventDelegate*)>(&::UnityEngine::Physics::add_ContactEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b8efb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "add_ContactEvent", {}, { ::i2c::type_of<::UnityEngine::Physics_ContactEventDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.remove_ContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Physics_ContactEventDelegate*)>(&::UnityEngine::Physics::remove_ContactEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b8f0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "remove_ContactEvent", {}, { ::i2c::type_of<::UnityEngine::Physics_ContactEventDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OnSceneContact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t)>(&::UnityEngine::Physics::OnSceneContact)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6b8f190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "OnSceneContact", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ReportContacts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>)>(&::UnityEngine::Physics::ReportContacts)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6b8f3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "ReportContacts", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetCollisionToReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Collision* (*)(::by_ref<::UnityEngine::ContactPairHeader>, ::by_ref<::UnityEngine::ContactPair>, bool)>(
    &::UnityEngine::Physics::GetCollisionToReport)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b8f748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Physics*>(),
            { "GetCollisionToReport", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Physics::*)()>(&::UnityEngine::Physics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b8f888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_gravity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Physics::get_gravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b84378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_gravity_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_gravity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Physics::set_gravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8443c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_gravity_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultPhysicsScene_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>)>(&::UnityEngine::Physics::get_defaultPhysicsScene_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b84994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultPhysicsScene_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreCollision_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::Physics::IgnoreCollision_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b84afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                             { "IgnoreCollision_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetIgnoreCollision_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Physics::GetIgnoreCollision_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b84e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIgnoreCollision_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_RaycastAll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Ray>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction,
                                                                ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Physics::Internal_RaycastAll_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b88008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Internal_RaycastAll_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(),
                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(),
                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_CapsuleCastAll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Physics::Query_CapsuleCastAll_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b89118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "Query_CapsuleCastAll_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_SphereCastAll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t,
                                                                ::UnityEngine::QueryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::Physics::Query_SphereCastAll_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b897e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "Query_SphereCastAll_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsule_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>,
                                                                                                       ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::OverlapCapsule_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b89f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsule_Internal_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(
    ::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphere_Internal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b8a2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphere_Internal_Injected",
                                                                          {},
                                                                          { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Simulate_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>, float_t, ::UnityEngine::SimulationStage, ::UnityEngine::SimulationOption)>(
    &::UnityEngine::Physics::Simulate_Internal_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b8a594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Simulate_Internal_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<float_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::SimulationStage>(), ::i2c::type_of<::UnityEngine::SimulationOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.InterpolateBodies_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>)>(&::UnityEngine::Physics::InterpolateBodies_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8a774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "InterpolateBodies_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ResetInterpolationPoses_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>)>(&::UnityEngine::Physics::ResetInterpolationPoses_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8a82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ResetInterpolationPoses_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ComputePenetration_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::System::IntPtr,
                                                                ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(
    &::UnityEngine::Physics::Query_ComputePenetration_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b8aadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "Query_ComputePenetration_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                    ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ClosestPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>,
                                                                ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Physics::Query_ClosestPoint_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b8adb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                { "Query_ClosestPoint_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_clothGravity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Physics::get_clothGravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8b0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_clothGravity_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_clothGravity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Physics::set_clothGravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8b168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_clothGravity_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::CheckSphere_Internal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b8b43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckSphere_Internal_Injected",
                                                                          {},
                                                                          { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t,
                                                                ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::CheckCapsule_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b8c3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckCapsule_Internal_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                ::by_ref<::UnityEngine::Quaternion>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::CheckBox_Internal_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b8c718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckBox_Internal_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (*)(
    ::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
    &::UnityEngine::Physics::OverlapBox_Internal_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b8cc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapBox_Internal_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_BoxCastAll_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction,
                                                                ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Physics::Internal_BoxCastAll_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b8dc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                            { "Internal_BoxCastAll_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetColliderByInstanceID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::Physics::GetColliderByInstanceID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8e6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetColliderByInstanceID_Injected", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetBodyByInstanceID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::Physics::GetBodyByInstanceID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8e854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetBodyByInstanceID_Injected", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionEnter_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionEnter_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8e98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionEnter_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionStay_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionStay_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8ea88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionStay_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionExit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionExit_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionExit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics::setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEvent",
                                    ::UnityEngine::Physics*>(
      std::forward<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>(value));
}
inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* UnityEngine::Physics::getStaticF_ContactModifyEvent() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEvent",
                                           ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEventCCD",
                                    ::UnityEngine::Physics*>(
      std::forward<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>(value));
}
inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* UnityEngine::Physics::getStaticF_ContactModifyEventCCD() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEventCCD",
                                           ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::setStaticF_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*, "GenericContactModifyEvent", ::UnityEngine::Physics*>(
      std::forward<::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*>(value));
}
inline ::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* UnityEngine::Physics::getStaticF_GenericContactModifyEvent() {
  return ::cordl_internals::getStaticField<::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*, "GenericContactModifyEvent", ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Physics_ContactEventDelegate*, "ContactEvent", ::UnityEngine::Physics*>(std::forward<::UnityEngine::Physics_ContactEventDelegate*>(value));
}
inline ::UnityEngine::Physics_ContactEventDelegate* UnityEngine::Physics::getStaticF_ContactEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Physics_ContactEventDelegate*, "ContactEvent", ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::setStaticF_s_ReusableCollision(::UnityEngine::Collision* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Collision*, "s_ReusableCollision", ::UnityEngine::Physics*>(std::forward<::UnityEngine::Collision*>(value));
}
inline ::UnityEngine::Collision* UnityEngine::Physics::getStaticF_s_ReusableCollision() {
  return ::cordl_internals::getStaticField<::UnityEngine::Collision*, "s_ReusableCollision", ::UnityEngine::Physics*>();
}
inline void UnityEngine::Physics::add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "add_ContactModifyEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "remove_ContactModifyEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "add_ContactModifyEventCCD", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "remove_ContactModifyEventCCD", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::add_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "add_GenericContactModifyEvent", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::remove_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "remove_GenericContactModifyEvent", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::OnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count, bool isCCD) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "OnSceneContactModify", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, buffer, count, isCCD);
}
inline void UnityEngine::Physics::PhysXOnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count, bool isCCD) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Physics*>(),
                       { "PhysXOnSceneContactModify", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, buffer, count, isCCD);
}
inline void UnityEngine::Physics::GetIntegrationInfos(::by_ref<::System::IntPtr> integrations, ::by_ref<uint64_t> integrationCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIntegrationInfos", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, integrations, integrationCount);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::IntegrationInfo> UnityEngine::Physics::GetIntegrationInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIntegrationInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::IntegrationInfo>>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::Physics::GetCurrentIntegrationId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetCurrentIntegrationId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::get_gravity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_gravity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_gravity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_gravity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_defaultContactOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultContactOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_defaultContactOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultContactOffset", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_sleepThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_sleepThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_sleepThreshold(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_sleepThreshold", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_queriesHitTriggers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_queriesHitTriggers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_queriesHitTriggers(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_queriesHitTriggers", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_queriesHitBackfaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_queriesHitBackfaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_queriesHitBackfaces(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_queriesHitBackfaces", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_bounceThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_bounceThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_bounceThreshold(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_bounceThreshold", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_defaultMaxDepenetrationVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultMaxDepenetrationVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_defaultMaxDepenetrationVelocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultMaxDepenetrationVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::get_defaultSolverIterations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultSolverIterations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_defaultSolverIterations(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultSolverIterations", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::get_defaultSolverVelocityIterations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultSolverVelocityIterations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_defaultSolverVelocityIterations(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultSolverVelocityIterations", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::SimulationMode UnityEngine::Physics::get_simulationMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_simulationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SimulationMode>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_simulationMode(::UnityEngine::SimulationMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_simulationMode", {}, { ::i2c::type_of<::UnityEngine::SimulationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_defaultMaxAngularSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultMaxAngularSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_defaultMaxAngularSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_defaultMaxAngularSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_improvedPatchFriction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_improvedPatchFriction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_improvedPatchFriction(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_improvedPatchFriction", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_invokeCollisionCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_invokeCollisionCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_invokeCollisionCallbacks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_invokeCollisionCallbacks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::PhysicsScene UnityEngine::Physics::get_defaultPhysicsScene() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultPhysicsScene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2, bool ignore) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "IgnoreCollision", {}, { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collider1, collider2, ignore);
}
inline void UnityEngine::Physics::IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "IgnoreCollision", {}, { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Collider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collider1, collider2);
}
inline void UnityEngine::Physics::IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "IgnoreLayerCollision", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, layer1, layer2, ignore);
}
inline void UnityEngine::Physics::IgnoreLayerCollision(int32_t layer1, int32_t layer2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "IgnoreLayerCollision", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, layer1, layer2);
}
inline bool UnityEngine::Physics::GetIgnoreLayerCollision(int32_t layer1, int32_t layer2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIgnoreLayerCollision", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, layer1, layer2);
}
inline bool UnityEngine::Physics::GetIgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIgnoreCollision", {}, { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Collider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collider1, collider2);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, hitInfo);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Physics*>(),
                       { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, hitInfo);
}
inline bool UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Linecast",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "Linecast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end, layerMask);
}
inline bool UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Linecast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end);
}
inline bool UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Linecast",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end, hitInfo, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Linecast",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end, hitInfo, layerMask);
}
inline bool UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "Linecast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end, hitInfo);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                       { "CapsuleCast",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCast",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCast",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction, maxDistance);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "CapsuleCast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                              ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                              ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                       { "CapsuleCast",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                              ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "CapsuleCast",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                              ::by_ref<::UnityEngine::RaycastHit> hitInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCast",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, point1, point2, radius, direction, hitInfo);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance,
                                             int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance,
                                             int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, radius, direction, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, radius, direction, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, radius, direction, hitInfo);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, maxDistance);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(),
                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(),
                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Physics*>(),
                       { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "SphereCast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, radius, hitInfo);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation,
                                          float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                       ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, orientation, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation,
                                          float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, orientation, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation,
                                          float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, orientation, maxDistance);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, orientation);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "BoxCast", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                          ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, hitInfo, orientation, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                          ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(),
                                                                                              ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, hitInfo, orientation, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                          ::UnityEngine::Quaternion orientation, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "BoxCast",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, hitInfo, orientation, maxDistance);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                          ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, hitInfo, orientation);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCast",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, direction, hitInfo);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::Internal_RaycastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance, int32_t mask,
                                                                                     ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Internal_RaycastAll",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, physicsScene, ray, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                                                            ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, direction, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, direction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
                                                                            ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray ray, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray ray) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask,
                                                     ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "RaycastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "RaycastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, maxDistance);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance,
                                                     int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance,
                                                     int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RaycastNonAlloc",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results, maxDistance);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "RaycastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, results);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::Query_CapsuleCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, float_t radius,
                                                                                      ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask,
                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "Query_CapsuleCastAll",
                            {},
                            { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, physicsScene, p0, p1, radius, direction, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                       { "CapsuleCastAll",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, point1, point2, radius, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCastAll",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, point1, point2, radius, direction, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCastAll",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, point1, point2, radius, direction, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "CapsuleCastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, point1, point2, radius, direction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::Query_SphereCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius,
                                                                                     ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask,
                                                                                     ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                       { "Query_SphereCastAll",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, physicsScene, origin, radius, direction, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, radius, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                               int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, radius, direction, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, radius, direction, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, origin, radius, direction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask,
                                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, radius, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray ray, float_t radius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastAll", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, ray, radius);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
                                                                                                 float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "OverlapCapsule_Internal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, physicsScene, point0, point1, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask,
                                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsule",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, point0, point1, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "OverlapCapsule", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, point0, point1, radius, layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "OverlapCapsule", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, point0, point1, radius);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius,
                                                                                                int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphere_Internal",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, physicsScene, position, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "OverlapSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, position, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, position, radius, layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3 position, float_t radius) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, position, radius);
}
inline void UnityEngine::Physics::Simulate_Internal(::UnityEngine::PhysicsScene physicsScene, float_t step, ::UnityEngine::SimulationStage stages, ::UnityEngine::SimulationOption options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Simulate_Internal",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::SimulationStage>(), ::i2c::type_of<::UnityEngine::SimulationOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, step, stages, options);
}
inline void UnityEngine::Physics::Simulate(float_t step) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Simulate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, step);
}
inline void UnityEngine::Physics::InterpolateBodies_Internal(::UnityEngine::PhysicsScene physicsScene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "InterpolateBodies_Internal", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene);
}
inline void UnityEngine::Physics::ResetInterpolationPoses_Internal(::UnityEngine::PhysicsScene physicsScene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ResetInterpolationPoses_Internal", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene);
}
inline void UnityEngine::Physics::SyncTransforms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SyncTransforms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics::get_autoSyncTransforms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_autoSyncTransforms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_autoSyncTransforms(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_autoSyncTransforms", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_reuseCollisionCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_reuseCollisionCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_reuseCollisionCallbacks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_reuseCollisionCallbacks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::Query_ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA,
                                                           ::UnityEngine::Collider* colliderB, ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB,
                                                           ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "Query_ComputePenetration",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
}
inline bool UnityEngine::Physics::ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                                     ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "ComputePenetration",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::Query_ClosestPoint(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                       ::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Query_ClosestPoint",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, collider, position, rotation, point);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::ClosestPoint(::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ClosestPoint",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, collider, position, rotation);
}
inline float_t UnityEngine::Physics::get_interCollisionDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_interCollisionDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_interCollisionDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_interCollisionDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_interCollisionStiffness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_interCollisionStiffness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_interCollisionStiffness(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_interCollisionStiffness", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_interCollisionSettingsToggle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_interCollisionSettingsToggle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_interCollisionSettingsToggle(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_interCollisionSettingsToggle", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::get_clothGravity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_clothGravity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_clothGravity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_clothGravity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask,
                                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphereNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, position, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "OverlapSphereNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, position, radius, results, layerMask);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "OverlapSphereNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, position, radius, results);
}
inline bool UnityEngine::Physics::CheckSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckSphere_Internal",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, position, radius, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "CheckSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, radius, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, radius, layerMask);
}
inline bool UnityEngine::Physics::CheckSphere(::UnityEngine::Vector3 position, float_t radius) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckSphere", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, radius);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                                         ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask,
                                                         ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCastNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point1, point2, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                                         ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                       { "CapsuleCastNonAlloc",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                           ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point1, point2, radius, direction, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                                         ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "CapsuleCastNonAlloc",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point1, point2, radius, direction, results, maxDistance);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                                         ::ArrayW<::UnityEngine::RaycastHit> results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CapsuleCastNonAlloc",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point1, point2, radius, direction, results);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                                        float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                       ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                                        float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, radius, direction, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                                        float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                       ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, radius, direction, results, maxDistance);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, radius, direction, results);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask,
                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(),
                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, radius, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SphereCastNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(),
                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, radius, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "SphereCastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, radius, results, maxDistance);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                       { "SphereCastNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, radius, results);
}
inline bool UnityEngine::Physics::CheckCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "CheckCapsule_Internal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, start, end, radius, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckCapsule",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end, radius, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "CheckCapsule", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end, radius, layerMask);
}
inline bool UnityEngine::Physics::CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "CheckCapsule", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start, end, radius);
}
inline bool UnityEngine::Physics::CheckBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                                    int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "CheckBox_Internal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, center, halfExtents, orientation, layermask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layermask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "CheckBox",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, orientation, layermask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "CheckBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, orientation, layerMask);
}
inline bool UnityEngine::Physics::CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                       { "CheckBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents, orientation);
}
inline bool UnityEngine::Physics::CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, center, halfExtents);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
                                                                                             ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask,
                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "OverlapBox_Internal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, physicsScene, center, halfExtents, orientation, layerMask,
                                                                                          queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "OverlapBox",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, center, halfExtents, orientation, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                                                                    int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "OverlapBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, center, halfExtents, orientation, layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                       { "OverlapBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, center, halfExtents, orientation);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapBox", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, center, halfExtents);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results,
                                                        ::UnityEngine::Quaternion orientation, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "OverlapBoxNonAlloc",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results,
                                                        ::UnityEngine::Quaternion orientation, int32_t mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "OverlapBoxNonAlloc",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, results, orientation, mask);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results,
                                                        ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapBoxNonAlloc",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, results, orientation);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "OverlapBoxNonAlloc", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, results);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                                     ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, direction, results, orientation, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                                     ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastNonAlloc",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, direction, results, orientation);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                                     ::UnityEngine::Quaternion orientation, float_t maxDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "BoxCastNonAlloc",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, direction, results, orientation, maxDistance);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                                     ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastNonAlloc",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(),
                                                                                              ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, direction, results, orientation, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastNonAlloc",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, halfExtents, direction, results);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::Internal_BoxCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                     ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                                     ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "Internal_BoxCastAll",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, physicsScene, center, halfExtents, direction, orientation, maxDistance, layerMask,
                                                                                  queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                            ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                            ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastAll",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                       ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, center, halfExtents, direction, orientation, maxDistance, layerMask,
                                                                                  queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                            ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastAll",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, center, halfExtents, direction, orientation, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                            ::UnityEngine::Quaternion orientation, float_t maxDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastAll",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                          ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, center, halfExtents, direction, orientation, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                            ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BoxCastAll",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, center, halfExtents, direction, orientation);
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "BoxCastAll", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(nullptr, ___internal_method, center, halfExtents, direction);
}
inline int32_t UnityEngine::Physics::OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask,
                                                            ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsuleNonAlloc",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point0, point1, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results,
                                                            int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsuleNonAlloc",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point0, point1, radius, results, layerMask);
}
inline int32_t UnityEngine::Physics::OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsuleNonAlloc",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point0, point1, radius, results);
}
inline void UnityEngine::Physics::BakeMesh(int32_t meshID, bool convex, ::UnityEngine::MeshColliderCookingOptions cookingOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "BakeMesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MeshColliderCookingOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshID, convex, cookingOptions);
}
inline void UnityEngine::Physics::BakeMesh(int32_t meshID, bool convex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "BakeMesh", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshID, convex);
}
inline bool UnityEngine::Physics::ConnectPhysicsSDKVisualDebugger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ConnectPhysicsSDKVisualDebugger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::DisconnectPhysicsSDKVisualDebugger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "DisconnectPhysicsSDKVisualDebugger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::Physics::GetColliderByInstanceID(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetColliderByInstanceID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(nullptr, ___internal_method, instanceID);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Physics::GetBodyByInstanceID(int32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetBodyByInstanceID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, instanceID);
}
inline uint32_t UnityEngine::Physics::TranslateTriangleIndexFromID(int32_t instanceID, uint32_t faceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "TranslateTriangleIndexFromID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, instanceID, faceIndex);
}
inline void UnityEngine::Physics::SendOnCollisionEnter(::UnityEngine::Component* component, ::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionEnter", {}, { ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionStay(::UnityEngine::Component* component, ::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionStay", {}, { ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionExit(::UnityEngine::Component* component, ::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionExit", {}, { ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline float_t UnityEngine::Physics::get_minPenetrationForPenalty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_minPenetrationForPenalty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_minPenetrationForPenalty(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_minPenetrationForPenalty", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_bounceTreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_bounceTreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_bounceTreshold(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_bounceTreshold", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_sleepVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_sleepVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_sleepVelocity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_sleepVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_sleepAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_sleepAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_sleepAngularVelocity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_sleepAngularVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_maxAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_maxAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_maxAngularVelocity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_maxAngularVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::get_solverIterationCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_solverIterationCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_solverIterationCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_solverIterationCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::get_solverVelocityIterationCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_solverVelocityIterationCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_solverVelocityIterationCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_solverVelocityIterationCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_penetrationPenaltyForce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_penetrationPenaltyForce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_penetrationPenaltyForce(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_penetrationPenaltyForce", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_autoSimulation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_autoSimulation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_autoSimulation(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_autoSimulation", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::RebuildBroadphaseRegions(::UnityEngine::Bounds worldBounds, int32_t subdivisions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "RebuildBroadphaseRegions", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldBounds, subdivisions);
}
inline void UnityEngine::Physics::add_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "add_ContactEvent", {}, { ::i2c::type_of<::UnityEngine::Physics_ContactEventDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::remove_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "remove_ContactEvent", {}, { ::i2c::type_of<::UnityEngine::Physics_ContactEventDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::OnSceneContact(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "OnSceneContact", {}, { ::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, buffer, count);
}
inline void UnityEngine::Physics::ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ReportContacts", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline ::UnityEngine::Collision* UnityEngine::Physics::GetCollisionToReport(::by_ref<::UnityEngine::ContactPairHeader> header, ::by_ref<::UnityEngine::ContactPair> pair, bool flipped) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Physics*>(),
          { "GetCollisionToReport", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ContactPairHeader>>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactPair>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Collision*>(nullptr, ___internal_method, header, pair, flipped);
}
inline void UnityEngine::Physics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Physics::get_gravity_Injected(::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_gravity_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Physics::set_gravity_Injected(::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_gravity_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::get_defaultPhysicsScene_Injected(::by_ref<::UnityEngine::PhysicsScene> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_defaultPhysicsScene_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Physics::IgnoreCollision_Injected(::System::IntPtr collider1, ::System::IntPtr collider2, bool ignore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                                           { "IgnoreCollision_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collider1, collider2, ignore);
}
inline bool UnityEngine::Physics::GetIgnoreCollision_Injected(::System::IntPtr collider1, ::System::IntPtr collider2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetIgnoreCollision_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collider1, collider2);
}
inline void UnityEngine::Physics::Internal_RaycastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Ray> ray, float_t maxDistance, int32_t mask,
                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Internal_RaycastAll_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(),
                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, ray, maxDistance, mask, queryTriggerInteraction, ret);
}
inline void UnityEngine::Physics::Query_CapsuleCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> p0, ::by_ref<::UnityEngine::Vector3> p1,
                                                                float_t radius, ::by_ref<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask,
                                                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "Query_CapsuleCastAll_Injected",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, p0, p1, radius, direction, maxDistance, mask, queryTriggerInteraction, ret);
}
inline void UnityEngine::Physics::Query_SphereCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> origin, float_t radius,
                                                               ::by_ref<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask,
                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "Query_SphereCastAll_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, origin, radius, direction, maxDistance, mask, queryTriggerInteraction, ret);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapCapsule_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> point0,
                                                                                                          ::by_ref<::UnityEngine::Vector3> point1, float_t radius, int32_t layerMask,
                                                                                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapCapsule_Internal_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, physicsScene, point0, point1, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> position,
                                                                                                         float_t radius, int32_t layerMask,
                                                                                                         ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapSphere_Internal_Injected",
                                                                        {},
                                                                        { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, physicsScene, position, radius, layerMask, queryTriggerInteraction);
}
inline void UnityEngine::Physics::Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, float_t step, ::UnityEngine::SimulationStage stages,
                                                             ::UnityEngine::SimulationOption options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "Simulate_Internal_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::SimulationStage>(), ::i2c::type_of<::UnityEngine::SimulationOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, step, stages, options);
}
inline void UnityEngine::Physics::InterpolateBodies_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "InterpolateBodies_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene);
}
inline void UnityEngine::Physics::ResetInterpolationPoses_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "ResetInterpolationPoses_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene);
}
inline bool UnityEngine::Physics::Query_ComputePenetration_Injected(::System::IntPtr colliderA, ::by_ref<::UnityEngine::Vector3> positionA, ::by_ref<::UnityEngine::Quaternion> rotationA,
                                                                    ::System::IntPtr colliderB, ::by_ref<::UnityEngine::Vector3> positionB, ::by_ref<::UnityEngine::Quaternion> rotationB,
                                                                    ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "Query_ComputePenetration_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                  ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
}
inline void UnityEngine::Physics::Query_ClosestPoint_Injected(::System::IntPtr collider, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation,
                                                              ::by_ref<::UnityEngine::Vector3> point, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                                              { "Query_ClosestPoint_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collider, position, rotation, point, ret);
}
inline void UnityEngine::Physics::get_clothGravity_Injected(::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "get_clothGravity_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Physics::set_clothGravity_Injected(::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "set_clothGravity_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::CheckSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckSphere_Internal_Injected",
                                                                        {},
                                                                        { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, position, radius, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckCapsule_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> start, ::by_ref<::UnityEngine::Vector3> end,
                                                                 float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckCapsule_Internal_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, start, end, radius, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckBox_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Vector3> halfExtents,
                                                             ::by_ref<::UnityEngine::Quaternion> orientation, int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "CheckBox_Internal_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, center, halfExtents, orientation, layermask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> UnityEngine::Physics::OverlapBox_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center,
                                                                                                      ::by_ref<::UnityEngine::Vector3> halfExtents, ::by_ref<::UnityEngine::Quaternion> orientation,
                                                                                                      int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "OverlapBox_Internal_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(nullptr, ___internal_method, physicsScene, center, halfExtents, orientation, layerMask,
                                                                                          queryTriggerInteraction);
}
inline void UnityEngine::Physics::Internal_BoxCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center,
                                                               ::by_ref<::UnityEngine::Vector3> halfExtents, ::by_ref<::UnityEngine::Vector3> direction,
                                                               ::by_ref<::UnityEngine::Quaternion> orientation, float_t maxDistance, int32_t layerMask,
                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(),
                          { "Internal_BoxCastAll_Injected",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, center, halfExtents, direction, orientation, maxDistance, layerMask, queryTriggerInteraction, ret);
}
inline ::System::IntPtr UnityEngine::Physics::GetColliderByInstanceID_Injected(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetColliderByInstanceID_Injected", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instanceID);
}
inline ::System::IntPtr UnityEngine::Physics::GetBodyByInstanceID_Injected(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "GetBodyByInstanceID_Injected", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instanceID);
}
inline void UnityEngine::Physics::SendOnCollisionEnter_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionEnter_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionStay_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionStay_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionExit_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Physics*>(), { "SendOnCollisionExit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Collision*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, collision);
}
inline ::UnityEngine::Physics* UnityEngine::Physics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Physics*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics::Physics() {}
