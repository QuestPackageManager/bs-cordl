#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRProgressIndicator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRProgressIndicator_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRProgressIndicator.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRProgressIndicator::*)()>(&::GlobalNamespace::OVRProgressIndicator::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f09f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProgressIndicator*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProgressIndicator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRProgressIndicator::*)()>(&::GlobalNamespace::OVRProgressIndicator::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f09f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProgressIndicator*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRProgressIndicator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRProgressIndicator::*)()>(&::GlobalNamespace::OVRProgressIndicator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f09fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProgressIndicator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVRProgressIndicator::__cordl_internal_get_progressImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressImage;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVRProgressIndicator::__cordl_internal_get_progressImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressImage;
}
constexpr void GlobalNamespace::OVRProgressIndicator::__cordl_internal_set_progressImage(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___progressImage = value;
}
constexpr float_t& GlobalNamespace::OVRProgressIndicator::__cordl_internal_get_currentProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentProgress;
}
constexpr float_t const& GlobalNamespace::OVRProgressIndicator::__cordl_internal_get_currentProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentProgress;
}
constexpr void GlobalNamespace::OVRProgressIndicator::__cordl_internal_set_currentProgress(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentProgress = value;
}
inline void GlobalNamespace::OVRProgressIndicator::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProgressIndicator*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRProgressIndicator::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProgressIndicator*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRProgressIndicator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRProgressIndicator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRProgressIndicator* GlobalNamespace::OVRProgressIndicator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRProgressIndicator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRProgressIndicator::OVRProgressIndicator() {}
