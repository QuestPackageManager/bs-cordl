#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__MeshColliderCookingOptions_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Physics_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__SimulationMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method:
//  ::UnityEngine::Physics_ContactEventDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(
        ::System::Object *, ::System::IntPtr)>(
        &::UnityEngine::Physics_ContactEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x49057f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics_ContactEventDelegate *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics_ContactEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(
        ::UnityEngine::PhysicsScene,
        ::Unity::Collections::NativeArray_1_ReadOnly<
            ::UnityEngine::ContactPairHeader>)>(
        &::UnityEngine::Physics_ContactEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4905884;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::UnityEngine::Physics_ContactEventDelegate *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::UnityEngine::Physics_ContactEventDelegate *>::get(),
            13));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics_ContactEventDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult *(
        ::UnityEngine::Physics_ContactEventDelegate::
            *)(::UnityEngine::PhysicsScene,
               ::Unity::Collections::NativeArray_1_ReadOnly<
                   ::UnityEngine::ContactPairHeader>,
               ::System::AsyncCallback *, ::System::Object *)>(
        &::UnityEngine::Physics_ContactEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x490589c;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::UnityEngine::Physics_ContactEventDelegate *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::UnityEngine::Physics_ContactEventDelegate *>::get(),
            14));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics_ContactEventDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(
        ::System::IAsyncResult *)>(
        &::UnityEngine::Physics_ContactEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4905958;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::UnityEngine::Physics_ContactEventDelegate *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::UnityEngine::Physics_ContactEventDelegate *>::get(),
            15));
    return ___internal_method;
  }
};
inline void
UnityEngine::Physics_ContactEventDelegate::_ctor(::System::Object *object,
                                                 ::System::IntPtr method) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics_ContactEventDelegate *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, object, method);
}
inline void UnityEngine::Physics_ContactEventDelegate::Invoke(
    ::UnityEngine::PhysicsScene scene,
    ::Unity::Collections::NativeArray_1_ReadOnly<
        ::UnityEngine::ContactPairHeader>
        headerArray) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics_ContactEventDelegate *>::get(),
      13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, scene, headerArray);
}
inline ::System::IAsyncResult *
UnityEngine::Physics_ContactEventDelegate::BeginInvoke(
    ::UnityEngine::PhysicsScene scene,
    ::Unity::Collections::NativeArray_1_ReadOnly<
        ::UnityEngine::ContactPairHeader>
        headerArray,
    ::System::AsyncCallback *callback, ::System::Object *object) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics_ContactEventDelegate *>::get(),
      14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult *, false>(
      this, ___internal_method, scene, headerArray, callback, object);
}
inline void UnityEngine::Physics_ContactEventDelegate::EndInvoke(
    ::System::IAsyncResult *result) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics_ContactEventDelegate *>::get(),
      15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, result);
}
inline ::UnityEngine::Physics_ContactEventDelegate *
UnityEngine::Physics_ContactEventDelegate::New_ctor(::System::Object *object,
                                                    ::System::IntPtr method) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<
          ::UnityEngine::Physics_ContactEventDelegate *>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics_ContactEventDelegate::
    Physics_ContactEventDelegate() {}
