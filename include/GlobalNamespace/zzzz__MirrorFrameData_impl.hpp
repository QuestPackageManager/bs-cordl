#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorFrameData.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorFrameData_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirrorFrameData.SetupPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorFrameData::*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::GlobalNamespace::MirrorFrameData::SetupPass)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5f473b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(),
                            { "SetupPass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorFrameData.CleanupPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorFrameData::*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::GlobalNamespace::MirrorFrameData::CleanupPass)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5f475a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(),
                            { "CleanupPass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorFrameData.SetupPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorFrameData::*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::GlobalNamespace::MirrorFrameData::SetupPass)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f47794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(),
                                         { "SetupPass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorFrameData.CleanupPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorFrameData::*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::GlobalNamespace::MirrorFrameData::CleanupPass)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f47810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(),
                                         { "CleanupPass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorFrameData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorFrameData::*)()>(&::GlobalNamespace::MirrorFrameData::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4788c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(), { ::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorFrameData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorFrameData::*)()>(&::GlobalNamespace::MirrorFrameData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4789c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::MirrorFrameData::__cordl_internal_get_reflectedViewLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectedViewLeft;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_reflectedViewLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectedViewLeft;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_reflectedViewLeft(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reflectedViewLeft = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::MirrorFrameData::__cordl_internal_get_reflectedProjLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectedProjLeft;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_reflectedProjLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectedProjLeft;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_reflectedProjLeft(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reflectedProjLeft = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::MirrorFrameData::__cordl_internal_get_reflectedViewRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectedViewRight;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_reflectedViewRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectedViewRight;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_reflectedViewRight(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reflectedViewRight = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::MirrorFrameData::__cordl_internal_get_reflectedProjRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectedProjRight;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_reflectedProjRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectedProjRight;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_reflectedProjRight(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reflectedProjRight = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::MirrorFrameData::__cordl_internal_get_cameraViewLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraViewLeft;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_cameraViewLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraViewLeft;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_cameraViewLeft(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraViewLeft = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::MirrorFrameData::__cordl_internal_get_cameraProjLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraProjLeft;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_cameraProjLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraProjLeft;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_cameraProjLeft(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraProjLeft = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::MirrorFrameData::__cordl_internal_get_cameraViewRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraViewRight;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_cameraViewRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraViewRight;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_cameraViewRight(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraViewRight = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::MirrorFrameData::__cordl_internal_get_cameraProjRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraProjRight;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_cameraProjRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraProjRight;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_cameraProjRight(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraProjRight = value;
}
constexpr bool& GlobalNamespace::MirrorFrameData::__cordl_internal_get_singlePassStereo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singlePassStereo;
}
constexpr bool const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_singlePassStereo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singlePassStereo;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_singlePassStereo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___singlePassStereo = value;
}
constexpr bool& GlobalNamespace::MirrorFrameData::__cordl_internal_get_renderAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderAllowed;
}
constexpr bool const& GlobalNamespace::MirrorFrameData::__cordl_internal_get_renderAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderAllowed;
}
constexpr void GlobalNamespace::MirrorFrameData::__cordl_internal_set_renderAllowed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderAllowed = value;
}
inline void GlobalNamespace::MirrorFrameData::SetupPass(::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(),
                                       { "SetupPass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xr, cmd);
}
inline void GlobalNamespace::MirrorFrameData::CleanupPass(::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(),
                          { "CleanupPass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xr, cmd);
}
inline void GlobalNamespace::MirrorFrameData::SetupPass(::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(),
                                              { "SetupPass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xr, cmd);
}
inline void GlobalNamespace::MirrorFrameData::CleanupPass(::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(),
                                       { "CleanupPass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xr, cmd);
}
inline void GlobalNamespace::MirrorFrameData::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorFrameData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorFrameData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorFrameData* GlobalNamespace::MirrorFrameData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorFrameData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorFrameData::MirrorFrameData() {}
