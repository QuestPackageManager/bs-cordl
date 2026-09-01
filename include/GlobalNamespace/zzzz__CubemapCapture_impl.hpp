#pragma once
// IWYU pragma private; include "GlobalNamespace\CubemapCapture.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_impl.hpp"
#include "UnityEngine/zzzz__CubemapFace_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CubemapCapture_def.hpp"
#include "GlobalNamespace/zzzz__CubemapCapture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CubemapCapture_ImageType::CubemapCapture_ImageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CubemapCapture_ImageType::CubemapCapture_ImageType() {}
constexpr ::GlobalNamespace::CubemapCapture_ImageType GlobalNamespace::CubemapCapture_ImageType::PNG{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::CubemapCapture_ImageType GlobalNamespace::CubemapCapture_ImageType::JPEG{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::CubemapCapture_ImageType GlobalNamespace::CubemapCapture_ImageType::TGA{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::CubemapCapture_ImageType GlobalNamespace::CubemapCapture_ImageType::EXR{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a2754c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.GenerateAndSaveCubemapTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::GenerateAndSaveCubemapTexture)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a275d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { "GenerateAndSaveCubemapTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.RenderCubemapTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Cubemap*)>(&::GlobalNamespace::CubemapCapture::RenderCubemapTexture)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x5a27684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { "RenderCubemapTexture", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.SaveCubemapTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Cubemap*, ::StringW)>(&::GlobalNamespace::CubemapCapture::SaveCubemapTexture)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x5a27b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(),
                                                                                           { "SaveCubemapTexture", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.SerializeTextureToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Texture2D*)>(
    &::GlobalNamespace::CubemapCapture::SerializeTextureToByteArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a28320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { "SerializeTextureToByteArray", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5a28400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::CubemapCapture::__cordl_internal_get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::CubemapCapture::__cordl_internal_get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____camera = value;
}
constexpr ::UnityEngine::InputSystem::Key& GlobalNamespace::CubemapCapture::__cordl_internal_get__triggerKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerKey;
}
constexpr ::UnityEngine::InputSystem::Key const& GlobalNamespace::CubemapCapture::__cordl_internal_get__triggerKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerKey;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__triggerKey(::UnityEngine::InputSystem::Key value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerKey = value;
}
constexpr int32_t& GlobalNamespace::CubemapCapture::__cordl_internal_get__cubemapSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapSize;
}
constexpr int32_t const& GlobalNamespace::CubemapCapture::__cordl_internal_get__cubemapSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapSize;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__cubemapSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cubemapSize = value;
}
constexpr ::StringW& GlobalNamespace::CubemapCapture::__cordl_internal_get__saveDirectoryAbsolutePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveDirectoryAbsolutePath;
}
constexpr ::StringW const& GlobalNamespace::CubemapCapture::__cordl_internal_get__saveDirectoryAbsolutePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveDirectoryAbsolutePath;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__saveDirectoryAbsolutePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saveDirectoryAbsolutePath = value;
}
constexpr ::GlobalNamespace::CubemapCapture_ImageType& GlobalNamespace::CubemapCapture::__cordl_internal_get__imageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageType;
}
constexpr ::GlobalNamespace::CubemapCapture_ImageType const& GlobalNamespace::CubemapCapture::__cordl_internal_get__imageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageType;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__imageType(::GlobalNamespace::CubemapCapture_ImageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____imageType = value;
}
constexpr int32_t& GlobalNamespace::CubemapCapture::__cordl_internal_get__jpegCompression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jpegCompression;
}
constexpr int32_t const& GlobalNamespace::CubemapCapture::__cordl_internal_get__jpegCompression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jpegCompression;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__jpegCompression(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jpegCompression = value;
}
constexpr ::UnityEngine::Texture2D_EXRFlags& GlobalNamespace::CubemapCapture::__cordl_internal_get__exrFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exrFlags;
}
constexpr ::UnityEngine::Texture2D_EXRFlags const& GlobalNamespace::CubemapCapture::__cordl_internal_get__exrFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exrFlags;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__exrFlags(::UnityEngine::Texture2D_EXRFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exrFlags = value;
}
constexpr ::ArrayW<::UnityEngine::CubemapFace>& GlobalNamespace::CubemapCapture::__cordl_internal_get__faces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faces;
}
constexpr ::ArrayW<::UnityEngine::CubemapFace> const& GlobalNamespace::CubemapCapture::__cordl_internal_get__faces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faces;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__faces(::ArrayW<::UnityEngine::CubemapFace> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____faces = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::CubemapCapture::__cordl_internal_get__faceAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faceAngles;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::CubemapCapture::__cordl_internal_get__faceAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faceAngles;
}
constexpr void GlobalNamespace::CubemapCapture::__cordl_internal_set__faceAngles(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____faceAngles = value;
}
inline void GlobalNamespace::CubemapCapture::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CubemapCapture::GenerateAndSaveCubemapTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { "GenerateAndSaveCubemapTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CubemapCapture::RenderCubemapTexture(::UnityEngine::Cubemap* cubemap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { "RenderCubemapTexture", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cubemap);
}
inline void GlobalNamespace::CubemapCapture::SaveCubemapTexture(::UnityEngine::Cubemap* cubemap, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(),
                                                                                         { "SaveCubemapTexture", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cubemap, path);
}
inline ::ArrayW<uint8_t> GlobalNamespace::CubemapCapture::SerializeTextureToByteArray(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { "SerializeTextureToByteArray", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, texture);
}
inline void GlobalNamespace::CubemapCapture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapCapture*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CubemapCapture* GlobalNamespace::CubemapCapture::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CubemapCapture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CubemapCapture::CubemapCapture() {}
