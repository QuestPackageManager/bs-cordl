#pragma once
// IWYU pragma private; include "UnityEngine/U2D/SpriteAtlasManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlasManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.RequestAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::U2D::SpriteAtlasManager::RequestAtlas)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x48bd394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "RequestAtlas", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.add_atlasRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*)>(
    &::UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x48bd448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "add_atlasRegistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.remove_atlasRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*)>(
    &::UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x48bd518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "remove_atlasRegistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.PostRegisteredAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::U2D::SpriteAtlas*)>(&::UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x48bd5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "PostRegisteredAtlas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::U2D::SpriteAtlas*)>(&::UnityEngine::U2D::SpriteAtlasManager::Register)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48bd654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::U2D::SpriteAtlasManager::setStaticF_atlasRequested(::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>*, "atlasRequested",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get>(
      std::forward<::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>*>(value));
}
inline ::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>* UnityEngine::U2D::SpriteAtlasManager::getStaticF_atlasRequested() {
  return ::cordl_internals::getStaticField<::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>*, "atlasRequested",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get>();
}
inline void UnityEngine::U2D::SpriteAtlasManager::setStaticF_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*, "atlasRegistered",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* UnityEngine::U2D::SpriteAtlasManager::getStaticF_atlasRegistered() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*, "atlasRegistered",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get>();
}
inline bool UnityEngine::U2D::SpriteAtlasManager::RequestAtlas(::StringW tag) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "RequestAtlas", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tag);
}
inline void UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "add_atlasRegistered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "remove_atlasRegistered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas* spriteAtlas) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "PostRegisteredAtlas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, spriteAtlas);
}
inline void UnityEngine::U2D::SpriteAtlasManager::Register(::UnityEngine::U2D::SpriteAtlas* spriteAtlas) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlasManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, spriteAtlas);
}
// Ctor Parameters []
constexpr ::UnityEngine::U2D::SpriteAtlasManager::SpriteAtlasManager() {}
