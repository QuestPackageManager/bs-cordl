#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ShapeFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ShapeFactory_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PivotLocation_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeFactory.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::System::Type*, ::UnityEngine::ProBuilder::PivotLocation)>(
    &::UnityEngine::ProBuilder::ShapeFactory::Instantiate)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x66e4384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeFactory*>(),
                                                             { "Instantiate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeFactory.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(
    &::UnityEngine::ProBuilder::ShapeFactory::Instantiate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x66e45ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeFactory*>(), { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Shapes::Shape*>() } })));
    return ___internal_method;
  }
};
template <typename T> inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeFactory::Instantiate(::UnityEngine::ProBuilder::PivotLocation pivotType) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeFactory*>(), { "Instantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, pivotType);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeFactory::Instantiate(::System::Type* shapeType, ::UnityEngine::ProBuilder::PivotLocation pivotType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeFactory*>(),
                                                           { "Instantiate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ProBuilder::PivotLocation>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, shapeType, pivotType);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ShapeFactory::Instantiate(::UnityEngine::ProBuilder::Shapes::Shape* shape) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ShapeFactory*>(), { "Instantiate", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Shapes::Shape*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, shape);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ShapeFactory::ShapeFactory() {}
