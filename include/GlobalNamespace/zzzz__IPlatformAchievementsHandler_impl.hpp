#pragma once
// IWYU pragma private; include "GlobalNamespace/IPlatformAchievementsHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult::IPlatformAchievementsHandler_UnlockAchievementResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult::IPlatformAchievementsHandler_UnlockAchievementResult() {}
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult::Failed{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult::IPlatformAchievementsHandler_GetUnlockedAchievementsResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult::IPlatformAchievementsHandler_GetUnlockedAchievementsResult() {}
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult::Failed{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::*)(
    ::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26a1a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::*)(
    ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult)>(&::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26a1e68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::*)(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult,
                                                                                                                                ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26a1e7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::*)(
    ::System::IAsyncResult*)>(&::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26a1f00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::Invoke(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult*
GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::BeginInvoke(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult result,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, result, callback, object);
}
inline void GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*
GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler() {}
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::*)(
    ::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26a19d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::*)(
    ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26a1f0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::*)(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult,
                                                                                                 ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26a1f20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::*)(
    ::System::IAsyncResult*)>(&::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26a1fb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::Invoke(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult result,
                                                                                                           ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsIds) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, unlockedAchievementsIds);
}
inline ::System::IAsyncResult*
GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::BeginInvoke(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult result,
                                                                                                    ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsIds, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, result, unlockedAchievementsIds, callback, object);
}
inline void GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*
GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler() {}
inline void GlobalNamespace::IPlatformAchievementsHandler::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::IPlatformAchievementsHandler::UnlockAchievement(::StringW achievementId, ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* completionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, achievementId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::IPlatformAchievementsHandler::GetUnlockedAchievements(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* completionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, completionHandler);
}
