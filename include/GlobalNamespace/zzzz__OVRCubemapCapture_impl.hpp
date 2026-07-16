#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCubemapCapture.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCubemapCapture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCubemapCapture::*)()>(&::GlobalNamespace::OVRCubemapCapture::Update)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ef4e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.TriggerCubemapCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, int32_t, ::StringW)>(&::GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5ef4f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(),
                                                             { "TriggerCubemapCapture", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.RenderIntoCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Cubemap*)>(&::GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5ef5214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(),
                                                             { "RenderIntoCubemap", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.SaveCubemapCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Cubemap*, ::StringW)>(&::GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x5ef578c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(),
                                                                                           { "SaveCubemapCapture", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCubemapCapture::*)()>(&::GlobalNamespace::OVRCubemapCapture::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ef5f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_autoTriggerAfterLaunch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerAfterLaunch;
}
constexpr bool const& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_autoTriggerAfterLaunch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerAfterLaunch;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__cordl_internal_set_autoTriggerAfterLaunch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoTriggerAfterLaunch = value;
}
constexpr float_t& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_autoTriggerDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerDelay;
}
constexpr float_t const& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_autoTriggerDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerDelay;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__cordl_internal_set_autoTriggerDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoTriggerDelay = value;
}
constexpr float_t& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_autoTriggerElapse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerElapse;
}
constexpr float_t const& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_autoTriggerElapse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTriggerElapse;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__cordl_internal_set_autoTriggerElapse(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoTriggerElapse = value;
}
constexpr ::UnityEngine::KeyCode& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_triggeredByKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggeredByKey;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_triggeredByKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggeredByKey;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__cordl_internal_set_triggeredByKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triggeredByKey = value;
}
constexpr ::StringW& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_pathName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathName;
}
constexpr ::StringW const& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_pathName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pathName;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__cordl_internal_set_pathName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pathName = value;
}
constexpr int32_t& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_cubemapSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubemapSize;
}
constexpr int32_t const& GlobalNamespace::OVRCubemapCapture::__cordl_internal_get_cubemapSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubemapSize;
}
constexpr void GlobalNamespace::OVRCubemapCapture::__cordl_internal_set_cubemapSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cubemapSize = value;
}
inline void GlobalNamespace::OVRCubemapCapture::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture(::UnityEngine::Vector3 capturePos, int32_t cubemapSize, ::StringW pathName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(),
                                                           { "TriggerCubemapCapture", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, capturePos, cubemapSize, pathName);
}
inline void GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap(::UnityEngine::Camera* ownerCamera, ::UnityEngine::Cubemap* outCubemap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(),
                                                           { "RenderIntoCubemap", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ownerCamera, outCubemap);
}
inline bool GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture(::UnityEngine::Cubemap* cubemap, ::StringW pathName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(),
                                                                                         { "SaveCubemapCapture", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cubemap, pathName);
}
inline void GlobalNamespace::OVRCubemapCapture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCubemapCapture*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRCubemapCapture* GlobalNamespace::OVRCubemapCapture::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRCubemapCapture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCubemapCapture::OVRCubemapCapture() {}
