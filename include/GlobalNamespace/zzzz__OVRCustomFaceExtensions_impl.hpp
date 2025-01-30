#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCustomFaceExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFaceExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.AutoGenerateMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> (*)(
        ::UnityEngine::Mesh*, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>,
        bool)>(&::GlobalNamespace::OVRCustomFaceExtensions::AutoGenerateMapping)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x40313b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "AutoGenerateMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.FindBestMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRFaceExpressions_FaceExpression (*)(
    ::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*, ::Array<::System::Collections::Generic::HashSet_1<::StringW>*>*>, ::StringW,
    ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>, ::GlobalNamespace::OVRFaceExpressions_FaceExpression)>(
    &::GlobalNamespace::OVRCustomFaceExtensions::FindBestMatch)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x4031b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "FindBestMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*, ::Array<::System::Collections::Generic::HashSet_1<::StringW>*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceExpression>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.IsLipsToward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::OVRCustomFaceExtensions::IsLipsToward)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4031f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "IsLipsToward",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.TokenizeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (*)(::StringW)>(
    &::GlobalNamespace::OVRCustomFaceExtensions::TokenizeString)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x4031624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "TokenizeString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.SplitCamelCase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::OVRCustomFaceExtensions::SplitCamelCase)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x403202c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "SplitCamelCase",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.AutoMapBlendshapes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRCustomFace*)>(&::GlobalNamespace::OVRCustomFaceExtensions::AutoMapBlendshapes)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x40320c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "AutoMapBlendshapes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCustomFace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.ClearBlendshapes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRCustomFace*)>(&::GlobalNamespace::OVRCustomFaceExtensions::ClearBlendshapes)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x403251c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "ClearBlendshapes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCustomFace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.OculusFaceAutoGenerateMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> (*)(::UnityEngine::Mesh*, bool)>(
        &::GlobalNamespace::OVRCustomFaceExtensions::OculusFaceAutoGenerateMapping)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x40323b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "OculusFaceAutoGenerateMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomFaceExtensions.CustomAutoGeneratedMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> (*)(::GlobalNamespace::OVRCustomFace*, ::UnityEngine::Mesh*, bool)>(
    &::GlobalNamespace::OVRCustomFaceExtensions::CustomAutoGeneratedMapping)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x40324d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "CustomAutoGeneratedMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCustomFace*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> GlobalNamespace::OVRCustomFaceExtensions::AutoGenerateMapping(
    ::UnityEngine::Mesh* skinnedMesh, ::ArrayW<::StringW, ::Array<::StringW>*> blendShapeNames,
    ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> faceExpressions, bool allowDuplicateMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "AutoGenerateMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>, false>(
      nullptr, ___internal_method, skinnedMesh, blendShapeNames, faceExpressions, allowDuplicateMapping);
}
inline ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRCustomFaceExtensions::FindBestMatch(
    ::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*, ::Array<::System::Collections::Generic::HashSet_1<::StringW>*>*> tokenizedOptions, ::StringW searchString,
    ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> expressions,
    ::GlobalNamespace::OVRFaceExpressions_FaceExpression fallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "FindBestMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::System::Collections::Generic::HashSet_1<::StringW>*, ::Array<::System::Collections::Generic::HashSet_1<::StringW>*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRFaceExpressions_FaceExpression>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRFaceExpressions_FaceExpression, false>(nullptr, ___internal_method, tokenizedOptions, searchString, expressions, fallback);
}
inline bool GlobalNamespace::OVRCustomFaceExtensions::IsLipsToward(::StringW blendshapeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "IsLipsToward", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, blendshapeName);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::OVRCustomFaceExtensions::TokenizeString(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "TokenizeString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(nullptr, ___internal_method, s);
}
inline ::StringW GlobalNamespace::OVRCustomFaceExtensions::SplitCamelCase(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "SplitCamelCase",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input);
}
inline void GlobalNamespace::OVRCustomFaceExtensions::AutoMapBlendshapes(::GlobalNamespace::OVRCustomFace* customFace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "AutoMapBlendshapes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCustomFace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, customFace);
}
inline void GlobalNamespace::OVRCustomFaceExtensions::ClearBlendshapes(::GlobalNamespace::OVRCustomFace* customFace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "ClearBlendshapes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCustomFace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, customFace);
}
inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>
GlobalNamespace::OVRCustomFaceExtensions::OculusFaceAutoGenerateMapping(::UnityEngine::Mesh* sharedMesh, bool allowDuplicateMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "OculusFaceAutoGenerateMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>, false>(
      nullptr, ___internal_method, sharedMesh, allowDuplicateMapping);
}
inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>
GlobalNamespace::OVRCustomFaceExtensions::CustomAutoGeneratedMapping(::GlobalNamespace::OVRCustomFace* customFace, ::UnityEngine::Mesh* sharedMesh, bool allowDuplicateMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomFaceExtensions*>::get(), "CustomAutoGeneratedMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRCustomFace*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>, false>(
      nullptr, ___internal_method, customFace, sharedMesh, allowDuplicateMapping);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCustomFaceExtensions::OVRCustomFaceExtensions() {}
