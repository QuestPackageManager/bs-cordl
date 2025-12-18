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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCubemapCapture::*)()>(&::GlobalNamespace::OVRCubemapCapture::Update)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5d48bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.TriggerCubemapCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, int32_t, ::StringW)>(&::GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5d48cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "TriggerCubemapCapture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.RenderIntoCubemap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Cubemap*)>(
    &::GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5d48f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "RenderIntoCubemap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.SaveCubemapCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Cubemap*, ::StringW)>(&::GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x5d494f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "SaveCubemapCapture", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCubemapCapture::*)()>(&::GlobalNamespace::OVRCubemapCapture::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d49cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pathName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture(::UnityEngine::Vector3 capturePos, int32_t cubemapSize, ::StringW pathName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "TriggerCubemapCapture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, capturePos, cubemapSize, pathName);
}
inline void GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap(::UnityEngine::Camera* ownerCamera, ::UnityEngine::Cubemap* outCubemap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "RenderIntoCubemap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ownerCamera, outCubemap);
}
inline bool GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture(::UnityEngine::Cubemap* cubemap, ::StringW pathName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), "SaveCubemapCapture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cubemap, pathName);
}
inline void GlobalNamespace::OVRCubemapCapture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRCubemapCapture* GlobalNamespace::OVRCubemapCapture::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRCubemapCapture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCubemapCapture::OVRCubemapCapture() {}
