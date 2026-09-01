#pragma once
// IWYU pragma private; include "UnityEngine\Object.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_1_def.hpp"
#include "UnityEngine/zzzz__FindObjectsInactive_def.hpp"
#include "UnityEngine/zzzz__FindObjectsSortMode_def.hpp"
#include "UnityEngine/zzzz__HideFlags_def.hpp"
#include "UnityEngine/zzzz__InstantiateParameters_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Object_MarshalledUnityObject.TryThrowEditorNullExceptionObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::UnityEngine::Object_MarshalledUnityObject::TryThrowEditorNullExceptionObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aeb340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object_MarshalledUnityObject*>(),
                                                             { "TryThrowEditorNullExceptionObject", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
template <typename T> inline ::System::IntPtr UnityEngine::Object_MarshalledUnityObject::Marshal(T obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object_MarshalledUnityObject*>(), { "Marshal", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
template <typename T> inline ::System::IntPtr UnityEngine::Object_MarshalledUnityObject::MarshalNotNull(T obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object_MarshalledUnityObject*>(), { "MarshalNotNull", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::Object_MarshalledUnityObject::TryThrowEditorNullExceptionObject(::UnityEngine::Object* unityObj, ::StringW paramterName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object_MarshalledUnityObject*>(),
                                                           { "TryThrowEditorNullExceptionObject", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unityObj, paramterName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Object_MarshalledUnityObject::Object_MarshalledUnityObject() {}
//  Writing Method size for method: ::UnityEngine::Object.GetInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Object::*)()>(&::UnityEngine::Object::GetInstanceID)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ae801c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "GetInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Object::*)()>(&::UnityEngine::Object::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ae8090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { ::i2c::class_of<::UnityEngine::Object*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Object::*)(::System::Object*)>(&::UnityEngine::Object::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6ae80a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { ::i2c::class_of<::UnityEngine::Object*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ae8254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.CompareBaseObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Object::CompareBaseObjects)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6ae81a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "CompareBaseObjects", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.EnsureRunningOnMainThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Object::*)()>(&::UnityEngine::Object::EnsureRunningOnMainThread)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6ae82d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "EnsureRunningOnMainThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.IsNativeObjectAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::IsNativeObjectAlive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ae82bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "IsNativeObjectAlive", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.GetCachedPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Object::*)()>(&::UnityEngine::Object::GetCachedPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae83bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "GetCachedPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Object::*)()>(&::UnityEngine::Object::get_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae83c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Object::*)(::StringW)>(&::UnityEngine::Object::set_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae8524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Object::Instantiate)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6ae86b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                         { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(
    &::UnityEngine::Object::Instantiate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6ae8a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::Instantiate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6ae8e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::Object::Instantiate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6ae90bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Transform*)>(&::UnityEngine::Object::Instantiate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6ae9348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Transform*, bool)>(&::UnityEngine::Object::Instantiate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6ae93b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, float_t)>(&::UnityEngine::Object::Destroy)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6ae96ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::Destroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ae97f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.DestroyImmediate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, bool)>(&::UnityEngine::Object::DestroyImmediate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6ae984c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyImmediate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.DestroyImmediate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::DestroyImmediate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ae9948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyImmediate", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectsOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*)>(&::UnityEngine::Object::FindObjectsOfType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6ae99a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectsOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*, bool)>(&::UnityEngine::Object::FindObjectsOfType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae9a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectsByType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*, ::UnityEngine::FindObjectsSortMode)>(&::UnityEngine::Object::FindObjectsByType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ae9a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsByType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsSortMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectsByType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*, ::UnityEngine::FindObjectsInactive, ::UnityEngine::FindObjectsSortMode)>(
    &::UnityEngine::Object::FindObjectsByType)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ae9af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Object*>(),
            { "FindObjectsByType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>(), ::i2c::type_of<::UnityEngine::FindObjectsSortMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.DontDestroyOnLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::DontDestroyOnLoad)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ae9b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DontDestroyOnLoad", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.get_hideFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::HideFlags (::UnityEngine::Object::*)()>(&::UnityEngine::Object::get_hideFlags)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6ae9c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "get_hideFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.set_hideFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Object::*)(::UnityEngine::HideFlags)>(&::UnityEngine::Object::set_hideFlags)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6ae9d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "set_hideFlags", {}, { ::i2c::type_of<::UnityEngine::HideFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.DestroyObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, float_t)>(&::UnityEngine::Object::DestroyObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ae9e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyObject", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.DestroyObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::DestroyObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ae9e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyObject", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindSceneObjectsOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*)>(&::UnityEngine::Object::FindSceneObjectsOfType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ae9ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindSceneObjectsOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectsOfTypeIncludingAssets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*)>(&::UnityEngine::Object::FindObjectsOfTypeIncludingAssets)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae9f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfTypeIncludingAssets", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectsOfTypeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*)>(&::UnityEngine::Object::FindObjectsOfTypeAll)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae9f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfTypeAll", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.CheckNullArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::UnityEngine::Object::CheckNullArgument)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ae8874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "CheckNullArgument", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::System::Type*)>(&::UnityEngine::Object::FindObjectOfType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ae9f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindFirstObjectByType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::System::Type*)>(&::UnityEngine::Object::FindFirstObjectByType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6aea024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindFirstObjectByType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindAnyObjectByType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::System::Type*)>(&::UnityEngine::Object::FindAnyObjectByType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6aea0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindAnyObjectByType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::System::Type*, bool)>(&::UnityEngine::Object::FindObjectOfType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6aea174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectOfType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindFirstObjectByType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::System::Type*, ::UnityEngine::FindObjectsInactive)>(&::UnityEngine::Object::FindFirstObjectByType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6aea21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindFirstObjectByType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindAnyObjectByType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::System::Type*, ::UnityEngine::FindObjectsInactive)>(&::UnityEngine::Object::FindAnyObjectByType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6aea2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindAnyObjectByType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Object::*)()>(&::UnityEngine::Object::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6aea384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { ::i2c::class_of<::UnityEngine::Object*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Object::op_Equality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ae4308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Object::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ae0c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.GetOffsetOfInstanceIDInCPlusPlusObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Object::GetOffsetOfInstanceIDInCPlusPlusObject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6aea514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "GetOffsetOfInstanceIDInCPlusPlusObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.CurrentThreadIsMainThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Object::CurrentThreadIsMainThread)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ae8394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "CurrentThreadIsMainThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_CloneSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::Internal_CloneSingle)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6ae8f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_CloneSingle", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_CloneSingleWithScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::Object::Internal_CloneSingleWithScene)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6ae91a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                { "Internal_CloneSingleWithScene", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_CloneSingleWithParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::InstantiateParameters)>(
    &::UnityEngine::Object::Internal_CloneSingleWithParams)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6aea5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                { "Internal_CloneSingleWithParams", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_InstantiateSingleWithParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                           ::UnityEngine::InstantiateParameters)>(&::UnityEngine::Object::Internal_InstantiateSingleWithParams)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6aea7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_InstantiateSingleWithParams",
                                                                                      {},
                                                                                      { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                        ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_CloneSingleWithParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Transform*, bool)>(
    &::UnityEngine::Object::Internal_CloneSingleWithParent)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6ae94e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                         { "Internal_CloneSingleWithParent", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_InstantiateAsyncWithParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Object*, int32_t, ::UnityEngine::InstantiateParameters, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t,
                                                                            bool)>(&::UnityEngine::Object::Internal_InstantiateAsyncWithParams)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6aeaa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                            { "Internal_InstantiateAsyncWithParams",
                              {},
                              { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>(), ::i2c::type_of<::System::IntPtr>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_InstantiateSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Object::Internal_InstantiateSingle)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6ae88c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Object*>(),
                         { "Internal_InstantiateSingle", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_InstantiateSingleWithParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Object::Internal_InstantiateSingleWithParent)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6ae8c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_InstantiateSingleWithParent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::ToString)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6aea3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "ToString", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Object::*)()>(&::UnityEngine::Object::GetName)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6ae83c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "GetName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.IsPersistent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*)>(&::UnityEngine::Object::IsPersistent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6aead0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "IsPersistent", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.SetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Object::*)(::StringW)>(&::UnityEngine::Object::SetName)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6ae8528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "SetName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.DoesObjectWithInstanceIDExist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Object::DoesObjectWithInstanceIDExist)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aeae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DoesObjectWithInstanceIDExist", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectFromInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(int32_t)>(&::UnityEngine::Object::FindObjectFromInstanceID)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6aeae94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectFromInstanceID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.GetPtrFromInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, ::System::Type*, ::by_ref<bool>)>(&::UnityEngine::Object::GetPtrFromInstanceID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6aeb018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                             { "GetPtrFromInstanceID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.ForceLoadFromInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(int32_t)>(&::UnityEngine::Object::ForceLoadFromInstanceID)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6aeb06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "ForceLoadFromInstanceID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.MarkDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Object::*)()>(&::UnityEngine::Object::MarkDirty)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6aeb1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "MarkDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Object::*)()>(&::UnityEngine::Object::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ade374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Destroy_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Object::Destroy_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ae97a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Destroy_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.DestroyImmediate_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Object::DestroyImmediate_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae9904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyImmediate_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.DontDestroyOnLoad_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Object::DontDestroyOnLoad_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae9c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DontDestroyOnLoad_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.get_hideFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::HideFlags (*)(::System::IntPtr)>(&::UnityEngine::Object::get_hideFlags_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ae9cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "get_hideFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.set_hideFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::HideFlags)>(&::UnityEngine::Object::set_hideFlags_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae9de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "set_hideFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::HideFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_CloneSingle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Object::Internal_CloneSingle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aea53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_CloneSingle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_CloneSingleWithScene_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(
    &::UnityEngine::Object::Internal_CloneSingleWithScene_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aea578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                         { "Internal_CloneSingleWithScene_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_CloneSingleWithParams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::InstantiateParameters>)>(
    &::UnityEngine::Object::Internal_CloneSingleWithParams_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aea768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                         { "Internal_CloneSingleWithParams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::InstantiateParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_InstantiateSingleWithParams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>,
                                                                            ::by_ref<::UnityEngine::InstantiateParameters>)>(&::UnityEngine::Object::Internal_InstantiateSingleWithParams_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6aea970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                             { "Internal_InstantiateSingleWithParams_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::InstantiateParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_CloneSingleWithParent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::Object::Internal_CloneSingleWithParent_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6aea9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                         { "Internal_CloneSingleWithParent_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_InstantiateAsyncWithParams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::InstantiateParameters>, ::System::IntPtr, int32_t, ::System::IntPtr,
                                                                            int32_t, bool)>(&::UnityEngine::Object::Internal_InstantiateAsyncWithParams_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6aeab48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                            { "Internal_InstantiateAsyncWithParams_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InstantiateParameters>>(), ::i2c::type_of<::System::IntPtr>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_InstantiateSingle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Object::Internal_InstantiateSingle_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6aeabd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_InstantiateSingle_Injected",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.Internal_InstantiateSingleWithParent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Object::Internal_InstantiateSingleWithParent_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6aeac28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_InstantiateSingleWithParent_Injected",
                                                                         {},
                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                           ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.ToString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Object::ToString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aeac84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                { "ToString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.GetName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Object::GetName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aeacc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                { "GetName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.IsPersistent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Object::IsPersistent_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aeadd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "IsPersistent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.SetName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Object::SetName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aeae14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                { "SetName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.FindObjectFromInstanceID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::Object::FindObjectFromInstanceID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aeafdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectFromInstanceID_Injected", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.ForceLoadFromInstanceID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::Object::ForceLoadFromInstanceID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aeb1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "ForceLoadFromInstanceID_Injected", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Object.MarkDirty_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Object::MarkDirty_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aeb298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "MarkDirty_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Object::__cordl_internal_get_m_CachedPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedPtr;
}
constexpr ::System::IntPtr const& UnityEngine::Object::__cordl_internal_get_m_CachedPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedPtr;
}
constexpr void UnityEngine::Object::__cordl_internal_set_m_CachedPtr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedPtr = value;
}
inline void UnityEngine::Object::setStaticF_OffsetOfInstanceIDInCPlusPlusObject(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "OffsetOfInstanceIDInCPlusPlusObject", ::UnityEngine::Object*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Object::getStaticF_OffsetOfInstanceIDInCPlusPlusObject() {
  return ::cordl_internals::getStaticField<int32_t, "OffsetOfInstanceIDInCPlusPlusObject", ::UnityEngine::Object*>();
}
inline int32_t UnityEngine::Object::GetInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "GetInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Object::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Object*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Object::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Object*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UnityEngine::Object::op_Implicit_bool(::UnityEngine::Object* exists) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exists);
}
inline bool UnityEngine::Object::CompareBaseObjects(::UnityEngine::Object* lhs, ::UnityEngine::Object* rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "CompareBaseObjects", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline void UnityEngine::Object::EnsureRunningOnMainThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "EnsureRunningOnMainThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Object::IsNativeObjectAlive(::UnityEngine::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "IsNativeObjectAlive", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, o);
}
inline ::System::IntPtr UnityEngine::Object::GetCachedPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "GetCachedPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::StringW UnityEngine::Object::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Object::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original);
}
template <typename T> inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, parent);
}
template <typename T> inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                          { "InstantiateAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, position, rotation);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 position,
                                                                                            ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync",
                                                                                                        { ::i2c::class_of<T>() },
                                                                                                        { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, parent, position, rotation);
}
template <typename T> inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count);
}
template <typename T> inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "InstantiateAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, parent);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "InstantiateAsync",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, position, rotation);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions,
                                                                                            ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> rotations) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync",
                                                                       { ::i2c::class_of<T>() },
                                                                       { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(),
                                                                         ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Quaternion>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, positions, rotations);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 position,
                                                                                            ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync",
                                                                                                        { ::i2c::class_of<T>() },
                                                                                                        { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, parent, position, rotation);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 position,
                                                                                            ::UnityEngine::Quaternion rotation, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                           { "InstantiateAsync",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, parent, position, rotation, cancellationToken);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent,
                                                                                            ::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions,
                                                                                            ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> rotations) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync",
                                                                                                        { ::i2c::class_of<T>() },
                                                                                                        { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                                          ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(),
                                                                                                          ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Quaternion>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, parent, positions, rotations);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>*
UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::UnityEngine::Transform* parent, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions,
                                      ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> rotations, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                          { "InstantiateAsync",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(),
                              ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, parent, positions, rotations, cancellationToken);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, ::UnityEngine::InstantiateParameters parameters,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "InstantiateAsync",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, parameters, cancellationToken);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::UnityEngine::InstantiateParameters parameters,
                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync",
                                                                                           { ::i2c::class_of<T>() },
                                                                                           { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>(),
                                                                                             ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, parameters, cancellationToken);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                            ::UnityEngine::InstantiateParameters parameters, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync",
                                                                       { ::i2c::class_of<T>() },
                                                                       { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                         ::i2c::type_of<::UnityEngine::InstantiateParameters>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, position, rotation, parameters, cancellationToken);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                            ::UnityEngine::InstantiateParameters parameters, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                           { "InstantiateAsync",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::InstantiateParameters>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, position, rotation, parameters, cancellationToken);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::Object::InstantiateAsync(T original, int32_t count, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> positions,
                                                                                            ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> rotations,
                                                                                            ::UnityEngine::InstantiateParameters parameters, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "InstantiateAsync",
                                                                       { ::i2c::class_of<T>() },
                                                                       { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(),
                                                                         ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>(),
                                                                         ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncInstantiateOperation_1<T>*>(nullptr, ___internal_method, original, count, positions, rotations, parameters, cancellationToken);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                       { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, original, position, rotation);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                        ::UnityEngine::Transform* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, original, position, rotation, parent);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Instantiate(::UnityEngine::Object* original) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, original);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Instantiate(::UnityEngine::Object* original, ::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, original, scene);
}
template <typename T> inline T UnityEngine::Object::Instantiate(T original, ::UnityEngine::InstantiateParameters parameters) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original, parameters);
}
template <typename T> inline T UnityEngine::Object::Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::InstantiateParameters parameters) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate",
                                                                                           { ::i2c::class_of<T>() },
                                                                                           { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                                             ::i2c::type_of<::UnityEngine::InstantiateParameters>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original, position, rotation, parameters);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, original, parent);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                           { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, original, parent, instantiateInWorldSpace);
}
template <typename T> inline T UnityEngine::Object::Instantiate(T original) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original);
}
template <typename T> inline T UnityEngine::Object::Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                       { "Instantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original, position, rotation);
}
template <typename T> inline T UnityEngine::Object::Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate",
                                                                                           { ::i2c::class_of<T>() },
                                                                                           { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                                             ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original, position, rotation, parent);
}
template <typename T> inline T UnityEngine::Object::Instantiate(T original, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Instantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original, parent);
}
template <typename T> inline T UnityEngine::Object::Instantiate(T original, ::UnityEngine::Transform* parent, bool worldPositionStays) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                           { "Instantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original, parent, worldPositionStays);
}
inline void UnityEngine::Object::Destroy(::UnityEngine::Object* obj, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, t);
}
inline void UnityEngine::Object::Destroy(::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::Object::DestroyImmediate(::UnityEngine::Object* obj, bool allowDestroyingAssets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyImmediate", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, allowDestroyingAssets);
}
inline void UnityEngine::Object::DestroyImmediate(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyImmediate", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Object::FindObjectsOfType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Object::FindObjectsOfType(::System::Type* type, bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type, includeInactive);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Object::FindObjectsByType(::System::Type* type, ::UnityEngine::FindObjectsSortMode sortMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsByType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsSortMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type, sortMode);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Object::FindObjectsByType(::System::Type* type, ::UnityEngine::FindObjectsInactive findObjectsInactive,
                                                                                        ::UnityEngine::FindObjectsSortMode sortMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Object*>(),
          { "FindObjectsByType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>(), ::i2c::type_of<::UnityEngine::FindObjectsSortMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type, findObjectsInactive, sortMode);
}
inline void UnityEngine::Object::DontDestroyOnLoad(::UnityEngine::Object* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DontDestroyOnLoad", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
inline ::UnityEngine::HideFlags UnityEngine::Object::get_hideFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "get_hideFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::HideFlags>(this, ___internal_method);
}
inline void UnityEngine::Object::set_hideFlags(::UnityEngine::HideFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "set_hideFlags", {}, { ::i2c::type_of<::UnityEngine::HideFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Object::DestroyObject(::UnityEngine::Object* obj, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyObject", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, t);
}
inline void UnityEngine::Object::DestroyObject(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyObject", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Object::FindSceneObjectsOfType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindSceneObjectsOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Object::FindObjectsOfTypeIncludingAssets(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfTypeIncludingAssets", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type);
}
template <typename T> inline ::ArrayW<T> UnityEngine::Object::FindObjectsOfType() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
template <typename T> inline ::ArrayW<T> UnityEngine::Object::FindObjectsByType(::UnityEngine::FindObjectsSortMode sortMode) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsByType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::FindObjectsSortMode>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, sortMode);
}
template <typename T> inline ::ArrayW<T> UnityEngine::Object::FindObjectsOfType(bool includeInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfType", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, includeInactive);
}
template <typename T> inline ::ArrayW<T> UnityEngine::Object::FindObjectsByType(::UnityEngine::FindObjectsInactive findObjectsInactive, ::UnityEngine::FindObjectsSortMode sortMode) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                          { "FindObjectsByType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::FindObjectsInactive>(), ::i2c::type_of<::UnityEngine::FindObjectsSortMode>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, findObjectsInactive, sortMode);
}
template <typename T> inline T UnityEngine::Object::FindObjectOfType() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectOfType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::Object::FindObjectOfType(bool includeInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectOfType", { ::i2c::class_of<T>() }, { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, includeInactive);
}
template <typename T> inline T UnityEngine::Object::FindFirstObjectByType() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindFirstObjectByType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::Object::FindAnyObjectByType() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindAnyObjectByType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::Object::FindFirstObjectByType(::UnityEngine::FindObjectsInactive findObjectsInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindFirstObjectByType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::FindObjectsInactive>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, findObjectsInactive);
}
template <typename T> inline T UnityEngine::Object::FindAnyObjectByType(::UnityEngine::FindObjectsInactive findObjectsInactive) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindAnyObjectByType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::FindObjectsInactive>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, findObjectsInactive);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Object::FindObjectsOfTypeAll(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectsOfTypeAll", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type);
}
inline void UnityEngine::Object::CheckNullArgument(::System::Object* arg, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "CheckNullArgument", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arg, message);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::FindObjectOfType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::FindFirstObjectByType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindFirstObjectByType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::FindAnyObjectByType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindAnyObjectByType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::FindObjectOfType(::System::Type* type, bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectOfType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, type, includeInactive);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::FindFirstObjectByType(::System::Type* type, ::UnityEngine::FindObjectsInactive findObjectsInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindFirstObjectByType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, type, findObjectsInactive);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::FindAnyObjectByType(::System::Type* type, ::UnityEngine::FindObjectsInactive findObjectsInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindAnyObjectByType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, type, findObjectsInactive);
}
inline ::StringW UnityEngine::Object::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Object*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Object::op_Equality(::UnityEngine::Object* x, ::UnityEngine::Object* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool UnityEngine::Object::op_Inequality(::UnityEngine::Object* x, ::UnityEngine::Object* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline int32_t UnityEngine::Object::GetOffsetOfInstanceIDInCPlusPlusObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "GetOffsetOfInstanceIDInCPlusPlusObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::Object::CurrentThreadIsMainThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "CurrentThreadIsMainThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Internal_CloneSingle(::UnityEngine::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_CloneSingle", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, data);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Internal_CloneSingleWithScene(::UnityEngine::Object* data, ::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "Internal_CloneSingleWithScene", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, data, scene);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Internal_CloneSingleWithParams(::UnityEngine::Object* data, ::UnityEngine::InstantiateParameters parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "Internal_CloneSingleWithParams", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, data, parameters);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Internal_InstantiateSingleWithParams(::UnityEngine::Object* data, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                                 ::UnityEngine::InstantiateParameters parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_InstantiateSingleWithParams",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, data, position, rotation, parameters);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Internal_CloneSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, bool worldPositionStays) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                       { "Internal_CloneSingleWithParent", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, data, parent, worldPositionStays);
}
inline ::System::IntPtr UnityEngine::Object::Internal_InstantiateAsyncWithParams(::UnityEngine::Object* original, int32_t count, ::UnityEngine::InstantiateParameters parameters,
                                                                                 ::System::IntPtr positions, int32_t positionsCount, ::System::IntPtr rotations, int32_t rotationsCount,
                                                                                 bool hasManagedCancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                       { "Internal_InstantiateAsyncWithParams",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InstantiateParameters>(),
                                           ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, original, count, parameters, positions, positionsCount, rotations, rotationsCount,
                                                               hasManagedCancellationToken);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Internal_InstantiateSingle(::UnityEngine::Object* data, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                          { "Internal_InstantiateSingle", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, data, pos, rot);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::Internal_InstantiateSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 pos,
                                                                                                 ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_InstantiateSingleWithParent",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, data, parent, pos, rot);
}
inline ::StringW UnityEngine::Object::ToString(::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "ToString", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline ::StringW UnityEngine::Object::GetName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "GetName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Object::IsPersistent(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "IsPersistent", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::Object::SetName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "SetName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline bool UnityEngine::Object::DoesObjectWithInstanceIDExist(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DoesObjectWithInstanceIDExist", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, instanceID);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::FindObjectFromInstanceID(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectFromInstanceID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, instanceID);
}
inline ::System::IntPtr UnityEngine::Object::GetPtrFromInstanceID(int32_t instanceID, ::System::Type* objectType, ::by_ref<bool> isMonoBehaviour) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                                           { "GetPtrFromInstanceID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instanceID, objectType, isMonoBehaviour);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Object::ForceLoadFromInstanceID(int32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "ForceLoadFromInstanceID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, instanceID);
}
inline void UnityEngine::Object::MarkDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "MarkDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Object::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Object::Destroy_Injected(::System::IntPtr obj, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Destroy_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, t);
}
inline void UnityEngine::Object::DestroyImmediate_Injected(::System::IntPtr obj, bool allowDestroyingAssets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DestroyImmediate_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, allowDestroyingAssets);
}
inline void UnityEngine::Object::DontDestroyOnLoad_Injected(::System::IntPtr target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "DontDestroyOnLoad_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
inline ::UnityEngine::HideFlags UnityEngine::Object::get_hideFlags_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "get_hideFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::HideFlags>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Object::set_hideFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::HideFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "set_hideFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::HideFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Object::Internal_CloneSingle_Injected(::System::IntPtr data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_CloneSingle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data);
}
inline ::System::IntPtr UnityEngine::Object::Internal_CloneSingleWithScene_Injected(::System::IntPtr data, ::by_ref<::UnityEngine::SceneManagement::Scene> scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                       { "Internal_CloneSingleWithScene_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, scene);
}
inline ::System::IntPtr UnityEngine::Object::Internal_CloneSingleWithParams_Injected(::System::IntPtr data, ::by_ref<::UnityEngine::InstantiateParameters> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                       { "Internal_CloneSingleWithParams_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::InstantiateParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, parameters);
}
inline ::System::IntPtr UnityEngine::Object::Internal_InstantiateSingleWithParams_Injected(::System::IntPtr data, ::by_ref<::UnityEngine::Vector3> position,
                                                                                           ::by_ref<::UnityEngine::Quaternion> rotation, ::by_ref<::UnityEngine::InstantiateParameters> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_InstantiateSingleWithParams_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::InstantiateParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, position, rotation, parameters);
}
inline ::System::IntPtr UnityEngine::Object::Internal_CloneSingleWithParent_Injected(::System::IntPtr data, ::System::IntPtr parent, bool worldPositionStays) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "Internal_CloneSingleWithParent_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, parent, worldPositionStays);
}
inline ::System::IntPtr UnityEngine::Object::Internal_InstantiateAsyncWithParams_Injected(::System::IntPtr original, int32_t count, ::by_ref<::UnityEngine::InstantiateParameters> parameters,
                                                                                          ::System::IntPtr positions, int32_t positionsCount, ::System::IntPtr rotations, int32_t rotationsCount,
                                                                                          bool hasManagedCancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                       { "Internal_InstantiateAsyncWithParams_Injected",
                                         {},
                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InstantiateParameters>>(),
                                           ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, original, count, parameters, positions, positionsCount, rotations, rotationsCount,
                                                               hasManagedCancellationToken);
}
inline ::System::IntPtr UnityEngine::Object::Internal_InstantiateSingle_Injected(::System::IntPtr data, ::by_ref<::UnityEngine::Vector3> pos, ::by_ref<::UnityEngine::Quaternion> rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "Internal_InstantiateSingle_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, pos, rot);
}
inline ::System::IntPtr UnityEngine::Object::Internal_InstantiateSingleWithParent_Injected(::System::IntPtr data, ::System::IntPtr parent, ::by_ref<::UnityEngine::Vector3> pos,
                                                                                           ::by_ref<::UnityEngine::Quaternion> rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "Internal_InstantiateSingleWithParent_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, parent, pos, rot);
}
inline void UnityEngine::Object::ToString_Injected(::System::IntPtr obj, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "ToString_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, ret);
}
inline void UnityEngine::Object::GetName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "GetName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::Object::IsPersistent_Injected(::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "IsPersistent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::Object::SetName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(),
                                              { "SetName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name);
}
inline ::System::IntPtr UnityEngine::Object::FindObjectFromInstanceID_Injected(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "FindObjectFromInstanceID_Injected", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instanceID);
}
inline ::System::IntPtr UnityEngine::Object::ForceLoadFromInstanceID_Injected(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "ForceLoadFromInstanceID_Injected", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instanceID);
}
inline void UnityEngine::Object::MarkDirty_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Object*>(), { "MarkDirty_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Object* UnityEngine::Object::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Object*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Object::Object() {}
