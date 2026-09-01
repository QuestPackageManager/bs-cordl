#pragma once
// IWYU pragma private; include "GlobalNamespace\TrailElementCollection.hpp"
#include "GlobalNamespace/zzzz__TrailElement_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TrailElementCollection_def.hpp"
#include "GlobalNamespace/zzzz__TrailElementCollection_def.hpp"
#include "GlobalNamespace/zzzz__TrailElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "segmentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "segmentLerp", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TrailElementCollection_InterpolationState::TrailElementCollection_InterpolationState(int32_t segmentIndex, float_t segmentLerp) noexcept {
  this->segmentIndex = segmentIndex;
  this->segmentLerp = segmentLerp;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrailElementCollection_InterpolationState::TrailElementCollection_InterpolationState() {}
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::TrailElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5f53344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.InitSnapshots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::TrailElementCollection::InitSnapshots)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f5365c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                                { "InitSnapshots", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.SetHeadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::TrailElementCollection::SetHeadData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f53ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                                { "SetHeadData", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.MoveTailToHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)()>(&::GlobalNamespace::TrailElementCollection::MoveTailToHead)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f53b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(), { "MoveTailToHead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.UpdateDistances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)()>(&::GlobalNamespace::TrailElementCollection::UpdateDistances)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f53c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(), { "UpdateDistances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.Interpolate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(float_t, ::by_ref<::GlobalNamespace::TrailElementCollection_InterpolationState>,
                                                                                                           ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(
    &::GlobalNamespace::TrailElementCollection::Interpolate)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5f54c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                                { "Interpolate",
                                                  {},
                                                  { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TrailElementCollection_InterpolationState>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.UpdateLerpState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(float_t, ::by_ref<::GlobalNamespace::TrailElementCollection_InterpolationState>)>(
    &::GlobalNamespace::TrailElementCollection::UpdateLerpState)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f551bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                                { "UpdateLerpState", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TrailElementCollection_InterpolationState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.GetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TrailElement* (::GlobalNamespace::TrailElementCollection::*)(int32_t)>(
    &::GlobalNamespace::TrailElementCollection::GetElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f552d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(), { "GetElement", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TrailElementCollection::__cordl_internal_get__capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
constexpr int32_t const& GlobalNamespace::TrailElementCollection::__cordl_internal_get__capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
constexpr void GlobalNamespace::TrailElementCollection::__cordl_internal_set__capacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capacity = value;
}
constexpr ::ArrayW<::GlobalNamespace::TrailElement*>& GlobalNamespace::TrailElementCollection::__cordl_internal_get__snapshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____snapshots;
}
constexpr ::ArrayW<::GlobalNamespace::TrailElement*> const& GlobalNamespace::TrailElementCollection::__cordl_internal_get__snapshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____snapshots;
}
constexpr void GlobalNamespace::TrailElementCollection::__cordl_internal_set__snapshots(::ArrayW<::GlobalNamespace::TrailElement*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____snapshots = value;
}
constexpr int32_t& GlobalNamespace::TrailElementCollection::__cordl_internal_get__headIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headIndex;
}
constexpr int32_t const& GlobalNamespace::TrailElementCollection::__cordl_internal_get__headIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headIndex;
}
constexpr void GlobalNamespace::TrailElementCollection::__cordl_internal_set__headIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headIndex = value;
}
constexpr float_t& GlobalNamespace::TrailElementCollection::__cordl_internal_get__totalDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalDistance;
}
constexpr float_t const& GlobalNamespace::TrailElementCollection::__cordl_internal_get__totalDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalDistance;
}
constexpr void GlobalNamespace::TrailElementCollection::__cordl_internal_set__totalDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalDistance = value;
}
inline void GlobalNamespace::TrailElementCollection::_ctor(int32_t capacity, ::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, defaultStartPosition, defaultEndPosition, time);
}
inline void GlobalNamespace::TrailElementCollection::InitSnapshots(::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                              { "InitSnapshots", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultStartPosition, defaultEndPosition, time);
}
inline void GlobalNamespace::TrailElementCollection::SetHeadData(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                                           { "SetHeadData", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, time);
}
inline void GlobalNamespace::TrailElementCollection::MoveTailToHead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(), { "MoveTailToHead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrailElementCollection::UpdateDistances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(), { "UpdateDistances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrailElementCollection::Interpolate(float_t t, ::by_ref<::GlobalNamespace::TrailElementCollection_InterpolationState> lerpState, ::by_ref<::UnityEngine::Vector3> position,
                                                                 ::by_ref<::UnityEngine::Vector3> normal, ::by_ref<float_t> time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                              { "Interpolate",
                                                {},
                                                { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TrailElementCollection_InterpolationState>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, lerpState, position, normal, time);
}
inline void GlobalNamespace::TrailElementCollection::UpdateLerpState(float_t t, ::by_ref<::GlobalNamespace::TrailElementCollection_InterpolationState> interpolationState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(),
                                              { "UpdateLerpState", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TrailElementCollection_InterpolationState>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, interpolationState);
}
inline ::GlobalNamespace::TrailElement* GlobalNamespace::TrailElementCollection::GetElement(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrailElementCollection*>(), { "GetElement", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrailElement*>(this, ___internal_method, index);
}
inline ::GlobalNamespace::TrailElementCollection* GlobalNamespace::TrailElementCollection::New_ctor(int32_t capacity, ::UnityEngine::Vector3 defaultStartPosition,
                                                                                                    ::UnityEngine::Vector3 defaultEndPosition, float_t time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrailElementCollection*>(capacity, defaultStartPosition, defaultEndPosition, time));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrailElementCollection::TrailElementCollection() {}
