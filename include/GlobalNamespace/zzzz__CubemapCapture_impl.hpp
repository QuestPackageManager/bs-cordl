#pragma once
#include "GlobalNamespace/zzzz__CubemapCapture_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "GlobalNamespace/zzzz__CubemapCapture_def.hpp"
#include "GlobalNamespace/zzzz__CubemapCapture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CubemapCapture__ImageType::__CubemapCapture__ImageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CubemapCapture__ImageType::__CubemapCapture__ImageType() {}
constexpr ::GlobalNamespace::__CubemapCapture__ImageType GlobalNamespace::__CubemapCapture__ImageType::PNG{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__CubemapCapture__ImageType GlobalNamespace::__CubemapCapture__ImageType::JPEG{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__CubemapCapture__ImageType GlobalNamespace::__CubemapCapture__ImageType::TGA{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__CubemapCapture__ImageType GlobalNamespace::__CubemapCapture__ImageType::EXR{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22ec768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.GenerateAndSaveCubemapTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::GenerateAndSaveCubemapTexture)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22ec7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                                                                               "GenerateAndSaveCubemapTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.RenderCubemapTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Cubemap*)>(
    &::GlobalNamespace::CubemapCapture::RenderCubemapTexture)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x22ec8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), "RenderCubemapTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.SaveCubemapTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Cubemap*, ::StringW)>(
    &::GlobalNamespace::CubemapCapture::SaveCubemapTexture)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x22ecd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), "SaveCubemapTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture.SerializeTextureToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::CubemapCapture::*)(::UnityEngine::Texture2D*)>(
    &::GlobalNamespace::CubemapCapture::SerializeTextureToByteArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22ed548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), "SerializeTextureToByteArray", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapCapture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapCapture::*)()>(&::GlobalNamespace::CubemapCapture::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x22ed63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Camera*& GlobalNamespace::CubemapCapture::__get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::CubemapCapture::__get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::CubemapCapture::__set__camera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Key& GlobalNamespace::CubemapCapture::__get__triggerKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerKey;
}
constexpr ::UnityEngine::InputSystem::Key const& GlobalNamespace::CubemapCapture::__get__triggerKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerKey;
}
constexpr void GlobalNamespace::CubemapCapture::__set__triggerKey(::UnityEngine::InputSystem::Key value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerKey = value;
}
constexpr int32_t& GlobalNamespace::CubemapCapture::__get__cubemapSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapSize;
}
constexpr int32_t const& GlobalNamespace::CubemapCapture::__get__cubemapSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapSize;
}
constexpr void GlobalNamespace::CubemapCapture::__set__cubemapSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cubemapSize = value;
}
constexpr ::StringW& GlobalNamespace::CubemapCapture::__get__saveDirectoryAbsolutePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveDirectoryAbsolutePath;
}
constexpr ::StringW const& GlobalNamespace::CubemapCapture::__get__saveDirectoryAbsolutePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveDirectoryAbsolutePath;
}
constexpr void GlobalNamespace::CubemapCapture::__set__saveDirectoryAbsolutePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveDirectoryAbsolutePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CubemapCapture__ImageType& GlobalNamespace::CubemapCapture::__get__imageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageType;
}
constexpr ::GlobalNamespace::__CubemapCapture__ImageType const& GlobalNamespace::CubemapCapture::__get__imageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageType;
}
constexpr void GlobalNamespace::CubemapCapture::__set__imageType(::GlobalNamespace::__CubemapCapture__ImageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____imageType = value;
}
constexpr int32_t& GlobalNamespace::CubemapCapture::__get__jpegCompression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jpegCompression;
}
constexpr int32_t const& GlobalNamespace::CubemapCapture::__get__jpegCompression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jpegCompression;
}
constexpr void GlobalNamespace::CubemapCapture::__set__jpegCompression(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jpegCompression = value;
}
constexpr ::UnityEngine::__Texture2D__EXRFlags& GlobalNamespace::CubemapCapture::__get__exrFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exrFlags;
}
constexpr ::UnityEngine::__Texture2D__EXRFlags const& GlobalNamespace::CubemapCapture::__get__exrFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exrFlags;
}
constexpr void GlobalNamespace::CubemapCapture::__set__exrFlags(::UnityEngine::__Texture2D__EXRFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exrFlags = value;
}
constexpr ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*>& GlobalNamespace::CubemapCapture::__get__faces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faces;
}
constexpr ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> const& GlobalNamespace::CubemapCapture::__get__faces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faces;
}
constexpr void GlobalNamespace::CubemapCapture::__set__faces(::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____faces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::CubemapCapture::__get__faceAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faceAngles;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::CubemapCapture::__get__faceAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faceAngles;
}
constexpr void GlobalNamespace::CubemapCapture::__set__faceAngles(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____faceAngles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CubemapCapture::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CubemapCapture::GenerateAndSaveCubemapTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(),
                                                                             "GenerateAndSaveCubemapTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CubemapCapture::RenderCubemapTexture(::UnityEngine::Cubemap* cubemap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), "RenderCubemapTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cubemap);
}
inline void GlobalNamespace::CubemapCapture::SaveCubemapTexture(::UnityEngine::Cubemap* cubemap, ::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), "SaveCubemapTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cubemap, path);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::CubemapCapture::SerializeTextureToByteArray(::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), "SerializeTextureToByteArray", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, texture);
}
inline ::GlobalNamespace::CubemapCapture* GlobalNamespace::CubemapCapture::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CubemapCapture*>());
}
inline void GlobalNamespace::CubemapCapture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapCapture*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CubemapCapture::CubemapCapture() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
