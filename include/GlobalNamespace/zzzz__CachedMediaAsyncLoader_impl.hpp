#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__CachedMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCachedLoader_2_def.hpp"
#include "GlobalNamespace/zzzz__CachedMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__ISpriteAsyncLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::*)()>(
    &::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x22fea34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22fecf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::CachedMediaAsyncLoader>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Sprite>> __t__builder, ::UnityW<::GlobalNamespace::CachedMediaAsyncLoader> __4__this,
    ::StringW path, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->path = path;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3() {}
//  Writing Method size for method: ::GlobalNamespace::CachedMediaAsyncLoader.ClearCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CachedMediaAsyncLoader::*)()>(&::GlobalNamespace::CachedMediaAsyncLoader::ClearCache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22fe8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CachedMediaAsyncLoader*>::get(), "ClearCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CachedMediaAsyncLoader.LoadSpriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* (
    ::GlobalNamespace::CachedMediaAsyncLoader::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::CachedMediaAsyncLoader::LoadSpriteAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22fe920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CachedMediaAsyncLoader*>::get(), "LoadSpriteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CachedMediaAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CachedMediaAsyncLoader::*)()>(&::GlobalNamespace::CachedMediaAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22fea24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CachedMediaAsyncLoader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ISpriteAsyncLoader"
constexpr GlobalNamespace::CachedMediaAsyncLoader::operator ::GlobalNamespace::ISpriteAsyncLoader*() noexcept {
  return static_cast<::GlobalNamespace::ISpriteAsyncLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISpriteAsyncLoader"
constexpr ::GlobalNamespace::ISpriteAsyncLoader* GlobalNamespace::CachedMediaAsyncLoader::i___GlobalNamespace__ISpriteAsyncLoader() noexcept {
  return static_cast<::GlobalNamespace::ISpriteAsyncLoader*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::CachedMediaAsyncLoader::__cordl_internal_get__maxNumberOfSpriteCachedElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfSpriteCachedElements;
}
constexpr int32_t const& GlobalNamespace::CachedMediaAsyncLoader::__cordl_internal_get__maxNumberOfSpriteCachedElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfSpriteCachedElements;
}
constexpr void GlobalNamespace::CachedMediaAsyncLoader::__cordl_internal_set__maxNumberOfSpriteCachedElements(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberOfSpriteCachedElements = value;
}
constexpr ::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityW<::UnityEngine::Sprite>>*& GlobalNamespace::CachedMediaAsyncLoader::__cordl_internal_get__spriteAsyncCachedLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteAsyncCachedLoader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityW<::UnityEngine::Sprite>>*> const&
GlobalNamespace::CachedMediaAsyncLoader::__cordl_internal_get__spriteAsyncCachedLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteAsyncCachedLoader;
}
constexpr void GlobalNamespace::CachedMediaAsyncLoader::__cordl_internal_set__spriteAsyncCachedLoader(::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityW<::UnityEngine::Sprite>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteAsyncCachedLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CachedMediaAsyncLoader::ClearCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CachedMediaAsyncLoader*>::get(), "ClearCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GlobalNamespace::CachedMediaAsyncLoader::LoadSpriteAsync(::StringW path,
                                                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CachedMediaAsyncLoader*>::get(), "LoadSpriteAsync", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*, false>(this, ___internal_method, path, cancellationToken);
}
inline ::GlobalNamespace::CachedMediaAsyncLoader* GlobalNamespace::CachedMediaAsyncLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CachedMediaAsyncLoader*>());
}
inline void GlobalNamespace::CachedMediaAsyncLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CachedMediaAsyncLoader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CachedMediaAsyncLoader::CachedMediaAsyncLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
