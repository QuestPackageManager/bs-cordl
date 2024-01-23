#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CubemapHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.get_cubemapHelpersMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::GlobalNamespace::CubemapHelpers::get_cubemapHelpersMaterial)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x22f6bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(),
                                                                               "get_cubemapHelpersMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.Downsample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::CubemapHelpers::Downsample)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x22f6cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(), "Downsample", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.CreateDownsampledCubemap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::RenderTexture*, int32_t)>(
    &::GlobalNamespace::CubemapHelpers::CreateDownsampledCubemap)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x22f6fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(), "CreateDownsampledCubemap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.Create2DTextureFromCubemap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::CubemapHelpers::Create2DTextureFromCubemap)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f71b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(), "Create2DTextureFromCubemap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapHelpers.DrawCubemapFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::CubemapFace)>(&::GlobalNamespace::CubemapHelpers::DrawCubemapFace)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22f6e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(), "DrawCubemapFace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubemapHelpersMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "_cubemapHelpersMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::CubemapHelpers::getStaticF__cubemapHelpersMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "_cubemapHelpersMaterial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>();
}
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cubePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CubemapHelpers::getStaticF__cubePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_cubePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>();
}
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubeFaceNumberId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cubeFaceNumberId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CubemapHelpers::getStaticF__cubeFaceNumberId() {
  return ::cordl_internals::getStaticField<int32_t, "_cubeFaceNumberId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>();
}
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubemapFaceToCubeFaceNumberDict(::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>*, "_cubemapFaceToCubeFaceNumberDict",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>* GlobalNamespace::CubemapHelpers::getStaticF__cubemapFaceToCubeFaceNumberDict() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::CubemapFace, int32_t>*, "_cubemapFaceToCubeFaceNumberDict",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>();
}
inline void GlobalNamespace::CubemapHelpers::setStaticF__cubemapFaces(::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*>, "_cubemapFaces",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>(
      std::forward<::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*>>(value));
}
inline ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> GlobalNamespace::CubemapHelpers::getStaticF__cubemapFaces() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*>, "_cubemapFaces",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get>();
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::CubemapHelpers::get_cubemapHelpersMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(),
                                                                             "get_cubemapHelpersMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CubemapHelpers::Downsample(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(), "Downsample", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, dest);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::CubemapHelpers::CreateDownsampledCubemap(::UnityEngine::RenderTexture* src, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(), "CreateDownsampledCubemap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(nullptr, ___internal_method, src, count);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::CubemapHelpers::Create2DTextureFromCubemap(::UnityEngine::RenderTexture* src) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(), "Create2DTextureFromCubemap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(nullptr, ___internal_method, src);
}
inline void GlobalNamespace::CubemapHelpers::DrawCubemapFace(::UnityEngine::Texture* cubemap, ::UnityEngine::CubemapFace cubemapFace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapHelpers*>::get(), "DrawCubemapFace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CubemapFace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cubemap, cubemapFace);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CubemapHelpers::CubemapHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
