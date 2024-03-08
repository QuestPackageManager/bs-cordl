#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CachedMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCachedLoader_2_def.hpp"
#include "GlobalNamespace/zzzz__ISpriteAsyncLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CachedMediaAsyncLoader.ClearCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CachedMediaAsyncLoader::*)()>(&::GlobalNamespace::CachedMediaAsyncLoader::ClearCache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2536b04;

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
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2536b5c;

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
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2536c5c;

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
