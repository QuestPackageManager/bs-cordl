#pragma once
// IWYU pragma private; include "GlobalNamespace\SpectrogramRowPropertyAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpectrogramRowPropertyAnimator_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRowPropertyAnimator.SetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramRowPropertyAnimator::*)()>(&::GlobalNamespace::SpectrogramRowPropertyAnimator::SetProperty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59a7d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { ::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRowPropertyAnimator.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramRowPropertyAnimator::*)()>(&::GlobalNamespace::SpectrogramRowPropertyAnimator::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59a7d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRowPropertyAnimator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramRowPropertyAnimator::*)()>(&::GlobalNamespace::SpectrogramRowPropertyAnimator::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59a7e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRowPropertyAnimator.LazyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramRowPropertyAnimator::*)()>(&::GlobalNamespace::SpectrogramRowPropertyAnimator::LazyInit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59a7e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { "LazyInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRowPropertyAnimator.SetMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramRowPropertyAnimator::*)(float_t)>(&::GlobalNamespace::SpectrogramRowPropertyAnimator::SetMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a7eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { "SetMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramRowPropertyAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramRowPropertyAnimator::*)()>(&::GlobalNamespace::SpectrogramRowPropertyAnimator::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59a7ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr int32_t& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__dataIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataIndex;
}
constexpr int32_t const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__dataIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataIndex;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set__dataIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataIndex = value;
}
constexpr ::StringW& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
constexpr float_t& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplier;
}
constexpr float_t const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplier;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set__multiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplier = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__animationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__animationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationCurve;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationCurve = value;
}
constexpr int32_t& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get_propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyId;
}
constexpr int32_t const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get_propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyId;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set_propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyId = value;
}
constexpr bool& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
constexpr float_t& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__spectrogramValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramValue;
}
constexpr float_t const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__spectrogramValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramValue;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set__spectrogramValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectrogramValue = value;
}
constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData>& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__spectrogramData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramData;
}
constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData> const& GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_get__spectrogramData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramData;
}
constexpr void GlobalNamespace::SpectrogramRowPropertyAnimator::__cordl_internal_set__spectrogramData(::UnityW<::GlobalNamespace::BasicSpectrogramData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectrogramData = value;
}
inline void GlobalNamespace::SpectrogramRowPropertyAnimator::SetProperty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpectrogramRowPropertyAnimator::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpectrogramRowPropertyAnimator::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpectrogramRowPropertyAnimator::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { "LazyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpectrogramRowPropertyAnimator::SetMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { "SetMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SpectrogramRowPropertyAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramRowPropertyAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpectrogramRowPropertyAnimator* GlobalNamespace::SpectrogramRowPropertyAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpectrogramRowPropertyAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpectrogramRowPropertyAnimator::SpectrogramRowPropertyAnimator() {}
