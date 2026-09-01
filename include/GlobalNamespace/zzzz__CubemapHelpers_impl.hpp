#pragma once
// IWYU pragma private; include "GlobalNamespace\CubemapHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__CubemapFace_impl.hpp"
#include "GlobalNamespace/zzzz__CubemapHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.get_cubemapHelpersMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::GlobalNamespace::CubemapHelpers::get_cubemapHelpersMaterial)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58e3408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(), { "get_cubemapHelpersMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.Downsample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::CubemapHelpers::Downsample)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58e3538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(),
                                                             { "Downsample", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.CreateDownsampledCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::RenderTexture*, int32_t)>(
    &::GlobalNamespace::CubemapHelpers::CreateDownsampledCubemap)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x58e3944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(),
                                                             { "CreateDownsampledCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.Create2DTextureFromCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::RenderTexture*)>(&::GlobalNamespace::CubemapHelpers::Create2DTextureFromCubemap)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58e3b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(), { "Create2DTextureFromCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.DrawCubemapFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::CubemapFace)>(&::GlobalNamespace::CubemapHelpers::DrawCubemapFace)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x58e366c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(),
                                                             { "DrawCubemapFace", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubemapHelpersMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "_cubemapHelpersMaterial", ::GlobalNamespace::CubemapHelpers*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::CubemapHelpers::getStaticF__cubemapHelpersMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "_cubemapHelpersMaterial", ::GlobalNamespace::CubemapHelpers*>();
}
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cubePropertyId", ::GlobalNamespace::CubemapHelpers*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CubemapHelpers::getStaticF__cubePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_cubePropertyId", ::GlobalNamespace::CubemapHelpers*>();
}
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubeFaceNumberId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cubeFaceNumberId", ::GlobalNamespace::CubemapHelpers*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CubemapHelpers::getStaticF__cubeFaceNumberId() {
  return ::cordl_internals::getStaticField<int32_t, "_cubeFaceNumberId", ::GlobalNamespace::CubemapHelpers*>();
}
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubemapFaceToCubeFaceNumberDict(::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>*, "_cubemapFaceToCubeFaceNumberDict", ::GlobalNamespace::CubemapHelpers*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>* GlobalNamespace::CubemapHelpers::getStaticF__cubemapFaceToCubeFaceNumberDict() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>*, "_cubemapFaceToCubeFaceNumberDict",
                                           ::GlobalNamespace::CubemapHelpers*>();
}
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubemapFaces(::ArrayW<::UnityEngine::CubemapFace> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::CubemapFace>, "_cubemapFaces", ::GlobalNamespace::CubemapHelpers*>(std::forward<::ArrayW<::UnityEngine::CubemapFace>>(value));
}
inline ::ArrayW<::UnityEngine::CubemapFace> GlobalNamespace::CubemapHelpers::getStaticF__cubemapFaces() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::CubemapFace>, "_cubemapFaces", ::GlobalNamespace::CubemapHelpers*>();
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::CubemapHelpers::get_cubemapHelpersMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(), { "get_cubemapHelpersMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CubemapHelpers::Downsample(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(),
                                                           { "Downsample", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dest);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::CubemapHelpers::CreateDownsampledCubemap(::UnityEngine::RenderTexture* src, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(), { "CreateDownsampledCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, src, count);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::CubemapHelpers::Create2DTextureFromCubemap(::UnityEngine::RenderTexture* src) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(), { "Create2DTextureFromCubemap", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, src);
}
inline void GlobalNamespace::CubemapHelpers::DrawCubemapFace(::UnityEngine::Texture* cubemap, ::UnityEngine::CubemapFace cubemapFace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubemapHelpers*>(),
                                                           { "DrawCubemapFace", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cubemap, cubemapFace);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CubemapHelpers::CubemapHelpers() {}
