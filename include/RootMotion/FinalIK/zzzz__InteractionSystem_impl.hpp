#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionSystem_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionLookAt_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionSystem_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTarget_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::*)(::System::Object*, void*)>(
    &::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x138d07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x138e8e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::System::AsyncCallback*,
                                                                        ::System::Object*)>(&::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x138e8fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::*)(::System::IAsyncResult*)>(
    &::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x138e98c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>(object, method));
}
inline void RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType,
                                                                                  ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effectorType, interactionObject);
}
inline ::System::IAsyncResult* RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType,
                                                                                                          ::RootMotion::FinalIK::InteractionObject* interactionObject,
                                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, effectorType, interactionObject, callback, object);
}
inline void RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::__InteractionSystem__InteractionDelegate() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::*)(::System::Object*, void*)>(
    &::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x138e998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::RootMotion::FinalIK::__InteractionObject__InteractionEvent*)>(
    &::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x138ea5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*,
                                                                             ::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::System::AsyncCallback*, ::System::Object*)>(
    &::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x138ea70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::*)(::System::IAsyncResult*)>(
    &::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x138eb08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>(object, method));
}
inline void RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType,
                                                                                       ::RootMotion::FinalIK::InteractionObject* interactionObject,
                                                                                       ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* interactionEvent) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effectorType, interactionObject, interactionEvent);
}
inline ::System::IAsyncResult* RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType,
                                                                                                               ::RootMotion::FinalIK::InteractionObject* interactionObject,
                                                                                                               ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* interactionEvent,
                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, effectorType, interactionObject, interactionEvent, callback, object);
}
inline void RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::__InteractionSystem__InteractionEventDelegate() {}
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenUserManual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138ae9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenUserManual", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138aee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenScriptReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138af24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenTutorial1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial2)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138af68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenTutorial2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138afac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenTutorial3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138aff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenTutorial4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.SupportGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138b034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "SupportGroup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ASThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138b078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ASThread",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_inInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::get_inInteraction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x138b0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "get_inInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsInInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::IsInInteraction)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x138b234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsInInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsPaused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::IsPaused)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x138b2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsPaused", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsPaused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::IsPaused)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x138b3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsPaused",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsInSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::IsInSync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x138b43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsInSync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StartInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, bool)>(&::RootMotion::FinalIK::InteractionSystem::StartInteraction)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x138b520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StartInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.PauseInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::PauseInteraction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x138b618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "PauseInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ResumeInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::ResumeInteraction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x138b69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ResumeInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StopInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::StopInteraction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x138b720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StopInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.PauseAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::PauseAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x138b7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "PauseAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ResumeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::ResumeAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x138b80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ResumeAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StopAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::StopAll)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x138b874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StopAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetInteractionObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::RootMotion::FinalIK::InteractionObject> (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::GetInteractionObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x138b8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetInteractionObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::GetProgress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x138b950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetProgress", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetMinActiveProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetMinActiveProgress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x138b9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetMinActiveProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x138bac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool, ByRef<::RootMotion::FinalIK::InteractionObject*>)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x138bd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool, ByRef<::RootMotion::FinalIK::InteractionTarget*>)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x138bf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionTarget*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__InteractionTrigger__Range* (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionRange)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x138c17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetClosestInteractionRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionObjectInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::RootMotion::FinalIK::InteractionObject> (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectInRange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x138c408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetClosestInteractionObjectInRange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionTargetInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::RootMotion::FinalIK::InteractionTarget> (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetInRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x138c440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetClosestInteractionTargetInRange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionObjectsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionObject>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionObject>>*> (::RootMotion::FinalIK::InteractionSystem::*)()>(
        &::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectsInRange)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x138c4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetClosestInteractionObjectsInRange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionTargetsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*> (::RootMotion::FinalIK::InteractionSystem::*)()>(
        &::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetsInRange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x138c5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetClosestInteractionTargetsInRange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerEffectorsReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerEffectorsReady)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x138c788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerEffectorsReady",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetTriggerRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__InteractionTrigger__Range* (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(
    &::RootMotion::FinalIK::InteractionSystem::GetTriggerRange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x138c9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetTriggerRange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestTriggerIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetClosestTriggerIndex)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x138c264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetClosestTriggerIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_ik
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::get_ik)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x138cb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "get_ik",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.set_ik
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedIK*)>(
    &::RootMotion::FinalIK::InteractionSystem::set_ik)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x138cb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "set_ik", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedIK*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_triggersInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* (
    ::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::get_triggersInRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x138cb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "get_triggersInRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.set_triggersInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*)>(&::RootMotion::FinalIK::InteractionSystem::set_triggersInRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x138cb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "set_triggersInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Start)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x138cb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::InteractionSystem::InteractionPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x138d388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionPause", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionResume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::InteractionSystem::InteractionResume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x138d3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionResume", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionStop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::InteractionSystem::InteractionStop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x138d3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionStop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.LookAtInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::InteractionSystem::LookAtInteraction)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x138d3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "LookAtInteraction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnTriggerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::UnityEngine::Collider*)>(
    &::RootMotion::FinalIK::InteractionSystem::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x138d434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnTriggerEnter", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnTriggerExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::UnityEngine::Collider*)>(
    &::RootMotion::FinalIK::InteractionSystem::OnTriggerExit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x138d5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnTriggerExit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ContactIsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, ByRef<int32_t>)>(
    &::RootMotion::FinalIK::InteractionSystem::ContactIsInRange)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x138d69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ContactIsInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x138d9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OnDrawGizmosSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Update)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x138dadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Raycasting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Raycasting)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x138ddc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Raycasting",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.UpdateTriggerEventBroadcasting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::UpdateTriggerEventBroadcasting)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x138d140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "UpdateTriggerEventBroadcasting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.UpdateEffectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::UpdateEffectors)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x138def0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "UpdateEffectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnPreFBBIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnPreFBBIK)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x138dffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnPreFBBIK",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnPostFBBIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnPostFBBIK)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x138e084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnPostFBBIK",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnFixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnFixTransforms)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x138e144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OnFixTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnDestroy)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x138e15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(bool)>(&::RootMotion::FinalIK::InteractionSystem::IsValid)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x138b154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerIndexIsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerIndexIsValid)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x138bc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerIndexIsValid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::_ctor)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x138e544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_targetTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTag;
}
constexpr ::StringW const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_targetTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTag;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_targetTag(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_fadeInTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInTime;
}
constexpr float_t const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_fadeInTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInTime;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_fadeInTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeInTime = value;
}
constexpr float_t& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speed;
}
constexpr float_t const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speed;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___speed = value;
}
constexpr float_t& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_resetToDefaultsSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetToDefaultsSpeed;
}
constexpr float_t const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_resetToDefaultsSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetToDefaultsSpeed;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_resetToDefaultsSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetToDefaultsSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_characterCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_characterCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterCollider;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_characterCollider(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characterCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_FPSCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FPSCamera;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_FPSCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FPSCamera;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_FPSCamera(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FPSCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LayerMask& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_camRaycastLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camRaycastLayers;
}
constexpr ::UnityEngine::LayerMask const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_camRaycastLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camRaycastLayers;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_camRaycastLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camRaycastLayers = value;
}
constexpr float_t& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_camRaycastDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camRaycastDistance;
}
constexpr float_t const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_camRaycastDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camRaycastDistance;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_camRaycastDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camRaycastDistance = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get__triggersInRange_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggersInRange_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get__triggersInRange_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggersInRange_k__BackingField;
}
constexpr void
RootMotion::FinalIK::InteractionSystem::__cordl_internal_set__triggersInRange_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____triggersInRange_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_inContact() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inContact;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_inContact() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inContact;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_inContact(::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inContact)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_bestRangeIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bestRangeIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_bestRangeIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bestRangeIndexes;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_bestRangeIndexes(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bestRangeIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionStart;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionStart;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_OnInteractionStart(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionPause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionPause;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionPause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionPause;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_OnInteractionPause(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionPause)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionPickUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionPickUp;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionPickUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionPickUp;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_OnInteractionPickUp(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionPickUp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionResume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionResume;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionResume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionResume;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_OnInteractionResume(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionResume)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionStop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionStop;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionStop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionStop;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_OnInteractionStop(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionStop)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionEvent;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_OnInteractionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionEvent;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_OnInteractionEvent(::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RaycastHit& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_raycastHit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastHit;
}
constexpr ::UnityEngine::RaycastHit const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_raycastHit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastHit;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_raycastHit(::UnityEngine::RaycastHit value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycastHit = value;
}
constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK>& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_fullBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullBody;
}
constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_fullBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullBody;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_fullBody(::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fullBody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::InteractionLookAt*& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_lookAt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAt;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionLookAt*> const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_lookAt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAt;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_lookAt(::RootMotion::FinalIK::InteractionLookAt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookAt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*>&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_interactionEffectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionEffectors;
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> const&
RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_interactionEffectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionEffectors;
}
constexpr void
RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_interactionEffectors(::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactionEffectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_lastCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_lastCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollider;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_lastCollider(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Collider>& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::UnityW<::UnityEngine::Collider> const& RootMotion::FinalIK::InteractionSystem::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__cordl_internal_set_c(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___c)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::InteractionSystem::OpenUserManual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenUserManual",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenScriptReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "OpenScriptReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenTutorial1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenTutorial1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenTutorial2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenTutorial2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenTutorial3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenTutorial3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenTutorial4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenTutorial4",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::SupportGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "SupportGroup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::ASThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ASThread",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::get_inInteraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "get_inInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsInInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsInInteraction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsPaused(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsPaused", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsPaused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsPaused",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsInSync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsInSync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::StartInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject,
                                                                     bool interrupt) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StartInteraction", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType, interactionObject, interrupt);
}
inline bool RootMotion::FinalIK::InteractionSystem::PauseInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "PauseInteraction", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline bool RootMotion::FinalIK::InteractionSystem::ResumeInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ResumeInteraction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline bool RootMotion::FinalIK::InteractionSystem::StopInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StopInteraction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline void RootMotion::FinalIK::InteractionSystem::PauseAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "PauseAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::ResumeAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ResumeAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::StopAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StopAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::RootMotion::FinalIK::InteractionObject> RootMotion::FinalIK::InteractionSystem::GetInteractionObject(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetInteractionObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::RootMotion::FinalIK::InteractionObject>, false>(this, ___internal_method, effectorType);
}
inline float_t RootMotion::FinalIK::InteractionSystem::GetProgress(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetProgress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, effectorType);
}
inline float_t RootMotion::FinalIK::InteractionSystem::GetMinActiveProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetMinActiveProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, interrupt);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionObject*> interactionObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, interrupt, interactionObject);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionTarget*> interactionTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionTarget*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, interrupt, interactionTarget);
}
inline ::RootMotion::FinalIK::__InteractionTrigger__Range* RootMotion::FinalIK::InteractionSystem::GetClosestInteractionRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetClosestInteractionRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__InteractionTrigger__Range*, false>(this, ___internal_method);
}
inline ::UnityW<::RootMotion::FinalIK::InteractionObject> RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectInRange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetClosestInteractionObjectInRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::RootMotion::FinalIK::InteractionObject>, false>(this, ___internal_method);
}
inline ::UnityW<::RootMotion::FinalIK::InteractionTarget> RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetInRange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetClosestInteractionTargetInRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::RootMotion::FinalIK::InteractionTarget>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionObject>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionObject>>*>
RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectsInRange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetClosestInteractionObjectsInRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionObject>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionObject>>*>, false>(this,
                                                                                                                                                                                ___internal_method);
}
inline ::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*>
RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetsInRange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetClosestInteractionTargetsInRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*>, false>(this,
                                                                                                                                                                                ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerEffectorsReady(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerEffectorsReady",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline ::RootMotion::FinalIK::__InteractionTrigger__Range* RootMotion::FinalIK::InteractionSystem::GetTriggerRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetTriggerRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__InteractionTrigger__Range*, false>(this, ___internal_method, index);
}
inline int32_t RootMotion::FinalIK::InteractionSystem::GetClosestTriggerIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetClosestTriggerIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> RootMotion::FinalIK::InteractionSystem::get_ik() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "get_ik",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::RootMotion::FinalIK::FullBodyBipedIK>, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "set_ik", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedIK*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* RootMotion::FinalIK::InteractionSystem::get_triggersInRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "get_triggersInRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::set_triggersInRange(::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "set_triggersInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::InteractionSystem::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::InteractionPause(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionPause", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, interactionObject);
}
inline void RootMotion::FinalIK::InteractionSystem::InteractionResume(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionResume", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, interactionObject);
}
inline void RootMotion::FinalIK::InteractionSystem::InteractionStop(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionStop", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, interactionObject);
}
inline void RootMotion::FinalIK::InteractionSystem::LookAtInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "LookAtInteraction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, interactionObject);
}
inline void RootMotion::FinalIK::InteractionSystem::OnTriggerEnter(::UnityEngine::Collider* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnTriggerEnter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void RootMotion::FinalIK::InteractionSystem::OnTriggerExit(::UnityEngine::Collider* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnTriggerExit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline bool RootMotion::FinalIK::InteractionSystem::ContactIsInRange(int32_t index, ByRef<int32_t> bestRangeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ContactIsInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, bestRangeIndex);
}
inline void RootMotion::FinalIK::InteractionSystem::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "OnDrawGizmosSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::Raycasting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Raycasting",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::UpdateTriggerEventBroadcasting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "UpdateTriggerEventBroadcasting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::UpdateEffectors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "UpdateEffectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OnPreFBBIK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnPreFBBIK",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OnPostFBBIK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnPostFBBIK",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OnFixTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "OnFixTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsValid(bool log) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, log);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerIndexIsValid(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerIndexIsValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline ::RootMotion::FinalIK::InteractionSystem* RootMotion::FinalIK::InteractionSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::InteractionSystem*>());
}
inline void RootMotion::FinalIK::InteractionSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::InteractionSystem::InteractionSystem() {}
