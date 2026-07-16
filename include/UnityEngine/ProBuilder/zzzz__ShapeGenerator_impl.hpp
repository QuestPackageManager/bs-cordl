#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ShapeGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ShapeGenerator_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Axis_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PivotLocation_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ShapeType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.CreateShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::ShapeType, ::UnityEngine::ProBuilder::PivotLocation)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::CreateShape)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x66e482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                { "CreateShape", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ShapeType>(), ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateStair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3, int32_t, bool)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GenerateStair)> {
  constexpr static std::size_t size = 0x96c;
  constexpr static std::size_t addrs = 0x66e4fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
            { "GenerateStair", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateCurvedStair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, float_t, float_t, float_t, float_t, int32_t,
                                                                                                               bool)>(&::UnityEngine::ProBuilder::ShapeGenerator::GenerateCurvedStair)> {
  constexpr static std::size_t size = 0xd90;
  constexpr static std::size_t addrs = 0x66e590c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "GenerateCurvedStair",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateStair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, int32_t, float_t, float_t, float_t, bool, bool,
                                                                                                               bool)>(&::UnityEngine::ProBuilder::ShapeGenerator::GenerateStair)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x66ebb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "GenerateStair",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateCube
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GenerateCube)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x66e4d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "GenerateCube", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateCylinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, int32_t, float_t, float_t, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GenerateCylinder)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x66e6cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "GenerateCylinder",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GeneratePrism
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GeneratePrism)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x66e669c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "GeneratePrism", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateDoor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, float_t, float_t, float_t, float_t, float_t)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GenerateDoor)> {
  constexpr static std::size_t size = 0x1594;
  constexpr static std::size_t addrs = 0x66e7b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "GenerateDoor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GeneratePlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::UnityEngine::ProBuilder::PivotLocation, float_t, float_t, int32_t, int32_t, ::UnityEngine::ProBuilder::Axis)>(&::UnityEngine::ProBuilder::ShapeGenerator::GeneratePlane)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x66e758c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "GeneratePlane",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::Axis>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GeneratePipe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, float_t, float_t, float_t, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GeneratePipe)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x66e911c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "GeneratePipe",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateCone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, float_t, float_t, int32_t)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GenerateCone)> {
  constexpr static std::size_t size = 0xa18;
  constexpr static std::size_t addrs = 0x66e9848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                            { "GenerateCone", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateArch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::UnityEngine::ProBuilder::PivotLocation, float_t, float_t, float_t, float_t, int32_t, bool, bool, bool, bool, bool)>(&::UnityEngine::ProBuilder::ShapeGenerator::GenerateArch)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x66ea260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                            { "GenerateArch",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateIcosahedron
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, float_t, int32_t, bool, bool)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GenerateIcosahedron)> {
  constexpr static std::size_t size = 0xaa8;
  constexpr static std::size_t addrs = 0x66eaa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                            { "GenerateIcosahedron",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.SubdivideIcosahedron
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::ArrayW<::UnityEngine::Vector3>, float_t)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::SubdivideIcosahedron)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x66ec2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                             { "SubdivideIcosahedron", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GetCirclePoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(int32_t, float_t, float_t, ::UnityEngine::Quaternion, float_t)>(
    &::UnityEngine::ProBuilder::ShapeGenerator::GetCirclePoints)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x66ece18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
            { "GetCirclePoints", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeGenerator.GenerateTorus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::PivotLocation, int32_t, int32_t, float_t, float_t, bool,
                                                                                                               float_t, float_t, bool)>(&::UnityEngine::ProBuilder::ShapeGenerator::GenerateTorus)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x66eb4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                { "GenerateTorus",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::ShapeGenerator::setStaticF_k_IcosphereVertices(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "k_IcosphereVertices", ::UnityEngine::ProBuilder::ShapeGenerator*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::ShapeGenerator::getStaticF_k_IcosphereVertices() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "k_IcosphereVertices", ::UnityEngine::ProBuilder::ShapeGenerator*>();
}
inline void UnityEngine::ProBuilder::ShapeGenerator::setStaticF_k_IcosphereTriangles(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "k_IcosphereTriangles", ::UnityEngine::ProBuilder::ShapeGenerator*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::ShapeGenerator::getStaticF_k_IcosphereTriangles() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "k_IcosphereTriangles", ::UnityEngine::ProBuilder::ShapeGenerator*>();
}
inline void UnityEngine::ProBuilder::ShapeGenerator::setStaticF_k_CubeVertices(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "k_CubeVertices", ::UnityEngine::ProBuilder::ShapeGenerator*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::ShapeGenerator::getStaticF_k_CubeVertices() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "k_CubeVertices", ::UnityEngine::ProBuilder::ShapeGenerator*>();
}
inline void UnityEngine::ProBuilder::ShapeGenerator::setStaticF_k_CubeTriangles(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "k_CubeTriangles", ::UnityEngine::ProBuilder::ShapeGenerator*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::ShapeGenerator::getStaticF_k_CubeTriangles() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "k_CubeTriangles", ::UnityEngine::ProBuilder::ShapeGenerator*>();
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::CreateShape(::UnityEngine::ProBuilder::ShapeType shape,
                                                                                                                ::UnityEngine::ProBuilder::PivotLocation pivotType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                              { "CreateShape", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ShapeType>(), ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, shape, pivotType);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateStair(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size,
                                                                                                                  int32_t steps, bool buildSides) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
          { "GenerateStair", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, size, steps, buildSides);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateCurvedStair(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t stairWidth,
                                                                                                                        float_t height, float_t innerRadius, float_t circumference, int32_t steps,
                                                                                                                        bool buildSides) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "GenerateCurvedStair",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, stairWidth, height, innerRadius, circumference, steps,
                                                                                                  buildSides);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateStair(::UnityEngine::ProBuilder::PivotLocation pivotType, int32_t steps, float_t width,
                                                                                                                  float_t height, float_t depth, bool sidesGoToFloor, bool generateBack,
                                                                                                                  bool platformsOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "GenerateStair",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, steps, width, height, depth, sidesGoToFloor, generateBack,
                                                                                                  platformsOnly);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateCube(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "GenerateCube", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, size);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateCylinder(::UnityEngine::ProBuilder::PivotLocation pivotType, int32_t axisDivisions,
                                                                                                                     float_t radius, float_t height, int32_t heightCuts, int32_t smoothing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "GenerateCylinder",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, axisDivisions, radius, height, heightCuts, smoothing);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GeneratePrism(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "GeneratePrism", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, size);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateDoor(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t totalWidth,
                                                                                                                 float_t totalHeight, float_t ledgeHeight, float_t legWidth, float_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "GenerateDoor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, totalWidth, totalHeight, ledgeHeight, legWidth, depth);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GeneratePlane(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t width, float_t height,
                                                                                                                  int32_t widthCuts, int32_t heightCuts, ::UnityEngine::ProBuilder::Axis axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "GeneratePlane",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::Axis>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, width, height, widthCuts, heightCuts, axis);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GeneratePipe(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius, float_t height,
                                                                                                                 float_t thickness, int32_t subdivAxis, int32_t subdivHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "GeneratePipe",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, radius, height, thickness, subdivAxis, subdivHeight);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateCone(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius, float_t height,
                                                                                                                 int32_t subdivAxis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                          { "GenerateCone", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, radius, height, subdivAxis);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateArch(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t angle, float_t radius,
                                                                                                                 float_t width, float_t depth, int32_t radialCuts, bool insideFaces, bool outsideFaces,
                                                                                                                 bool frontFaces, bool backFaces, bool endCaps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                          { "GenerateArch",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, angle, radius, width, depth, radialCuts, insideFaces,
                                                                                                  outsideFaces, frontFaces, backFaces, endCaps);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateIcosahedron(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius,
                                                                                                                        int32_t subdivisions, bool weldVertices, bool manualUvs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(), { "GenerateIcosahedron",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, radius, subdivisions, weldVertices, manualUvs);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::ShapeGenerator::SubdivideIcosahedron(::ArrayW<::UnityEngine::Vector3> vertices, float_t radius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                                           { "SubdivideIcosahedron", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, vertices, radius);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::ShapeGenerator::GetCirclePoints(int32_t segments, float_t radius, float_t circumference, ::UnityEngine::Quaternion rotation,
                                                                                                 float_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
          { "GetCirclePoints", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, segments, radius, circumference, rotation, offset);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeGenerator::GenerateTorus(::UnityEngine::ProBuilder::PivotLocation pivotType, int32_t rows, int32_t columns,
                                                                                                                  float_t innerRadius, float_t outerRadius, bool smooth,
                                                                                                                  float_t horizontalCircumference, float_t verticalCircumference, bool manualUvs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeGenerator*>(),
                                              { "GenerateTorus",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType, rows, columns, innerRadius, outerRadius, smooth,
                                                                                                  horizontalCircumference, verticalCircumference, manualUvs);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ShapeGenerator::ShapeGenerator() {}
