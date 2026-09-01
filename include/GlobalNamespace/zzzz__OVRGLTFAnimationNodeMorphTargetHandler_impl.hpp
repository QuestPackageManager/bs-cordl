#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRGLTFAnimationNodeMorphTargetHandler.hpp"
#include "GlobalNamespace/zzzz__OVRMeshAttributes_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimationNodeMorphTargetHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)(::GlobalNamespace::OVRMeshData)>(
    &::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e51268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRMeshData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)()>(&::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::Update)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5e51314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler.MarkModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)()>(
    &::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::MarkModified)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e51598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(), { "MarkModified", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRMeshData& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__meshData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshData;
}
constexpr ::GlobalNamespace::OVRMeshData const& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__meshData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshData;
}
constexpr void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_set__meshData(::GlobalNamespace::OVRMeshData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshData = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get_Weights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Weights;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get_Weights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Weights;
}
constexpr void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_set_Weights(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Weights = value;
}
constexpr bool& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__modified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modified;
}
constexpr bool const& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__modified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modified;
}
constexpr void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_set__modified(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modified = value;
}
constexpr ::GlobalNamespace::OVRMeshAttributes& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__meshModifiableData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshModifiableData;
}
constexpr ::GlobalNamespace::OVRMeshAttributes const& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__meshModifiableData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshModifiableData;
}
constexpr void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_set__meshModifiableData(::GlobalNamespace::OVRMeshAttributes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshModifiableData = value;
}
inline void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::_ctor(::GlobalNamespace::OVRMeshData meshData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRMeshData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshData);
}
inline void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::MarkModified() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(), { "MarkModified", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::New_ctor(::GlobalNamespace::OVRMeshData meshData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(meshData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::OVRGLTFAnimationNodeMorphTargetHandler() {}
