#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlay.hpp"
#include "GlobalNamespace/zzzz__OVRManager_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVROverlay_OverlayShape::OVROverlay_OverlayShape(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlay_OverlayShape::OVROverlay_OverlayShape() {}
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::Quad{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::Cylinder{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::Cubemap{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::OffcenterCubemap{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::Equirect{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::ReconstructionPassthrough{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::SurfaceProjectedPassthrough{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::Fisheye{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::KeyboardHandsPassthrough{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVROverlay_OverlayShape GlobalNamespace::OVROverlay_OverlayShape::KeyboardMaskedHandsPassthrough{ static_cast<int32_t>(0xb) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVROverlay_OverlayType::OVROverlay_OverlayType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlay_OverlayType::OVROverlay_OverlayType() {}
constexpr ::GlobalNamespace::OVROverlay_OverlayType GlobalNamespace::OVROverlay_OverlayType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVROverlay_OverlayType GlobalNamespace::OVROverlay_OverlayType::Underlay{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVROverlay_OverlayType GlobalNamespace::OVROverlay_OverlayType::Overlay{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cca320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::*)()>(
    &::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cca388;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cca39c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cca3b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated* GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated::OVROverlay_ExternalSurfaceObjectCreated() {}
// Ctor Parameters [CppParam { name: "appTexture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "appTexturePtr", ty: "::System::IntPtr", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "swapChain", ty: "::ArrayW<::UnityW<::UnityEngine::Texture>,::Array<::UnityW<::UnityEngine::Texture>>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "swapChainPtr", ty: "::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVROverlay_LayerTexture::OVROverlay_LayerTexture(::UnityW<::UnityEngine::Texture> appTexture, ::System::IntPtr appTexturePtr,
                                                                              ::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> swapChain,
                                                                              ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> swapChainPtr) noexcept {
  this->appTexture = appTexture;
  this->appTexturePtr = appTexturePtr;
  this->swapChain = swapChain;
  this->swapChainPtr = swapChainPtr;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlay_LayerTexture::OVROverlay_LayerTexture() {}
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_previewInEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::get_previewInEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc5530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_previewInEditor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.set_previewInEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(bool)>(&::GlobalNamespace::OVROverlay::set_previewInEditor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cc5538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "set_previewInEditor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OverrideOverlayTextureInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Texture*, ::System::IntPtr, ::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::OVROverlay::OverrideOverlayTextureInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cc5554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OverrideOverlayTextureInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_layerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::get_layerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc5610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_layerId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.set_layerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(int32_t)>(&::GlobalNamespace::OVROverlay::set_layerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc5618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "set_layerId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_layout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_LayerLayout (::GlobalNamespace::OVROverlay::*)()>(
    &::GlobalNamespace::OVROverlay::get_layout)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cc5620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_layout",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_isOverlayVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::get_isOverlayVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc56f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_isOverlayVisible",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.set_isOverlayVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(bool)>(&::GlobalNamespace::OVROverlay::set_isOverlayVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc56f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "set_isOverlayVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_texturesPerStage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::get_texturesPerStage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cc5700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_texturesPerStage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.NeedsTexturesForShape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVROverlay_OverlayShape)>(&::GlobalNamespace::OVROverlay::NeedsTexturesForShape)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cc571c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "NeedsTexturesForShape", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay_OverlayShape>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.CreateLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(
    int32_t, int32_t, ::GlobalNamespace::OVRPlugin_EyeTextureFormat, int32_t, ::GlobalNamespace::OVRPlugin_Sizei, ::GlobalNamespace::OVRPlugin_OverlayShape)>(
    &::GlobalNamespace::OVROverlay::CreateLayer)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5cc57e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "CreateLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EyeTextureFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Sizei>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_OverlayShape>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.CreateLayerTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(bool, ::GlobalNamespace::OVRPlugin_Sizei, bool)>(
    &::GlobalNamespace::OVROverlay::CreateLayerTextures)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x5cc5c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "CreateLayerTextures", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Sizei>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.DestroyLayerTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::DestroyLayerTextures)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5cc6128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "DestroyLayerTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.DestroyLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::DestroyLayer)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5cc6254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "DestroyLayer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.SetSrcDestRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlay::SetSrcDestRects)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cc64a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "SetSrcDestRects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.UpdateTextureRectMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::UpdateTextureRectMatrix)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5cc64cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "UpdateTextureRectMatrix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.SetPerLayerColorScaleAndOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(
    &::GlobalNamespace::OVROverlay::SetPerLayerColorScaleAndOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cc65c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "SetPerLayerColorScaleAndOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.LatchLayerTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::LatchLayerTextures)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5cc65dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "LatchLayerTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.GetCurrentLayerDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_LayerDesc (::GlobalNamespace::OVROverlay::*)()>(
    &::GlobalNamespace::OVROverlay::GetCurrentLayerDesc)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x5cc69cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "GetCurrentLayerDesc",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.GetBlitRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::GlobalNamespace::OVROverlay::*)(int32_t, int32_t, int32_t, bool)>(
    &::GlobalNamespace::OVROverlay::GetBlitRect)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cc6ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "GetBlitRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.BlitSubImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Texture*, int32_t, int32_t, ::UnityEngine::Material*, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlay::BlitSubImage)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5cc6f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "BlitSubImage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.PopulateLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(int32_t, bool, ::GlobalNamespace::OVRPlugin_Sizei, int32_t, int32_t)>(
    &::GlobalNamespace::OVROverlay::PopulateLayer)> {
  constexpr static std::size_t size = 0xaa0;
  constexpr static std::size_t addrs = 0x5cc7470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "PopulateLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Sizei>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.SubmitLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::OVROverlay::*)(bool, bool, bool, ::GlobalNamespace::OVRPose, ::UnityEngine::Vector3, int32_t)>(&::GlobalNamespace::OVROverlay::SubmitLayer)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5cc7f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "SubmitLayer", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 6>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.SetupEditorPreview
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::SetupEditorPreview)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc5550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "SetupEditorPreview",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.ResetEditorPreview
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::ResetEditorPreview)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cc8398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "ResetEditorPreview",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.IsPassthroughShape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVROverlay_OverlayShape)>(&::GlobalNamespace::OVROverlay::IsPassthroughShape)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cc5780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "IsPassthroughShape", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay_OverlayShape>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::Awake)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5cc83a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.get_OpenVROverlayKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVROverlay::get_OpenVROverlayKey)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cc87c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_OpenVROverlayKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::OnEnable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5cc8874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.InitOVROverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::InitOVROverlay)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5cc8a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "InitOVROverlay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cc8be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.DisableImmediately
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::DisableImmediately)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5cc8c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "DisableImmediately",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::OnDestroy)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cc8ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.ComputePoseAndScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(
    ::ByRef<::GlobalNamespace::OVRPose>, ::ByRef<::UnityEngine::Vector3>, ::ByRef<bool>, ::ByRef<bool>)>(&::GlobalNamespace::OVROverlay::ComputePoseAndScale)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5cc8f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "ComputePoseAndScale", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPose>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.ComputeSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(
    ::ByRef<::GlobalNamespace::OVRPose>, ::ByRef<::UnityEngine::Vector3>, ::ByRef<bool>, ::ByRef<bool>)>(&::GlobalNamespace::OVROverlay::ComputeSubmit)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5cc9360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "ComputeSubmit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPose>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.OpenVROverlayUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Vector3, ::GlobalNamespace::OVRPose)>(
    &::GlobalNamespace::OVROverlay::OpenVROverlayUpdate)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5cc9624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OpenVROverlayUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.HandlePreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::OVROverlay::HandlePreRender)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5cc9998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "HandlePreRender", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.HandleBeginCameraRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVROverlay::HandleBeginCameraRendering)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5cc9fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "HandleBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay.TrySubmitLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::TrySubmitLayer)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x5cc9a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "TrySubmitLayer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlay::*)()>(&::GlobalNamespace::OVROverlay::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5cca07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVROverlay_OverlayType& GlobalNamespace::OVROverlay::__cordl_internal_get_currentOverlayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOverlayType;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayType const& GlobalNamespace::OVROverlay::__cordl_internal_get_currentOverlayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOverlayType;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_currentOverlayType(::GlobalNamespace::OVROverlay_OverlayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentOverlayType = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_isDynamic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDynamic;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_isDynamic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDynamic;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_isDynamic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDynamic = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_isProtectedContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isProtectedContent;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_isProtectedContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isProtectedContent;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_isProtectedContent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isProtectedContent = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlay::__cordl_internal_get_srcRectLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcRectLeft;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlay::__cordl_internal_get_srcRectLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcRectLeft;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_srcRectLeft(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___srcRectLeft = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlay::__cordl_internal_get_srcRectRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcRectRight;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlay::__cordl_internal_get_srcRectRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcRectRight;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_srcRectRight(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___srcRectRight = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlay::__cordl_internal_get_destRectLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destRectLeft;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlay::__cordl_internal_get_destRectLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destRectLeft;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_destRectLeft(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destRectLeft = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlay::__cordl_internal_get_destRectRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destRectRight;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlay::__cordl_internal_get_destRectRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destRectRight;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_destRectRight(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destRectRight = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_invertTextureRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertTextureRects;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_invertTextureRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertTextureRects;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_invertTextureRects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertTextureRects = value;
}
constexpr ::GlobalNamespace::OVRPlugin_TextureRectMatrixf& GlobalNamespace::OVROverlay::__cordl_internal_get_textureRectMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureRectMatrix;
}
constexpr ::GlobalNamespace::OVRPlugin_TextureRectMatrixf const& GlobalNamespace::OVROverlay::__cordl_internal_get_textureRectMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureRectMatrix;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_textureRectMatrix(::GlobalNamespace::OVRPlugin_TextureRectMatrixf value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureRectMatrix = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_overrideTextureRectMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideTextureRectMatrix;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_overrideTextureRectMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideTextureRectMatrix;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_overrideTextureRectMatrix(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideTextureRectMatrix = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_overridePerLayerColorScaleAndOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overridePerLayerColorScaleAndOffset;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_overridePerLayerColorScaleAndOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overridePerLayerColorScaleAndOffset;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_overridePerLayerColorScaleAndOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overridePerLayerColorScaleAndOffset = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVROverlay::__cordl_internal_get_colorScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScale;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVROverlay::__cordl_internal_get_colorScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScale;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_colorScale(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorScale = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVROverlay::__cordl_internal_get_colorOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOffset;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVROverlay::__cordl_internal_get_colorOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOffset;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_colorOffset(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorOffset = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_useExpensiveSuperSample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useExpensiveSuperSample;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_useExpensiveSuperSample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useExpensiveSuperSample;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_useExpensiveSuperSample(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useExpensiveSuperSample = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_useExpensiveSharpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useExpensiveSharpen;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_useExpensiveSharpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useExpensiveSharpen;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_useExpensiveSharpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useExpensiveSharpen = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_hidden() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hidden;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_hidden() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hidden;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_hidden(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hidden = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_isExternalSurface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isExternalSurface;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_isExternalSurface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isExternalSurface;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_isExternalSurface(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isExternalSurface = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get_externalSurfaceWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalSurfaceWidth;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_externalSurfaceWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalSurfaceWidth;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_externalSurfaceWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalSurfaceWidth = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get_externalSurfaceHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalSurfaceHeight;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_externalSurfaceHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalSurfaceHeight;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_externalSurfaceHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalSurfaceHeight = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get_compositionDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionDepth;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_compositionDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionDepth;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_compositionDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositionDepth = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get_layerCompositionDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerCompositionDepth;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_layerCompositionDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerCompositionDepth;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_layerCompositionDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerCompositionDepth = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_noDepthBufferTesting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noDepthBufferTesting;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_noDepthBufferTesting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noDepthBufferTesting;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_noDepthBufferTesting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noDepthBufferTesting = value;
}
constexpr ::GlobalNamespace::OVRPlugin_EyeTextureFormat& GlobalNamespace::OVROverlay::__cordl_internal_get_layerTextureFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerTextureFormat;
}
constexpr ::GlobalNamespace::OVRPlugin_EyeTextureFormat const& GlobalNamespace::OVROverlay::__cordl_internal_get_layerTextureFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerTextureFormat;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_layerTextureFormat(::GlobalNamespace::OVRPlugin_EyeTextureFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerTextureFormat = value;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayShape& GlobalNamespace::OVROverlay::__cordl_internal_get_currentOverlayShape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOverlayShape;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayShape const& GlobalNamespace::OVROverlay::__cordl_internal_get_currentOverlayShape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentOverlayShape;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_currentOverlayShape(::GlobalNamespace::OVROverlay_OverlayShape value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentOverlayShape = value;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayShape& GlobalNamespace::OVROverlay::__cordl_internal_get_prevOverlayShape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevOverlayShape;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayShape const& GlobalNamespace::OVROverlay::__cordl_internal_get_prevOverlayShape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevOverlayShape;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_prevOverlayShape(::GlobalNamespace::OVROverlay_OverlayShape value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prevOverlayShape = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*>& GlobalNamespace::OVROverlay::__cordl_internal_get_textures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> const& GlobalNamespace::OVROverlay::__cordl_internal_get_textures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textures;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_textures(::ArrayW<::UnityW<::UnityEngine::Texture>, ::Array<::UnityW<::UnityEngine::Texture>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_isAlphaPremultiplied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAlphaPremultiplied;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_isAlphaPremultiplied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAlphaPremultiplied;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_isAlphaPremultiplied(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAlphaPremultiplied = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_useBicubicFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBicubicFiltering;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_useBicubicFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBicubicFiltering;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_useBicubicFiltering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useBicubicFiltering = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_useLegacyCubemapRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useLegacyCubemapRotation;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_useLegacyCubemapRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useLegacyCubemapRotation;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_useLegacyCubemapRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useLegacyCubemapRotation = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_useEfficientSupersample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useEfficientSupersample;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_useEfficientSupersample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useEfficientSupersample;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_useEfficientSupersample(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useEfficientSupersample = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_useEfficientSharpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useEfficientSharpen;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_useEfficientSharpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useEfficientSharpen;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_useEfficientSharpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useEfficientSharpen = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_useAutomaticFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAutomaticFiltering;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_useAutomaticFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAutomaticFiltering;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_useAutomaticFiltering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAutomaticFiltering = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get__previewInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewInEditor;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get__previewInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewInEditor;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set__previewInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewInEditor = value;
}
constexpr ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*>& GlobalNamespace::OVROverlay::__cordl_internal_get_texturePtrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texturePtrs;
}
constexpr ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> const& GlobalNamespace::OVROverlay::__cordl_internal_get_texturePtrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texturePtrs;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_texturePtrs(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___texturePtrs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IntPtr& GlobalNamespace::OVROverlay::__cordl_internal_get_externalSurfaceObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalSurfaceObject;
}
constexpr ::System::IntPtr const& GlobalNamespace::OVROverlay::__cordl_internal_get_externalSurfaceObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalSurfaceObject;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_externalSurfaceObject(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalSurfaceObject = value;
}
constexpr ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated*& GlobalNamespace::OVROverlay::__cordl_internal_get_externalSurfaceObjectCreated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalSurfaceObjectCreated;
}
constexpr ::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated* const& GlobalNamespace::OVROverlay::__cordl_internal_get_externalSurfaceObjectCreated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalSurfaceObjectCreated;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_externalSurfaceObjectCreated(::GlobalNamespace::OVROverlay_ExternalSurfaceObjectCreated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___externalSurfaceObjectCreated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_isOverridePending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOverridePending;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_isOverridePending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOverridePending;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_isOverridePending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOverridePending = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get__layerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get__layerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerId_k__BackingField;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set__layerId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layerId_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::OVROverlay_LayerTexture, ::Array<::GlobalNamespace::OVROverlay_LayerTexture>*>& GlobalNamespace::OVROverlay::__cordl_internal_get_layerTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerTextures;
}
constexpr ::ArrayW<::GlobalNamespace::OVROverlay_LayerTexture, ::Array<::GlobalNamespace::OVROverlay_LayerTexture>*> const& GlobalNamespace::OVROverlay::__cordl_internal_get_layerTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerTextures;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_layerTextures(::ArrayW<::GlobalNamespace::OVROverlay_LayerTexture, ::Array<::GlobalNamespace::OVROverlay_LayerTexture>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layerTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPlugin_LayerDesc& GlobalNamespace::OVROverlay::__cordl_internal_get_layerDesc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerDesc;
}
constexpr ::GlobalNamespace::OVRPlugin_LayerDesc const& GlobalNamespace::OVROverlay::__cordl_internal_get_layerDesc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerDesc;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_layerDesc(::GlobalNamespace::OVRPlugin_LayerDesc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerDesc = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get_stageCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stageCount;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_stageCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stageCount;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_stageCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stageCount = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get_layerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIndex;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_layerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIndex;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_layerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerIndex = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::OVROverlay::__cordl_internal_get_layerIdHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIdHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::OVROverlay::__cordl_internal_get_layerIdHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIdHandle;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_layerIdHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerIdHandle = value;
}
constexpr ::System::IntPtr& GlobalNamespace::OVROverlay::__cordl_internal_get_layerIdPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIdPtr;
}
constexpr ::System::IntPtr const& GlobalNamespace::OVROverlay::__cordl_internal_get_layerIdPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIdPtr;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_layerIdPtr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerIdPtr = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get_frameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameIndex;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_frameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameIndex;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_frameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameIndex = value;
}
constexpr int32_t& GlobalNamespace::OVROverlay::__cordl_internal_get_prevFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevFrameIndex;
}
constexpr int32_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_prevFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevFrameIndex;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_prevFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prevFrameIndex = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::OVROverlay::__cordl_internal_get_rend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rend;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::OVROverlay::__cordl_internal_get_rend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rend;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_rend(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rend)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& GlobalNamespace::OVROverlay::__cordl_internal_get__commandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& GlobalNamespace::OVROverlay::__cordl_internal_get__commandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffer;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::OVROverlay::__cordl_internal_get__blitMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blitMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::OVROverlay::__cordl_internal_get__blitMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blitMesh;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set__blitMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blitMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get__isOverlayVisible_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOverlayVisible_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get__isOverlayVisible_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOverlayVisible_k__BackingField;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set__isOverlayVisible_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOverlayVisible_k__BackingField = value;
}
constexpr uint64_t& GlobalNamespace::OVROverlay::__cordl_internal_get_OpenVROverlayHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OpenVROverlayHandle;
}
constexpr uint64_t const& GlobalNamespace::OVROverlay::__cordl_internal_get_OpenVROverlayHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OpenVROverlayHandle;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_OpenVROverlayHandle(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OpenVROverlayHandle = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVROverlay::__cordl_internal_get_OpenVRUVOffsetAndScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OpenVRUVOffsetAndScale;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVROverlay::__cordl_internal_get_OpenVRUVOffsetAndScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OpenVRUVOffsetAndScale;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_OpenVRUVOffsetAndScale(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OpenVRUVOffsetAndScale = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::OVROverlay::__cordl_internal_get_OpenVRMouseScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OpenVRMouseScale;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::OVROverlay::__cordl_internal_get_OpenVRMouseScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OpenVRMouseScale;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_OpenVRMouseScale(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OpenVRMouseScale = value;
}
constexpr ::GlobalNamespace::OVRManager_XRDevice& GlobalNamespace::OVROverlay::__cordl_internal_get_constructedOverlayXRDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constructedOverlayXRDevice;
}
constexpr ::GlobalNamespace::OVRManager_XRDevice const& GlobalNamespace::OVROverlay::__cordl_internal_get_constructedOverlayXRDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constructedOverlayXRDevice;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_constructedOverlayXRDevice(::GlobalNamespace::OVRManager_XRDevice value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constructedOverlayXRDevice = value;
}
constexpr bool& GlobalNamespace::OVROverlay::__cordl_internal_get_xrDeviceConstructed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrDeviceConstructed;
}
constexpr bool const& GlobalNamespace::OVROverlay::__cordl_internal_get_xrDeviceConstructed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrDeviceConstructed;
}
constexpr void GlobalNamespace::OVROverlay::__cordl_internal_set_xrDeviceConstructed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrDeviceConstructed = value;
}
inline void GlobalNamespace::OVROverlay::setStaticF_instances(::ArrayW<::UnityW<::GlobalNamespace::OVROverlay>, ::Array<::UnityW<::GlobalNamespace::OVROverlay>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::GlobalNamespace::OVROverlay>, ::Array<::UnityW<::GlobalNamespace::OVROverlay>>*>, "instances",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>(
      std::forward<::ArrayW<::UnityW<::GlobalNamespace::OVROverlay>, ::Array<::UnityW<::GlobalNamespace::OVROverlay>>*>>(value));
}
inline ::ArrayW<::UnityW<::GlobalNamespace::OVROverlay>, ::Array<::UnityW<::GlobalNamespace::OVROverlay>>*> GlobalNamespace::OVROverlay::getStaticF_instances() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::GlobalNamespace::OVROverlay>, ::Array<::UnityW<::GlobalNamespace::OVROverlay>>*>, "instances",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>();
}
inline void GlobalNamespace::OVROverlay::setStaticF_tex2DMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "tex2DMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::OVROverlay::getStaticF_tex2DMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "tex2DMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>();
}
inline void GlobalNamespace::OVROverlay::setStaticF_cubeMaterial(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, "cubeMaterial",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>(
      std::forward<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GlobalNamespace::OVROverlay::getStaticF_cubeMaterial() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>, "cubeMaterial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>();
}
inline void GlobalNamespace::OVROverlay::setStaticF__tempRenderTextureId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tempRenderTextureId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVROverlay::getStaticF__tempRenderTextureId() {
  return ::cordl_internals::getStaticField<int32_t, "_tempRenderTextureId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get>();
}
inline bool GlobalNamespace::OVROverlay::get_previewInEditor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_previewInEditor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::set_previewInEditor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "set_previewInEditor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVROverlay::OverrideOverlayTextureInfo(::UnityEngine::Texture* srcTexture, ::System::IntPtr nativePtr, ::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OverrideOverlayTextureInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcTexture, nativePtr, node);
}
inline int32_t GlobalNamespace::OVROverlay::get_layerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_layerId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::set_layerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "set_layerId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_LayerLayout GlobalNamespace::OVROverlay::get_layout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_layout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_LayerLayout, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlay::get_isOverlayVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_isOverlayVisible",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::set_isOverlayVisible(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "set_isOverlayVisible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVROverlay::get_texturesPerStage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_texturesPerStage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlay::NeedsTexturesForShape(::GlobalNamespace::OVROverlay_OverlayShape shape) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "NeedsTexturesForShape", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay_OverlayShape>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shape);
}
inline bool GlobalNamespace::OVROverlay::CreateLayer(int32_t mipLevels, int32_t sampleCount, ::GlobalNamespace::OVRPlugin_EyeTextureFormat etFormat, int32_t flags,
                                                     ::GlobalNamespace::OVRPlugin_Sizei size, ::GlobalNamespace::OVRPlugin_OverlayShape shape) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "CreateLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EyeTextureFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Sizei>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_OverlayShape>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mipLevels, sampleCount, etFormat, flags, size, shape);
}
inline bool GlobalNamespace::OVROverlay::CreateLayerTextures(bool useMipmaps, ::GlobalNamespace::OVRPlugin_Sizei size, bool isHdr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "CreateLayerTextures", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Sizei>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, useMipmaps, size, isHdr);
}
inline void GlobalNamespace::OVROverlay::DestroyLayerTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "DestroyLayerTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::DestroyLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "DestroyLayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::SetSrcDestRects(::UnityEngine::Rect srcLeft, ::UnityEngine::Rect srcRight, ::UnityEngine::Rect destLeft, ::UnityEngine::Rect destRight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "SetSrcDestRects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcLeft, srcRight, destLeft, destRight);
}
inline void GlobalNamespace::OVROverlay::UpdateTextureRectMatrix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "UpdateTextureRectMatrix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::SetPerLayerColorScaleAndOffset(::UnityEngine::Vector4 scale, ::UnityEngine::Vector4 offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "SetPerLayerColorScaleAndOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale, offset);
}
inline bool GlobalNamespace::OVROverlay::LatchLayerTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "LatchLayerTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_LayerDesc GlobalNamespace::OVROverlay::GetCurrentLayerDesc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "GetCurrentLayerDesc",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_LayerDesc, false>(this, ___internal_method);
}
inline ::UnityEngine::Rect GlobalNamespace::OVROverlay::GetBlitRect(int32_t eyeId, int32_t width, int32_t height, bool invertRect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "GetBlitRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method, eyeId, width, height, invertRect);
}
inline void GlobalNamespace::OVROverlay::BlitSubImage(::UnityEngine::Texture* src, int32_t width, int32_t height, ::UnityEngine::Material* mat, ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "BlitSubImage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, width, height, mat, rect);
}
inline bool GlobalNamespace::OVROverlay::PopulateLayer(int32_t mipLevels, bool isHdr, ::GlobalNamespace::OVRPlugin_Sizei size, int32_t sampleCount, int32_t stage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "PopulateLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Sizei>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mipLevels, isHdr, size, sampleCount, stage);
}
inline bool GlobalNamespace::OVROverlay::SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, ::GlobalNamespace::OVRPose pose, ::UnityEngine::Vector3 scale, int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "SubmitLayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, overlay, headLocked, noDepthBufferTesting, pose, scale, frameIndex);
}
inline void GlobalNamespace::OVROverlay::SetupEditorPreview() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "SetupEditorPreview",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::ResetEditorPreview() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "ResetEditorPreview",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlay::IsPassthroughShape(::GlobalNamespace::OVROverlay_OverlayShape shape) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "IsPassthroughShape", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay_OverlayShape>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shape);
}
inline void GlobalNamespace::OVROverlay::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVROverlay::get_OpenVROverlayKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "get_OpenVROverlayKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::InitOVROverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "InitOVROverlay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::DisableImmediately() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "DisableImmediately",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::ComputePoseAndScale(::ByRef<::GlobalNamespace::OVRPose> pose, ::ByRef<::UnityEngine::Vector3> scale, ::ByRef<bool> overlay, ::ByRef<bool> headLocked) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "ComputePoseAndScale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPose>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose, scale, overlay, headLocked);
}
inline bool GlobalNamespace::OVROverlay::ComputeSubmit(::ByRef<::GlobalNamespace::OVRPose> pose, ::ByRef<::UnityEngine::Vector3> scale, ::ByRef<bool> overlay, ::ByRef<bool> headLocked) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "ComputeSubmit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPose>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pose, scale, overlay, headLocked);
}
inline bool GlobalNamespace::OVROverlay::OpenVROverlayUpdate(::UnityEngine::Vector3 scale, ::GlobalNamespace::OVRPose pose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "OpenVROverlayUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPose>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scale, pose);
}
inline void GlobalNamespace::OVROverlay::HandlePreRender(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "HandlePreRender", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void GlobalNamespace::OVROverlay::HandleBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "HandleBeginCameraRendering", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera);
}
inline bool GlobalNamespace::OVROverlay::TrySubmitLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), "TrySubmitLayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlay* GlobalNamespace::OVROverlay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVROverlay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlay::OVROverlay() {}