//  Writing Method size for method:
//  ::UnityEngine::Physics.add_ContactModifyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::System::Action_2<::UnityEngine::PhysicsScene,
                           ::Unity::Collections::NativeArray_1<
                               ::UnityEngine::ModifiableContactPair>> *)>(
        &::UnityEngine::Physics::add_ContactModifyEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x48fa430;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "add_ContactModifyEvent", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_2<::UnityEngine::PhysicsScene,
                                   ::Unity::Collections::NativeArray_1<
                                       ::UnityEngine::ModifiableContactPair>>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.remove_ContactModifyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::System::Action_2<::UnityEngine::PhysicsScene,
                           ::Unity::Collections::NativeArray_1<
                               ::UnityEngine::ModifiableContactPair>> *)>(
        &::UnityEngine::Physics::remove_ContactModifyEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x48fa520;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "remove_ContactModifyEvent", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_2<::UnityEngine::PhysicsScene,
                                   ::Unity::Collections::NativeArray_1<
                                       ::UnityEngine::ModifiableContactPair>>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.add_ContactModifyEventCCD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::System::Action_2<::UnityEngine::PhysicsScene,
                           ::Unity::Collections::NativeArray_1<
                               ::UnityEngine::ModifiableContactPair>> *)>(
        &::UnityEngine::Physics::add_ContactModifyEventCCD)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x48fa610;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "add_ContactModifyEventCCD", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_2<::UnityEngine::PhysicsScene,
                                   ::Unity::Collections::NativeArray_1<
                                       ::UnityEngine::ModifiableContactPair>>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.remove_ContactModifyEventCCD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::System::Action_2<::UnityEngine::PhysicsScene,
                           ::Unity::Collections::NativeArray_1<
                               ::UnityEngine::ModifiableContactPair>> *)>(
        &::UnityEngine::Physics::remove_ContactModifyEventCCD)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x48fa704;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "remove_ContactModifyEventCCD",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_2<::UnityEngine::PhysicsScene,
                                   ::Unity::Collections::NativeArray_1<
                                       ::UnityEngine::ModifiableContactPair>>
                    *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OnSceneContactModify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t,
                         bool)>(
        &::UnityEngine::Physics::OnSceneContactModify)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x48fa7f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OnSceneContactModify", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_gravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (*)()>(
        &::UnityEngine::Physics::get_gravity)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48fa8dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_gravity", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_gravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::set_gravity)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x48fa9a4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_gravity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_defaultContactOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_defaultContactOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48faa64;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_defaultContactOffset", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_defaultContactOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_defaultContactOffset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48faa8c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_defaultContactOffset", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_sleepThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(&::UnityEngine::Physics::get_sleepThreshold)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48faac4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_sleepThreshold", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_sleepThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_sleepThreshold)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48faaec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_sleepThreshold", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_queriesHitTriggers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)()>(&::UnityEngine::Physics::get_queriesHitTriggers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fab24;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_queriesHitTriggers", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_queriesHitTriggers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool)>(
        &::UnityEngine::Physics::set_queriesHitTriggers)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48fab4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_queriesHitTriggers", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_queriesHitBackfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)()>(&::UnityEngine::Physics::get_queriesHitBackfaces)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fab88;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_queriesHitBackfaces", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_queriesHitBackfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool)>(
        &::UnityEngine::Physics::set_queriesHitBackfaces)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48fabb0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_queriesHitBackfaces", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_bounceThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(&::UnityEngine::Physics::get_bounceThreshold)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fabec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_bounceThreshold", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_bounceThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_bounceThreshold)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48fac14;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_bounceThreshold", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_defaultMaxDepenetrationVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_defaultMaxDepenetrationVelocity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fac4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_defaultMaxDepenetrationVelocity",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_defaultMaxDepenetrationVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_defaultMaxDepenetrationVelocity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48fac74;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_defaultMaxDepenetrationVelocity",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_defaultSolverIterations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)()>(
        &::UnityEngine::Physics::get_defaultSolverIterations)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48facac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_defaultSolverIterations", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_defaultSolverIterations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t)>(
        &::UnityEngine::Physics::set_defaultSolverIterations)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48facd4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_defaultSolverIterations", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_defaultSolverVelocityIterations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)()>(
        &::UnityEngine::Physics::get_defaultSolverVelocityIterations)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fad10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_defaultSolverVelocityIterations",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_defaultSolverVelocityIterations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t)>(
        &::UnityEngine::Physics::set_defaultSolverVelocityIterations)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48fad38;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_defaultSolverVelocityIterations",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_simulationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::SimulationMode (*)()>(
        &::UnityEngine::Physics::get_simulationMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fad74;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_simulationMode", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_simulationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::SimulationMode)>(
        &::UnityEngine::Physics::set_simulationMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48fad9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_simulationMode", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::SimulationMode>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_defaultMaxAngularSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_defaultMaxAngularSpeed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fadd8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_defaultMaxAngularSpeed", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_defaultMaxAngularSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_defaultMaxAngularSpeed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48fae00;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_defaultMaxAngularSpeed", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_improvedPatchFriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)()>(
        &::UnityEngine::Physics::get_improvedPatchFriction)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fae38;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_improvedPatchFriction", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_improvedPatchFriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool)>(
        &::UnityEngine::Physics::set_improvedPatchFriction)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48fae60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_improvedPatchFriction", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_invokeCollisionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)()>(
        &::UnityEngine::Physics::get_invokeCollisionCallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48fae9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_invokeCollisionCallbacks",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_invokeCollisionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool)>(
        &::UnityEngine::Physics::set_invokeCollisionCallbacks)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48faec4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_invokeCollisionCallbacks",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_defaultPhysicsScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::PhysicsScene (*)()>(
        &::UnityEngine::Physics::get_defaultPhysicsScene)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x48faf00;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_defaultPhysicsScene", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Collider *, ::UnityEngine::Collider *,
                         bool)>(&::UnityEngine::Physics::IgnoreCollision)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48fafb8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "IgnoreCollision", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Collider *, ::UnityEngine::Collider *)>(
        &::UnityEngine::Physics::IgnoreCollision)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48fb00c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "IgnoreCollision", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreLayerCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t, int32_t, bool)>(
        &::UnityEngine::Physics::IgnoreLayerCollision)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x48fb094;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "IgnoreLayerCollision", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreLayerCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t, int32_t)>(
        &::UnityEngine::Physics::IgnoreLayerCollision)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48fb0e8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "IgnoreLayerCollision", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.GetIgnoreLayerCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(int32_t, int32_t)>(
        &::UnityEngine::Physics::GetIgnoreLayerCollision)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48fb170;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetIgnoreLayerCollision", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetIgnoreCollision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Collider *, ::UnityEngine::Collider *)>(
        &::UnityEngine::Physics::GetIgnoreCollision)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48fb1b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetIgnoreCollision", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x48fb1f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x48fb4a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x48fb564;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x48fb62c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x48fb6e4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x48fb9a8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x48fba84;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x48fbb4c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x48fbc14;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t, int32_t)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48fbcac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48fbd48;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48fbdd0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>,
                         float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x48fbe58;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>,
                         float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x48fbf08;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>,
                         float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x48fbfc0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray,
                         ::ByRef<::UnityEngine::RaycastHit>)>(
        &::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x48fc060;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Raycast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x48fc0f0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Linecast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         int32_t)>(&::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x48fc20c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Linecast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48fc2ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Linecast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x48fc348;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Linecast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, int32_t)>(
        &::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x48fc474;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Linecast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Linecast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>)>(
        &::UnityEngine::Physics::Linecast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x48fc524;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Linecast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, ::UnityEngine::Vector3, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x48fc5c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, ::UnityEngine::Vector3, float_t, int32_t)>(
        &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x48fc6dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, ::UnityEngine::Vector3, float_t)>(
        &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x48fc7f4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x48fc908;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x48fca0c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t)>(
        &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x48fcaf0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t)>(
        &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x48fcc18;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>)>(
        &::UnityEngine::Physics::CapsuleCast)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x48fcd34;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, float_t,
                         ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x48fce40;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, float_t,
                         ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x48fcf1c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, float_t,
                         ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x48fcfe4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, float_t,
                         ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x48fd0a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x48fd15c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t, float_t, int32_t)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x48fd238;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t, float_t)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x48fd2e8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x48fd38c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x48fd430;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x48fd4fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t,
                         ::ByRef<::UnityEngine::RaycastHit>, float_t)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x48fd5b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Ray, float_t,
                         ::ByRef<::UnityEngine::RaycastHit>)>(
        &::UnityEngine::Physics::SphereCast)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x48fd668;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                         float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x48fd71c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                         float_t, int32_t)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x48fd838;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                         float_t)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x48fd95c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
        &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x48fda7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x48fdb80;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::ByRef<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion, float_t,
        int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x48fdc7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::ByRef<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion, float_t,
        int32_t)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x48fdd58;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::ByRef<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion,
        float_t)>(&::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x48fde8c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::ByRef<::UnityEngine::RaycastHit>, ::UnityEngine::Quaternion)>(
        &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x48fdfb4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3,
                         ::ByRef<::UnityEngine::RaycastHit>)>(
        &::UnityEngine::Physics::BoxCast)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x48fe0c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCast", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::RaycastHit>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Internal_RaycastAll)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x48fe1c4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Internal_RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x48fe2d8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(
        &::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x48fe4fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
        &::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x48fe5ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x48fe658;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Ray, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x48fe6fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Ray, float_t, int32_t)>(
        &::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x48fe7b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x48fe860;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Ray)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48fe904;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Ray,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t, int32_t,
                            ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x48fe9a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Ray,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t, int32_t)>(
        &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x48feca0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Ray,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t)>(
        &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x48fed38;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Ray,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>)>(
        &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48fedd4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t, int32_t,
                            ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x48fee60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t, int32_t)>(
        &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x48fef34;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t)>(
        &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x48ff00c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>)>(
        &::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x48ff0d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_CapsuleCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::PhysicsScene, ::UnityEngine::Vector3,
        ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t,
        int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Query_CapsuleCastAll)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x48ff194;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Query_CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
        ::UnityEngine::Vector3, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CapsuleCastAll)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x48ff2fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
        ::UnityEngine::Vector3, float_t, int32_t)>(
        &::UnityEngine::Physics::CapsuleCastAll)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x48ff480;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
        ::UnityEngine::Vector3, float_t)>(
        &::UnityEngine::Physics::CapsuleCastAll)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x48ff598;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
        ::UnityEngine::Vector3)>(&::UnityEngine::Physics::CapsuleCastAll)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x48ff6ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t,
        ::UnityEngine::Vector3, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Query_SphereCastAll)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x48ff7ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Query_SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t,
        int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x48ff8f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t,
        int32_t)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x48ffa60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t)>(
        &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x48ffb18;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x48ffbcc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Ray, float_t, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x48ffc80;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Ray, float_t, float_t, int32_t)>(
        &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x48ffd3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Ray, float_t, float_t)>(
        &::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x48ffde8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x48ffe88;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.OverlapCapsule_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::PhysicsScene, ::UnityEngine::Vector3,
        ::UnityEngine::Vector3, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapCapsule_Internal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x48fff28;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapCapsule_Internal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapCapsule)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4900064;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapCapsule", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(
        &::UnityEngine::Physics::OverlapCapsule)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4900128;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapCapsule", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapCapsule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
        &::UnityEngine::Physics::OverlapCapsule)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x49001d8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapCapsule", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.OverlapSphere_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapSphere_Internal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4900284;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapSphere_Internal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x49003a4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapSphere", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, float_t, int32_t)>(
        &::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4900440;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapSphere", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, float_t)>(
        &::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x49004c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapSphere", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Simulate_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::PhysicsScene, float_t)>(
        &::UnityEngine::Physics::Simulate_Internal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x490054c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Simulate_Internal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Simulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(&::UnityEngine::Physics::Simulate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4900628;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Simulate", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.InterpolateBodies_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::PhysicsScene)>(
        &::UnityEngine::Physics::InterpolateBodies_Internal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4900718;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "InterpolateBodies_Internal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.ResetInterpolationPoses_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::PhysicsScene)>(
        &::UnityEngine::Physics::ResetInterpolationPoses_Internal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x49007cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ResetInterpolationPoses_Internal",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SyncTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)()>(&::UnityEngine::Physics::SyncTransforms)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4900880;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SyncTransforms", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_autoSyncTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)()>(&::UnityEngine::Physics::get_autoSyncTransforms)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x49008a8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_autoSyncTransforms", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_autoSyncTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool)>(
        &::UnityEngine::Physics::set_autoSyncTransforms)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49008d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_autoSyncTransforms", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_reuseCollisionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)()>(
        &::UnityEngine::Physics::get_reuseCollisionCallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x490090c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_reuseCollisionCallbacks", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_reuseCollisionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool)>(
        &::UnityEngine::Physics::set_reuseCollisionCallbacks)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4900934;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_reuseCollisionCallbacks", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Query_ComputePenetration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Collider *, ::UnityEngine::Vector3,
                         ::UnityEngine::Quaternion, ::UnityEngine::Collider *,
                         ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                         ::ByRef<::UnityEngine::Vector3>, ::ByRef<float_t>)>(
        &::UnityEngine::Physics::Query_ComputePenetration)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4900970;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Query_ComputePenetration", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<float_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ComputePenetration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Collider *, ::UnityEngine::Vector3,
                         ::UnityEngine::Quaternion, ::UnityEngine::Collider *,
                         ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                         ::ByRef<::UnityEngine::Vector3>, ::ByRef<float_t>)>(
        &::UnityEngine::Physics::ComputePenetration)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4900ae0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ComputePenetration", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<float_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_ClosestPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (*)(
        ::UnityEngine::Collider *, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::Query_ClosestPoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4900c08;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Query_ClosestPoint", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ClosestPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Collider *,
        ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
        &::UnityEngine::Physics::ClosestPoint)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4900d34;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ClosestPoint", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_interCollisionDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_interCollisionDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4900dfc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_interCollisionDistance", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_interCollisionDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_interCollisionDistance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4900e24;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_interCollisionDistance", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_interCollisionStiffness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_interCollisionStiffness)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4900e5c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_interCollisionStiffness", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_interCollisionStiffness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_interCollisionStiffness)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4900e84;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_interCollisionStiffness", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_interCollisionSettingsToggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)()>(
        &::UnityEngine::Physics::get_interCollisionSettingsToggle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4900ebc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_interCollisionSettingsToggle",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_interCollisionSettingsToggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool)>(
        &::UnityEngine::Physics::set_interCollisionSettingsToggle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4900ee4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_interCollisionSettingsToggle",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_clothGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (*)()>(
        &::UnityEngine::Physics::get_clothGravity)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4900f20;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_clothGravity", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_clothGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::set_clothGravity)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4900fe8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_clothGravity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, float_t,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>,
                            int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x49010a8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapSphereNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, float_t,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>,
                            int32_t)>(
        &::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4901154;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapSphereNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, float_t,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>)>(
        &::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x49011ec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapSphereNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3,
                         float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckSphere_Internal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4901278;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckSphere_Internal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckSphere)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x490139c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckSphere", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, float_t, int32_t)>(
        &::UnityEngine::Physics::CheckSphere)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4901438;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckSphere", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, float_t)>(
        &::UnityEngine::Physics::CheckSphere)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x49014c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckSphere", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            float_t, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t, int32_t,
                            ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4901544;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            float_t, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t, int32_t)>(
        &::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4901764;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            float_t, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t)>(
        &::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x490188c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CapsuleCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            float_t, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>)>(
        &::UnityEngine::Physics::CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x49019a8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CapsuleCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(
        ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3,
        ::ArrayW<::UnityEngine::RaycastHit,
                 ::Array<::UnityEngine::RaycastHit> *>,
        float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4901ab0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(
        ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3,
        ::ArrayW<::UnityEngine::RaycastHit,
                 ::Array<::UnityEngine::RaycastHit> *>,
        float_t, int32_t)>(&::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4901cb4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(
        ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3,
        ::ArrayW<::UnityEngine::RaycastHit,
                 ::Array<::UnityEngine::RaycastHit> *>,
        float_t)>(&::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4901d7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, float_t,
                            ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>)>(
        &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4901e38;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Ray, float_t,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t, int32_t,
                            ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4901ef4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Ray, float_t,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t, int32_t)>(
        &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4901fc0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Ray, float_t,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            float_t)>(
        &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4902074;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Ray, float_t,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>)>(
        &::UnityEngine::Physics::SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4902124;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Ray>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckCapsule_Internal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x49021d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckCapsule_Internal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckCapsule)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4902314;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckCapsule", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t, int32_t)>(
        &::UnityEngine::Physics::CheckCapsule)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x49023d8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckCapsule", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckCapsule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         float_t)>(&::UnityEngine::Physics::CheckCapsule)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4902488;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckCapsule", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3,
                         ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                         int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckBox_Internal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4902534;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckBox_Internal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Quaternion, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckBox)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4902668;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckBox", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Quaternion, int32_t)>(
        &::UnityEngine::Physics::CheckBox)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x490272c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckBox", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                         ::UnityEngine::Quaternion)>(
        &::UnityEngine::Physics::CheckBox)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x490282c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckBox", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.CheckBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::CheckBox)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4902920;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckBox", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::PhysicsScene, ::UnityEngine::Vector3,
        ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapBox_Internal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4902a0c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBox_Internal", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapBox)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4902b3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBox", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion, int32_t)>(
        &::UnityEngine::Physics::OverlapBox)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4902c00;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBox", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion)>(&::UnityEngine::Physics::OverlapBox)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4902d00;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBox", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
        &::UnityEngine::Physics::OverlapBox)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4902df4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBox", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>,
                            ::UnityEngine::Quaternion, int32_t,
                            ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4902edc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBoxNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>,
                            ::UnityEngine::Quaternion, int32_t)>(
        &::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4902fcc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBoxNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>,
                            ::UnityEngine::Quaternion)>(
        &::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x49030d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBoxNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapBoxNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>)>(
        &::UnityEngine::Physics::OverlapBoxNonAlloc)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x49031d8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBoxNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            ::UnityEngine::Quaternion, float_t, int32_t,
                            ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x49032c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::ArrayW<::UnityEngine::RaycastHit,
                 ::Array<::UnityEngine::RaycastHit> *>,
        ::UnityEngine::Quaternion)>(&::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x49034d8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            ::UnityEngine::Quaternion, float_t)>(
        &::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x49035e0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>,
                            ::UnityEngine::Quaternion, float_t, int32_t)>(
        &::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x4903708;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            ::UnityEngine::Vector3,
                            ::ArrayW<::UnityEngine::RaycastHit,
                                     ::Array<::UnityEngine::RaycastHit> *>)>(
        &::UnityEngine::Physics::BoxCastNonAlloc)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x490383c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_BoxCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::PhysicsScene, ::UnityEngine::Vector3,
        ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Internal_BoxCastAll)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x490393c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Internal_BoxCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x4903ab0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion, float_t, int32_t)>(
        &::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4903c60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion, float_t)>(
        &::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x4903d84;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Quaternion)>(&::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4903ea4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Quaternion>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BoxCastAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3,
        ::UnityEngine::Vector3)>(&::UnityEngine::Physics::BoxCastAll)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x4903fa4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.OverlapCapsuleNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            float_t,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>,
                            int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapCapsuleNonAlloc)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x490409c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapCapsuleNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.OverlapCapsuleNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(
        ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
        ::ArrayW<::UnityEngine::Collider *,
                 ::Array<::UnityEngine::Collider *> *>,
        int32_t)>(&::UnityEngine::Physics::OverlapCapsuleNonAlloc)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4904170;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapCapsuleNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.OverlapCapsuleNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3,
                            float_t,
                            ::ArrayW<::UnityEngine::Collider *,
                                     ::Array<::UnityEngine::Collider *> *>)>(
        &::UnityEngine::Physics::OverlapCapsuleNonAlloc)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4904230;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapCapsuleNonAlloc", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Collider *,
                         ::Array<::UnityEngine::Collider *> *>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Internal_RebuildBroadphaseRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Bounds, int32_t)>(
        &::UnityEngine::Physics::Internal_RebuildBroadphaseRegions)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x49042e4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Internal_RebuildBroadphaseRegions",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Bounds>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.RebuildBroadphaseRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Bounds, int32_t)>(
        &::UnityEngine::Physics::RebuildBroadphaseRegions)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x49043ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "RebuildBroadphaseRegions", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Bounds>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BakeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t, bool,
                         ::UnityEngine::MeshColliderCookingOptions)>(
        &::UnityEngine::Physics::BakeMesh)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x49044cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BakeMesh", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::MeshColliderCookingOptions>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BakeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t, bool)>(&::UnityEngine::Physics::BakeMesh)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4904520;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "BakeMesh", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.ResolveShapeToCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Collider> (*)(::System::IntPtr)>(
        &::UnityEngine::Physics::ResolveShapeToCollider)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49045a8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ResolveShapeToCollider", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.ResolveActorToComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Component> (*)(::System::IntPtr)>(
        &::UnityEngine::Physics::ResolveActorToComponent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49045e4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ResolveActorToComponent", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.ResolveShapeToInstanceID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::IntPtr)>(
        &::UnityEngine::Physics::ResolveShapeToInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4904620;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ResolveShapeToInstanceID", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.ResolveActorToInstanceID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::IntPtr)>(
        &::UnityEngine::Physics::ResolveActorToInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x490465c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ResolveActorToInstanceID", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.GetColliderByInstanceID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Collider> (*)(int32_t)>(
        &::UnityEngine::Physics::GetColliderByInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4904698;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetColliderByInstanceID", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetBodyByInstanceID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Component> (*)(int32_t)>(
        &::UnityEngine::Physics::GetBodyByInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49046d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetBodyByInstanceID", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.TranslateTriangleIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (*)(::System::IntPtr, uint32_t)>(
        &::UnityEngine::Physics::TranslateTriangleIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4904710;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "TranslateTriangleIndex", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                uint32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.TranslateTriangleIndexFromID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (*)(int32_t, uint32_t)>(
        &::UnityEngine::Physics::TranslateTriangleIndexFromID)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4904754;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "TranslateTriangleIndexFromID",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                uint32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IsShapeTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::IntPtr)>(
        &::UnityEngine::Physics::IsShapeTrigger)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4904798;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "IsShapeTrigger", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Component *,
                         ::UnityEngine::Collision *)>(
        &::UnityEngine::Physics::SendOnCollisionEnter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x49047d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SendOnCollisionEnter", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Component *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collision *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionStay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Component *,
                         ::UnityEngine::Collision *)>(
        &::UnityEngine::Physics::SendOnCollisionStay)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4904818;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SendOnCollisionStay", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Component *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collision *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Component *,
                         ::UnityEngine::Collision *)>(
        &::UnityEngine::Physics::SendOnCollisionExit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x490485c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "SendOnCollisionExit", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Component *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collision *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.GetActorLinearVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (*)(::System::IntPtr)>(
        &::UnityEngine::Physics::GetActorLinearVelocity)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x49048a0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetActorLinearVelocity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.GetActorAngularVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (*)(::System::IntPtr)>(
        &::UnityEngine::Physics::GetActorAngularVelocity)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4904978;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetActorAngularVelocity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_minPenetrationForPenalty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_minPenetrationForPenalty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4904a50;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_minPenetrationForPenalty",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_minPenetrationForPenalty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_minPenetrationForPenalty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4904a58;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_minPenetrationForPenalty",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_bounceTreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(&::UnityEngine::Physics::get_bounceTreshold)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4904a5c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_bounceTreshold", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_bounceTreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_bounceTreshold)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4904ac4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_bounceTreshold", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_sleepVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(&::UnityEngine::Physics::get_sleepVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4904b3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_sleepVelocity", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_sleepVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_sleepVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4904b44;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_sleepVelocity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_sleepAngularVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_sleepAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4904b48;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_sleepAngularVelocity", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_sleepAngularVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_sleepAngularVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4904b50;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_sleepAngularVelocity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_maxAngularVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_maxAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4904b54;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_maxAngularVelocity", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_maxAngularVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_maxAngularVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4904b5c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_maxAngularVelocity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_solverIterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)()>(
        &::UnityEngine::Physics::get_solverIterationCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4904b60;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_solverIterationCount", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_solverIterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t)>(
        &::UnityEngine::Physics::set_solverIterationCount)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4904bc8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_solverIterationCount", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_solverVelocityIterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)()>(
        &::UnityEngine::Physics::get_solverVelocityIterationCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4904c3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_solverVelocityIterationCount",
        std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_solverVelocityIterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(int32_t)>(
        &::UnityEngine::Physics::set_solverVelocityIterationCount)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4904ca4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_solverVelocityIterationCount",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_penetrationPenaltyForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (*)()>(
        &::UnityEngine::Physics::get_penetrationPenaltyForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4904d18;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_penetrationPenaltyForce", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_penetrationPenaltyForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(float_t)>(
        &::UnityEngine::Physics::set_penetrationPenaltyForce)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4904d20;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_penetrationPenaltyForce", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_autoSimulation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)()>(&::UnityEngine::Physics::get_autoSimulation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4904d24;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_autoSimulation", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_autoSimulation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool)>(&::UnityEngine::Physics::set_autoSimulation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4904d9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_autoSimulation", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.add_ContactEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Physics_ContactEventDelegate *)>(
        &::UnityEngine::Physics::add_ContactEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4904e18;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "add_ContactEvent", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Physics_ContactEventDelegate *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.remove_ContactEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Physics_ContactEventDelegate *)>(
        &::UnityEngine::Physics::remove_ContactEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4904ef4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "remove_ContactEvent", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Physics_ContactEventDelegate *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OnSceneContact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr,
                         int32_t)>(&::UnityEngine::Physics::OnSceneContact)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x4904fd0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OnSceneContact", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::PhysicsScene>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ReportContacts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Collections::NativeArray_1_ReadOnly<
                         ::UnityEngine::ContactPairHeader>)>(
        &::UnityEngine::Physics::ReportContacts)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x4905228;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ReportContacts", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Unity::Collections::NativeArray_1_ReadOnly<
                    ::UnityEngine::ContactPairHeader>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetCollisionToReport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Collision
                    *(*)(::ByRef<::UnityEngine::ContactPairHeader>,
                         ::ByRef<::UnityEngine::ContactPair>, bool)>(
        &::UnityEngine::Physics::GetCollisionToReport)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4905628;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetCollisionToReport", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::ContactPairHeader>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::ContactPair>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Physics::*)()>(
        &::UnityEngine::Physics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4905764;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_gravity_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::Vector3>)>(
        &::UnityEngine::Physics::get_gravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48fa968;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_gravity_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.set_gravity_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::Vector3>)>(
        &::UnityEngine::Physics::set_gravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48faa28;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_gravity_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_defaultPhysicsScene_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::PhysicsScene>)>(
        &::UnityEngine::Physics::get_defaultPhysicsScene_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48faf7c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_defaultPhysicsScene_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Internal_RaycastAll_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Ray>,
        float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Internal_RaycastAll_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x48fe26c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Internal_RaycastAll_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Ray>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Query_CapsuleCastAll_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Vector3>, float_t,
        ::ByRef<::UnityEngine::Vector3>, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Query_CapsuleCastAll_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x48ff270;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Query_CapsuleCastAll_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Query_SphereCastAll_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>,
        float_t, ::ByRef<::UnityEngine::Vector3>, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Query_SphereCastAll_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x48ff874;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Query_SphereCastAll_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.OverlapCapsule_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Vector3>, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapCapsule_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x48fffe8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapCapsule_Internal_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.OverlapSphere_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>,
        float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapSphere_Internal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4900338;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapSphere_Internal_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Simulate_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::PhysicsScene>, float_t)>(
        &::UnityEngine::Physics::Simulate_Internal_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x49005dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Simulate_Internal_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.InterpolateBodies_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::PhysicsScene>)>(
        &::UnityEngine::Physics::InterpolateBodies_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4900790;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "InterpolateBodies_Internal_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.ResetInterpolationPoses_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::PhysicsScene>)>(
        &::UnityEngine::Physics::ResetInterpolationPoses_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4900844;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "ResetInterpolationPoses_Internal_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Query_ComputePenetration_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(
        ::UnityEngine::Collider *, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Quaternion>, ::UnityEngine::Collider *,
        ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Quaternion>,
        ::ByRef<::UnityEngine::Vector3>, ::ByRef<float_t>)>(
        &::UnityEngine::Physics::Query_ComputePenetration_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4900a54;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Query_ComputePenetration_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Quaternion>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Quaternion>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<float_t>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Query_ClosestPoint_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(
        ::UnityEngine::Collider *, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Quaternion>, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Vector3>)>(
        &::UnityEngine::Physics::Query_ClosestPoint_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4900cc8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Query_ClosestPoint_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::Collider *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Quaternion>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.get_clothGravity_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::Vector3>)>(
        &::UnityEngine::Physics::get_clothGravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4900fac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "get_clothGravity_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.set_clothGravity_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::Vector3>)>(
        &::UnityEngine::Physics::set_clothGravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x490106c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "set_clothGravity_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.CheckSphere_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ByRef<::UnityEngine::PhysicsScene>,
                         ::ByRef<::UnityEngine::Vector3>, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckSphere_Internal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4901330;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckSphere_Internal_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.CheckCapsule_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ByRef<::UnityEngine::PhysicsScene>,
                         ::ByRef<::UnityEngine::Vector3>,
                         ::ByRef<::UnityEngine::Vector3>, float_t, int32_t,
                         ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckCapsule_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4902298;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckCapsule_Internal_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.CheckBox_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(
        ::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Quaternion>,
        int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::CheckBox_Internal_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x49025f4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "CheckBox_Internal_Injected", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Quaternion>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.OverlapBox_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,
                         ::Array<::UnityW<::UnityEngine::Collider>> *> (*)(
        ::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Quaternion>,
        int32_t, ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::OverlapBox_Internal_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4902ac8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "OverlapBox_Internal_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Quaternion>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Internal_BoxCastAll_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::RaycastHit,
                         ::Array<::UnityEngine::RaycastHit> *> (*)(
        ::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>,
        ::ByRef<::UnityEngine::Quaternion>, float_t, int32_t,
        ::UnityEngine::QueryTriggerInteraction)>(
        &::UnityEngine::Physics::Internal_BoxCastAll_Injected)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4903a1c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Internal_BoxCastAll_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::PhysicsScene>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Quaternion>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::UnityEngine::QueryTriggerInteraction>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.Internal_RebuildBroadphaseRegions_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::Bounds>, int32_t)>(
        &::UnityEngine::Physics::Internal_RebuildBroadphaseRegions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4904368;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "Internal_RebuildBroadphaseRegions_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Bounds>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.GetActorLinearVelocity_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector3>)>(
        &::UnityEngine::Physics::GetActorLinearVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4904934;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetActorLinearVelocity_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::Physics.GetActorAngularVelocity_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector3>)>(
        &::UnityEngine::Physics::GetActorAngularVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4904a0c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::UnityEngine::Physics *>::get(),
        "GetActorAngularVelocity_Injected",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Vector3>>::get()})));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics::setStaticF_ContactModifyEvent(
    ::System::Action_2<::UnityEngine::PhysicsScene,
                       ::Unity::Collections::NativeArray_1<
                           ::UnityEngine::ModifiableContactPair>> *value) {
  ::cordl_internals::setStaticField<
      ::System::Action_2<::UnityEngine::PhysicsScene,
                         ::Unity::Collections::NativeArray_1<
                             ::UnityEngine::ModifiableContactPair>> *,
      "ContactModifyEvent",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get>(
      std::forward<::System::Action_2<::UnityEngine::PhysicsScene,
                                      ::Unity::Collections::NativeArray_1<
                                          ::UnityEngine::ModifiableContactPair>>
                       *>(value));
}
inline ::System::Action_2<
    ::UnityEngine::PhysicsScene,
    ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>> *
