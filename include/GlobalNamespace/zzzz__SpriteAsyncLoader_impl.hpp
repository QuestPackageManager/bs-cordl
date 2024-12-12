#pragma once
// IWYU pragma private; include "GlobalNamespace/SpriteAsyncLoader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SpriteAsyncLoader_def.hpp"
#include "BGLib/DotnetExtension/Collections/zzzz__LRUCache_2_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "GlobalNamespace/zzzz__SpriteAsyncLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::*)()>(
    &::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3c23a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c23ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteTask", ty:
// "::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SpriteAsyncLoader*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::SpriteAsyncLoader__DestroySpriteTask_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* spriteTask,
    ::GlobalNamespace::SpriteAsyncLoader* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->spriteTask = spriteTask;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10::SpriteAsyncLoader__DestroySpriteTask_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::*)()>(
    &::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x3c23cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c24120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "cache", ty:
// "::GlobalNamespace::IReferenceCountingCache_2<::StringW,::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SpriteAsyncLoader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::SpriteAsyncLoader__UnloadSprite_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
    ::GlobalNamespace::IReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* cache, ::StringW path,
    ::GlobalNamespace::SpriteAsyncLoader* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cache = cache;
  this->path = path;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9::SpriteAsyncLoader__UnloadSprite_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader::*)(
    ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>*, ::System::Action_1<::UnityEngine::Sprite*>*, int32_t)>(
    &::GlobalNamespace::SpriteAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3c23228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Sprite*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader.LoadSpriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* (::GlobalNamespace::SpriteAsyncLoader::*)(::StringW)>(&::GlobalNamespace::SpriteAsyncLoader::LoadSpriteAsync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3c23380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "LoadSpriteAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader.UnloadSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader::*)(::StringW)>(&::GlobalNamespace::SpriteAsyncLoader::UnloadSprite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c234ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "UnloadSprite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader.ClearCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader::*)()>(&::GlobalNamespace::SpriteAsyncLoader::ClearCache)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x3c235a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "ClearCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader.HandleItemWillBeRemovedFromCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::SpriteAsyncLoader::HandleItemWillBeRemovedFromCache)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c23998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "HandleItemWillBeRemovedFromCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader.UnloadSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader::*)(
    ::GlobalNamespace::IReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>*, ::StringW)>(&::GlobalNamespace::SpriteAsyncLoader::UnloadSprite)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3c234fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "UnloadSprite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader.DestroySpriteTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteAsyncLoader::*)(::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*)>(
    &::GlobalNamespace::SpriteAsyncLoader::DestroySpriteTask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3c23900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "DestroySpriteTask", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteAsyncLoader.DestroySprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Sprite*)>(&::GlobalNamespace::SpriteAsyncLoader::DestroySprite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c239a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "DestroySprite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::StringW>*& GlobalNamespace::SpriteAsyncLoader::__cordl_internal_get__lruCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lruCache;
}
constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::StringW>* const& GlobalNamespace::SpriteAsyncLoader::__cordl_internal_get__lruCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lruCache;
}
constexpr void GlobalNamespace::SpriteAsyncLoader::__cordl_internal_set__lruCache(::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lruCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*&
GlobalNamespace::SpriteAsyncLoader::__cordl_internal_get__referenceCountingCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceCountingCache;
}
constexpr ::GlobalNamespace::ReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* const&
GlobalNamespace::SpriteAsyncLoader::__cordl_internal_get__referenceCountingCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceCountingCache;
}
constexpr void GlobalNamespace::SpriteAsyncLoader::__cordl_internal_set__referenceCountingCache(
    ::GlobalNamespace::ReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____referenceCountingCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*&
GlobalNamespace::SpriteAsyncLoader::__cordl_internal_get__loadFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadFunc;
}
constexpr ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* const&
GlobalNamespace::SpriteAsyncLoader::__cordl_internal_get__loadFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadFunc;
}
constexpr void GlobalNamespace::SpriteAsyncLoader::__cordl_internal_set__loadFunc(
    ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Sprite>>*& GlobalNamespace::SpriteAsyncLoader::__cordl_internal_get__destroyFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destroyFunc;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Sprite>>* const& GlobalNamespace::SpriteAsyncLoader::__cordl_internal_get__destroyFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destroyFunc;
}
constexpr void GlobalNamespace::SpriteAsyncLoader::__cordl_internal_set__destroyFunc(::System::Action_1<::UnityW<::UnityEngine::Sprite>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destroyFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SpriteAsyncLoader::_ctor(::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>* loadFunc,
                                                      ::System::Action_1<::UnityEngine::Sprite*>* destroyFunc, int32_t cacheSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Sprite*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadFunc, destroyFunc, cacheSize);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GlobalNamespace::SpriteAsyncLoader::LoadSpriteAsync(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "LoadSpriteAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*, false>(this, ___internal_method, path);
}
inline void GlobalNamespace::SpriteAsyncLoader::UnloadSprite(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "UnloadSprite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline void GlobalNamespace::SpriteAsyncLoader::ClearCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "ClearCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpriteAsyncLoader::HandleItemWillBeRemovedFromCache(::StringW path, ::StringW _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "HandleItemWillBeRemovedFromCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, _);
}
inline void GlobalNamespace::SpriteAsyncLoader::UnloadSprite(::GlobalNamespace::IReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>* cache,
                                                             ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "UnloadSprite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache, path);
}
inline void GlobalNamespace::SpriteAsyncLoader::DestroySpriteTask(::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* spriteTask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "DestroySpriteTask", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spriteTask);
}
inline void GlobalNamespace::SpriteAsyncLoader::DestroySprite(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteAsyncLoader*>::get(), "DestroySprite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sprite);
}
inline ::GlobalNamespace::SpriteAsyncLoader*
GlobalNamespace::SpriteAsyncLoader::New_ctor(::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*>* loadFunc,
                                             ::System::Action_1<::UnityEngine::Sprite*>* destroyFunc, int32_t cacheSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpriteAsyncLoader*>(loadFunc, destroyFunc, cacheSize));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteAsyncLoader::SpriteAsyncLoader() {}
