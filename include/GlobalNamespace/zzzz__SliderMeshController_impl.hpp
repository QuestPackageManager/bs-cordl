#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderMeshController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__PathsHolder_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshConstructor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.get_pathLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderMeshController::*)()>(&::GlobalNamespace::SliderMeshController::get_pathLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x597c31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(), { "get_pathLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::SliderMeshController::*)()>(&::GlobalNamespace::SliderMeshController::get_mesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x597c340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.get_pathsHolder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PathsHolder* (::GlobalNamespace::SliderMeshController::*)()>(&::GlobalNamespace::SliderMeshController::get_pathsHolder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597c358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(), { "get_pathsHolder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.CreateBezierPathAndMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshController::*)(
    ::GlobalNamespace::SliderData*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, int32_t, float_t, float_t)>(&::GlobalNamespace::SliderMeshController::CreateBezierPathAndMesh)> {
  constexpr static std::size_t size = 0xb70;
  constexpr static std::size_t addrs = 0x5976e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(),
                                                             { "CreateBezierPathAndMesh",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.CutDirectionToControlPointPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::NoteCutDirection, float_t)>(
    &::GlobalNamespace::SliderMeshController::CutDirectionToControlPointPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x597c360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(),
                                                             { "CutDirectionToControlPointPosition", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderMeshController::*)()>(&::GlobalNamespace::SliderMeshController::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x597c408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SliderMeshController::__cordl_internal_get__numberOfFixedVertexPathSegments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfFixedVertexPathSegments;
}
constexpr int32_t const& GlobalNamespace::SliderMeshController::__cordl_internal_get__numberOfFixedVertexPathSegments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfFixedVertexPathSegments;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__numberOfFixedVertexPathSegments(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfFixedVertexPathSegments = value;
}
constexpr float_t& GlobalNamespace::SliderMeshController::__cordl_internal_get__controlPointDistancePerSqrtNotesDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlPointDistancePerSqrtNotesDistance;
}
constexpr float_t const& GlobalNamespace::SliderMeshController::__cordl_internal_get__controlPointDistancePerSqrtNotesDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlPointDistancePerSqrtNotesDistance;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__controlPointDistancePerSqrtNotesDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controlPointDistancePerSqrtNotesDistance = value;
}
constexpr float_t& GlobalNamespace::SliderMeshController::__cordl_internal_get__middleAnchorPointOffsetAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleAnchorPointOffsetAmount;
}
constexpr float_t const& GlobalNamespace::SliderMeshController::__cordl_internal_get__middleAnchorPointOffsetAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleAnchorPointOffsetAmount;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__middleAnchorPointOffsetAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____middleAnchorPointOffsetAmount = value;
}
constexpr float_t& GlobalNamespace::SliderMeshController::__cordl_internal_get__middleControlPointZDistanceModifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleControlPointZDistanceModifier;
}
constexpr float_t const& GlobalNamespace::SliderMeshController::__cordl_internal_get__middleControlPointZDistanceModifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleControlPointZDistanceModifier;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__middleControlPointZDistanceModifier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____middleControlPointZDistanceModifier = value;
}
constexpr float_t& GlobalNamespace::SliderMeshController::__cordl_internal_get__middleControlPointYDistanceModifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleControlPointYDistanceModifier;
}
constexpr float_t const& GlobalNamespace::SliderMeshController::__cordl_internal_get__middleControlPointYDistanceModifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleControlPointYDistanceModifier;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__middleControlPointYDistanceModifier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____middleControlPointYDistanceModifier = value;
}
constexpr float_t& GlobalNamespace::SliderMeshController::__cordl_internal_get__middleControlPointXDistanceModifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleControlPointXDistanceModifier;
}
constexpr float_t const& GlobalNamespace::SliderMeshController::__cordl_internal_get__middleControlPointXDistanceModifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleControlPointXDistanceModifier;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__middleControlPointXDistanceModifier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____middleControlPointXDistanceModifier = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderMeshConstructor>& GlobalNamespace::SliderMeshController::__cordl_internal_get__sliderMeshConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshConstructor;
}
constexpr ::UnityW<::GlobalNamespace::SliderMeshConstructor> const& GlobalNamespace::SliderMeshController::__cordl_internal_get__sliderMeshConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshConstructor;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__sliderMeshConstructor(::UnityW<::GlobalNamespace::SliderMeshConstructor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderMeshConstructor = value;
}
constexpr ::GlobalNamespace::PathsHolder*& GlobalNamespace::SliderMeshController::__cordl_internal_get__pathsHolder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathsHolder;
}
constexpr ::GlobalNamespace::PathsHolder* const& GlobalNamespace::SliderMeshController::__cordl_internal_get__pathsHolder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathsHolder;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__pathsHolder(::GlobalNamespace::PathsHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pathsHolder = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableAnchorsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableAnchorsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableAnchorsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableAnchorsList;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__reusableAnchorsList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reusableAnchorsList = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableControlPointsArray4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableControlPointsArray4;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableControlPointsArray4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableControlPointsArray4;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__reusableControlPointsArray4(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reusableControlPointsArray4 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableControlPointsArray2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableControlPointsArray2;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableControlPointsArray2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableControlPointsArray2;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__reusableControlPointsArray2(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reusableControlPointsArray2 = value;
}
inline float_t GlobalNamespace::SliderMeshController::get_pathLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(), { "get_pathLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::SliderMeshController::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::GlobalNamespace::PathsHolder* GlobalNamespace::SliderMeshController::get_pathsHolder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(), { "get_pathsHolder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PathsHolder*>(this, ___internal_method);
}
inline void GlobalNamespace::SliderMeshController::CreateBezierPathAndMesh(::GlobalNamespace::SliderData* sliderData, ::UnityEngine::Vector3 headNotePos, ::UnityEngine::Vector3 tailNotePos,
                                                                           int32_t headRotation, int32_t tailRotation, float_t jumpSpeed, float_t noteUniformScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(),
                                                           { "CreateBezierPathAndMesh",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderData, headNotePos, tailNotePos, headRotation, tailRotation, jumpSpeed, noteUniformScale);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SliderMeshController::CutDirectionToControlPointPosition(::GlobalNamespace::NoteCutDirection noteCutDirection, float_t angleOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(),
                                                           { "CutDirectionToControlPointPosition", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, noteCutDirection, angleOffset);
}
inline void GlobalNamespace::SliderMeshController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMeshController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderMeshController* GlobalNamespace::SliderMeshController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderMeshController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMeshController::SliderMeshController() {}
