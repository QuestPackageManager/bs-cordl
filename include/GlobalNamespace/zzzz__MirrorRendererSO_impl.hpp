#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MirrorRendererSO__CameraTransformData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MirrorRendererSO__CameraTransformData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, bool)>(&::GlobalNamespace::__MirrorRendererSO__CameraTransformData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x268f400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MirrorRendererSO__CameraTransformData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MirrorRendererSO__CameraTransformData::*)(::System::Object*)>(
    &::GlobalNamespace::__MirrorRendererSO__CameraTransformData::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x268fee0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MirrorRendererSO__CameraTransformData.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__MirrorRendererSO__CameraTransformData::*)()>(
    &::GlobalNamespace::__MirrorRendererSO__CameraTransformData::GetHashCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x268ffe0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(), 2));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__MirrorRendererSO__CameraTransformData::_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t fov, bool stereoEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation, fov, stereoEnabled);
}
inline bool GlobalNamespace::__MirrorRendererSO__CameraTransformData::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::__MirrorRendererSO__CameraTransformData::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stereoEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MirrorRendererSO__CameraTransformData::__MirrorRendererSO__CameraTransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t fov,
                                                                                                              bool stereoEnabled) noexcept {
  this->position = position;
  this->rotation = rotation;
  this->fov = fov;
  this->stereoEnabled = stereoEnabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MirrorRendererSO__CameraTransformData::__MirrorRendererSO__CameraTransformData() {}
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererSO::*)()>(&::GlobalNamespace::MirrorRendererSO::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x268f36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "OnValidate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererSO::*)()>(&::GlobalNamespace::MirrorRendererSO::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x268f3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.ValidateParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererSO::*)()>(&::GlobalNamespace::MirrorRendererSO::ValidateParams)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x268f370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "ValidateParams",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MirrorRendererSO::*)(::UnityEngine::LayerMask, int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(&::GlobalNamespace::MirrorRendererSO::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x268f3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.PrepareForNextFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererSO::*)()>(&::GlobalNamespace::MirrorRendererSO::PrepareForNextFrame)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x268e6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(),
                                                                               "PrepareForNextFrame", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.GetMirrorTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (::GlobalNamespace::MirrorRendererSO::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::MirrorRendererSO::GetMirrorTexture)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x268eb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "GetMirrorTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.RenderMirror
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererSO::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::MirrorRendererSO::RenderMirror)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x268f7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "RenderMirror", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererSO::*)()>(&::GlobalNamespace::MirrorRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x268fb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.CreateOrUpdateMirrorCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererSO::*)(::UnityEngine::Camera*, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::MirrorRendererSO::CreateOrUpdateMirrorCamera)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x268f41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "CreateOrUpdateMirrorCamera", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.Plane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::MirrorRendererSO::Plane)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x268f6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "Plane", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.CameraSpacePlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::MirrorRendererSO::CameraSpacePlane)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x268fa54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "CameraSpacePlane", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO.CalculateReflectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector4)>(
    &::GlobalNamespace::MirrorRendererSO::CalculateReflectionMatrix)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x268f6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "CalculateReflectionMatrix", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererSO::*)()>(&::GlobalNamespace::MirrorRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x268fda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::MirrorRendererSO::__get__reflectLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::MirrorRendererSO::__get__reflectLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectLayers;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__reflectLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectLayers = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererSO::__get__stereoTextureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stereoTextureWidth;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererSO::__get__stereoTextureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stereoTextureWidth;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__stereoTextureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stereoTextureWidth = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererSO::__get__stereoTextureHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stereoTextureHeight;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererSO::__get__stereoTextureHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stereoTextureHeight;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__stereoTextureHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stereoTextureHeight = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererSO::__get__monoTextureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoTextureWidth;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererSO::__get__monoTextureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoTextureWidth;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__monoTextureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____monoTextureWidth = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererSO::__get__monoTextureHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoTextureHeight;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererSO::__get__monoTextureHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoTextureHeight;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__monoTextureHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____monoTextureHeight = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererSO::__get__maxAntiAliasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAntiAliasing;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererSO::__get__maxAntiAliasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAntiAliasing;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__maxAntiAliasing(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxAntiAliasing = value;
}
constexpr bool& GlobalNamespace::MirrorRendererSO::__get__disableDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableDepthTexture;
}
constexpr bool const& GlobalNamespace::MirrorRendererSO::__get__disableDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableDepthTexture;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__disableDepthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableDepthTexture = value;
}
constexpr bool& GlobalNamespace::MirrorRendererSO::__get__enableBloomPrePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBloomPrePass;
}
constexpr bool const& GlobalNamespace::MirrorRendererSO::__get__enableBloomPrePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBloomPrePass;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__enableBloomPrePass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableBloomPrePass = value;
}
constexpr ::GlobalNamespace::BloomPrePassRendererSO*& GlobalNamespace::MirrorRendererSO::__get__bloomPrePassRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRendererSO*> const& GlobalNamespace::MirrorRendererSO::__get__bloomPrePassRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassRenderer;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__bloomPrePassRenderer(::GlobalNamespace::BloomPrePassRendererSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomPrePassEffectSO*& GlobalNamespace::MirrorRendererSO::__get__bloomPrePassEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffect;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectSO*> const& GlobalNamespace::MirrorRendererSO::__get__bloomPrePassEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffect;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__bloomPrePassEffect(::GlobalNamespace::BloomPrePassEffectSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::MirrorRendererSO::__get__clearDepthShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearDepthShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::MirrorRendererSO::__get__clearDepthShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearDepthShader;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__clearDepthShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearDepthShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTexture*& GlobalNamespace::MirrorRendererSO::__get__bloomPrePassRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassRenderTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& GlobalNamespace::MirrorRendererSO::__get__bloomPrePassRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassRenderTexture;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__bloomPrePassRenderTexture(::UnityEngine::RenderTexture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Camera*& GlobalNamespace::MirrorRendererSO::__get__mirrorCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorCamera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::MirrorRendererSO::__get__mirrorCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorCamera;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__mirrorCamera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MirrorRendererSO::__get__antialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____antialiasing;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererSO::__get__antialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____antialiasing;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__antialiasing(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____antialiasing = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityEngine::RenderTexture*>*&
GlobalNamespace::MirrorRendererSO::__get__renderTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTextures;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityEngine::RenderTexture*>*> const&
GlobalNamespace::MirrorRendererSO::__get__renderTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTextures;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set__renderTextures(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, ::UnityEngine::RenderTexture*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& GlobalNamespace::MirrorRendererSO::__get_kLeftRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kLeftRect;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::MirrorRendererSO::__get_kLeftRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kLeftRect;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set_kLeftRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kLeftRect = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::MirrorRendererSO::__get_kRightRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kRightRect;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::MirrorRendererSO::__get_kRightRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kRightRect;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set_kRightRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kRightRect = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::MirrorRendererSO::__get_kFullRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kFullRect;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::MirrorRendererSO::__get_kFullRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kFullRect;
}
constexpr void GlobalNamespace::MirrorRendererSO::__set_kFullRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kFullRect = value;
}
inline void GlobalNamespace::MirrorRendererSO::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "OnValidate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorRendererSO::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorRendererSO::ValidateParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "ValidateParams",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorRendererSO::Init(::UnityEngine::LayerMask reflectLayers, int32_t stereoTextureWidth, int32_t stereoTextureHeight, int32_t monoTextureWidth,
                                                    int32_t monoTextureHeight, int32_t maxAntiAliasing, bool enableBloomPrePass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reflectLayers, stereoTextureWidth, stereoTextureHeight, monoTextureWidth, monoTextureHeight, maxAntiAliasing,
                                                          enableBloomPrePass);
}
inline void GlobalNamespace::MirrorRendererSO::PrepareForNextFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "PrepareForNextFrame",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Texture* GlobalNamespace::MirrorRendererSO::GetMirrorTexture(::UnityEngine::Vector3 reflectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "GetMirrorTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture*, false>(this, ___internal_method, reflectionPlanePos, reflectionPlaneNormal);
}
inline void GlobalNamespace::MirrorRendererSO::RenderMirror(::UnityEngine::Vector3 camPosition, ::UnityEngine::Quaternion camRotation, ::UnityEngine::Matrix4x4 camProjectionMatrix,
                                                            ::UnityEngine::Rect screenRect, ::UnityEngine::Vector3 reclectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "RenderMirror", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camPosition, camRotation, camProjectionMatrix, screenRect, reclectionPlanePos, reflectionPlaneNormal);
}
inline void GlobalNamespace::MirrorRendererSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorRendererSO::CreateOrUpdateMirrorCamera(::UnityEngine::Camera* currentCamera, ::UnityEngine::RenderTexture* renderTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "CreateOrUpdateMirrorCamera", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentCamera, renderTexture);
}
inline ::UnityEngine::Vector4 GlobalNamespace::MirrorRendererSO::Plane(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "Plane", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, pos, normal);
}
inline ::UnityEngine::Vector4 GlobalNamespace::MirrorRendererSO::CameraSpacePlane(::UnityEngine::Matrix4x4 worldToCameraMatrix, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "CameraSpacePlane", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, worldToCameraMatrix, pos, normal);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::MirrorRendererSO::CalculateReflectionMatrix(::UnityEngine::Vector4 plane) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), "CalculateReflectionMatrix",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, plane);
}
inline ::GlobalNamespace::MirrorRendererSO* GlobalNamespace::MirrorRendererSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MirrorRendererSO*>());
}
inline void GlobalNamespace::MirrorRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorRendererSO::MirrorRendererSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
