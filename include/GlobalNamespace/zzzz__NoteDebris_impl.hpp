#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteDebris.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDebris_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteDebrisDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebris_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDebris_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebris_Pool::*)()>(&::GlobalNamespace::NoteDebris_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58d72b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoteDebris_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteDebris_Pool* GlobalNamespace::NoteDebris_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteDebris_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteDebris_Pool::NoteDebris_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::NoteDebris.get_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* (::GlobalNamespace::NoteDebris::*)()>(
    &::GlobalNamespace::NoteDebris::get_didFinishEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d683c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(), { "get_didFinishEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebris.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebris::*)()>(&::GlobalNamespace::NoteDebris::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58d6844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebris.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebris::*)()>(&::GlobalNamespace::NoteDebris::Update)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x58d68e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebris.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebris::*)(
    ::GlobalNamespace::ColorType, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::NoteDebris::Init)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x58d6b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebris._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteDebris::*)()>(&::GlobalNamespace::NoteDebris::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58d70fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::NoteDebris::__cordl_internal_get__meshTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::NoteDebris::__cordl_internal_get__meshTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshTransform;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__meshTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisPhysics>& GlobalNamespace::NoteDebris::__cordl_internal_get__physics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____physics;
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisPhysics> const& GlobalNamespace::NoteDebris::__cordl_internal_get__physics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____physics;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__physics(::UnityW<::GlobalNamespace::NoteDebrisPhysics> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____physics = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::NoteDebris::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::NoteDebris::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::NoteDebris::__cordl_internal_get__cutoutCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutoutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::NoteDebris::__cordl_internal_get__cutoutCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutoutCurve;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__cutoutCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutoutCurve = value;
}
constexpr float_t& GlobalNamespace::NoteDebris::__cordl_internal_get__maxCutPointCenterDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCutPointCenterDistance;
}
constexpr float_t const& GlobalNamespace::NoteDebris::__cordl_internal_get__maxCutPointCenterDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCutPointCenterDistance;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__maxCutPointCenterDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxCutPointCenterDistance = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::NoteDebris::__cordl_internal_get__centroidComputationMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centroidComputationMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::NoteDebris::__cordl_internal_get__centroidComputationMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centroidComputationMesh;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__centroidComputationMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centroidComputationMesh = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::NoteDebris::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::NoteDebris::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr float_t& GlobalNamespace::NoteDebris::__cordl_internal_get__elapsedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime;
}
constexpr float_t const& GlobalNamespace::NoteDebris::__cordl_internal_get__elapsedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__elapsedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime = value;
}
constexpr float_t& GlobalNamespace::NoteDebris::__cordl_internal_get__lifeTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lifeTime;
}
constexpr float_t const& GlobalNamespace::NoteDebris::__cordl_internal_get__lifeTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lifeTime;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__lifeTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lifeTime = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>*& GlobalNamespace::NoteDebris::__cordl_internal_get__didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* const& GlobalNamespace::NoteDebris::__cordl_internal_get__didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr void GlobalNamespace::NoteDebris::__cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didFinishEvent = value;
}
inline void GlobalNamespace::NoteDebris::setStaticF__cutoutPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cutoutPropertyID", ::GlobalNamespace::NoteDebris*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::NoteDebris::getStaticF__cutoutPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_cutoutPropertyID", ::GlobalNamespace::NoteDebris*>();
}
inline void GlobalNamespace::NoteDebris::setStaticF__colorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorID", ::GlobalNamespace::NoteDebris*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::NoteDebris::getStaticF__colorID() {
  return ::cordl_internals::getStaticField<int32_t, "_colorID", ::GlobalNamespace::NoteDebris*>();
}
inline void GlobalNamespace::NoteDebris::setStaticF__cutPlaneID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cutPlaneID", ::GlobalNamespace::NoteDebris*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::NoteDebris::getStaticF__cutPlaneID() {
  return ::cordl_internals::getStaticField<int32_t, "_cutPlaneID", ::GlobalNamespace::NoteDebris*>();
}
inline void GlobalNamespace::NoteDebris::setStaticF__cutoutTexOffsetID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cutoutTexOffsetID", ::GlobalNamespace::NoteDebris*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::NoteDebris::getStaticF__cutoutTexOffsetID() {
  return ::cordl_internals::getStaticField<int32_t, "_cutoutTexOffsetID", ::GlobalNamespace::NoteDebris*>();
}
inline void GlobalNamespace::NoteDebris::setStaticF__meshVertices(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "_meshVertices", ::GlobalNamespace::NoteDebris*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::NoteDebris::getStaticF__meshVertices() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "_meshVertices", ::GlobalNamespace::NoteDebris*>();
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>* GlobalNamespace::NoteDebris::get_didFinishEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(), { "get_didFinishEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteDebrisDidFinishEvent*>*>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebris::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebris::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebris::Init(::GlobalNamespace::ColorType colorType, ::UnityEngine::Vector3 notePos, ::UnityEngine::Quaternion noteRot, ::UnityEngine::Vector3 noteMoveVec,
                                              ::UnityEngine::Vector3 noteScale, ::UnityEngine::Vector3 positionOffset, ::UnityEngine::Quaternion rotationOffset, ::UnityEngine::Vector3 cutPoint,
                                              ::UnityEngine::Vector3 cutNormal, ::UnityEngine::Vector3 force, ::UnityEngine::Vector3 torque, float_t lifeTime, ::UnityEngine::Vector3 cutoutOffset,
                                              bool forceOnlySimplePhysics) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorType, notePos, noteRot, noteMoveVec, noteScale, positionOffset, rotationOffset, cutPoint, cutNormal, force, torque,
                                                   lifeTime, cutoutOffset, forceOnlySimplePhysics);
}
inline void GlobalNamespace::NoteDebris::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteDebris*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteDebris* GlobalNamespace::NoteDebris::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteDebris*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteDebris::NoteDebris() {}
