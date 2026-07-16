#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredSliderController.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredSliderController_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MirroredSliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController_Pool::*)()>(&::GlobalNamespace::MirroredSliderController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58d51a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MirroredSliderController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredSliderController_Pool* GlobalNamespace::MirroredSliderController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredSliderController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredSliderController_Pool::MirroredSliderController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.set_hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)(bool)>(&::GlobalNamespace::MirroredSliderController::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58cedac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "set_hide", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)()>(&::GlobalNamespace::MirroredSliderController::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58d4ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)()>(&::GlobalNamespace::MirroredSliderController::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58d4ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)()>(&::GlobalNamespace::MirroredSliderController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d5054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::MirroredSliderController::Mirror)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x58ce5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "Mirror", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.UpdateMaterialPropertyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)(float_t)>(&::GlobalNamespace::MirroredSliderController::UpdateMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58d4f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "UpdateMaterialPropertyBlock", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.RemoveListeners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)()>(&::GlobalNamespace::MirroredSliderController::RemoveListeners)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58d5058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "RemoveListeners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.HandleSliderDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)(::GlobalNamespace::SliderController*, float_t)>(
    &::GlobalNamespace::MirroredSliderController::HandleSliderDidStartDissolving)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58d5154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(),
                                                             { "HandleSliderDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController.Dissolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)(float_t)>(&::GlobalNamespace::MirroredSliderController::Dissolve)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58d517c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "Dissolve", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredSliderController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredSliderController::*)()>(&::GlobalNamespace::MirroredSliderController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d51a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::MirroredSliderController::__cordl_internal_get__meshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::MirroredSliderController::__cordl_internal_get__meshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr void GlobalNamespace::MirroredSliderController::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshFilter = value;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider*& GlobalNamespace::MirroredSliderController::__cordl_internal_get__jumpOffsetYProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& GlobalNamespace::MirroredSliderController::__cordl_internal_get__jumpOffsetYProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr void GlobalNamespace::MirroredSliderController::__cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpOffsetYProvider = value;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider*& GlobalNamespace::MirroredSliderController::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& GlobalNamespace::MirroredSliderController::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::MirroredSliderController::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variableMovementDataProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::MirroredSliderController::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::MirroredSliderController::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::MirroredSliderController::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderController>& GlobalNamespace::MirroredSliderController::__cordl_internal_get__followedSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedSlider;
}
constexpr ::UnityW<::GlobalNamespace::SliderController> const& GlobalNamespace::MirroredSliderController::__cordl_internal_get__followedSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedSlider;
}
constexpr void GlobalNamespace::MirroredSliderController::__cordl_internal_set__followedSlider(::UnityW<::GlobalNamespace::SliderController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____followedSlider = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirroredSliderController::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirroredSliderController::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::MirroredSliderController::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirroredSliderController::__cordl_internal_get__followedTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirroredSliderController::__cordl_internal_get__followedTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedTransform;
}
constexpr void GlobalNamespace::MirroredSliderController::__cordl_internal_set__followedTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____followedTransform = value;
}
inline void GlobalNamespace::MirroredSliderController::set_hide(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "set_hide", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MirroredSliderController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredSliderController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredSliderController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredSliderController::Mirror(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "Mirror", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::MirroredSliderController::UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "UpdateMaterialPropertyBlock", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSinceHeadNoteJump);
}
inline void GlobalNamespace::MirroredSliderController::RemoveListeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "RemoveListeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredSliderController::HandleSliderDidStartDissolving(::GlobalNamespace::SliderController* sliderController, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(),
                                                           { "HandleSliderDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController, duration);
}
inline void GlobalNamespace::MirroredSliderController::Dissolve(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { "Dissolve", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::MirroredSliderController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredSliderController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredSliderController* GlobalNamespace::MirroredSliderController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredSliderController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISliderDidStartDissolvingEvent"
constexpr GlobalNamespace::MirroredSliderController::operator ::GlobalNamespace::ISliderDidStartDissolvingEvent*() noexcept {
  return static_cast<::GlobalNamespace::ISliderDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISliderDidStartDissolvingEvent"
constexpr ::GlobalNamespace::ISliderDidStartDissolvingEvent* GlobalNamespace::MirroredSliderController::i___GlobalNamespace__ISliderDidStartDissolvingEvent() noexcept {
  return static_cast<::GlobalNamespace::ISliderDidStartDissolvingEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredSliderController::MirroredSliderController() {}
