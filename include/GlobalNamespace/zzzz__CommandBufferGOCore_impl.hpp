#pragma once
// IWYU pragma private; include "GlobalNamespace/CommandBufferGOCore.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CommandBufferGOCore_def.hpp"
#include "GlobalNamespace/zzzz__CommandBufferOwners_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGOCore.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBufferGOCore::*)()>(&::GlobalNamespace::CommandBufferGOCore::OnEnable)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5f3f234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGOCore.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBufferGOCore::*)()>(&::GlobalNamespace::CommandBufferGOCore::OnDisable)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5f3f63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGOCore.OnWillRenderObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBufferGOCore::*)()>(&::GlobalNamespace::CommandBufferGOCore::OnWillRenderObject)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5f3fb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGOCore.CommandBufferCameraEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CameraEvent (::GlobalNamespace::CommandBufferGOCore::*)()>(
    &::GlobalNamespace::CommandBufferGOCore::CommandBufferCameraEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGOCore.CreateCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::GlobalNamespace::CommandBufferGOCore::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::CommandBufferGOCore::CreateCommandBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGOCore.CamerasDict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* (
    ::GlobalNamespace::CommandBufferGOCore::*)()>(&::GlobalNamespace::CommandBufferGOCore::CamerasDict)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { ::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGOCore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBufferGOCore::*)()>(&::GlobalNamespace::CommandBufferGOCore::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f3edd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*&
GlobalNamespace::CommandBufferGOCore::__cordl_internal_get__cameras() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameras;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* const&
GlobalNamespace::CommandBufferGOCore::__cordl_internal_get__cameras() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameras;
}
constexpr void
GlobalNamespace::CommandBufferGOCore::__cordl_internal_set__cameras(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameras = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::CommandBufferGOCore::__cordl_internal_get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::CommandBufferGOCore::__cordl_internal_get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void GlobalNamespace::CommandBufferGOCore::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mesh = value;
}
inline void GlobalNamespace::CommandBufferGOCore::setStaticF__material(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "_material", ::GlobalNamespace::CommandBufferGOCore*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::CommandBufferGOCore::getStaticF__material() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "_material", ::GlobalNamespace::CommandBufferGOCore*>();
}
inline void GlobalNamespace::CommandBufferGOCore::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CommandBufferGOCore::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CommandBufferGOCore::OnWillRenderObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferGOCore::CommandBufferCameraEvent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CameraEvent>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::CommandBufferGOCore::CreateCommandBuffer(::UnityEngine::Camera* camera) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method, camera);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferGOCore::CamerasDict() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>*>(this, ___internal_method);
}
inline void GlobalNamespace::CommandBufferGOCore::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CommandBufferGOCore*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CommandBufferGOCore* GlobalNamespace::CommandBufferGOCore::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CommandBufferGOCore*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBufferGOCore::CommandBufferGOCore() {}
