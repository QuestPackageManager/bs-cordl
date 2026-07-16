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
  ::cordl_internals::setStaticField<int32_t, "BoxMin", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_BoxMin() {
  return ::cordl_internals::getStaticField<int32_t, "BoxMin", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_BoxMax(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BoxMax", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_BoxMax() {
  return ::cordl_internals::getStaticField<int32_t, "BoxMax", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_ProbePosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ProbePosition", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_ProbePosition() {
  return ::cordl_internals::getStaticField<int32_t, "ProbePosition", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_MipScaleOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MipScaleOffset", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_MipScaleOffset() {
  return ::cordl_internals::getStaticField<int32_t, "MipScaleOffset", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_Count(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Count", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_Count() {
  return ::cordl_internals::getStaticField<int32_t, "Count", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>();
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::setStaticF_Atlas(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Atlas", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::getStaticF_Atlas() {
  return ::cordl_internals::getStaticField<int32_t, "Atlas", ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties::ReflectionProbeManager_ShaderProperties() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.get_atlasRT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)()>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::get_atlasRT)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a63a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "get_atlasRT", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.get_atlasRTHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)()>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::get_atlasRTHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a63ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "get_atlasRTHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ReflectionProbeManager (*)()>(&::UnityEngine::Rendering::Universal::ReflectionProbeManager::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68a63b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)()>(&::UnityEngine::Rendering::Universal::ReflectionProbeManager::Init)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x68a63f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.UpdateGpuData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::CullingResults>)>(&::UnityEngine::Rendering::Universal::ReflectionProbeManager::UpdateGpuData)> {
  constexpr static std::size_t size = 0x1738;
  constexpr static std::size_t addrs = 0x68a6880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(),
                            { "UpdateGpuData", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.GetScaleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)(int32_t, int32_t, bool, bool)>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::GetScaleOffset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x68a7fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(),
                                                             { "GetScaleOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ReflectionProbeManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ReflectionProbeManager::*)()>(
    &::UnityEngine::Rendering::Universal::ReflectionProbeManager::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68a80ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::Universal::ReflectionProbeManager::get_atlasRT() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "get_atlasRT", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ReflectionProbeManager::get_atlasRTHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "get_atlasRTHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ReflectionProbeManager UnityEngine::Rendering::Universal::ReflectionProbeManager::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager::UpdateGpuData(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(),
                                       { "UpdateGpuData", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, cullResults);
}
inline ::Unity::Mathematics::float4 UnityEngine::Rendering::Universal::ReflectionProbeManager::GetScaleOffset(int32_t level, int32_t dataIndex, bool includePadding, bool yflip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(),
                                                           { "GetScaleOffset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method, level, dataIndex, includePadding, yflip);
}
inline void UnityEngine::Rendering::Universal::ReflectionProbeManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::ReflectionProbeManager::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::ReflectionProbeManager::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Resolution", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AtlasTexture0", ty:
// "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AtlasTexture1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_AtlasTexture0Handle", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AtlasAllocator", ty:
// "::UnityEngine::Rendering::Universal::BuddyAllocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Cache", ty:
// "::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_WarningCache", ty: "::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NeedsUpdate", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NeedsRemove", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_BoxMax", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BoxMin", ty:
// "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProbePosition", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_MipScaleOffset", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager::ReflectionProbeManager(
    ::Unity::Mathematics::int2 m_Resolution, ::UnityW<::UnityEngine::RenderTexture> m_AtlasTexture0, ::UnityW<::UnityEngine::RenderTexture> m_AtlasTexture1,
    ::UnityEngine::Rendering::RTHandle* m_AtlasTexture0Handle, ::UnityEngine::Rendering::Universal::BuddyAllocator m_AtlasAllocator,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe>* m_Cache,
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_WarningCache, ::System::Collections::Generic::List_1<int32_t>* m_NeedsUpdate,
    ::System::Collections::Generic::List_1<int32_t>* m_NeedsRemove, ::ArrayW<::UnityEngine::Vector4> m_BoxMax, ::ArrayW<::UnityEngine::Vector4> m_BoxMin,
    ::ArrayW<::UnityEngine::Vector4> m_ProbePosition, ::ArrayW<::UnityEngine::Vector4> m_MipScaleOffset) noexcept {
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
