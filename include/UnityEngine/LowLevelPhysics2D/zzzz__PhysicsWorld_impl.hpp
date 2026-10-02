#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsWorld.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLowLevelScripting2D_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsAABB_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType::PhysicsWorld_SimulationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType::PhysicsWorld_SimulationType() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType::FixedUpdate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType::Update{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType UnityEngine::LowLevelPhysics2D::PhysicsWorld_SimulationType::Script{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode::PhysicsWorld_TransformWriteMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode::PhysicsWorld_TransformWriteMode() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode::Off{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode::Fast2D{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode::Slow3D{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane::PhysicsWorld_TransformPlane(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane::PhysicsWorld_TransformPlane() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane::XY{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane::XZ{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane::ZY{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType::PhysicsWorld_DrawContactType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType::PhysicsWorld_DrawContactType() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType::Point{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType::AnchorA{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType::AnchorB{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawContactType::Average{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::PhysicsWorld_DrawOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::PhysicsWorld_DrawOptions() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::Off{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::SelectedBodies{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::SelectedShapes{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::SelectedShapeBounds{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::SelectedJoints{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllBodies{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllShapes{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllShapeBounds{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllJoints{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllContactPoints{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllContactNormal{ static_cast<int32_t>(0x200) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllContactImpulse{ static_cast<int32_t>(0x400) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllContactFriction{ static_cast<int32_t>(0x800) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllCustom{ static_cast<int32_t>(0x1000) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::AllSolverIslands{ static_cast<int32_t>(0x2000) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::DefaultAll{ static_cast<int32_t>(0x10a0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawOptions::DefaultSelected{ static_cast<int32_t>(0x100a) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions::PhysicsWorld_DrawFillOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions::PhysicsWorld_DrawFillOptions() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions::Interior{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions::Outline{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions::Orientation{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions::All{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement.Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement::Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd8164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement>(), { "Size", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement::Size() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement>(), { "Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "p0", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "p1", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam
// { name: "p2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "p3", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "p4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "p5", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "p6", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "p7", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elementDepth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "drawFillOptions", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty:
// "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement::DrawResults_PhysicsWorld_PolygonGeometryElement(
    ::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform, ::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::UnityEngine::Vector2 p4,
    ::UnityEngine::Vector2 p5, ::UnityEngine::Vector2 p6, ::UnityEngine::Vector2 p7, int32_t count, float_t radius, float_t elementDepth,
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions, ::UnityEngine::Color color) noexcept {
  this->transform = transform;
  this->p0 = p0;
  this->p1 = p1;
  this->p2 = p2;
  this->p3 = p3;
  this->p4 = p4;
  this->p5 = p5;
  this->p6 = p6;
  this->p7 = p7;
  this->count = count;
  this->radius = radius;
  this->elementDepth = elementDepth;
  this->drawFillOptions = drawFillOptions;
  this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement::DrawResults_PhysicsWorld_PolygonGeometryElement() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement.Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement::Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd816c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement>(), { "Size", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement::Size() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement>(), { "Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elementDepth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "drawFillOptions", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement::DrawResults_PhysicsWorld_CircleGeometryElement(
    ::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform, float_t radius, float_t elementDepth, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions,
    ::UnityEngine::Color color) noexcept {
  this->transform = transform;
  this->radius = radius;
  this->elementDepth = elementDepth;
  this->drawFillOptions = drawFillOptions;
  this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement::DrawResults_PhysicsWorld_CircleGeometryElement() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement.Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement::Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd8174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement>(), { "Size", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement::Size() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement>(), { "Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elementDepth",
// ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawFillOptions", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement::DrawResults_PhysicsWorld_CapsuleGeometryElement(
    ::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform, float_t radius, float_t length, float_t elementDepth, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawFillOptions drawFillOptions,
    ::UnityEngine::Color color) noexcept {
  this->transform = transform;
  this->radius = radius;
  this->length = length;
  this->elementDepth = elementDepth;
  this->drawFillOptions = drawFillOptions;
  this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement::DrawResults_PhysicsWorld_CapsuleGeometryElement() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement.Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement::Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd817c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement>(), { "Size", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement::Size() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement>(), { "Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elementDepth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color",
// ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement::DrawResults_PhysicsWorld_LineElement(::UnityEngine::LowLevelPhysics2D::PhysicsTransform transform, float_t length,
                                                                                                                       float_t elementDepth, ::UnityEngine::Color color) noexcept {
  this->transform = transform;
  this->length = length;
  this->elementDepth = elementDepth;
  this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement::DrawResults_PhysicsWorld_LineElement() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement.Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement::Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd8184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement>(), { "Size", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement::Size() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement>(), { "Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "elementDepth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement::DrawResults_PhysicsWorld_PointElement(::UnityEngine::Vector2 position, float_t radius, float_t elementDepth,
                                                                                                                         ::UnityEngine::Color color) noexcept {
  this->position = position;
  this->radius = radius;
  this->elementDepth = elementDepth;
  this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement::DrawResults_PhysicsWorld_PointElement() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6fd7df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults.get_polygonGeometryArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_polygonGeometryArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd7fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_polygonGeometryArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults.get_circleGeometryArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_circleGeometryArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd8034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_circleGeometryArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults.get_capsuleGeometryArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_capsuleGeometryArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd8080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_capsuleGeometryArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults.get_lineArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_lineArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd80cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_lineArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults.get_pointArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_pointArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd8118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_pointArray", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement>
UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_polygonGeometryArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_polygonGeometryArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PolygonGeometryElement>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement>
UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_circleGeometryArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_circleGeometryArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CircleGeometryElement>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement>
UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_capsuleGeometryArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_capsuleGeometryArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_CapsuleGeometryElement>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement> UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_lineArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_lineArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_LineElement>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement> UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::get_pointArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults>(), { "get_pointArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::DrawResults_PhysicsWorld_PointElement>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PolygonGeometryElements", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "m_CircleGeometryElements", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "m_CapsuleGeometryElements", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_LineElements", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PointElements", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::PhysicsWorld_DrawResults(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_PolygonGeometryElements,
                                                                                               ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_CircleGeometryElements,
                                                                                               ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_CapsuleGeometryElements,
                                                                                               ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_LineElements,
                                                                                               ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_PointElements) noexcept {
  this->m_PolygonGeometryElements = m_PolygonGeometryElements;
  this->m_CircleGeometryElements = m_CircleGeometryElements;
  this->m_CapsuleGeometryElements = m_CapsuleGeometryElements;
  this->m_LineElements = m_LineElements;
  this->m_PointElements = m_PointElements;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults::PhysicsWorld_DrawResults() {}
// Ctor Parameters [CppParam { name: "graphConstraint0", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint1", ty:
// "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint2", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "graphConstraint3", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint4", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint5", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "graphConstraint6", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint7", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "graphConstraint8", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint9", ty:
// "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint10", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "graphConstraint11", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint12", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint13", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "graphConstraint14", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint15", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "graphConstraint16", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint17", ty:
// "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint18", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "graphConstraint19", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint20", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint21", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "graphConstraint22", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "graphConstraint23", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray::DrawColors_PhysicsWorld_ConstraintGraphArray(
    ::UnityEngine::Color graphConstraint0, ::UnityEngine::Color graphConstraint1, ::UnityEngine::Color graphConstraint2, ::UnityEngine::Color graphConstraint3, ::UnityEngine::Color graphConstraint4,
    ::UnityEngine::Color graphConstraint5, ::UnityEngine::Color graphConstraint6, ::UnityEngine::Color graphConstraint7, ::UnityEngine::Color graphConstraint8, ::UnityEngine::Color graphConstraint9,
    ::UnityEngine::Color graphConstraint10, ::UnityEngine::Color graphConstraint11, ::UnityEngine::Color graphConstraint12, ::UnityEngine::Color graphConstraint13,
    ::UnityEngine::Color graphConstraint14, ::UnityEngine::Color graphConstraint15, ::UnityEngine::Color graphConstraint16, ::UnityEngine::Color graphConstraint17,
    ::UnityEngine::Color graphConstraint18, ::UnityEngine::Color graphConstraint19, ::UnityEngine::Color graphConstraint20, ::UnityEngine::Color graphConstraint21,
    ::UnityEngine::Color graphConstraint22, ::UnityEngine::Color graphConstraint23) noexcept {
  this->graphConstraint0 = graphConstraint0;
  this->graphConstraint1 = graphConstraint1;
  this->graphConstraint2 = graphConstraint2;
  this->graphConstraint3 = graphConstraint3;
  this->graphConstraint4 = graphConstraint4;
  this->graphConstraint5 = graphConstraint5;
  this->graphConstraint6 = graphConstraint6;
  this->graphConstraint7 = graphConstraint7;
  this->graphConstraint8 = graphConstraint8;
  this->graphConstraint9 = graphConstraint9;
  this->graphConstraint10 = graphConstraint10;
  this->graphConstraint11 = graphConstraint11;
  this->graphConstraint12 = graphConstraint12;
  this->graphConstraint13 = graphConstraint13;
  this->graphConstraint14 = graphConstraint14;
  this->graphConstraint15 = graphConstraint15;
  this->graphConstraint16 = graphConstraint16;
  this->graphConstraint17 = graphConstraint17;
  this->graphConstraint18 = graphConstraint18;
  this->graphConstraint19 = graphConstraint19;
  this->graphConstraint20 = graphConstraint20;
  this->graphConstraint21 = graphConstraint21;
  this->graphConstraint22 = graphConstraint22;
  this->graphConstraint23 = graphConstraint23;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray::DrawColors_PhysicsWorld_ConstraintGraphArray() {}
// Ctor Parameters [CppParam { name: "transformAxisX", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transformAxisY", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyBad", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "bodyDisabled", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyAwake", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "bodyStatic", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyKinematic", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyTimeOfImpactEvent", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "bodyFastCollisions", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyMovingFast", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "bodySpeedCapped", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shapeTrigger", ty:
// "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shapeOther", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "shapeBounds", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contactSpeculative", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "contactAdded", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contactPersisted", ty:
// "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contactNormal", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "contactImpulse", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contactFriction", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "solverIsland", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ConstraintGraph", ty:
// "::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors::PhysicsWorld_DrawColors(
    ::UnityEngine::Color transformAxisX, ::UnityEngine::Color transformAxisY, ::UnityEngine::Color bodyBad, ::UnityEngine::Color bodyDisabled, ::UnityEngine::Color bodyAwake,
    ::UnityEngine::Color bodyStatic, ::UnityEngine::Color bodyKinematic, ::UnityEngine::Color bodyTimeOfImpactEvent, ::UnityEngine::Color bodyFastCollisions, ::UnityEngine::Color bodyMovingFast,
    ::UnityEngine::Color bodySpeedCapped, ::UnityEngine::Color shapeTrigger, ::UnityEngine::Color shapeOther, ::UnityEngine::Color shapeBounds, ::UnityEngine::Color contactSpeculative,
    ::UnityEngine::Color contactAdded, ::UnityEngine::Color contactPersisted, ::UnityEngine::Color contactNormal, ::UnityEngine::Color contactImpulse, ::UnityEngine::Color contactFriction,
    ::UnityEngine::Color solverIsland, ::UnityEngine::LowLevelPhysics2D::DrawColors_PhysicsWorld_ConstraintGraphArray m_ConstraintGraph) noexcept {
  this->transformAxisX = transformAxisX;
  this->transformAxisY = transformAxisY;
  this->bodyBad = bodyBad;
  this->bodyDisabled = bodyDisabled;
  this->bodyAwake = bodyAwake;
  this->bodyStatic = bodyStatic;
  this->bodyKinematic = bodyKinematic;
  this->bodyTimeOfImpactEvent = bodyTimeOfImpactEvent;
  this->bodyFastCollisions = bodyFastCollisions;
  this->bodyMovingFast = bodyMovingFast;
  this->bodySpeedCapped = bodySpeedCapped;
  this->shapeTrigger = shapeTrigger;
  this->shapeOther = shapeOther;
  this->shapeBounds = shapeBounds;
  this->contactSpeculative = contactSpeculative;
  this->contactAdded = contactAdded;
  this->contactPersisted = contactPersisted;
  this->contactNormal = contactNormal;
  this->contactImpulse = contactImpulse;
  this->contactFriction = contactFriction;
  this->solverIsland = solverIsland;
  this->m_ConstraintGraph = m_ConstraintGraph;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawColors::PhysicsWorld_DrawColors() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6fd7b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)(::System::Object*)>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6fd7c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsWorld::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6fd7cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fd7d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.get_bypassLowLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::get_bypassLowLevel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6fd7d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "get_bypassLowLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.get_isRenderingAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::get_isRenderingAllowed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6fd7dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "get_isRenderingAllowed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::get_isValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6fd7c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.SetTransformWriteTweens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)(
    ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>)>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::SetTransformWriteTweens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd7de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(),
                                                { "SetTransformWriteTweens", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.SendBodyUpdateCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::SendBodyUpdateCallbacks)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6fd661c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "SendBodyUpdateCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.SendContactCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::SendContactCallbacks)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6fd6828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "SendContactCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.SendTriggerCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::SendTriggerCallbacks)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x6fd6c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "SendTriggerCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.SendJointThresholdCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsWorld::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::SendJointThresholdCallbacks)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6fd6fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "SendJointThresholdCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsWorld.DrawAllWorlds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsAABB)>(&::UnityEngine::LowLevelPhysics2D::PhysicsWorld::DrawAllWorlds)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fd7df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(),
                                                                                           { "DrawAllWorlds", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsWorld::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorld::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorld::Equals(::UnityEngine::LowLevelPhysics2D::PhysicsWorld other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::LowLevelPhysics2D::PhysicsWorld::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorld::get_bypassLowLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "get_bypassLowLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorld::get_isRenderingAllowed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "get_isRenderingAllowed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsWorld::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorld::SetTransformWriteTweens(::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> transformWriteTweens) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(),
                                              { "SetTransformWriteTweens", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transformWriteTweens);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorld::SendBodyUpdateCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "SendBodyUpdateCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorld::SendContactCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "SendContactCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorld::SendTriggerCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "SendTriggerCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorld::SendJointThresholdCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), { "SendJointThresholdCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsWorld::DrawAllWorlds(::UnityEngine::LowLevelPhysics2D::PhysicsAABB drawAABB) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(),
                                                                                         { "DrawAllWorlds", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, drawAABB);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsWorld::operator ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>"
constexpr ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>*
UnityEngine::LowLevelPhysics2D::PhysicsWorld::i___System__IEquatable_1___UnityEngine__LowLevelPhysics2D__PhysicsWorld_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Index1", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Generation", ty: "uint16_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld::PhysicsWorld(uint16_t m_Index1, uint16_t m_Generation) noexcept {
  this->m_Index1 = m_Index1;
  this->m_Generation = m_Generation;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorld::PhysicsWorld() {}
