#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderMeshController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderMeshController::*)()>(&::GlobalNamespace::SliderMeshController::get_pathLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5767670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(),
                                                                               "get_pathLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.get_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::SliderMeshController::*)()>(
    &::GlobalNamespace::SliderMeshController::get_mesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5767694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), "get_mesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.get_pathsHolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PathsHolder* (::GlobalNamespace::SliderMeshController::*)()>(
    &::GlobalNamespace::SliderMeshController::get_pathsHolder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57676ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(),
                                                                               "get_pathsHolder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.CreateBezierPathAndMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderMeshController::*)(
    ::GlobalNamespace::SliderData*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::SliderMeshController::CreateBezierPathAndMesh)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x57625cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), "CreateBezierPathAndMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController.CutDirectionToControlPointPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::NoteCutDirection, float_t)>(
    &::GlobalNamespace::SliderMeshController::CutDirectionToControlPointPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57676b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), "CutDirectionToControlPointPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderMeshController::*)()>(&::GlobalNamespace::SliderMeshController::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x576775c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderMeshConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pathsHolder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableAnchorsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableControlPointsArray4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableControlPointsArray4;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableControlPointsArray4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableControlPointsArray4;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__reusableControlPointsArray4(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableControlPointsArray4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableControlPointsArray2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableControlPointsArray2;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::SliderMeshController::__cordl_internal_get__reusableControlPointsArray2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableControlPointsArray2;
}
constexpr void GlobalNamespace::SliderMeshController::__cordl_internal_set__reusableControlPointsArray2(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableControlPointsArray2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t GlobalNamespace::SliderMeshController::get_pathLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), "get_pathLength",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::SliderMeshController::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), "get_mesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PathsHolder* GlobalNamespace::SliderMeshController::get_pathsHolder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), "get_pathsHolder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PathsHolder*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderMeshController::CreateBezierPathAndMesh(::GlobalNamespace::SliderData* sliderData, ::UnityEngine::Vector3 headNotePos, ::UnityEngine::Vector3 tailNotePos,
                                                                           float_t jumpSpeed, float_t noteUniformScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), "CreateBezierPathAndMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderData, headNotePos, tailNotePos, jumpSpeed, noteUniformScale);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SliderMeshController::CutDirectionToControlPointPosition(::GlobalNamespace::NoteCutDirection noteCutDirection, float_t angleOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), "CutDirectionToControlPointPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, noteCutDirection, angleOffset);
}
inline void GlobalNamespace::SliderMeshController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderMeshController* GlobalNamespace::SliderMeshController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderMeshController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMeshController::SliderMeshController() {}
