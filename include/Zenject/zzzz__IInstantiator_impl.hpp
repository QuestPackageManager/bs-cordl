#pragma once
// IWYU pragma private; include "Zenject\IInstantiator.hpp"
#include "Zenject/zzzz__IInstantiator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Zenject::IInstantiator.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::IInstantiator::*)(::System::Type*)>(&::Zenject::IInstantiator::Instantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::IInstantiator::*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
    &::Zenject::IInstantiator::Instantiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiateComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::IInstantiator::*)(::System::Type*, ::UnityEngine::GameObject*)>(
    &::Zenject::IInstantiator::InstantiateComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiateComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::IInstantiator::*)(
    ::System::Type*, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::Zenject::IInstantiator::InstantiateComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::IInstantiator::*)(::UnityEngine::Object*)>(&::Zenject::IInstantiator::InstantiatePrefab)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::IInstantiator::*)(::UnityEngine::Object*, ::UnityEngine::Transform*)>(
    &::Zenject::IInstantiator::InstantiatePrefab)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::IInstantiator::*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                                         ::UnityEngine::Transform*)>(&::Zenject::IInstantiator::InstantiatePrefab)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::IInstantiator::*)(::StringW)>(&::Zenject::IInstantiator::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::IInstantiator::*)(::StringW, ::UnityEngine::Transform*)>(
    &::Zenject::IInstantiator::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::IInstantiator::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&::Zenject::IInstantiator::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiatePrefabForComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Zenject::IInstantiator::*)(::System::Type*, ::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
        &::Zenject::IInstantiator::InstantiatePrefabForComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiatePrefabResourceForComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Zenject::IInstantiator::*)(::System::Type*, ::StringW, ::UnityEngine::Transform*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
        &::Zenject::IInstantiator::InstantiatePrefabResourceForComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiateScriptableObjectResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::IInstantiator::*)(::System::Type*, ::StringW)>(&::Zenject::IInstantiator::InstantiateScriptableObjectResource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.InstantiateScriptableObjectResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::IInstantiator::*)(::System::Type*, ::StringW, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
    &::Zenject::IInstantiator::InstantiateScriptableObjectResource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstantiator.CreateEmptyGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::IInstantiator::*)(::StringW)>(&::Zenject::IInstantiator::CreateEmptyGameObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstantiator*>(), { ::i2c::class_of<::Zenject::IInstantiator*>(), 36 }));
    return ___internal_method;
  }
};
template <typename T> inline T Zenject::IInstantiator::Instantiate() {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T Zenject::IInstantiator::Instantiate(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 1 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, extraArgs);
}
inline ::System::Object* Zenject::IInstantiator::Instantiate(::System::Type* concreteType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType);
}
inline ::System::Object* Zenject::IInstantiator::Instantiate(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, extraArgs);
}
template <typename TContract> inline TContract Zenject::IInstantiator::InstantiateComponent(::UnityEngine::GameObject* gameObject) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 4 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() }));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, gameObject);
}
template <typename TContract>
inline TContract Zenject::IInstantiator::InstantiateComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 5 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() }));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, gameObject, extraArgs);
}
inline ::UnityW<::UnityEngine::Component> Zenject::IInstantiator::InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, componentType, gameObject);
}
inline ::UnityW<::UnityEngine::Component> Zenject::IInstantiator::InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, componentType, gameObject, extraArgs);
}
template <typename T> inline T Zenject::IInstantiator::InstantiateComponentOnNewGameObject() {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 8 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T Zenject::IInstantiator::InstantiateComponentOnNewGameObject(::StringW gameObjectName) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 9 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, gameObjectName);
}
template <typename T> inline T Zenject::IInstantiator::InstantiateComponentOnNewGameObject(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 10 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, extraArgs);
}
template <typename T> inline T Zenject::IInstantiator::InstantiateComponentOnNewGameObject(::StringW gameObjectName, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 11 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, gameObjectName, extraArgs);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::IInstantiator::InstantiatePrefab(::UnityEngine::Object* prefab) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::IInstantiator::InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::IInstantiator::InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                     ::UnityEngine::Transform* parentTransform) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::IInstantiator::InstantiatePrefabResource(::StringW resourcePath) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourcePath);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::IInstantiator::InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Transform* parentTransform) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourcePath, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::IInstantiator::InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                             ::UnityEngine::Transform* parentTransform) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourcePath, position, rotation, parentTransform);
}
template <typename T> inline T Zenject::IInstantiator::InstantiatePrefabForComponent(::UnityEngine::Object* prefab) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 18 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab);
}
template <typename T> inline T Zenject::IInstantiator::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 19 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, extraArgs);
}
template <typename T> inline T Zenject::IInstantiator::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 20 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, parentTransform);
}
template <typename T>
inline T Zenject::IInstantiator::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                               ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 21 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, parentTransform, extraArgs);
}
template <typename T>
inline T Zenject::IInstantiator::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                               ::UnityEngine::Transform* parentTransform) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 22 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, position, rotation, parentTransform);
}
template <typename T>
inline T Zenject::IInstantiator::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                               ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 23 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, position, rotation, parentTransform, extraArgs);
}
inline ::System::Object* Zenject::IInstantiator::InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                                               ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, prefab, parentTransform, extraArgs);
}
template <typename T> inline T Zenject::IInstantiator::InstantiatePrefabResourceForComponent(::StringW resourcePath) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 25 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath);
}
template <typename T> inline T Zenject::IInstantiator::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 26 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, extraArgs);
}
template <typename T> inline T Zenject::IInstantiator::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 27 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, parentTransform);
}
template <typename T>
inline T Zenject::IInstantiator::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 28 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, parentTransform, extraArgs);
}
template <typename T>
inline T Zenject::IInstantiator::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                       ::UnityEngine::Transform* parentTransform) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 29 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, position, rotation, parentTransform);
}
template <typename T>
inline T Zenject::IInstantiator::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                       ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 30 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, position, rotation, parentTransform, extraArgs);
}
inline ::System::Object* Zenject::IInstantiator::InstantiatePrefabResourceForComponent(::System::Type* concreteType, ::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, resourcePath, parentTransform, extraArgs);
}
template <typename T> inline T Zenject::IInstantiator::InstantiateScriptableObjectResource(::StringW resourcePath) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 32 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath);
}
template <typename T> inline T Zenject::IInstantiator::InstantiateScriptableObjectResource(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 33 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, extraArgs);
}
inline ::System::Object* Zenject::IInstantiator::InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, scriptableObjectType, resourcePath);
}
inline ::System::Object* Zenject::IInstantiator::InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, scriptableObjectType, resourcePath, extraArgs);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::IInstantiator::CreateEmptyGameObject(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstantiator*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, name);
}
