#pragma once
// IWYU pragma private; include "Zenject/SceneContextRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SceneContextRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
//  Writing Method size for method: ::Zenject::SceneContextRegistry.get_SceneContexts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* (::Zenject::SceneContextRegistry::*)()>(
    &::Zenject::SceneContextRegistry::get_SceneContexts)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e91818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "get_SceneContexts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContextRegistry::*)(::Zenject::SceneContext*)>(&::Zenject::SceneContextRegistry::Add)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e933d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "Add", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.GetSceneContextForScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Zenject::SceneContext> (::Zenject::SceneContextRegistry::*)(::StringW)>(&::Zenject::SceneContextRegistry::GetSceneContextForScene)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e934d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "GetSceneContextForScene", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.GetSceneContextForScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Zenject::SceneContext> (::Zenject::SceneContextRegistry::*)(::UnityEngine::SceneManagement::Scene)>(
    &::Zenject::SceneContextRegistry::GetSceneContextForScene)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e9359c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "GetSceneContextForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.TryGetSceneContextForScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Zenject::SceneContext> (::Zenject::SceneContextRegistry::*)(::StringW)>(
    &::Zenject::SceneContextRegistry::TryGetSceneContextForScene)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e93600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "TryGetSceneContextForScene", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.TryGetSceneContextForScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Zenject::SceneContext> (::Zenject::SceneContextRegistry::*)(::UnityEngine::SceneManagement::Scene)>(
    &::Zenject::SceneContextRegistry::TryGetSceneContextForScene)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e936cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "TryGetSceneContextForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.GetContainerForScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::SceneContextRegistry::*)(::UnityEngine::SceneManagement::Scene)>(
    &::Zenject::SceneContextRegistry::GetContainerForScene)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e93748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "GetContainerForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.TryGetContainerForScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::SceneContextRegistry::*)(::UnityEngine::SceneManagement::Scene)>(
    &::Zenject::SceneContextRegistry::TryGetContainerForScene)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e937ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "TryGetContainerForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContextRegistry::*)(::Zenject::SceneContext*)>(&::Zenject::SceneContextRegistry::Remove)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6e938d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "Remove", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContextRegistry::*)()>(&::Zenject::SceneContextRegistry::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e93a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SceneContextRegistry::__zenCreate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e93a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistry.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneContextRegistry::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e93aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::UnityW<::Zenject::SceneContext>>*& Zenject::SceneContextRegistry::__cordl_internal_get__map() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____map;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::UnityW<::Zenject::SceneContext>>* const&
Zenject::SceneContextRegistry::__cordl_internal_get__map() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____map;
}
constexpr void Zenject::SceneContextRegistry::__cordl_internal_set__map(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::UnityW<::Zenject::SceneContext>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____map = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* Zenject::SceneContextRegistry::get_SceneContexts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "get_SceneContexts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>(this, ___internal_method);
}
inline void Zenject::SceneContextRegistry::Add(::Zenject::SceneContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "Add", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::UnityW<::Zenject::SceneContext> Zenject::SceneContextRegistry::GetSceneContextForScene(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "GetSceneContextForScene", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Zenject::SceneContext>>(this, ___internal_method, name);
}
inline ::UnityW<::Zenject::SceneContext> Zenject::SceneContextRegistry::GetSceneContextForScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "GetSceneContextForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Zenject::SceneContext>>(this, ___internal_method, scene);
}
inline ::UnityW<::Zenject::SceneContext> Zenject::SceneContextRegistry::TryGetSceneContextForScene(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "TryGetSceneContextForScene", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Zenject::SceneContext>>(this, ___internal_method, name);
}
inline ::UnityW<::Zenject::SceneContext> Zenject::SceneContextRegistry::TryGetSceneContextForScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "TryGetSceneContextForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Zenject::SceneContext>>(this, ___internal_method, scene);
}
inline ::Zenject::DiContainer* Zenject::SceneContextRegistry::GetContainerForScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "GetContainerForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, scene);
}
inline ::Zenject::DiContainer* Zenject::SceneContextRegistry::TryGetContainerForScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "TryGetContainerForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, scene);
}
inline void Zenject::SceneContextRegistry::Remove(::Zenject::SceneContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "Remove", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void Zenject::SceneContextRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::SceneContextRegistry::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneContextRegistry::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContextRegistry*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SceneContextRegistry* Zenject::SceneContextRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SceneContextRegistry*>());
}
// Ctor Parameters []
constexpr ::Zenject::SceneContextRegistry::SceneContextRegistry() {}
