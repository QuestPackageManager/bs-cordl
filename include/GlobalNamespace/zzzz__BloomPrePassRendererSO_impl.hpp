#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__IBloomPrePassParams_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightTypeSO_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::*)()>(
    &::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x210852c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassLightTypeSO*& GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::__get_lightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightType;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightTypeSO*> const& GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::__get_lightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightType;
}
constexpr void GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::__set_lightType(::GlobalNamespace::BloomPrePassLightTypeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::__get_preallocateCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preallocateCount;
}
constexpr int32_t const& GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::__get_preallocateCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preallocateCount;
}
constexpr void GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::__set_preallocateCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preallocateCount = value;
}
inline ::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData* GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>());
}
inline void GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData::__BloomPrePassRendererSO__PreallocationData() {}
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::*)()>(
    &::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210751c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Mesh*& GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__set_mesh(::UnityEngine::Mesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*>&
GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__get_lightQuads() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightQuads;
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*> const&
GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__get_lightQuads() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightQuads;
}
constexpr void GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__set_lightQuads(
    ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightQuads)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::SubMeshDescriptor& GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__get_subMeshDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subMeshDescriptor;
}
constexpr ::UnityEngine::Rendering::SubMeshDescriptor const& GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__get_subMeshDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subMeshDescriptor;
}
constexpr void GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__set_subMeshDescriptor(::UnityEngine::Rendering::SubMeshDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subMeshDescriptor = value;
}
inline ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData* GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>());
}
inline void GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData::__BloomPrePassRendererSO__LightsRenderingData() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2107364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2107380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::Init)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2102914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::Cleanup)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2107384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "Cleanup",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.RenderAndSetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t, ::GlobalNamespace::IBloomPrePassParams*, ::UnityEngine::RenderTexture*, ByRef<::UnityEngine::Vector2>,
    ByRef<::GlobalNamespace::ToneMapping>)>(&::GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData)> {
  constexpr static std::size_t size = 0xa0c;
  constexpr static std::size_t addrs = 0x21031e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "RenderAndSetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::ToneMapping>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.SetDataToShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ::UnityEngine::Vector2, ::UnityEngine::Texture*, ::GlobalNamespace::ToneMapping)>(
    &::GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2103c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "SetDataToShaders", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.SetCustomStereoCameraEyeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(float_t)>(
    &::GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2108278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "SetCustomStereoCameraEyeOffset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.CreateBloomPrePassRenderTextureIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::RenderTexture* (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::RenderTexture*, ::GlobalNamespace::IBloomPrePassParams*)>(
        &::GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2102ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "CreateBloomPrePassRenderTextureIfNeeded", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.EnableBloomFog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2103bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                               "EnableBloomFog", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.DisableBloomFog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2103d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                               "DisableBloomFog", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.UpdateBloomFogParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(
    &::GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21082e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                               "UpdateBloomFogParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.GetCameraParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::Camera*, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<float_t>)>(&::GlobalNamespace::BloomPrePassRendererSO::GetCameraParams)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2102d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "GetCameraParams", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.RenderAllLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(
    &::GlobalNamespace::BloomPrePassRendererSO::RenderAllLights)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x2107a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "RenderAllLights", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.PrepareLightsMeshRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::GlobalNamespace::BloomPrePassLightTypeSO*, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*, int32_t)>(&::GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x2107524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "PrepareLightsMeshRendering", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.MatrixLerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GlobalNamespace::BloomPrePassRendererSO::MatrixLerp)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x21082fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "MatrixLerp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21083b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomFogSO*& GlobalNamespace::BloomPrePassRendererSO::__get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> const& GlobalNamespace::BloomPrePassRendererSO::__get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__set__bloomFog(::GlobalNamespace::BloomFogSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomFog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*, ::Array<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>*>&
GlobalNamespace::BloomPrePassRendererSO::__get__preallocationData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocationData;
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*, ::Array<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>*> const&
GlobalNamespace::BloomPrePassRendererSO::__get__preallocationData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocationData;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__set__preallocationData(
    ::ArrayW<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*, ::Array<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preallocationData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>*&
GlobalNamespace::BloomPrePassRendererSO::__get__lightsRenderingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsRenderingData;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>*> const&
GlobalNamespace::BloomPrePassRendererSO::__get__lightsRenderingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsRenderingData;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__set__lightsRenderingData(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightsRenderingData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& GlobalNamespace::BloomPrePassRendererSO::__get__commandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& GlobalNamespace::BloomPrePassRendererSO::__get__commandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffer;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BloomPrePassRendererSO::__get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::BloomPrePassRendererSO::__get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::UnityEngine::Texture2D*& GlobalNamespace::BloomPrePassRendererSO::__get__blackTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& GlobalNamespace::BloomPrePassRendererSO::__get__blackTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackTexture;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__set__blackTexture(::UnityEngine::Texture2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blackTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTexture*& GlobalNamespace::BloomPrePassRendererSO::__get__lowestResBloomTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowestResBloomTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& GlobalNamespace::BloomPrePassRendererSO::__get__lowestResBloomTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowestResBloomTexture;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__set__lowestResBloomTexture(::UnityEngine::RenderTexture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lowestResBloomTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__vertexTransformMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_vertexTransformMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__vertexTransformMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "_vertexTransformMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__bloomPrePassTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_bloomPrePassTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__bloomPrePassTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "_bloomPrePassTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__stereoCameraEyeOffsetID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stereoCameraEyeOffsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__stereoCameraEyeOffsetID() {
  return ::cordl_internals::getStaticField<int32_t, "_stereoCameraEyeOffsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__customFogTextureToScreenRatioID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_customFogTextureToScreenRatioID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__customFogTextureToScreenRatioID() {
  return ::cordl_internals::getStaticField<int32_t, "_customFogTextureToScreenRatioID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "Cleanup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix,
                                                                      float_t stereoCameraEyeOffset, ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, ::UnityEngine::RenderTexture* dest,
                                                                      ByRef<::UnityEngine::Vector2> textureToScreenRatio, ByRef<::GlobalNamespace::ToneMapping> toneMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "RenderAndSetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::ToneMapping>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest, textureToScreenRatio,
                                                          toneMapping);
}
inline void GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders(float_t stereoCameraEyeOffset, ::UnityEngine::Vector2 textureToScreenRatio, ::UnityEngine::Texture* bloomFogTexture,
                                                                      ::GlobalNamespace::ToneMapping toneMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "SetDataToShaders", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stereoCameraEyeOffset, textureToScreenRatio, bloomFogTexture, toneMapping);
}
inline void GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset(float_t stereoCameraEyeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "SetCustomStereoCameraEyeOffset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stereoCameraEyeOffset);
}
inline ::UnityEngine::RenderTexture* GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded(::UnityEngine::RenderTexture* renderTexture,
                                                                                                                      ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "CreateBloomPrePassRenderTextureIfNeeded", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture*, false>(this, ___internal_method, renderTexture, bloomPrePassParams);
}
inline void GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                             "EnableBloomFog", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                             "DisableBloomFog", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                             "UpdateBloomFogParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::GetCameraParams(::UnityEngine::Camera* camera, ByRef<::UnityEngine::Matrix4x4> projectionMatrix, ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                                                     ByRef<float_t> stereoCameraEyeOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "GetCameraParams", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, projectionMatrix, viewMatrix, stereoCameraEyeOffset);
}
inline void GlobalNamespace::BloomPrePassRendererSO::RenderAllLights(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t linesWidth) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "RenderAllLights", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewMatrix, projectionMatrix, linesWidth);
}
inline void GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering(::GlobalNamespace::BloomPrePassLightTypeSO* lightType,
                                                                                ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData* data, int32_t numberOfLights) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "PrepareLightsMeshRendering", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightType, data, numberOfLights);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::BloomPrePassRendererSO::MatrixLerp(::UnityEngine::Matrix4x4 from, ::UnityEngine::Matrix4x4 to, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "MatrixLerp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, from, to, t);
}
inline ::GlobalNamespace::BloomPrePassRendererSO* GlobalNamespace::BloomPrePassRendererSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassRendererSO*>());
}
inline void GlobalNamespace::BloomPrePassRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererSO::BloomPrePassRendererSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
