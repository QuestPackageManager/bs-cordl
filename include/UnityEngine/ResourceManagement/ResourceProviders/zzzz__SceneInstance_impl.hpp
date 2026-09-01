#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceProviders\SceneInstance.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.get_Scene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::get_Scene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6920014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), { "get_Scene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.set_Scene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)(::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::set_Scene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x692001c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                           { "set_Scene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.get_ReleaseSceneOnSceneUnloaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::get_ReleaseSceneOnSceneUnloaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6920024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), { "get_ReleaseSceneOnSceneUnloaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.set_ReleaseSceneOnSceneUnloaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::set_ReleaseSceneOnSceneUnloaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x692002c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                           { "set_ReleaseSceneOnSceneUnloaded", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.ActivateAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::ActivateAsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6920034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), { "ActivateAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6920060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)(::System::Object*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6920068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::SceneManagement::Scene UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::get_Scene() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), { "get_Scene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::set_Scene(::UnityEngine::SceneManagement::Scene value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(),
                                                                                         { "set_Scene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::get_ReleaseSceneOnSceneUnloaded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), { "get_ReleaseSceneOnSceneUnloaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::set_ReleaseSceneOnSceneUnloaded(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), { "set_ReleaseSceneOnSceneUnloaded", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::ActivateAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), { "ActivateAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(*this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "m_Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReleaseOnSceneUnloaded", ty: "bool", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_Operation", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::SceneInstance(::UnityEngine::SceneManagement::Scene m_Scene, bool m_ReleaseOnSceneUnloaded,
                                                                                             ::UnityEngine::AsyncOperation* m_Operation) noexcept {
  this->m_Scene = m_Scene;
  this->m_ReleaseOnSceneUnloaded = m_ReleaseOnSceneUnloaded;
  this->m_Operation = m_Operation;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::SceneInstance() {}
