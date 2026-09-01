#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRCustomFaceExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFaceExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.AutoGenerateMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> (*)(
    ::UnityEngine::Mesh*, ::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>, bool)>(&::GlobalNamespace::OVRCustomFaceExtensions::AutoGenerateMapping)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5ef8198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(),
                                                             { "AutoGenerateMapping",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.FindBestMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRFaceExpressions_FaceExpression (*)(
    ::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*>, ::StringW, ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>, ::GlobalNamespace::OVRFaceExpressions_FaceExpression)>(
    &::GlobalNamespace::OVRCustomFaceExtensions::FindBestMatch)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5ef8968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(),
                            { "FindBestMatch",
                              {},
                              { ::i2c::type_of<::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*>>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>(), ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceExpression>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.IsLipsToward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::OVRCustomFaceExtensions::IsLipsToward)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ef8d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "IsLipsToward", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.TokenizeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (*)(::StringW)>(&::GlobalNamespace::OVRCustomFaceExtensions::TokenizeString)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x5ef8430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "TokenizeString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.SplitCamelCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::OVRCustomFaceExtensions::SplitCamelCase)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ef8e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "SplitCamelCase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.AutoMapBlendshapes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRCustomFace*)>(&::GlobalNamespace::OVRCustomFaceExtensions::AutoMapBlendshapes)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5ef8ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "AutoMapBlendshapes", {}, { ::i2c::type_of<::GlobalNamespace::OVRCustomFace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.ClearBlendshapes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRCustomFace*)>(&::GlobalNamespace::OVRCustomFaceExtensions::ClearBlendshapes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ef9378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "ClearBlendshapes", {}, { ::i2c::type_of<::GlobalNamespace::OVRCustomFace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.OculusFaceAutoGenerateMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> (*)(::UnityEngine::Mesh*, bool)>(
    &::GlobalNamespace::OVRCustomFaceExtensions::OculusFaceAutoGenerateMapping)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ef9228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(),
                                                             { "OculusFaceAutoGenerateMapping", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.CustomAutoGeneratedMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> (*)(::GlobalNamespace::OVRCustomFace*, ::UnityEngine::Mesh*, bool)>(
    &::GlobalNamespace::OVRCustomFaceExtensions::CustomAutoGeneratedMapping)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ef9330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(),
                            { "CustomAutoGeneratedMapping", {}, { ::i2c::type_of<::GlobalNamespace::OVRCustomFace*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>
GlobalNamespace::OVRCustomFaceExtensions::AutoGenerateMapping(::UnityEngine::Mesh* skinnedMesh, ::ArrayW<::StringW> blendShapeNames,
                                                              ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> faceExpressions, bool allowDuplicateMapping) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(),
                                                           { "AutoGenerateMapping",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>(nullptr, ___internal_method, skinnedMesh, blendShapeNames, faceExpressions,
                                                                                                             allowDuplicateMapping);
}
inline ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRCustomFaceExtensions::FindBestMatch(::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*> tokenizedOptions,
                                                                                                                    ::StringW searchString,
                                                                                                                    ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> expressions,
                                                                                                                    ::GlobalNamespace::OVRFaceExpressions_FaceExpression fallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(),
                          { "FindBestMatch",
                            {},
                            { ::i2c::type_of<::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*>>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>(), ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions_FaceExpression>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRFaceExpressions_FaceExpression>(nullptr, ___internal_method, tokenizedOptions, searchString, expressions, fallback);
}
inline bool GlobalNamespace::OVRCustomFaceExtensions::IsLipsToward(::StringW blendshapeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "IsLipsToward", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, blendshapeName);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::OVRCustomFaceExtensions::TokenizeString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "TokenizeString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*>(nullptr, ___internal_method, s);
}
inline ::StringW GlobalNamespace::OVRCustomFaceExtensions::SplitCamelCase(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "SplitCamelCase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline void GlobalNamespace::OVRCustomFaceExtensions::AutoMapBlendshapes(::GlobalNamespace::OVRCustomFace* customFace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "AutoMapBlendshapes", {}, { ::i2c::type_of<::GlobalNamespace::OVRCustomFace*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customFace);
}
inline void GlobalNamespace::OVRCustomFaceExtensions::ClearBlendshapes(::GlobalNamespace::OVRCustomFace* customFace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(), { "ClearBlendshapes", {}, { ::i2c::type_of<::GlobalNamespace::OVRCustomFace*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customFace);
}
inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression> GlobalNamespace::OVRCustomFaceExtensions::OculusFaceAutoGenerateMapping(::UnityEngine::Mesh* sharedMesh,
                                                                                                                                              bool allowDuplicateMapping) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(),
                                                                                         { "OculusFaceAutoGenerateMapping", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>(nullptr, ___internal_method, sharedMesh, allowDuplicateMapping);
}
inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>
GlobalNamespace::OVRCustomFaceExtensions::CustomAutoGeneratedMapping(::GlobalNamespace::OVRCustomFace* customFace, ::UnityEngine::Mesh* sharedMesh, bool allowDuplicateMapping) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomFaceExtensions*>(),
                                       { "CustomAutoGeneratedMapping", {}, { ::i2c::type_of<::GlobalNamespace::OVRCustomFace*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression>>(nullptr, ___internal_method, customFace, sharedMesh, allowDuplicateMapping);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCustomFaceExtensions::OVRCustomFaceExtensions() {}
