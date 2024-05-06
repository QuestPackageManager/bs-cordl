#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffect_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsManager_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::*)()>(
    &::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d92c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_rotationAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationAngle;
}
constexpr float_t const& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_rotationAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationAngle;
}
constexpr void GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_set_rotationAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationAngle = value;
}
constexpr float_t& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_rotationStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationStep;
}
constexpr float_t const& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_rotationStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationStep;
}
constexpr void GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_set_rotationStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationStep = value;
}
constexpr float_t& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_rotationFlexySpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationFlexySpeed;
}
constexpr float_t const& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_rotationFlexySpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationFlexySpeed;
}
constexpr void GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_set_rotationFlexySpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationFlexySpeed = value;
}
constexpr int32_t& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_rotationPropagationSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationPropagationSpeed;
}
constexpr int32_t const& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_rotationPropagationSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationPropagationSpeed;
}
constexpr void GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_set_rotationPropagationSpeed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationPropagationSpeed = value;
}
constexpr int32_t& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_progressPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressPos;
}
constexpr int32_t const& GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_get_progressPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressPos;
}
constexpr void GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__cordl_internal_set_progressPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___progressPos = value;
}
inline ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>());
}
inline void GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect::__TrackLaneRingsRotationEffect__RingRotationEffect() {}
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffect::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x26d9144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffect::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d92cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffect::FixedUpdate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x26d93c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(),
                                                                               "FixedUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect.AddRingRotationEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffect::*)(float_t, float_t, int32_t, float_t)>(
    &::GlobalNamespace::TrackLaneRingsRotationEffect::AddRingRotationEffect)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x26d92dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "AddRingRotationEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect.GetFirstRingRotationAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingRotationAngle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26d96a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(),
                                                                               "GetFirstRingRotationAngle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect.GetFirstRingDestinationRotationAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingDestinationRotationAngle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26d96d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(),
                                                 "GetFirstRingDestinationRotationAngle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect.SpawnRingRotationEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* (
    ::GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffect::SpawnRingRotationEffect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26d95cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(),
                                                                               "SpawnRingRotationEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect.RecycleRingRotationEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffect::*)(
    ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*)>(&::GlobalNamespace::TrackLaneRingsRotationEffect::RecycleRingRotationEffect)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x26d9524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "RecycleRingRotationEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffect::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26d9710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsManager>& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__trackLaneRingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneRingsManager;
}
constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsManager> const& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__trackLaneRingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneRingsManager;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_set__trackLaneRingsManager(::UnityW<::GlobalNamespace::TrackLaneRingsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackLaneRingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__startupRotationAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupRotationAngle;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__startupRotationAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupRotationAngle;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_set__startupRotationAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startupRotationAngle = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__startupRotationStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupRotationStep;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__startupRotationStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupRotationStep;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_set__startupRotationStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startupRotationStep = value;
}
constexpr int32_t& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__startupRotationPropagationSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupRotationPropagationSpeed;
}
constexpr int32_t const& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__startupRotationPropagationSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupRotationPropagationSpeed;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_set__startupRotationPropagationSpeed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startupRotationPropagationSpeed = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__startupRotationFlexySpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupRotationFlexySpeed;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__startupRotationFlexySpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupRotationFlexySpeed;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_set__startupRotationFlexySpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startupRotationFlexySpeed = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*&
GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__activeRingRotationEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeRingRotationEffects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*> const&
GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__activeRingRotationEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeRingRotationEffects;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_set__activeRingRotationEffects(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeRingRotationEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*&
GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__ringRotationEffectsPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringRotationEffectsPool;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*> const&
GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get__ringRotationEffectsPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringRotationEffectsPool;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_set__ringRotationEffectsPool(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ringRotationEffectsPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get_ringRotationEffectsToDelete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ringRotationEffectsToDelete;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_get_ringRotationEffectsToDelete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ringRotationEffectsToDelete;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffect::__cordl_internal_set_ringRotationEffectsToDelete(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ringRotationEffectsToDelete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TrackLaneRingsRotationEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffect::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(),
                                                                             "FixedUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffect::AddRingRotationEffect(float_t angle, float_t step, int32_t propagationSpeed, float_t flexySpeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "AddRingRotationEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, angle, step, propagationSpeed, flexySpeed);
}
inline float_t GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingRotationAngle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(),
                                                                             "GetFirstRingRotationAngle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingDestinationRotationAngle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "GetFirstRingDestinationRotationAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* GlobalNamespace::TrackLaneRingsRotationEffect::SpawnRingRotationEffect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(),
                                                                             "SpawnRingRotationEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffect::RecycleRingRotationEffect(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* ringRotationEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), "RecycleRingRotationEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ringRotationEffect);
}
inline ::GlobalNamespace::TrackLaneRingsRotationEffect* GlobalNamespace::TrackLaneRingsRotationEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TrackLaneRingsRotationEffect*>());
}
inline void GlobalNamespace::TrackLaneRingsRotationEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffect::TrackLaneRingsRotationEffect() {}