UnityEngine::Physics::getStaticF_ContactModifyEvent() {
  return ::cordl_internals::getStaticField<
      ::System::Action_2<::UnityEngine::PhysicsScene,
                         ::Unity::Collections::NativeArray_1<
                             ::UnityEngine::ModifiableContactPair>> *,
      "ContactModifyEvent",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get>();
}
inline void UnityEngine::Physics::setStaticF_ContactModifyEventCCD(
    ::System::Action_2<::UnityEngine::PhysicsScene,
                       ::Unity::Collections::NativeArray_1<
                           ::UnityEngine::ModifiableContactPair>> *value) {
  ::cordl_internals::setStaticField<
      ::System::Action_2<::UnityEngine::PhysicsScene,
                         ::Unity::Collections::NativeArray_1<
                             ::UnityEngine::ModifiableContactPair>> *,
      "ContactModifyEventCCD",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get>(
      std::forward<::System::Action_2<::UnityEngine::PhysicsScene,
                                      ::Unity::Collections::NativeArray_1<
                                          ::UnityEngine::ModifiableContactPair>>
                       *>(value));
}
inline ::System::Action_2<
    ::UnityEngine::PhysicsScene,
    ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>> *
UnityEngine::Physics::getStaticF_ContactModifyEventCCD() {
  return ::cordl_internals::getStaticField<
      ::System::Action_2<::UnityEngine::PhysicsScene,
                         ::Unity::Collections::NativeArray_1<
                             ::UnityEngine::ModifiableContactPair>> *,
      "ContactModifyEventCCD",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get>();
}
inline void UnityEngine::Physics::setStaticF_ContactEvent(
    ::UnityEngine::Physics_ContactEventDelegate *value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Physics_ContactEventDelegate *, "ContactEvent",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get>(
      std::forward<::UnityEngine::Physics_ContactEventDelegate *>(value));
}
inline ::UnityEngine::Physics_ContactEventDelegate *
UnityEngine::Physics::getStaticF_ContactEvent() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Physics_ContactEventDelegate *, "ContactEvent",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get>();
}
inline void UnityEngine::Physics::setStaticF_s_ReusableCollision(
    ::UnityEngine::Collision *value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Collision *, "s_ReusableCollision",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get>(
      std::forward<::UnityEngine::Collision *>(value));
}
inline ::UnityEngine::Collision *
UnityEngine::Physics::getStaticF_s_ReusableCollision() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Collision *, "s_ReusableCollision",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get>();
}
inline void UnityEngine::Physics::add_ContactModifyEvent(
    ::System::Action_2<::UnityEngine::PhysicsScene,
                       ::Unity::Collections::NativeArray_1<
                           ::UnityEngine::ModifiableContactPair>> *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "add_ContactModifyEvent", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_2<::UnityEngine::PhysicsScene,
                                 ::Unity::Collections::NativeArray_1<
                                     ::UnityEngine::ModifiableContactPair>>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::remove_ContactModifyEvent(
    ::System::Action_2<::UnityEngine::PhysicsScene,
                       ::Unity::Collections::NativeArray_1<
                           ::UnityEngine::ModifiableContactPair>> *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "remove_ContactModifyEvent", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_2<::UnityEngine::PhysicsScene,
                                 ::Unity::Collections::NativeArray_1<
                                     ::UnityEngine::ModifiableContactPair>>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::add_ContactModifyEventCCD(
    ::System::Action_2<::UnityEngine::PhysicsScene,
                       ::Unity::Collections::NativeArray_1<
                           ::UnityEngine::ModifiableContactPair>> *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "add_ContactModifyEventCCD", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_2<::UnityEngine::PhysicsScene,
                                 ::Unity::Collections::NativeArray_1<
                                     ::UnityEngine::ModifiableContactPair>>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::remove_ContactModifyEventCCD(
    ::System::Action_2<::UnityEngine::PhysicsScene,
                       ::Unity::Collections::NativeArray_1<
                           ::UnityEngine::ModifiableContactPair>> *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "remove_ContactModifyEventCCD", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_2<::UnityEngine::PhysicsScene,
                                 ::Unity::Collections::NativeArray_1<
                                     ::UnityEngine::ModifiableContactPair>>
                  *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline void
UnityEngine::Physics::OnSceneContactModify(::UnityEngine::PhysicsScene scene,
                                           ::System::IntPtr buffer,
                                           int32_t count, bool isCCD) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OnSceneContactModify", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, scene, buffer, count, isCCD);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::get_gravity() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_gravity", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_gravity(::UnityEngine::Vector3 value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_gravity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_defaultContactOffset() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_defaultContactOffset", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_defaultContactOffset(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_defaultContactOffset", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_sleepThreshold() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_sleepThreshold", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_sleepThreshold(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_sleepThreshold", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_queriesHitTriggers() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_queriesHitTriggers", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::set_queriesHitTriggers(bool value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_queriesHitTriggers", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_queriesHitBackfaces() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_queriesHitBackfaces", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::set_queriesHitBackfaces(bool value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_queriesHitBackfaces", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_bounceThreshold() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_bounceThreshold", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_bounceThreshold(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_bounceThreshold", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_defaultMaxDepenetrationVelocity() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_defaultMaxDepenetrationVelocity",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void
UnityEngine::Physics::set_defaultMaxDepenetrationVelocity(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_defaultMaxDepenetrationVelocity",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::get_defaultSolverIterations() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_defaultSolverIterations", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_defaultSolverIterations(int32_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_defaultSolverIterations", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::get_defaultSolverVelocityIterations() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_defaultSolverVelocityIterations",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method);
}
inline void
UnityEngine::Physics::set_defaultSolverVelocityIterations(int32_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_defaultSolverVelocityIterations",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline ::UnityEngine::SimulationMode
UnityEngine::Physics::get_simulationMode() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_simulationMode", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SimulationMode,
                                             false>(nullptr,
                                                    ___internal_method);
}
inline void
UnityEngine::Physics::set_simulationMode(::UnityEngine::SimulationMode value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_simulationMode", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::SimulationMode>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_defaultMaxAngularSpeed() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_defaultMaxAngularSpeed", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_defaultMaxAngularSpeed(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_defaultMaxAngularSpeed", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_improvedPatchFriction() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_improvedPatchFriction", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::set_improvedPatchFriction(bool value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_improvedPatchFriction", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_invokeCollisionCallbacks() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_invokeCollisionCallbacks", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::set_invokeCollisionCallbacks(bool value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_invokeCollisionCallbacks", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline ::UnityEngine::PhysicsScene
UnityEngine::Physics::get_defaultPhysicsScene() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_defaultPhysicsScene", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene,
                                             false>(nullptr,
                                                    ___internal_method);
}
inline void
UnityEngine::Physics::IgnoreCollision(::UnityEngine::Collider *collider1,
                                      ::UnityEngine::Collider *collider2,
                                      bool ignore) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "IgnoreCollision", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, collider1, collider2, ignore);
}
inline void
UnityEngine::Physics::IgnoreCollision(::UnityEngine::Collider *collider1,
                                      ::UnityEngine::Collider *collider2) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "IgnoreCollision", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, collider1, collider2);
}
inline void UnityEngine::Physics::IgnoreLayerCollision(int32_t layer1,
                                                       int32_t layer2,
                                                       bool ignore) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "IgnoreLayerCollision", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, layer1, layer2, ignore);
}
inline void UnityEngine::Physics::IgnoreLayerCollision(int32_t layer1,
                                                       int32_t layer2) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "IgnoreLayerCollision", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, layer1, layer2);
}
inline bool UnityEngine::Physics::GetIgnoreLayerCollision(int32_t layer1,
                                                          int32_t layer2) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetIgnoreLayerCollision", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, layer1, layer2);
}
inline bool
UnityEngine::Physics::GetIgnoreCollision(::UnityEngine::Collider *collider1,
                                         ::UnityEngine::Collider *collider2) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetIgnoreCollision", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, collider1, collider2);
}
inline bool UnityEngine::Physics::Raycast(
    ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, direction, maxDistance, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin,
                                          ::UnityEngine::Vector3 direction,
                                          float_t maxDistance,
                                          int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, direction, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin,
                                          ::UnityEngine::Vector3 direction,
                                          float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, direction, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin,
                                          ::UnityEngine::Vector3 direction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, direction);
}
inline bool UnityEngine::Physics::Raycast(
    ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, direction, hitInfo, maxDistance,
      layerMask, queryTriggerInteraction);
}
inline bool
UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin,
                              ::UnityEngine::Vector3 direction,
                              ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                              float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, direction, hitInfo, maxDistance,
      layerMask);
}
inline bool UnityEngine::Physics::Raycast(
    ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, direction, hitInfo, maxDistance);
}
inline bool
UnityEngine::Physics::Raycast(::UnityEngine::Vector3 origin,
                              ::UnityEngine::Vector3 direction,
                              ::ByRef<::UnityEngine::RaycastHit> hitInfo) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, direction, hitInfo);
}
inline bool UnityEngine::Physics::Raycast(
    ::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, maxDistance, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray,
                                          float_t maxDistance,
                                          int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray,
                                          float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray ray) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray);
}
inline bool UnityEngine::Physics::Raycast(
    ::UnityEngine::Ray ray, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, hitInfo, maxDistance, layerMask,
      queryTriggerInteraction);
}
inline bool
UnityEngine::Physics::Raycast(::UnityEngine::Ray ray,
                              ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                              float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, hitInfo, maxDistance, layerMask);
}
inline bool
UnityEngine::Physics::Raycast(::UnityEngine::Ray ray,
                              ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                              float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, hitInfo, maxDistance);
}
inline bool
UnityEngine::Physics::Raycast(::UnityEngine::Ray ray,
                              ::ByRef<::UnityEngine::RaycastHit> hitInfo) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Raycast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, hitInfo);
}
inline bool UnityEngine::Physics::Linecast(
    ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Linecast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start,
                                           ::UnityEngine::Vector3 end,
                                           int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Linecast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end, layerMask);
}
inline bool UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start,
                                           ::UnityEngine::Vector3 end) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Linecast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end);
}
inline bool UnityEngine::Physics::Linecast(
    ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Linecast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end, hitInfo, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Linecast(
    ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Linecast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end, hitInfo, layerMask);
}
inline bool
UnityEngine::Physics::Linecast(::UnityEngine::Vector3 start,
                               ::UnityEngine::Vector3 end,
                               ::ByRef<::UnityEngine::RaycastHit> hitInfo) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Linecast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end, hitInfo);
}
inline bool UnityEngine::Physics::CapsuleCast(
    ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2,
    float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, point1, point2, radius, direction,
      maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1,
                                              ::UnityEngine::Vector3 point2,
                                              float_t radius,
                                              ::UnityEngine::Vector3 direction,
                                              float_t maxDistance,
                                              int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, point1, point2, radius, direction,
      maxDistance, layerMask);
}
inline bool UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1,
                                              ::UnityEngine::Vector3 point2,
                                              float_t radius,
                                              ::UnityEngine::Vector3 direction,
                                              float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, point1, point2, radius, direction,
      maxDistance);
}
inline bool
UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1,
                                  ::UnityEngine::Vector3 point2, float_t radius,
                                  ::UnityEngine::Vector3 direction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, point1, point2, radius, direction);
}
inline bool UnityEngine::Physics::CapsuleCast(
    ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2,
    float_t radius, ::UnityEngine::Vector3 direction,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, point1, point2, radius, direction, hitInfo,
      maxDistance, layerMask, queryTriggerInteraction);
}
inline bool
UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1,
                                  ::UnityEngine::Vector3 point2, float_t radius,
                                  ::UnityEngine::Vector3 direction,
                                  ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                                  float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, point1, point2, radius, direction, hitInfo,
      maxDistance, layerMask);
}
inline bool UnityEngine::Physics::CapsuleCast(
    ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2,
    float_t radius, ::UnityEngine::Vector3 direction,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, point1, point2, radius, direction, hitInfo,
      maxDistance);
}
inline bool
UnityEngine::Physics::CapsuleCast(::UnityEngine::Vector3 point1,
                                  ::UnityEngine::Vector3 point2, float_t radius,
                                  ::UnityEngine::Vector3 direction,
                                  ::ByRef<::UnityEngine::RaycastHit> hitInfo) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, point1, point2, radius, direction, hitInfo);
}
inline bool UnityEngine::Physics::SphereCast(
    ::UnityEngine::Vector3 origin, float_t radius,
    ::UnityEngine::Vector3 direction,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, radius, direction, hitInfo,
      maxDistance, layerMask, queryTriggerInteraction);
}
inline bool
UnityEngine::Physics::SphereCast(::UnityEngine::Vector3 origin, float_t radius,
                                 ::UnityEngine::Vector3 direction,
                                 ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, radius, direction, hitInfo,
      maxDistance, layerMask);
}
inline bool
UnityEngine::Physics::SphereCast(::UnityEngine::Vector3 origin, float_t radius,
                                 ::UnityEngine::Vector3 direction,
                                 ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, radius, direction, hitInfo,
      maxDistance);
}
inline bool
UnityEngine::Physics::SphereCast(::UnityEngine::Vector3 origin, float_t radius,
                                 ::UnityEngine::Vector3 direction,
                                 ::ByRef<::UnityEngine::RaycastHit> hitInfo) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, origin, radius, direction, hitInfo);
}
inline bool UnityEngine::Physics::SphereCast(
    ::UnityEngine::Ray ray, float_t radius, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, radius, maxDistance, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray,
                                             float_t radius,
                                             float_t maxDistance,
                                             int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, radius, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray,
                                             float_t radius,
                                             float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, radius, maxDistance);
}
inline bool UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray,
                                             float_t radius) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, radius);
}
inline bool UnityEngine::Physics::SphereCast(
    ::UnityEngine::Ray ray, float_t radius,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, radius, hitInfo, maxDistance, layerMask,
      queryTriggerInteraction);
}
inline bool
UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius,
                                 ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, radius, hitInfo, maxDistance,
      layerMask);
}
inline bool
UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius,
                                 ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, radius, hitInfo, maxDistance);
}
inline bool
UnityEngine::Physics::SphereCast(::UnityEngine::Ray ray, float_t radius,
                                 ::ByRef<::UnityEngine::RaycastHit> hitInfo) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, ray, radius, hitInfo);
}
inline bool UnityEngine::Physics::BoxCast(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, orientation,
      maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center,
                                          ::UnityEngine::Vector3 halfExtents,
                                          ::UnityEngine::Vector3 direction,
                                          ::UnityEngine::Quaternion orientation,
                                          float_t maxDistance,
                                          int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, orientation,
      maxDistance, layerMask);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center,
                                          ::UnityEngine::Vector3 halfExtents,
                                          ::UnityEngine::Vector3 direction,
                                          ::UnityEngine::Quaternion orientation,
                                          float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, orientation,
      maxDistance);
}
inline bool UnityEngine::Physics::BoxCast(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, orientation);
}
inline bool UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center,
                                          ::UnityEngine::Vector3 halfExtents,
                                          ::UnityEngine::Vector3 direction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction);
}
inline bool UnityEngine::Physics::BoxCast(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo,
    ::UnityEngine::Quaternion orientation, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, hitInfo,
      orientation, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool
UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center,
                              ::UnityEngine::Vector3 halfExtents,
                              ::UnityEngine::Vector3 direction,
                              ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                              ::UnityEngine::Quaternion orientation,
                              float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, hitInfo,
      orientation, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::BoxCast(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction,
    ::ByRef<::UnityEngine::RaycastHit> hitInfo,
    ::UnityEngine::Quaternion orientation, float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, hitInfo,
      orientation, maxDistance);
}
inline bool
UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center,
                              ::UnityEngine::Vector3 halfExtents,
                              ::UnityEngine::Vector3 direction,
                              ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                              ::UnityEngine::Quaternion orientation) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, hitInfo,
      orientation);
}
inline bool
UnityEngine::Physics::BoxCast(::UnityEngine::Vector3 center,
                              ::UnityEngine::Vector3 halfExtents,
                              ::UnityEngine::Vector3 direction,
                              ::ByRef<::UnityEngine::RaycastHit> hitInfo) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCast", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::RaycastHit>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, direction, hitInfo);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::Internal_RaycastAll(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray,
    float_t maxDistance, int32_t mask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Internal_RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, mask,
             queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::RaycastAll(
    ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, origin, direction, maxDistance,
             layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3 origin,
                                 ::UnityEngine::Vector3 direction,
                                 float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, origin, direction, maxDistance,
             layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3 origin,
                                 ::UnityEngine::Vector3 direction,
                                 float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, origin, direction, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3 origin,
                                 ::UnityEngine::Vector3 direction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, origin, direction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::RaycastAll(
    ::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, ray, maxDistance, layerMask,
             queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::RaycastAll(::UnityEngine::Ray ray, float_t maxDistance,
                                 int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, ray, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::RaycastAll(::UnityEngine::Ray ray, float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, ray, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::RaycastAll(::UnityEngine::Ray ray) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, ray);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(
    ::UnityEngine::Ray ray,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ray, results, maxDistance, layerMask,
      queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(
    ::UnityEngine::Ray ray,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ray, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(
    ::UnityEngine::Ray ray,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ray, results, maxDistance);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(
    ::UnityEngine::Ray ray,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ray, results);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(
    ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, origin, direction, results, maxDistance,
      layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(
    ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, origin, direction, results, maxDistance,
      layerMask);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(
    ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, origin, direction, results, maxDistance);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(
    ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RaycastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, origin, direction, results);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::Query_CapsuleCastAll(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0,
    ::UnityEngine::Vector3 p1, float_t radius, ::UnityEngine::Vector3 direction,
    float_t maxDistance, int32_t mask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Query_CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, physicsScene, p0, p1, radius,
             direction, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::CapsuleCastAll(
    ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2,
    float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, point1, point2, radius, direction,
             maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::CapsuleCastAll(::UnityEngine::Vector3 point1,
                                     ::UnityEngine::Vector3 point2,
                                     float_t radius,
                                     ::UnityEngine::Vector3 direction,
                                     float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, point1, point2, radius, direction,
             maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::CapsuleCastAll(::UnityEngine::Vector3 point1,
                                     ::UnityEngine::Vector3 point2,
                                     float_t radius,
                                     ::UnityEngine::Vector3 direction,
                                     float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, point1, point2, radius, direction,
             maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::CapsuleCastAll(::UnityEngine::Vector3 point1,
                                     ::UnityEngine::Vector3 point2,
                                     float_t radius,
                                     ::UnityEngine::Vector3 direction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, point1, point2, radius, direction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::Query_SphereCastAll(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin,
    float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
    int32_t mask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Query_SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, physicsScene, origin, radius,
             direction, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::SphereCastAll(
    ::UnityEngine::Vector3 origin, float_t radius,
    ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, origin, radius, direction,
             maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::SphereCastAll(::UnityEngine::Vector3 origin,
                                    float_t radius,
                                    ::UnityEngine::Vector3 direction,
                                    float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, origin, radius, direction,
             maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::SphereCastAll(::UnityEngine::Vector3 origin,
                                    float_t radius,
                                    ::UnityEngine::Vector3 direction,
                                    float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, origin, radius, direction,
             maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::SphereCastAll(::UnityEngine::Vector3 origin,
                                    float_t radius,
                                    ::UnityEngine::Vector3 direction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, origin, radius, direction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::SphereCastAll(
    ::UnityEngine::Ray ray, float_t radius, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask,
             queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray ray, float_t radius,
                                    float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray ray, float_t radius,
                                    float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, ray, radius, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray ray, float_t radius) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, ray, radius);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapCapsule_Internal(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0,
    ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapCapsule_Internal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, physicsScene, point0, point1, radius,
             layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapCapsule(
    ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
    float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapCapsule", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, point0, point1, radius, layerMask,
             queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapCapsule(::UnityEngine::Vector3 point0,
                                     ::UnityEngine::Vector3 point1,
                                     float_t radius, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapCapsule", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, point0, point1, radius, layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapCapsule(::UnityEngine::Vector3 point0,
                                     ::UnityEngine::Vector3 point1,
                                     float_t radius) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapCapsule", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, point0, point1, radius);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapSphere_Internal(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position,
    float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapSphere_Internal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, physicsScene, position, radius,
             layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapSphere(
    ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapSphere", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, position, radius, layerMask,
             queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3 position,
                                    float_t radius, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapSphere", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, position, radius, layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3 position,
                                    float_t radius) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapSphere", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, position, radius);
}
inline void UnityEngine::Physics::Simulate_Internal(
    ::UnityEngine::PhysicsScene physicsScene, float_t step) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Simulate_Internal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, physicsScene, step);
}
inline void UnityEngine::Physics::Simulate(float_t step) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Simulate", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, step);
}
inline void UnityEngine::Physics::InterpolateBodies_Internal(
    ::UnityEngine::PhysicsScene physicsScene) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "InterpolateBodies_Internal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, physicsScene);
}
inline void UnityEngine::Physics::ResetInterpolationPoses_Internal(
    ::UnityEngine::PhysicsScene physicsScene) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ResetInterpolationPoses_Internal",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, physicsScene);
}
inline void UnityEngine::Physics::SyncTransforms() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SyncTransforms", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr,
                                                          ___internal_method);
}
inline bool UnityEngine::Physics::get_autoSyncTransforms() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_autoSyncTransforms", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::set_autoSyncTransforms(bool value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_autoSyncTransforms", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_reuseCollisionCallbacks() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_reuseCollisionCallbacks", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::set_reuseCollisionCallbacks(bool value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_reuseCollisionCallbacks", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::Query_ComputePenetration(
    ::UnityEngine::Collider *colliderA, ::UnityEngine::Vector3 positionA,
    ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider *colliderB,
    ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB,
    ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<float_t> distance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Query_ComputePenetration", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<float_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB,
      positionB, rotationB, direction, distance);
}
inline bool UnityEngine::Physics::ComputePenetration(
    ::UnityEngine::Collider *colliderA, ::UnityEngine::Vector3 positionA,
    ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider *colliderB,
    ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB,
    ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<float_t> distance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ComputePenetration", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<float_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB,
      positionB, rotationB, direction, distance);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::Query_ClosestPoint(
    ::UnityEngine::Collider *collider, ::UnityEngine::Vector3 position,
    ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Query_ClosestPoint", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(
      nullptr, ___internal_method, collider, position, rotation, point);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::ClosestPoint(
    ::UnityEngine::Vector3 point, ::UnityEngine::Collider *collider,
    ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ClosestPoint", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(
      nullptr, ___internal_method, point, collider, position, rotation);
}
inline float_t UnityEngine::Physics::get_interCollisionDistance() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_interCollisionDistance", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_interCollisionDistance(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_interCollisionDistance", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_interCollisionStiffness() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_interCollisionStiffness", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_interCollisionStiffness(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_interCollisionStiffness", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_interCollisionSettingsToggle() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_interCollisionSettingsToggle",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::set_interCollisionSettingsToggle(bool value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_interCollisionSettingsToggle",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::get_clothGravity() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_clothGravity", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(
      nullptr, ___internal_method);
}
inline void
UnityEngine::Physics::set_clothGravity(::UnityEngine::Vector3 value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_clothGravity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(
    ::UnityEngine::Vector3 position, float_t radius,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapSphereNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, position, radius, results, layerMask,
      queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(
    ::UnityEngine::Vector3 position, float_t radius,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results,
    int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapSphereNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, position, radius, results, layerMask);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(
    ::UnityEngine::Vector3 position, float_t radius,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapSphereNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, position, radius, results);
}
inline bool UnityEngine::Physics::CheckSphere_Internal(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position,
    float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckSphere_Internal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, physicsScene, position, radius, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckSphere(
    ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckSphere", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, position, radius, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckSphere(::UnityEngine::Vector3 position,
                                              float_t radius,
                                              int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckSphere", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, position, radius, layerMask);
}
inline bool UnityEngine::Physics::CheckSphere(::UnityEngine::Vector3 position,
                                              float_t radius) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckSphere", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, position, radius);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(
    ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2,
    float_t radius, ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, point1, point2, radius, direction, results,
      maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(
    ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2,
    float_t radius, ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, point1, point2, radius, direction, results,
      maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(
    ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2,
    float_t radius, ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, point1, point2, radius, direction, results,
      maxDistance);
}
inline int32_t UnityEngine::Physics::CapsuleCastNonAlloc(
    ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2,
    float_t radius, ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CapsuleCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, point1, point2, radius, direction, results);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(
    ::UnityEngine::Vector3 origin, float_t radius,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, origin, radius, direction, results,
      maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(
    ::UnityEngine::Vector3 origin, float_t radius,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, origin, radius, direction, results,
      maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(
    ::UnityEngine::Vector3 origin, float_t radius,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, origin, radius, direction, results,
      maxDistance);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(
    ::UnityEngine::Vector3 origin, float_t radius,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, origin, radius, direction, results);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(
    ::UnityEngine::Ray ray, float_t radius,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ray, radius, results, maxDistance, layerMask,
      queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(
    ::UnityEngine::Ray ray, float_t radius,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ray, radius, results, maxDistance,
      layerMask);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(
    ::UnityEngine::Ray ray, float_t radius,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ray, radius, results, maxDistance);
}
inline int32_t UnityEngine::Physics::SphereCastNonAlloc(
    ::UnityEngine::Ray ray, float_t radius,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SphereCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Ray>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, ray, radius, results);
}
inline bool UnityEngine::Physics::CheckCapsule_Internal(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 start,
    ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckCapsule_Internal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, physicsScene, start, end, radius, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckCapsule(
    ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckCapsule", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end, radius, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckCapsule(::UnityEngine::Vector3 start,
                                               ::UnityEngine::Vector3 end,
                                               float_t radius,
                                               int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckCapsule", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end, radius, layerMask);
}
inline bool UnityEngine::Physics::CheckCapsule(::UnityEngine::Vector3 start,
                                               ::UnityEngine::Vector3 end,
                                               float_t radius) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckCapsule", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, start, end, radius);
}
inline bool UnityEngine::Physics::CheckBox_Internal(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
    ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
    int32_t layermask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckBox_Internal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, physicsScene, center, halfExtents,
      orientation, layermask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckBox(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Quaternion orientation, int32_t layermask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckBox", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, orientation, layermask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckBox(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Quaternion orientation, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckBox", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, orientation, layerMask);
}
inline bool
UnityEngine::Physics::CheckBox(::UnityEngine::Vector3 center,
                               ::UnityEngine::Vector3 halfExtents,
                               ::UnityEngine::Quaternion orientation) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckBox", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents, orientation);
}
inline bool UnityEngine::Physics::CheckBox(::UnityEngine::Vector3 center,
                                           ::UnityEngine::Vector3 halfExtents) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckBox", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, center, halfExtents);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapBox_Internal(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
    ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBox_Internal", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, physicsScene, center, halfExtents,
             orientation, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapBox(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Quaternion orientation, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBox", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, center, halfExtents, orientation,
             layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapBox(::UnityEngine::Vector3 center,
                                 ::UnityEngine::Vector3 halfExtents,
                                 ::UnityEngine::Quaternion orientation,
                                 int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBox", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, center, halfExtents, orientation,
             layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapBox(::UnityEngine::Vector3 center,
                                 ::UnityEngine::Vector3 halfExtents,
                                 ::UnityEngine::Quaternion orientation) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBox", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, center, halfExtents, orientation);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapBox(::UnityEngine::Vector3 center,
                                 ::UnityEngine::Vector3 halfExtents) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBox", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, center, halfExtents);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results,
    ::UnityEngine::Quaternion orientation, int32_t mask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBoxNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, results, orientation,
      mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results,
    ::UnityEngine::Quaternion orientation, int32_t mask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBoxNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, results, orientation,
      mask);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results,
    ::UnityEngine::Quaternion orientation) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBoxNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, results, orientation);
}
inline int32_t UnityEngine::Physics::OverlapBoxNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBoxNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, results);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    ::UnityEngine::Quaternion orientation, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, direction, results,
      orientation, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    ::UnityEngine::Quaternion orientation) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, direction, results,
      orientation);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    ::UnityEngine::Quaternion orientation, float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, direction, results,
      orientation, maxDistance);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results,
    ::UnityEngine::Quaternion orientation, float_t maxDistance,
    int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, direction, results,
      orientation, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::BoxCastNonAlloc(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction,
    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::RaycastHit,
                       ::Array<::UnityEngine::RaycastHit> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, center, halfExtents, direction, results);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::Internal_BoxCastAll(
    ::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
    ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
    ::UnityEngine::Quaternion orientation, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Internal_BoxCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, physicsScene, center, halfExtents,
             direction, orientation, maxDistance, layerMask,
             queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::BoxCastAll(
    ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
    ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation,
    float_t maxDistance, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, center, halfExtents, direction,
             orientation, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center,
                                 ::UnityEngine::Vector3 halfExtents,
                                 ::UnityEngine::Vector3 direction,
                                 ::UnityEngine::Quaternion orientation,
                                 float_t maxDistance, int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, center, halfExtents, direction,
             orientation, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center,
                                 ::UnityEngine::Vector3 halfExtents,
                                 ::UnityEngine::Vector3 direction,
                                 ::UnityEngine::Quaternion orientation,
                                 float_t maxDistance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, center, halfExtents, direction,
             orientation, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center,
                                 ::UnityEngine::Vector3 halfExtents,
                                 ::UnityEngine::Vector3 direction,
                                 ::UnityEngine::Quaternion orientation) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Quaternion>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, center, halfExtents, direction,
             orientation);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::BoxCastAll(::UnityEngine::Vector3 center,
                                 ::UnityEngine::Vector3 halfExtents,
                                 ::UnityEngine::Vector3 direction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BoxCastAll", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, center, halfExtents, direction);
}
inline int32_t UnityEngine::Physics::OverlapCapsuleNonAlloc(
    ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
    float_t radius,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapCapsuleNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, point0, point1, radius, results, layerMask,
      queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapCapsuleNonAlloc(
    ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
    float_t radius,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results,
    int32_t layerMask) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapCapsuleNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, point0, point1, radius, results, layerMask);
}
inline int32_t UnityEngine::Physics::OverlapCapsuleNonAlloc(
    ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
    float_t radius,
    ::ArrayW<::UnityEngine::Collider *, ::Array<::UnityEngine::Collider *> *>
        results) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapCapsuleNonAlloc", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Collider *,
                       ::Array<::UnityEngine::Collider *> *>>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, point0, point1, radius, results);
}
inline void UnityEngine::Physics::Internal_RebuildBroadphaseRegions(
    ::UnityEngine::Bounds bounds, int32_t subdivisions) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Internal_RebuildBroadphaseRegions",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Bounds>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, bounds, subdivisions);
}
inline void UnityEngine::Physics::RebuildBroadphaseRegions(
    ::UnityEngine::Bounds worldBounds, int32_t subdivisions) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "RebuildBroadphaseRegions", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Bounds>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, worldBounds, subdivisions);
}
inline void UnityEngine::Physics::BakeMesh(
    int32_t meshID, bool convex,
    ::UnityEngine::MeshColliderCookingOptions cookingOptions) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BakeMesh", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::MeshColliderCookingOptions>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, meshID, convex, cookingOptions);
}
inline void UnityEngine::Physics::BakeMesh(int32_t meshID, bool convex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "BakeMesh", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, meshID, convex);
}
inline ::UnityW<::UnityEngine::Collider>
UnityEngine::Physics::ResolveShapeToCollider(::System::IntPtr shapePtr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ResolveShapeToCollider", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>,
                                             false>(nullptr, ___internal_method,
                                                    shapePtr);
}
inline ::UnityW<::UnityEngine::Component>
UnityEngine::Physics::ResolveActorToComponent(::System::IntPtr actorPtr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ResolveActorToComponent", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>,
                                             false>(nullptr, ___internal_method,
                                                    actorPtr);
}
inline int32_t
UnityEngine::Physics::ResolveShapeToInstanceID(::System::IntPtr shapePtr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ResolveShapeToInstanceID", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, shapePtr);
}
inline int32_t
UnityEngine::Physics::ResolveActorToInstanceID(::System::IntPtr actorPtr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ResolveActorToInstanceID", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method, actorPtr);
}
inline ::UnityW<::UnityEngine::Collider>
UnityEngine::Physics::GetColliderByInstanceID(int32_t instanceID) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetColliderByInstanceID", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>,
                                             false>(nullptr, ___internal_method,
                                                    instanceID);
}
inline ::UnityW<::UnityEngine::Component>
UnityEngine::Physics::GetBodyByInstanceID(int32_t instanceID) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetBodyByInstanceID", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>,
                                             false>(nullptr, ___internal_method,
                                                    instanceID);
}
inline uint32_t
UnityEngine::Physics::TranslateTriangleIndex(::System::IntPtr shapePtr,
                                             uint32_t rawIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "TranslateTriangleIndex", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              uint32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      nullptr, ___internal_method, shapePtr, rawIndex);
}
inline uint32_t
UnityEngine::Physics::TranslateTriangleIndexFromID(int32_t instanceID,
                                                   uint32_t faceIndex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "TranslateTriangleIndexFromID", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              uint32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(
      nullptr, ___internal_method, instanceID, faceIndex);
}
inline bool UnityEngine::Physics::IsShapeTrigger(::System::IntPtr shapePtr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "IsShapeTrigger", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, shapePtr);
}
inline void UnityEngine::Physics::SendOnCollisionEnter(
    ::UnityEngine::Component *component, ::UnityEngine::Collision *collision) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SendOnCollisionEnter", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Component *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collision *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, component, collision);
}
inline void
UnityEngine::Physics::SendOnCollisionStay(::UnityEngine::Component *component,
                                          ::UnityEngine::Collision *collision) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SendOnCollisionStay", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Component *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collision *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, component, collision);
}
inline void
UnityEngine::Physics::SendOnCollisionExit(::UnityEngine::Component *component,
                                          ::UnityEngine::Collision *collision) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "SendOnCollisionExit", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Component *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collision *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, component, collision);
}
inline ::UnityEngine::Vector3
UnityEngine::Physics::GetActorLinearVelocity(::System::IntPtr actorPtr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetActorLinearVelocity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(
      nullptr, ___internal_method, actorPtr);
}
inline ::UnityEngine::Vector3
UnityEngine::Physics::GetActorAngularVelocity(::System::IntPtr actorPtr) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetActorAngularVelocity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(
      nullptr, ___internal_method, actorPtr);
}
inline float_t UnityEngine::Physics::get_minPenetrationForPenalty() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_minPenetrationForPenalty", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_minPenetrationForPenalty(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_minPenetrationForPenalty", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_bounceTreshold() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_bounceTreshold", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_bounceTreshold(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_bounceTreshold", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_sleepVelocity() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_sleepVelocity", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_sleepVelocity(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_sleepVelocity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_sleepAngularVelocity() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_sleepAngularVelocity", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_sleepAngularVelocity(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_sleepAngularVelocity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_maxAngularVelocity() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_maxAngularVelocity", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_maxAngularVelocity(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_maxAngularVelocity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::get_solverIterationCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_solverIterationCount", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_solverIterationCount(int32_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_solverIterationCount", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Physics::get_solverVelocityIterationCount() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_solverVelocityIterationCount",
      std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      nullptr, ___internal_method);
}
inline void
UnityEngine::Physics::set_solverVelocityIterationCount(int32_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_solverVelocityIterationCount",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Physics::get_penetrationPenaltyForce() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_penetrationPenaltyForce", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::Physics::set_penetrationPenaltyForce(float_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_penetrationPenaltyForce", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::get_autoSimulation() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_autoSimulation", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::set_autoSimulation(bool value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_autoSimulation", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::add_ContactEvent(
    ::UnityEngine::Physics_ContactEventDelegate *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "add_ContactEvent", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Physics_ContactEventDelegate *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::remove_ContactEvent(
    ::UnityEngine::Physics_ContactEventDelegate *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "remove_ContactEvent", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Physics_ContactEventDelegate *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline void
UnityEngine::Physics::OnSceneContact(::UnityEngine::PhysicsScene scene,
                                     ::System::IntPtr buffer, int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OnSceneContact", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::PhysicsScene>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, scene, buffer, count);
}
inline void UnityEngine::Physics::ReportContacts(
    ::Unity::Collections::NativeArray_1_ReadOnly<
        ::UnityEngine::ContactPairHeader>
        array) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ReportContacts", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Unity::Collections::NativeArray_1_ReadOnly<
                  ::UnityEngine::ContactPairHeader>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, array);
}
inline ::UnityEngine::Collision *UnityEngine::Physics::GetCollisionToReport(
    ::ByRef<::UnityEngine::ContactPairHeader> header,
    ::ByRef<::UnityEngine::ContactPair> pair, bool flipped) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetCollisionToReport", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::ContactPairHeader>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::ContactPair>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Collision *, false>(
      nullptr, ___internal_method, header, pair, flipped);
}
inline void UnityEngine::Physics::_ctor() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void UnityEngine::Physics::get_gravity_Injected(
    ::ByRef<::UnityEngine::Vector3> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_gravity_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, ret);
}
inline void UnityEngine::Physics::set_gravity_Injected(
    ::ByRef<::UnityEngine::Vector3> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_gravity_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline void UnityEngine::Physics::get_defaultPhysicsScene_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_defaultPhysicsScene_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, ret);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::Internal_RaycastAll_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Ray> ray, float_t maxDistance, int32_t mask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Internal_RaycastAll_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Ray>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, mask,
             queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::Query_CapsuleCastAll_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> p0, ::ByRef<::UnityEngine::Vector3> p1,
    float_t radius, ::ByRef<::UnityEngine::Vector3> direction,
    float_t maxDistance, int32_t mask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Query_CapsuleCastAll_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, physicsScene, p0, p1, radius,
             direction, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::Query_SphereCastAll_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> origin, float_t radius,
    ::ByRef<::UnityEngine::Vector3> direction, float_t maxDistance,
    int32_t mask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Query_SphereCastAll_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, physicsScene, origin, radius,
             direction, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapCapsule_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> point0,
    ::ByRef<::UnityEngine::Vector3> point1, float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapCapsule_Internal_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, physicsScene, point0, point1, radius,
             layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapSphere_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapSphere_Internal_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, physicsScene, position, radius,
             layerMask, queryTriggerInteraction);
}
inline void UnityEngine::Physics::Simulate_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene, float_t step) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Simulate_Internal_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              float_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, physicsScene, step);
}
inline void UnityEngine::Physics::InterpolateBodies_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "InterpolateBodies_Internal_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, physicsScene);
}
inline void UnityEngine::Physics::ResetInterpolationPoses_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "ResetInterpolationPoses_Internal_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, physicsScene);
}
inline bool UnityEngine::Physics::Query_ComputePenetration_Injected(
    ::UnityEngine::Collider *colliderA,
    ::ByRef<::UnityEngine::Vector3> positionA,
    ::ByRef<::UnityEngine::Quaternion> rotationA,
    ::UnityEngine::Collider *colliderB,
    ::ByRef<::UnityEngine::Vector3> positionB,
    ::ByRef<::UnityEngine::Quaternion> rotationB,
    ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<float_t> distance) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Query_ComputePenetration_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<float_t>>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, colliderA, positionA, rotationA, colliderB,
      positionB, rotationB, direction, distance);
}
inline void UnityEngine::Physics::Query_ClosestPoint_Injected(
    ::UnityEngine::Collider *collider, ::ByRef<::UnityEngine::Vector3> position,
    ::ByRef<::UnityEngine::Quaternion> rotation,
    ::ByRef<::UnityEngine::Vector3> point,
    ::ByRef<::UnityEngine::Vector3> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Query_ClosestPoint_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::Collider *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, collider, position, rotation, point, ret);
}
inline void UnityEngine::Physics::get_clothGravity_Injected(
    ::ByRef<::UnityEngine::Vector3> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "get_clothGravity_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, ret);
}
inline void UnityEngine::Physics::set_clothGravity_Injected(
    ::ByRef<::UnityEngine::Vector3> value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "set_clothGravity_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, value);
}
inline bool UnityEngine::Physics::CheckSphere_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckSphere_Internal_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, physicsScene, position, radius, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckCapsule_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> start, ::ByRef<::UnityEngine::Vector3> end,
    float_t radius, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckCapsule_Internal_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, physicsScene, start, end, radius, layerMask,
      queryTriggerInteraction);
}
inline bool UnityEngine::Physics::CheckBox_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> center,
    ::ByRef<::UnityEngine::Vector3> halfExtents,
    ::ByRef<::UnityEngine::Quaternion> orientation, int32_t layermask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "CheckBox_Internal_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      nullptr, ___internal_method, physicsScene, center, halfExtents,
      orientation, layermask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,
                ::Array<::UnityW<::UnityEngine::Collider>> *>
