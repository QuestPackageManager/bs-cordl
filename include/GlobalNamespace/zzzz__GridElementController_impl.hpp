#pragma once
// IWYU pragma private; include "GlobalNamespace\GridElementController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GridElementController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GridElementController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridElementController::*)()>(&::GlobalNamespace::GridElementController::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4f440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridElementController.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridElementController::*)()>(&::GlobalNamespace::GridElementController::Initialize)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f4f444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridElementController.ConvertPositionToObjectSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GridElementController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::GridElementController::ConvertPositionToObjectSpace)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f4f5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { "ConvertPositionToObjectSpace", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridElementController.SetGridMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridElementController::*)(::UnityEngine::Material*)>(&::GlobalNamespace::GridElementController::SetGridMaterial)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f4f604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { "SetGridMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridElementController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridElementController::*)()>(&::GlobalNamespace::GridElementController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f4f62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GridElementController::__cordl_internal_get__gridPivotAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridPivotAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GridElementController::__cordl_internal_get__gridPivotAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridPivotAnchor;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__gridPivotAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gridPivotAnchor = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::GridElementController::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::GridElementController::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GridElementController::__cordl_internal_get__gridElementRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridElementRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GridElementController::__cordl_internal_get__gridElementRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridElementRenderer;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__gridElementRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gridElementRenderer = value;
}
constexpr ::StringW& GlobalNamespace::GridElementController::__cordl_internal_get__gridPivotPropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridPivotPropertyName;
}
constexpr ::StringW const& GlobalNamespace::GridElementController::__cordl_internal_get__gridPivotPropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridPivotPropertyName;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__gridPivotPropertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gridPivotPropertyName = value;
}
constexpr ::StringW& GlobalNamespace::GridElementController::__cordl_internal_get__gridElementIndexPropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridElementIndexPropertyName;
}
constexpr ::StringW const& GlobalNamespace::GridElementController::__cordl_internal_get__gridElementIndexPropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridElementIndexPropertyName;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__gridElementIndexPropertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gridElementIndexPropertyName = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GridElementController::__cordl_internal_get__idVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GridElementController::__cordl_internal_get__idVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idVector;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__idVector(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idVector = value;
}
constexpr int32_t& GlobalNamespace::GridElementController::__cordl_internal_get__gridPivotPropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridPivotPropertyId;
}
constexpr int32_t const& GlobalNamespace::GridElementController::__cordl_internal_get__gridPivotPropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridPivotPropertyId;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__gridPivotPropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gridPivotPropertyId = value;
}
constexpr int32_t& GlobalNamespace::GridElementController::__cordl_internal_get__gridElementIndexPropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridElementIndexPropertyId;
}
constexpr int32_t const& GlobalNamespace::GridElementController::__cordl_internal_get__gridElementIndexPropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gridElementIndexPropertyId;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__gridElementIndexPropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gridElementIndexPropertyId = value;
}
constexpr bool& GlobalNamespace::GridElementController::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::GridElementController::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::GridElementController::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
inline void GlobalNamespace::GridElementController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GridElementController::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GridElementController::ConvertPositionToObjectSpace(::UnityEngine::Vector3 worldSpacePivotPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { "ConvertPositionToObjectSpace", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldSpacePivotPosition);
}
inline void GlobalNamespace::GridElementController::SetGridMaterial(::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { "SetGridMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material);
}
inline void GlobalNamespace::GridElementController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GridElementController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GridElementController* GlobalNamespace::GridElementController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GridElementController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GridElementController::GridElementController() {}
