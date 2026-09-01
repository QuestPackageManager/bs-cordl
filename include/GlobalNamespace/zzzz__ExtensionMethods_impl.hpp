#pragma once
// IWYU pragma private; include "GlobalNamespace\ExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ExtensionMethods_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.ContainsLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LayerMask, int32_t)>(&::GlobalNamespace::ExtensionMethods::ContainsLayer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3323b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "ContainsLayer", {}, { ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.StartUniqueCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (*)(::UnityEngine::MonoBehaviour*, ::System::Func_1<::System::Collections::IEnumerator*>*)>(
    &::GlobalNamespace::ExtensionMethods::StartUniqueCoroutine)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3323b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                            { "StartUniqueCoroutine", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_1<::System::Collections::IEnumerator*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.StopUniqueCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::System::Func_1<::System::Collections::IEnumerator*>*)>(
    &::GlobalNamespace::ExtensionMethods::StopUniqueCoroutine)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3323c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                            { "StopUniqueCoroutine", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_1<::System::Collections::IEnumerator*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.IsDescendantOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::ExtensionMethods::IsDescendantOf)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3323c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                                             { "IsDescendantOf", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.SetLocalPositionAndRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::ExtensionMethods::SetLocalPositionAndRotation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3323d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
            { "SetLocalPositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.GetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::ExtensionMethods::GetPath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3323d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "GetPath", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.Reflect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::ExtensionMethods::Reflect)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3323e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "Reflect", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.CreateTexture2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::RenderTexture*, ::UnityEngine::TextureFormat)>(
    &::GlobalNamespace::ExtensionMethods::CreateTexture2D)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3324010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                                             { "CreateTexture2D", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.Rotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::ExtensionMethods::Rotate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x332416c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "Rotate", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.SetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ParticleSystem*, uint32_t)>(&::GlobalNamespace::ExtensionMethods::SetSeed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x33241b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                                                                           { "SetSeed", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.GetFixedSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::ExtensionMethods::GetFixedSeed)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3324230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "GetFixedSeed", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.GetFixedSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ExtensionMethods::GetFixedSeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3324398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "GetFixedSeed", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExtensionMethods.GetFixedSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Component*)>(&::GlobalNamespace::ExtensionMethods::GetFixedSeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33243b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "GetFixedSeed", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ExtensionMethods::ContainsLayer(::UnityEngine::LayerMask layerMask, int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "ContainsLayer", {}, { ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, layerMask, layer);
}
inline ::UnityEngine::Coroutine* GlobalNamespace::ExtensionMethods::StartUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_1<::System::Collections::IEnumerator*>* func) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                       { "StartUniqueCoroutine", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_1<::System::Collections::IEnumerator*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(nullptr, ___internal_method, m, func);
}
template <typename T>
inline ::UnityEngine::Coroutine* GlobalNamespace::ExtensionMethods::StartUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_2<T, ::System::Collections::IEnumerator*>* func, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                       { "StartUniqueCoroutine",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_2<T, ::System::Collections::IEnumerator*>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(nullptr, ___internal_method, m, func, value);
}
inline void GlobalNamespace::ExtensionMethods::StopUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_1<::System::Collections::IEnumerator*>* func) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                       { "StopUniqueCoroutine", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_1<::System::Collections::IEnumerator*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, func);
}
template <typename T> inline void GlobalNamespace::ExtensionMethods::StopUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_2<T, ::System::Collections::IEnumerator*>* func) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
          { "StopUniqueCoroutine", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_2<T, ::System::Collections::IEnumerator*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, func);
}
inline bool GlobalNamespace::ExtensionMethods::IsDescendantOf(::UnityEngine::Transform* transform, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                                           { "IsDescendantOf", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, parent);
}
inline void GlobalNamespace::ExtensionMethods::SetLocalPositionAndRotation(::UnityEngine::Transform* tr, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                       { "SetLocalPositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tr, pos, rot);
}
inline ::StringW GlobalNamespace::ExtensionMethods::GetPath(::UnityEngine::Transform* current) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "GetPath", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, current);
}
inline ::UnityEngine::Quaternion GlobalNamespace::ExtensionMethods::Reflect(::UnityEngine::Quaternion source, ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "Reflect", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, source, normal);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::ExtensionMethods::CreateTexture2D(::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::TextureFormat textureFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                                           { "CreateTexture2D", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, renderTexture, textureFormat);
}
inline ::UnityEngine::Vector2 GlobalNamespace::ExtensionMethods::Rotate(::UnityEngine::Vector2 vector, float_t rads) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "Rotate", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vector, rads);
}
template <typename T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::ExtensionMethods::GetRange(::System::Collections::Generic::IReadOnlyList_1<T>* list, int32_t index, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                          { "GetRange", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, list, index, count);
}
template <typename T> inline T GlobalNamespace::ExtensionMethods::LastUnsafe(::System::Collections::Generic::IReadOnlyList_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(),
                                                           { "LastUnsafe", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, list);
}
inline void GlobalNamespace::ExtensionMethods::SetSeed(::UnityEngine::ParticleSystem* particleSystem, uint32_t seed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "SetSeed", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, particleSystem, seed);
}
inline int32_t GlobalNamespace::ExtensionMethods::GetFixedSeed(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "GetFixedSeed", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform);
}
inline int32_t GlobalNamespace::ExtensionMethods::GetFixedSeed(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "GetFixedSeed", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject);
}
inline int32_t GlobalNamespace::ExtensionMethods::GetFixedSeed(::UnityEngine::Component* component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExtensionMethods*>(), { "GetFixedSeed", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExtensionMethods::ExtensionMethods() {}
