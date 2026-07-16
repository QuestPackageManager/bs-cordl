#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/ProBuilderShape.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__ProBuilderShape_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_shape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Shapes::Shape* (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6702698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67026a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.set_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::set_size)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67026ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_shapeRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shapeRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x670276c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shapeRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.set_shapeRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::set_shapeRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6702778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "set_shapeRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_shapeWorldCenter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shapeWorldCenter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6702784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shapeWorldCenter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_editionBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_editionBounds)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x67027b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_editionBounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_shapeLocalBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shapeLocalBounds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6702868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shapeLocalBounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_shapeWorldBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shapeWorldBounds)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x670289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shapeWorldBounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_isEditable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(&::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_isEditable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67028e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_isEditable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_mesh)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x670290c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(&::UnityEngine::ProBuilder::Shapes::ProBuilderShape::OnValidate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6702a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.UpdateShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(&::UnityEngine::ProBuilder::Shapes::ProBuilderShape::UpdateShape)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6702ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "UpdateShape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.UpdateBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::UpdateBounds)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6702d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "UpdateBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds)>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::Rebuild)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6702c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(),
                                         { "Rebuild", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)(::UnityEngine::Bounds, ::UnityEngine::Quaternion)>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::Rebuild)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6702f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(),
                                                             { "Rebuild", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(&::UnityEngine::ProBuilder::Shapes::ProBuilderShape::Rebuild)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6702e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "Rebuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.SetShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::SetShape)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6703020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "SetShape", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Shapes::Shape*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape.RotateInsideBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::ProBuilder::Shapes::ProBuilderShape::RotateInsideBounds)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6703130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "RotateInsideBounds", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ProBuilderShape._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ProBuilderShape::*)()>(&::UnityEngine::ProBuilder::Shapes::ProBuilderShape::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67032c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Shapes::Shape*& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_Shape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shape;
}
constexpr ::UnityEngine::ProBuilder::Shapes::Shape* const& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_Shape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shape;
}
constexpr void UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_set_m_Shape(::UnityEngine::ProBuilder::Shapes::Shape* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Shape = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_ShapeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_ShapeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapeRotation;
}
constexpr void UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_set_m_ShapeRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShapeRotation = value;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mesh = value;
}
constexpr uint16_t& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_UnmodifiedMeshVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnmodifiedMeshVersion;
}
constexpr uint16_t const& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_UnmodifiedMeshVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnmodifiedMeshVersion;
}
constexpr void UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_set_m_UnmodifiedMeshVersion(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnmodifiedMeshVersion = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr void UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_set_m_Size(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Size = value;
}
constexpr ::UnityEngine::Bounds& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_EditionBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditionBounds;
}
constexpr ::UnityEngine::Bounds const& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_EditionBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditionBounds;
}
constexpr void UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_set_m_EditionBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EditionBounds = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_LocalCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalCenter;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_get_m_LocalCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalCenter;
}
constexpr void UnityEngine::ProBuilder::Shapes::ProBuilderShape::__cordl_internal_set_m_LocalCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalCenter = value;
}
inline ::UnityEngine::ProBuilder::Shapes::Shape* UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shape() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Shapes::Shape*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::set_size(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shapeRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shapeRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::set_shapeRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "set_shapeRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shapeWorldCenter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shapeWorldCenter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_editionBounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_editionBounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shapeLocalBounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shapeLocalBounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_shapeWorldBounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_shapeWorldBounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_isEditable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_isEditable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::Shapes::ProBuilderShape::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::UpdateShape() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "UpdateShape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::UpdateBounds(::UnityEngine::Bounds bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "UpdateBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::Rebuild(::UnityEngine::Vector3 pivotPosition, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(),
                                              { "Rebuild", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pivotPosition, rotation, bounds);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::Rebuild(::UnityEngine::Bounds bounds, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(),
                                                                                         { "Rebuild", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, rotation);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "Rebuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::SetShape(::UnityEngine::ProBuilder::Shapes::Shape* shape) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "SetShape", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Shapes::Shape*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shape);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::RotateInsideBounds(::UnityEngine::Quaternion deltaRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { "RotateInsideBounds", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaRotation);
}
inline void UnityEngine::ProBuilder::Shapes::ProBuilderShape::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Shapes::ProBuilderShape* UnityEngine::ProBuilder::Shapes::ProBuilderShape::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Shapes::ProBuilderShape*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Shapes::ProBuilderShape::ProBuilderShape() {}
