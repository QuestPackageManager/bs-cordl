#pragma once
// IWYU pragma private; include "UnityEngine/MeshCollider.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__MeshColliderCookingOptions_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::MeshCollider.get_sharedMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::MeshCollider::*)()>(&::UnityEngine::MeshCollider::get_sharedMesh)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6ffe188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_sharedMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.set_sharedMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshCollider::*)(::UnityEngine::Mesh*)>(&::UnityEngine::MeshCollider::set_sharedMesh)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6ffe314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_sharedMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.get_convex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::MeshCollider::*)()>(&::UnityEngine::MeshCollider::get_convex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ffe418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_convex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.set_convex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshCollider::*)(bool)>(&::UnityEngine::MeshCollider::set_convex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ffe4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_convex", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.get_cookingOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshColliderCookingOptions (::UnityEngine::MeshCollider::*)()>(&::UnityEngine::MeshCollider::get_cookingOptions)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ffe5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_cookingOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.set_cookingOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshCollider::*)(::UnityEngine::MeshColliderCookingOptions)>(&::UnityEngine::MeshCollider::set_cookingOptions)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ffe664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_cookingOptions", {}, { ::i2c::type_of<::UnityEngine::MeshColliderCookingOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MeshCollider::*)()>(&::UnityEngine::MeshCollider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ffe738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.get_sharedMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::MeshCollider::get_sharedMesh_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ffe2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_sharedMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.set_sharedMesh_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::MeshCollider::set_sharedMesh_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ffe3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_sharedMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.get_convex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::MeshCollider::get_convex_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ffe498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_convex_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.set_convex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::MeshCollider::set_convex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ffe564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_convex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.get_cookingOptions_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshColliderCookingOptions (*)(::System::IntPtr)>(&::UnityEngine::MeshCollider::get_cookingOptions_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ffe628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_cookingOptions_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshCollider.set_cookingOptions_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::MeshColliderCookingOptions)>(&::UnityEngine::MeshCollider::set_cookingOptions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ffe6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(),
                                                { "set_cookingOptions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::MeshColliderCookingOptions>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::MeshCollider::get_sharedMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_sharedMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::MeshCollider::set_sharedMesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_sharedMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::MeshCollider::get_convex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_convex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::MeshCollider::set_convex(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_convex", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::MeshColliderCookingOptions UnityEngine::MeshCollider::get_cookingOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_cookingOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshColliderCookingOptions>(this, ___internal_method);
}
inline void UnityEngine::MeshCollider::set_cookingOptions(::UnityEngine::MeshColliderCookingOptions value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_cookingOptions", {}, { ::i2c::type_of<::UnityEngine::MeshColliderCookingOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::MeshCollider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::MeshCollider::get_sharedMesh_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_sharedMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::MeshCollider::set_sharedMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_sharedMesh_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::MeshCollider::get_convex_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_convex_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::MeshCollider::set_convex_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "set_convex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::MeshColliderCookingOptions UnityEngine::MeshCollider::get_cookingOptions_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(), { "get_cookingOptions_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshColliderCookingOptions>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::MeshCollider::set_cookingOptions_Injected(::System::IntPtr _unity_self, ::UnityEngine::MeshColliderCookingOptions value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MeshCollider*>(),
                                              { "set_cookingOptions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::MeshColliderCookingOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::MeshCollider* UnityEngine::MeshCollider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::MeshCollider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::MeshCollider::MeshCollider() {}
