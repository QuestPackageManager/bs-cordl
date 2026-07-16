#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugShapes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugShapes_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugShapes* (*)()>(&::UnityEngine::Rendering::DebugShapes::get_instance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6762308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.BuildSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugShapes::*)(::by_ref<::UnityEngine::Mesh*>, float_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::DebugShapes::BuildSphere)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x676237c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
                            { "BuildSphere", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.BuildBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugShapes::*)(::by_ref<::UnityEngine::Mesh*>, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::DebugShapes::BuildBox)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x6762a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
                                         { "BuildBox", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.BuildCone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugShapes::*)(::by_ref<::UnityEngine::Mesh*>, float_t, float_t, float_t, int32_t)>(
    &::UnityEngine::Rendering::DebugShapes::BuildCone)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x6763250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
            { "BuildCone", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.BuildPyramid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugShapes::*)(::by_ref<::UnityEngine::Mesh*>, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::DebugShapes::BuildPyramid)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6763b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
                            { "BuildPyramid", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.BuildShapes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugShapes::*)()>(&::UnityEngine::Rendering::DebugShapes::BuildShapes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6763e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "BuildShapes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.RebuildResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugShapes::*)()>(&::UnityEngine::Rendering::DebugShapes::RebuildResources)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6763f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RebuildResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.RequestSphereMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::DebugShapes::*)()>(&::UnityEngine::Rendering::DebugShapes::RequestSphereMesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6764060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RequestSphereMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.BuildCustomSphereMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::DebugShapes::*)(float_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::DebugShapes::BuildCustomSphereMesh)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6764078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
                                                             { "BuildCustomSphereMesh", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.RequestBoxMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::DebugShapes::*)()>(&::UnityEngine::Rendering::DebugShapes::RequestBoxMesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676410c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RequestBoxMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.RequestConeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::DebugShapes::*)()>(&::UnityEngine::Rendering::DebugShapes::RequestConeMesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6764124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RequestConeMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes.RequestPyramidMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::DebugShapes::*)()>(&::UnityEngine::Rendering::DebugShapes::RequestPyramidMesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x676413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RequestPyramidMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugShapes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugShapes::*)()>(&::UnityEngine::Rendering::DebugShapes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6762378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::DebugShapes::__cordl_internal_get_m_sphereMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_sphereMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::DebugShapes::__cordl_internal_get_m_sphereMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_sphereMesh;
}
constexpr void UnityEngine::Rendering::DebugShapes::__cordl_internal_set_m_sphereMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_sphereMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::DebugShapes::__cordl_internal_get_m_boxMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_boxMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::DebugShapes::__cordl_internal_get_m_boxMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_boxMesh;
}
constexpr void UnityEngine::Rendering::DebugShapes::__cordl_internal_set_m_boxMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_boxMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::DebugShapes::__cordl_internal_get_m_coneMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_coneMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::DebugShapes::__cordl_internal_get_m_coneMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_coneMesh;
}
constexpr void UnityEngine::Rendering::DebugShapes::__cordl_internal_set_m_coneMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_coneMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::DebugShapes::__cordl_internal_get_m_pyramidMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pyramidMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::DebugShapes::__cordl_internal_get_m_pyramidMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pyramidMesh;
}
constexpr void UnityEngine::Rendering::DebugShapes::__cordl_internal_set_m_pyramidMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_pyramidMesh = value;
}
inline void UnityEngine::Rendering::DebugShapes::setStaticF_s_Instance(::UnityEngine::Rendering::DebugShapes* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DebugShapes*, "s_Instance", ::UnityEngine::Rendering::DebugShapes*>(std::forward<::UnityEngine::Rendering::DebugShapes*>(value));
}
inline ::UnityEngine::Rendering::DebugShapes* UnityEngine::Rendering::DebugShapes::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DebugShapes*, "s_Instance", ::UnityEngine::Rendering::DebugShapes*>();
}
inline ::UnityEngine::Rendering::DebugShapes* UnityEngine::Rendering::DebugShapes::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugShapes*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::DebugShapes::BuildSphere(::by_ref<::UnityEngine::Mesh*> outputMesh, float_t radius, uint32_t longSubdiv, uint32_t latSubdiv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
                          { "BuildSphere", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputMesh, radius, longSubdiv, latSubdiv);
}
inline void UnityEngine::Rendering::DebugShapes::BuildBox(::by_ref<::UnityEngine::Mesh*> outputMesh, float_t length, float_t width, float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
                                       { "BuildBox", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputMesh, length, width, height);
}
inline void UnityEngine::Rendering::DebugShapes::BuildCone(::by_ref<::UnityEngine::Mesh*> outputMesh, float_t height, float_t topRadius, float_t bottomRadius, int32_t nbSides) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
          { "BuildCone", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputMesh, height, topRadius, bottomRadius, nbSides);
}
inline void UnityEngine::Rendering::DebugShapes::BuildPyramid(::by_ref<::UnityEngine::Mesh*> outputMesh, float_t width, float_t height, float_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
                                       { "BuildPyramid", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputMesh, width, height, depth);
}
inline void UnityEngine::Rendering::DebugShapes::BuildShapes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "BuildShapes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugShapes::RebuildResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RebuildResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::DebugShapes::RequestSphereMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RequestSphereMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::DebugShapes::BuildCustomSphereMesh(float_t radius, uint32_t longSubdiv, uint32_t latSubdiv) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(),
                                                           { "BuildCustomSphereMesh", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method, radius, longSubdiv, latSubdiv);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::DebugShapes::RequestBoxMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RequestBoxMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::DebugShapes::RequestConeMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RequestConeMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::DebugShapes::RequestPyramidMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { "RequestPyramidMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugShapes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugShapes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugShapes* UnityEngine::Rendering::DebugShapes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugShapes*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugShapes::DebugShapes() {}
