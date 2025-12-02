#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ReflectionProbeManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BuddyAllocator_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer(
    int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer(
    int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "updateCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "imageContentsHash", ty: "::UnityEngine::Hash128", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "dataIndices", ty: "::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "levels",
// ty: "::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty:
// "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastUsed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hdrData", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe::ReflectionProbeManager_CachedProbe(
    uint32_t updateCount, ::UnityEngine::Hash128 imageContentsHash, int32_t size, int32_t mipCount,
    ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer dataIndices,
    ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer levels, ::UnityW<::UnityEngine::Texture> texture, int32_t lastUsed,
    ::UnityEngine::Vector4 hdrData) noexcept {
  this->updateCount = updateCount;
  this->imageContentsHash = imageContentsHash;
  this->size = size;
  this->mipCount = mipCount;
  this->dataIndices = dataIndices;
  this->levels = levels;
  this->texture = texture;
  this->lastUsed = lastUsed;
  this->hdrData = hdrData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe::ReflectionProbeManager_CachedProbe() {}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_BoxMin(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BoxMin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_BoxMin() {
  return ::cordl_internals::getStaticField<int32_t, "BoxMin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_BoxMax(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BoxMax", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_BoxMax() {
  return ::cordl_internals::getStaticField<int32_t, "BoxMax",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_ProbePosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ProbePosition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_ProbePosition() {
  return ::cordl_internals::getStaticField<int32_t, "ProbePosition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_MipScaleOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MipScaleOffset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_MipScaleOffset() {
  return ::cordl_internals::getStaticField<int32_t, "MipScaleOffset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_Count(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_Count() {
  return ::cordl_internals::getStaticField<int32_t, "Count",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_Atlas(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Atlas", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_Atlas() {
  return ::cordl_internals::getStaticField<int32_t, "Atlas",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::ReflectionProbeManager_ShaderProperties() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.get_atlasRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)()>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::get_atlasRT)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668bc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "get_atlasRT",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.get_atlasRTHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)()>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::get_atlasRTHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668bc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "get_atlasRTHandle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ReflectionProbeManager (*)()>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x668bc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "Create",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)()>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::Init)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x668bca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "Init",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.UpdateGpuData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::CullingResults>)>(&::UnityEngine::Rendering::Universal::ReflectionProbeManager::UpdateGpuData)> {
  constexpr static std::size_t size = 0x1738;
  constexpr static std::size_t addrs = 0x668c134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "UpdateGpuData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.GetScaleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float4 (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)(
    int32_t, int32_t, bool, bool)>(&::UnityEngine::Rendering::Universal::ReflectionProbeManager::GetScaleOffset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x668d86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "GetScaleOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)()>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x668d960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::Universal::ReflectionProbeManager::get_atlasRT() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(),
                                                                             "get_atlasRT", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ReflectionProbeManager::get_atlasRTHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(),
                                                                             "get_atlasRTHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ReflectionProbeManager UnityEngine::Rendering::Universal::ReflectionProbeManager::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(),
                                                                             "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ReflectionProbeManager, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(),
                                                                             "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager::UpdateGpuData(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "UpdateGpuData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cullResults);
}
inline ::Unity::Mathematics::float4 UnityEngine::Rendering::Universal::ReflectionProbeManager::GetScaleOffset(int32_t level, int32_t dataIndex, bool includePadding, bool yflip) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(), "GetScaleOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4, false>(this, ___internal_method, level, dataIndex, includePadding, yflip);
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReflectionProbeManager>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::ReflectionProbeManager::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::ReflectionProbeManager::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Resolution", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AtlasTexture0", ty:
// "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AtlasTexture1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_AtlasTexture0Handle", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AtlasAllocator", ty:
// "::UnityEngine::Rendering::Universal::BuddyAllocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Cache", ty:
// "::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_WarningCache", ty: "::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NeedsUpdate", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NeedsRemove", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_BoxMax", ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BoxMin",
// ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProbePosition", ty:
// "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MipScaleOffset", ty:
// "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager::ReflectionProbeManager(
    ::Unity::Mathematics::int2 m_Resolution, ::UnityW<::UnityEngine::RenderTexture> m_AtlasTexture0, ::UnityW<::UnityEngine::RenderTexture> m_AtlasTexture1,
    ::UnityEngine::Rendering::RTHandle* m_AtlasTexture0Handle, ::UnityEngine::Rendering::Universal::BuddyAllocator m_AtlasAllocator,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe>* m_Cache,
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_WarningCache, ::System::Collections::Generic::List_1<int32_t>* m_NeedsUpdate,
    ::System::Collections::Generic::List_1<int32_t>* m_NeedsRemove, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_BoxMax,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_BoxMin, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_ProbePosition,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_MipScaleOffset) noexcept {
  this->m_Resolution = m_Resolution;
  this->m_AtlasTexture0 = m_AtlasTexture0;
  this->m_AtlasTexture1 = m_AtlasTexture1;
  this->m_AtlasTexture0Handle = m_AtlasTexture0Handle;
  this->m_AtlasAllocator = m_AtlasAllocator;
  this->m_Cache = m_Cache;
  this->m_WarningCache = m_WarningCache;
  this->m_NeedsUpdate = m_NeedsUpdate;
  this->m_NeedsRemove = m_NeedsRemove;
  this->m_BoxMax = m_BoxMax;
  this->m_BoxMin = m_BoxMin;
  this->m_ProbePosition = m_ProbePosition;
  this->m_MipScaleOffset = m_MipScaleOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager::ReflectionProbeManager() {}