UnityEngine::Physics::OverlapBox_Internal_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> center,
    ::ByRef<::UnityEngine::Vector3> halfExtents,
    ::ByRef<::UnityEngine::Quaternion> orientation, int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "OverlapBox_Internal_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityW<::UnityEngine::Collider>,
               ::Array<::UnityW<::UnityEngine::Collider>> *>,
      false>(nullptr, ___internal_method, physicsScene, center, halfExtents,
             orientation, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>
UnityEngine::Physics::Internal_BoxCastAll_Injected(
    ::ByRef<::UnityEngine::PhysicsScene> physicsScene,
    ::ByRef<::UnityEngine::Vector3> center,
    ::ByRef<::UnityEngine::Vector3> halfExtents,
    ::ByRef<::UnityEngine::Vector3> direction,
    ::ByRef<::UnityEngine::Quaternion> orientation, float_t maxDistance,
    int32_t layerMask,
    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Internal_BoxCastAll_Injected", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::PhysicsScene>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::UnityEngine::QueryTriggerInteraction>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit> *>,
      false>(nullptr, ___internal_method, physicsScene, center, halfExtents,
             direction, orientation, maxDistance, layerMask,
             queryTriggerInteraction);
}
inline void UnityEngine::Physics::Internal_RebuildBroadphaseRegions_Injected(
    ::ByRef<::UnityEngine::Bounds> bounds, int32_t subdivisions) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "Internal_RebuildBroadphaseRegions_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Bounds>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, bounds, subdivisions);
}
inline void UnityEngine::Physics::GetActorLinearVelocity_Injected(
    ::System::IntPtr actorPtr, ::ByRef<::UnityEngine::Vector3> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetActorLinearVelocity_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, actorPtr, ret);
}
inline void UnityEngine::Physics::GetActorAngularVelocity_Injected(
    ::System::IntPtr actorPtr, ::ByRef<::UnityEngine::Vector3> ret) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::UnityEngine::Physics *>::get(),
      "GetActorAngularVelocity_Injected",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Vector3>>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, actorPtr, ret);
}
inline ::UnityEngine::Physics *UnityEngine::Physics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Physics *>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics::Physics() {}
