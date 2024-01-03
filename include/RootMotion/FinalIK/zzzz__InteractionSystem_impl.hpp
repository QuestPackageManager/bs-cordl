#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionSystem_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionLookAt_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTrigger_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTarget_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::*)(::System::Object*, void*)>(
    &::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1289a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x128b2f4;

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
  constexpr static std::size_t addrs = 0x128b308;

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
  constexpr static std::size_t addrs = 0x128b398;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>(object, method));
}
inline void RootMotion::FinalIK::__InteractionSystem__InteractionDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
  constexpr static std::size_t addrs = 0x128b3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::RootMotion::FinalIK::__InteractionObject__InteractionEvent*)>(
    &::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x128b468;

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
  constexpr static std::size_t addrs = 0x128b47c;

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
  constexpr static std::size_t addrs = 0x128b514;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>(object, method));
}
inline void RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
  constexpr static std::size_t addrs = 0x12878a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenUserManual", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12878ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenScriptReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1287930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenTutorial1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial2)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1287974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenTutorial2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12879b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenTutorial3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OpenTutorial4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OpenTutorial4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12879fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OpenTutorial4", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.SupportGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1287a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "SupportGroup",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ASThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1287a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ASThread",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_inInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::get_inInteraction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1287ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "get_inInteraction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsInInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::IsInInteraction)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1287c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsInInteraction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsPaused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::IsPaused)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1287cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsPaused", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsPaused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::IsPaused)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1287db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsPaused",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsInSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::IsInSync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1287e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsInSync",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StartInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, bool)>(&::RootMotion::FinalIK::InteractionSystem::StartInteraction)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1287f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StartInteraction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
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
  constexpr static std::size_t addrs = 0x1288024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "PauseInteraction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ResumeInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::ResumeInteraction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x12880a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ResumeInteraction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StopInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::StopInteraction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x128812c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StopInteraction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.PauseAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::PauseAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12881b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "PauseAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ResumeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::ResumeAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1288218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ResumeAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.StopAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::StopAll)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1288280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StopAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetInteractionObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionObject* (
    ::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionSystem::GetInteractionObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x12882dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetInteractionObject", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(
    &::RootMotion::FinalIK::InteractionSystem::GetProgress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x128835c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetProgress", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetMinActiveProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetMinActiveProgress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1288404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetMinActiveProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x12884d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool, ByRef<::RootMotion::FinalIK::InteractionObject*>)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x1288764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, bool, ByRef<::RootMotion::FinalIK::InteractionTarget*>)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerInteraction)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x1288920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionTarget*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__InteractionTrigger__Range* (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionRange)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1288b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetClosestInteractionRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionObjectInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionObject* (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectInRange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1288e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetClosestInteractionObjectInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionTargetInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionTarget* (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetInRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1288e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetClosestInteractionTargetInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionObjectsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::InteractionObject*, ::Array<::RootMotion::FinalIK::InteractionObject*>*> (
    ::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectsInRange)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1288eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetClosestInteractionObjectsInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestInteractionTargetsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*> (
    ::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetsInRange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1288fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetClosestInteractionTargetsInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerEffectorsReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerEffectorsReady)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1289194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerEffectorsReady",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetTriggerRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__InteractionTrigger__Range* (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(
    &::RootMotion::FinalIK::InteractionSystem::GetTriggerRange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1289408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetTriggerRange",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.GetClosestTriggerIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::GetClosestTriggerIndex)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1288c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "GetClosestTriggerIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_ik
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::FullBodyBipedIK* (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::get_ik)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1289528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "get_ik",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.set_ik
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::RootMotion::FinalIK::FullBodyBipedIK*)>(
    &::RootMotion::FinalIK::InteractionSystem::set_ik)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1289530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "set_ik", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedIK*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.get_triggersInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* (
    ::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::get_triggersInRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1289538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "get_triggersInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.set_triggersInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*)>(&::RootMotion::FinalIK::InteractionSystem::set_triggersInRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1289540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "set_triggersInRange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Start)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x1289548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::InteractionSystem::InteractionPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1289d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionPause", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionResume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::InteractionSystem::InteractionResume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1289db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionResume", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.InteractionStop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::InteractionSystem::InteractionStop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1289dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionStop", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.LookAtInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&::RootMotion::FinalIK::InteractionSystem::LookAtInteraction)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1289dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "LookAtInteraction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnTriggerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::UnityEngine::Collider*)>(
    &::RootMotion::FinalIK::InteractionSystem::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1289e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnTriggerEnter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnTriggerExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)(::UnityEngine::Collider*)>(
    &::RootMotion::FinalIK::InteractionSystem::OnTriggerExit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1289fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnTriggerExit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.ContactIsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t, ByRef<int32_t>)>(
    &::RootMotion::FinalIK::InteractionSystem::ContactIsInRange)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x128a0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ContactIsInRange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x128a404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OnDrawGizmosSelected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Update)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x128a4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.Raycasting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::Raycasting)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x128a7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Raycasting",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.UpdateTriggerEventBroadcasting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(
    &::RootMotion::FinalIK::InteractionSystem::UpdateTriggerEventBroadcasting)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x1289b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "UpdateTriggerEventBroadcasting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.UpdateEffectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::UpdateEffectors)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x128a8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "UpdateEffectors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnPreFBBIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnPreFBBIK)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x128aa08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnPreFBBIK",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnPostFBBIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnPostFBBIK)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x128aa90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnPostFBBIK",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnFixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnFixTransforms)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x128ab50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                               "OnFixTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::OnDestroy)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x128ab68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(bool)>(&::RootMotion::FinalIK::InteractionSystem::IsValid)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1287b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem.TriggerIndexIsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionSystem::*)(int32_t)>(
    &::RootMotion::FinalIK::InteractionSystem::TriggerIndexIsValid)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1288650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerIndexIsValid",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionSystem::*)()>(&::RootMotion::FinalIK::InteractionSystem::_ctor)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x128af50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& RootMotion::FinalIK::InteractionSystem::__get_targetTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTag;
}
constexpr ::StringW const& RootMotion::FinalIK::InteractionSystem::__get_targetTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTag;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_targetTag(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::InteractionSystem::__get_fadeInTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInTime;
}
constexpr float_t const& RootMotion::FinalIK::InteractionSystem::__get_fadeInTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInTime;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_fadeInTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeInTime = value;
}
constexpr float_t& RootMotion::FinalIK::InteractionSystem::__get_speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speed;
}
constexpr float_t const& RootMotion::FinalIK::InteractionSystem::__get_speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speed;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___speed = value;
}
constexpr float_t& RootMotion::FinalIK::InteractionSystem::__get_resetToDefaultsSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetToDefaultsSpeed;
}
constexpr float_t const& RootMotion::FinalIK::InteractionSystem::__get_resetToDefaultsSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetToDefaultsSpeed;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_resetToDefaultsSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetToDefaultsSpeed = value;
}
constexpr ::UnityEngine::Collider*& RootMotion::FinalIK::InteractionSystem::__get_characterCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterCollider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& RootMotion::FinalIK::InteractionSystem::__get_characterCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterCollider;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_characterCollider(::UnityEngine::Collider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characterCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::InteractionSystem::__get_FPSCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FPSCamera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::InteractionSystem::__get_FPSCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FPSCamera;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_FPSCamera(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FPSCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LayerMask& RootMotion::FinalIK::InteractionSystem::__get_camRaycastLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camRaycastLayers;
}
constexpr ::UnityEngine::LayerMask const& RootMotion::FinalIK::InteractionSystem::__get_camRaycastLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camRaycastLayers;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_camRaycastLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camRaycastLayers = value;
}
constexpr float_t& RootMotion::FinalIK::InteractionSystem::__get_camRaycastDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camRaycastDistance;
}
constexpr float_t const& RootMotion::FinalIK::InteractionSystem::__get_camRaycastDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camRaycastDistance;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_camRaycastDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camRaycastDistance = value;
}
constexpr ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*& RootMotion::FinalIK::InteractionSystem::__get__triggersInRange_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggersInRange_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*> const&
RootMotion::FinalIK::InteractionSystem::__get__triggersInRange_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggersInRange_k__BackingField;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set__triggersInRange_k__BackingField(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____triggersInRange_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*& RootMotion::FinalIK::InteractionSystem::__get_inContact() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inContact;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*> const&
RootMotion::FinalIK::InteractionSystem::__get_inContact() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inContact;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_inContact(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inContact)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& RootMotion::FinalIK::InteractionSystem::__get_bestRangeIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bestRangeIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& RootMotion::FinalIK::InteractionSystem::__get_bestRangeIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bestRangeIndexes;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_bestRangeIndexes(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bestRangeIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionStart;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionStart;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_OnInteractionStart(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionPause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionPause;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionPause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionPause;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_OnInteractionPause(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionPause)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionPickUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionPickUp;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionPickUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionPickUp;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_OnInteractionPickUp(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionPickUp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionResume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionResume;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionResume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionResume;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_OnInteractionResume(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionResume)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionStop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionStop;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionStop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionStop;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_OnInteractionStop(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionStop)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionEvent;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*> const& RootMotion::FinalIK::InteractionSystem::__get_OnInteractionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInteractionEvent;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_OnInteractionEvent(::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractionEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RaycastHit& RootMotion::FinalIK::InteractionSystem::__get_raycastHit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastHit;
}
constexpr ::UnityEngine::RaycastHit const& RootMotion::FinalIK::InteractionSystem::__get_raycastHit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycastHit;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_raycastHit(::UnityEngine::RaycastHit value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycastHit = value;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedIK*& RootMotion::FinalIK::InteractionSystem::__get_fullBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullBody;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> const& RootMotion::FinalIK::InteractionSystem::__get_fullBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullBody;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_fullBody(::RootMotion::FinalIK::FullBodyBipedIK* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fullBody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::InteractionLookAt*& RootMotion::FinalIK::InteractionSystem::__get_lookAt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAt;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionLookAt*> const& RootMotion::FinalIK::InteractionSystem::__get_lookAt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAt;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_lookAt(::RootMotion::FinalIK::InteractionLookAt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookAt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*>& RootMotion::FinalIK::InteractionSystem::__get_interactionEffectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionEffectors;
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> const&
RootMotion::FinalIK::InteractionSystem::__get_interactionEffectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionEffectors;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_interactionEffectors(::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactionEffectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::InteractionSystem::__get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::InteractionSystem::__get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
constexpr ::UnityEngine::Collider*& RootMotion::FinalIK::InteractionSystem::__get_lastCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& RootMotion::FinalIK::InteractionSystem::__get_lastCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollider;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_lastCollider(::UnityEngine::Collider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Collider*& RootMotion::FinalIK::InteractionSystem::__get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& RootMotion::FinalIK::InteractionSystem::__get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void RootMotion::FinalIK::InteractionSystem::__set_c(::UnityEngine::Collider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___c)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::InteractionSystem::OpenUserManual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenUserManual",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenScriptReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "OpenScriptReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenTutorial1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenTutorial1",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenTutorial2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenTutorial2",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenTutorial3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenTutorial3",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OpenTutorial4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OpenTutorial4",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::SupportGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "SupportGroup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::ASThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ASThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::get_inInteraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "get_inInteraction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsInInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsInInteraction", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsPaused(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsPaused", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsPaused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsPaused",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsInSync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsInSync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::StartInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject,
                                                                     bool interrupt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StartInteraction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType, interactionObject, interrupt);
}
inline bool RootMotion::FinalIK::InteractionSystem::PauseInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "PauseInteraction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline bool RootMotion::FinalIK::InteractionSystem::ResumeInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ResumeInteraction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline bool RootMotion::FinalIK::InteractionSystem::StopInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StopInteraction", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, effectorType);
}
inline void RootMotion::FinalIK::InteractionSystem::PauseAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "PauseAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::ResumeAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ResumeAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::StopAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "StopAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::InteractionObject* RootMotion::FinalIK::InteractionSystem::GetInteractionObject(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetInteractionObject", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionObject*, false>(this, ___internal_method, effectorType);
}
inline float_t RootMotion::FinalIK::InteractionSystem::GetProgress(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetProgress", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, effectorType);
}
inline float_t RootMotion::FinalIK::InteractionSystem::GetMinActiveProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetMinActiveProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, interrupt);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionObject*> interactionObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, interrupt, interactionObject);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionTarget*> interactionTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerInteraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::FinalIK::InteractionTarget*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, interrupt, interactionTarget);
}
inline ::RootMotion::FinalIK::__InteractionTrigger__Range* RootMotion::FinalIK::InteractionSystem::GetClosestInteractionRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetClosestInteractionRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__InteractionTrigger__Range*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::InteractionObject* RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectInRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetClosestInteractionObjectInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionObject*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::InteractionTarget* RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetInRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetClosestInteractionTargetInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionTarget*, false>(this, ___internal_method);
}
inline ::ArrayW<::RootMotion::FinalIK::InteractionObject*, ::Array<::RootMotion::FinalIK::InteractionObject*>*> RootMotion::FinalIK::InteractionSystem::GetClosestInteractionObjectsInRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetClosestInteractionObjectsInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::InteractionObject*, ::Array<::RootMotion::FinalIK::InteractionObject*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*> RootMotion::FinalIK::InteractionSystem::GetClosestInteractionTargetsInRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetClosestInteractionTargetsInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*>, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerEffectorsReady(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerEffectorsReady",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline ::RootMotion::FinalIK::__InteractionTrigger__Range* RootMotion::FinalIK::InteractionSystem::GetTriggerRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "GetTriggerRange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__InteractionTrigger__Range*, false>(this, ___internal_method, index);
}
inline int32_t RootMotion::FinalIK::InteractionSystem::GetClosestTriggerIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "GetClosestTriggerIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::FullBodyBipedIK* RootMotion::FinalIK::InteractionSystem::get_ik() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "get_ik",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::FullBodyBipedIK*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "set_ik", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedIK*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* RootMotion::FinalIK::InteractionSystem::get_triggersInRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "get_triggersInRange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::set_triggersInRange(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "set_triggersInRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::InteractionSystem::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::InteractionPause(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionPause", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, interactionObject);
}
inline void RootMotion::FinalIK::InteractionSystem::InteractionResume(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionResume", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, interactionObject);
}
inline void RootMotion::FinalIK::InteractionSystem::InteractionStop(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "InteractionStop", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, interactionObject);
}
inline void RootMotion::FinalIK::InteractionSystem::LookAtInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "LookAtInteraction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, interactionObject);
}
inline void RootMotion::FinalIK::InteractionSystem::OnTriggerEnter(::UnityEngine::Collider* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnTriggerEnter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void RootMotion::FinalIK::InteractionSystem::OnTriggerExit(::UnityEngine::Collider* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnTriggerExit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline bool RootMotion::FinalIK::InteractionSystem::ContactIsInRange(int32_t index, ByRef<int32_t> bestRangeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "ContactIsInRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, bestRangeIndex);
}
inline void RootMotion::FinalIK::InteractionSystem::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "OnDrawGizmosSelected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::Raycasting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "Raycasting",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::UpdateTriggerEventBroadcasting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "UpdateTriggerEventBroadcasting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::UpdateEffectors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "UpdateEffectors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OnPreFBBIK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnPreFBBIK",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OnPostFBBIK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnPostFBBIK",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OnFixTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(),
                                                                             "OnFixTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionSystem::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::InteractionSystem::IsValid(bool log) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, log);
}
inline bool RootMotion::FinalIK::InteractionSystem::TriggerIndexIsValid(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), "TriggerIndexIsValid",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline ::RootMotion::FinalIK::InteractionSystem* RootMotion::FinalIK::InteractionSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::InteractionSystem*>());
}
inline void RootMotion::FinalIK::InteractionSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionSystem*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::InteractionSystem::InteractionSystem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
