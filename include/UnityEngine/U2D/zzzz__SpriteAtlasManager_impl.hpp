#pragma once
// IWYU pragma private; include "UnityEngine\U2D\SpriteAtlasManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlasManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.RequestAtlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::U2D::SpriteAtlasManager::RequestAtlas)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b31d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(), { "RequestAtlas", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.add_atlasRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*)>(&::UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b31e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(),
                                                             { "add_atlasRegistered", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.remove_atlasRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*)>(&::UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b31efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(),
                                                             { "remove_atlasRegistered", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.PostRegisteredAtlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::U2D::SpriteAtlas*)>(&::UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b31fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(), { "PostRegisteredAtlas", {}, { ::i2c::type_of<::UnityEngine::U2D::SpriteAtlas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::U2D::SpriteAtlas*)>(&::UnityEngine::U2D::SpriteAtlasManager::Register)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b32050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::U2D::SpriteAtlas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlasManager.Register_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::U2D::SpriteAtlasManager::Register_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b320d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(), { "Register_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::U2D::SpriteAtlasManager::setStaticF_atlasRequested(::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>*, "atlasRequested", ::UnityEngine::U2D::SpriteAtlasManager*>(
      std::forward<::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>*>(value));
}
inline ::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>* UnityEngine::U2D::SpriteAtlasManager::getStaticF_atlasRequested() {
  return ::cordl_internals::getStaticField<::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>*, "atlasRequested", ::UnityEngine::U2D::SpriteAtlasManager*>();
}
inline void UnityEngine::U2D::SpriteAtlasManager::setStaticF_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*, "atlasRegistered", ::UnityEngine::U2D::SpriteAtlasManager*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* UnityEngine::U2D::SpriteAtlasManager::getStaticF_atlasRegistered() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*, "atlasRegistered", ::UnityEngine::U2D::SpriteAtlasManager*>();
}
inline bool UnityEngine::U2D::SpriteAtlasManager::RequestAtlas(::StringW tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(), { "RequestAtlas", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tag);
}
inline void UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(),
                                                           { "add_atlasRegistered", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(),
                                                           { "remove_atlasRegistered", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas* spriteAtlas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(), { "PostRegisteredAtlas", {}, { ::i2c::type_of<::UnityEngine::U2D::SpriteAtlas*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spriteAtlas);
}
inline void UnityEngine::U2D::SpriteAtlasManager::Register(::UnityEngine::U2D::SpriteAtlas* spriteAtlas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::U2D::SpriteAtlas*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spriteAtlas);
}
inline void UnityEngine::U2D::SpriteAtlasManager::Register_Injected(::System::IntPtr spriteAtlas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlasManager*>(), { "Register_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spriteAtlas);
}
// Ctor Parameters []
constexpr ::UnityEngine::U2D::SpriteAtlasManager::SpriteAtlasManager() {}
