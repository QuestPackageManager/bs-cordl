#pragma once
#include "RootMotion/Demos/zzzz__Navigator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/Demos/zzzz__Navigator_def.hpp"
#include "RootMotion/Demos/zzzz__Navigator_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::Demos::__Navigator__State::__Navigator__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::Demos::__Navigator__State::__Navigator__State() {}
constexpr ::RootMotion::Demos::__Navigator__State RootMotion::Demos::__Navigator__State::Idle{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::Demos::__Navigator__State RootMotion::Demos::__Navigator__State::Seeking{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::Demos::__Navigator__State RootMotion::Demos::__Navigator__State::OnPath{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::RootMotion::Demos::Navigator.get_normalizedDeltaPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::Demos::Navigator::*)()>(
    &::RootMotion::Demos::Navigator::get_normalizedDeltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x131cb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                                                                               "get_normalizedDeltaPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.set_normalizedDeltaPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3)>(
    &::RootMotion::Demos::Navigator::set_normalizedDeltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x131cb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "set_normalizedDeltaPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.get_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::Demos::__Navigator__State (::RootMotion::Demos::Navigator::*)()>(
    &::RootMotion::Demos::Navigator::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x131cb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "get_state",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.set_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::RootMotion::Demos::__Navigator__State)>(
    &::RootMotion::Demos::Navigator::set_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x131cb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "set_state", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::Demos::__Navigator__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::UnityEngine::Transform*)>(&::RootMotion::Demos::Navigator::Initiate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x131cb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3)>(&::RootMotion::Demos::Navigator::Update)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x131cc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.CalculatePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3)>(&::RootMotion::Demos::Navigator::CalculatePath)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x131d148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "CalculatePath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Find
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3)>(&::RootMotion::Demos::Navigator::Find)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x131d1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Find", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)()>(&::RootMotion::Demos::Navigator::Stop)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x131d070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.HorDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::RootMotion::Demos::Navigator::HorDistance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x131d0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "HorDistance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Visualize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)()>(&::RootMotion::Demos::Navigator::Visualize)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x131d2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Visualize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)()>(&::RootMotion::Demos::Navigator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x131d4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& RootMotion::Demos::Navigator::__cordl_internal_get_activeTargetSeeking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeTargetSeeking;
}
constexpr bool const& RootMotion::Demos::Navigator::__cordl_internal_get_activeTargetSeeking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeTargetSeeking;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_activeTargetSeeking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeTargetSeeking = value;
}
constexpr float_t& RootMotion::Demos::Navigator::__cordl_internal_get_cornerRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cornerRadius;
}
constexpr float_t const& RootMotion::Demos::Navigator::__cordl_internal_get_cornerRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cornerRadius;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_cornerRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cornerRadius = value;
}
constexpr float_t& RootMotion::Demos::Navigator::__cordl_internal_get_recalculateOnPathDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recalculateOnPathDistance;
}
constexpr float_t const& RootMotion::Demos::Navigator::__cordl_internal_get_recalculateOnPathDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recalculateOnPathDistance;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_recalculateOnPathDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recalculateOnPathDistance = value;
}
constexpr float_t& RootMotion::Demos::Navigator::__cordl_internal_get_maxSampleDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSampleDistance;
}
constexpr float_t const& RootMotion::Demos::Navigator::__cordl_internal_get_maxSampleDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSampleDistance;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_maxSampleDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxSampleDistance = value;
}
constexpr float_t& RootMotion::Demos::Navigator::__cordl_internal_get_nextPathInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextPathInterval;
}
constexpr float_t const& RootMotion::Demos::Navigator::__cordl_internal_get_nextPathInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextPathInterval;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_nextPathInterval(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextPathInterval = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::Demos::Navigator::__cordl_internal_get__normalizedDeltaPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedDeltaPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::Demos::Navigator::__cordl_internal_get__normalizedDeltaPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedDeltaPosition_k__BackingField;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set__normalizedDeltaPosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizedDeltaPosition_k__BackingField = value;
}
constexpr ::RootMotion::Demos::__Navigator__State& RootMotion::Demos::Navigator::__cordl_internal_get__state_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state_k__BackingField;
}
constexpr ::RootMotion::Demos::__Navigator__State const& RootMotion::Demos::Navigator::__cordl_internal_get__state_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state_k__BackingField;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set__state_k__BackingField(::RootMotion::Demos::__Navigator__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::Demos::Navigator::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::Demos::Navigator::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& RootMotion::Demos::Navigator::__cordl_internal_get_cornerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cornerIndex;
}
constexpr int32_t const& RootMotion::Demos::Navigator::__cordl_internal_get_cornerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cornerIndex;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_cornerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cornerIndex = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& RootMotion::Demos::Navigator::__cordl_internal_get_corners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___corners;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& RootMotion::Demos::Navigator::__cordl_internal_get_corners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___corners;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___corners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AI::NavMeshPath*& RootMotion::Demos::Navigator::__cordl_internal_get_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AI::NavMeshPath*> const& RootMotion::Demos::Navigator::__cordl_internal_get_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___path;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_path(::UnityEngine::AI::NavMeshPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::Demos::Navigator::__cordl_internal_get_lastTargetPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::Demos::Navigator::__cordl_internal_get_lastTargetPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTargetPosition;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_lastTargetPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastTargetPosition = value;
}
constexpr bool& RootMotion::Demos::Navigator::__cordl_internal_get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::Demos::Navigator::__cordl_internal_get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
constexpr float_t& RootMotion::Demos::Navigator::__cordl_internal_get_nextPathTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextPathTime;
}
constexpr float_t const& RootMotion::Demos::Navigator::__cordl_internal_get_nextPathTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextPathTime;
}
constexpr void RootMotion::Demos::Navigator::__cordl_internal_set_nextPathTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextPathTime = value;
}
inline ::UnityEngine::Vector3 RootMotion::Demos::Navigator::get_normalizedDeltaPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                                                                             "get_normalizedDeltaPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::Demos::Navigator::set_normalizedDeltaPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "set_normalizedDeltaPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RootMotion::Demos::__Navigator__State RootMotion::Demos::Navigator::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "get_state",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::Demos::__Navigator__State, false>(this, ___internal_method);
}
inline void RootMotion::Demos::Navigator::set_state(::RootMotion::Demos::__Navigator__State value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "set_state", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::Demos::__Navigator__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::Demos::Navigator::Initiate(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
inline void RootMotion::Demos::Navigator::Update(::UnityEngine::Vector3 targetPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetPosition);
}
inline void RootMotion::Demos::Navigator::CalculatePath(::UnityEngine::Vector3 targetPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "CalculatePath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetPosition);
}
inline bool RootMotion::Demos::Navigator::Find(::UnityEngine::Vector3 targetPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Find", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetPosition);
}
inline void RootMotion::Demos::Navigator::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t RootMotion::Demos::Navigator::HorDistance(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "HorDistance", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, p1, p2);
}
inline void RootMotion::Demos::Navigator::Visualize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), "Visualize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::Demos::Navigator* RootMotion::Demos::Navigator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::Demos::Navigator*>());
}
inline void RootMotion::Demos::Navigator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::Demos::Navigator::Navigator() {}
