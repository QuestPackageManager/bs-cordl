#pragma once
// IWYU pragma private; include "GlobalNamespace/DroneHover.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__DroneHover_def.hpp"
#include "GlobalNamespace/zzzz__DroneHover_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Cloth_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DroneHover_SineLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroneHover_SineLayer::*)()>(&::GlobalNamespace::DroneHover_SineLayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56a4b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover_SineLayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DroneHover_SineLayer::__cordl_internal_get_multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr float_t const& GlobalNamespace::DroneHover_SineLayer::__cordl_internal_get_multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr void GlobalNamespace::DroneHover_SineLayer::__cordl_internal_set_multiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplier = value;
}
constexpr float_t& GlobalNamespace::DroneHover_SineLayer::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr float_t const& GlobalNamespace::DroneHover_SineLayer::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void GlobalNamespace::DroneHover_SineLayer::__cordl_internal_set_offset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
inline void GlobalNamespace::DroneHover_SineLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover_SineLayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DroneHover_SineLayer* GlobalNamespace::DroneHover_SineLayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DroneHover_SineLayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DroneHover_SineLayer::DroneHover_SineLayer() {}
//  Writing Method size for method: ::GlobalNamespace::DroneHover.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroneHover::*)()>(&::GlobalNamespace::DroneHover::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56a450c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroneHover.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroneHover::*)()>(&::GlobalNamespace::DroneHover::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x56a453c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroneHover.GetNoiseVec3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::DroneHover::*)(float_t)>(&::GlobalNamespace::DroneHover::GetNoiseVec3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56a46ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "GetNoiseVec3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroneHover.GetNoise
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DroneHover::*)(float_t, float_t)>(&::GlobalNamespace::DroneHover::GetNoise)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x56a4a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "GetNoise", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroneHover.UpdateTiltTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroneHover::*)()>(&::GlobalNamespace::DroneHover::UpdateTiltTransform)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x56a472c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "UpdateTiltTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroneHover._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DroneHover::*)()>(&::GlobalNamespace::DroneHover::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56a4b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::DroneHover::__cordl_internal_get__hoverAreaPerAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverAreaPerAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DroneHover::__cordl_internal_get__hoverAreaPerAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverAreaPerAxis;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__hoverAreaPerAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hoverAreaPerAxis = value;
}
constexpr float_t& GlobalNamespace::DroneHover::__cordl_internal_get__speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr float_t const& GlobalNamespace::DroneHover::__cordl_internal_get__speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speed = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DroneHover_SineLayer*>*& GlobalNamespace::DroneHover::__cordl_internal_get__compoundSins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compoundSins;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DroneHover_SineLayer*>* const& GlobalNamespace::DroneHover::__cordl_internal_get__compoundSins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compoundSins;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::DroneHover_SineLayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compoundSins)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::DroneHover::__cordl_internal_get__tiltTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltTransforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::DroneHover::__cordl_internal_get__tiltTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltTransforms;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__tiltTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tiltTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DroneHover::__cordl_internal_get__maxTiltAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxTiltAmount;
}
constexpr float_t const& GlobalNamespace::DroneHover::__cordl_internal_get__maxTiltAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxTiltAmount;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__maxTiltAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxTiltAmount = value;
}
constexpr float_t& GlobalNamespace::DroneHover::__cordl_internal_get__tiltSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltSpeed;
}
constexpr float_t const& GlobalNamespace::DroneHover::__cordl_internal_get__tiltSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltSpeed;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__tiltSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tiltSpeed = value;
}
constexpr float_t& GlobalNamespace::DroneHover::__cordl_internal_get__tiltAheadOfTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltAheadOfTime;
}
constexpr float_t const& GlobalNamespace::DroneHover::__cordl_internal_get__tiltAheadOfTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltAheadOfTime;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__tiltAheadOfTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tiltAheadOfTime = value;
}
constexpr bool& GlobalNamespace::DroneHover::__cordl_internal_get__tiltToTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltToTarget;
}
constexpr bool const& GlobalNamespace::DroneHover::__cordl_internal_get__tiltToTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltToTarget;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__tiltToTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tiltToTarget = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DroneHover::__cordl_internal_get__startPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DroneHover::__cordl_internal_get__startPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__startPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPos = value;
}
constexpr ::UnityW<::UnityEngine::Cloth>& GlobalNamespace::DroneHover::__cordl_internal_get__cloth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cloth;
}
constexpr ::UnityW<::UnityEngine::Cloth> const& GlobalNamespace::DroneHover::__cordl_internal_get__cloth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cloth;
}
constexpr void GlobalNamespace::DroneHover::__cordl_internal_set__cloth(::UnityW<::UnityEngine::Cloth> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cloth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DroneHover::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DroneHover::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::DroneHover::GetNoiseVec3(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "GetNoiseVec3", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, time);
}
inline float_t GlobalNamespace::DroneHover::GetNoise(float_t time, float_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "GetNoise", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, time, offset);
}
inline void GlobalNamespace::DroneHover::UpdateTiltTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), "UpdateTiltTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DroneHover::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DroneHover*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DroneHover* GlobalNamespace::DroneHover::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DroneHover*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DroneHover::DroneHover() {}
