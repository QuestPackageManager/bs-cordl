#pragma once
// IWYU pragma private; include "GlobalNamespace\SmoothCameraSmoothnessSettingsController.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCameraSmoothnessSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSmoothnessSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::SmoothCameraSmoothnessSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a15f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSmoothnessSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(int32_t)>(
    &::GlobalNamespace::SmoothCameraSmoothnessSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a16060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSmoothnessSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(int32_t)>(
    &::GlobalNamespace::SmoothCameraSmoothnessSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a16104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraSmoothnessSettingsController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)()>(&::GlobalNamespace::SmoothCameraSmoothnessSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a16210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::SmoothCameraSmoothnessSettingsController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::SmoothCameraSmoothnessSettingsController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::SmoothCameraSmoothnessSettingsController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline void GlobalNamespace::SmoothCameraSmoothnessSettingsController::setStaticF_kSmoothnesses(::ArrayW<float_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t>, "kSmoothnesses", ::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> GlobalNamespace::SmoothCameraSmoothnessSettingsController::getStaticF_kSmoothnesses() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t>, "kSmoothnesses", ::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>();
}
inline bool GlobalNamespace::SmoothCameraSmoothnessSettingsController::GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::SmoothCameraSmoothnessSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::SmoothCameraSmoothnessSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, idx);
}
inline void GlobalNamespace::SmoothCameraSmoothnessSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SmoothCameraSmoothnessSettingsController* GlobalNamespace::SmoothCameraSmoothnessSettingsController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SmoothCameraSmoothnessSettingsController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothCameraSmoothnessSettingsController::SmoothCameraSmoothnessSettingsController() {}
