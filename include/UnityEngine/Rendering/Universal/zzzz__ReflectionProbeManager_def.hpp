#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ReflectionProbeManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BuddyAllocator_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::Rendering::Universal {
struct CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer;
}
namespace UnityEngine::Rendering::Universal {
struct CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer;
}
namespace UnityEngine::Rendering::Universal {
struct ReflectionProbeManager_CachedProbe;
}
namespace UnityEngine::Rendering::Universal {
class ReflectionProbeManager_ShaderProperties;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ReflectionProbeManager_ShaderProperties;
}
namespace UnityEngine::Rendering::Universal {
struct CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer;
}
namespace UnityEngine::Rendering::Universal {
struct CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer;
}
namespace UnityEngine::Rendering::Universal {
struct ReflectionProbeManager;
}
namespace UnityEngine::Rendering::Universal {
struct ReflectionProbeManager_CachedProbe;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties);
MARK_VAL_T(::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ReflectionProbeManager);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ReflectionProbeManager/CachedProbe/<dataIndices>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12868 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x1c - 0x4 = 0x18, packed as 0x18
  uint8_t _cordl_size_padding[0x18];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ReflectionProbeManager/CachedProbe/<levels>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12869 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x1c - 0x4 = 0x18, packed as 0x18
  uint8_t _cordl_size_padding[0x18];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Hash128, UnityEngine.Rendering.Universal.ReflectionProbeManager::CachedProbe::<dataIndices>e__FixedBuffer,
// UnityEngine.Rendering.Universal.ReflectionProbeManager::CachedProbe::<levels>e__FixedBuffer, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ReflectionProbeManager/CachedProbe
struct CORDL_TYPE ReflectionProbeManager_CachedProbe {
public:
  // Declarations
  using _dataIndices_e__FixedBuffer = ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer;

  using _levels_e__FixedBuffer = ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeManager_CachedProbe();

  // Ctor Parameters [CppParam { name: "updateCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "imageContentsHash", ty: "::UnityEngine::Hash128", modifiers: "", def_value:
  // None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dataIndices", ty:
  // "::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "levels", ty:
  // "::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "texture", ty:
  // "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "lastUsed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hdrData", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr ReflectionProbeManager_CachedProbe(uint32_t updateCount, ::UnityEngine::Hash128 imageContentsHash, int32_t size, int32_t mipCount,
                                               ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer dataIndices,
                                               ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer levels, ::UnityW<::UnityEngine::Texture> texture,
                                               int32_t lastUsed, ::UnityEngine::Vector4 hdrData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12870 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field updateCount, offset: 0x0, size: 0x4, def value: None
  uint32_t updateCount;

  /// @brief Field imageContentsHash, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Hash128 imageContentsHash;

  /// @brief Field size, offset: 0x18, size: 0x4, def value: None
  int32_t size;

  /// @brief Field mipCount, offset: 0x1c, size: 0x4, def value: None
  int32_t mipCount;

  /// @brief Field dataIndices, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer dataIndices;

  /// @brief Field levels, offset: 0x3c, size: 0x1c, def value: None
  ::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer levels;

  /// @brief Field texture, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> texture;

  /// @brief Field lastUsed, offset: 0x60, size: 0x4, def value: None
  int32_t lastUsed;

  /// @brief Field hdrData, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Vector4 hdrData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, updateCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, imageContentsHash) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, mipCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, dataIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, levels) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, texture) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, lastUsed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, hdrData) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ReflectionProbeManager/ShaderProperties
class CORDL_TYPE ReflectionProbeManager_ShaderProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field Atlas, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Atlas, put = setStaticF_Atlas)) int32_t Atlas;

  /// @brief Field BoxMax, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BoxMax, put = setStaticF_BoxMax)) int32_t BoxMax;

  /// @brief Field BoxMin, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BoxMin, put = setStaticF_BoxMin)) int32_t BoxMin;

  /// @brief Field Count, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Count, put = setStaticF_Count)) int32_t Count;

  /// @brief Field MipScaleOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MipScaleOffset, put = setStaticF_MipScaleOffset)) int32_t MipScaleOffset;

  /// @brief Field ProbePosition, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_ProbePosition, put = setStaticF_ProbePosition)) int32_t ProbePosition;

  static inline int32_t getStaticF_Atlas();

  static inline int32_t getStaticF_BoxMax();

  static inline int32_t getStaticF_BoxMin();

  static inline int32_t getStaticF_Count();

  static inline int32_t getStaticF_MipScaleOffset();

  static inline int32_t getStaticF_ProbePosition();

  static inline void setStaticF_Atlas(int32_t value);

  static inline void setStaticF_BoxMax(int32_t value);

  static inline void setStaticF_BoxMin(int32_t value);

  static inline void setStaticF_Count(int32_t value);

  static inline void setStaticF_MipScaleOffset(int32_t value);

  static inline void setStaticF_ProbePosition(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeManager_ShaderProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeManager_ShaderProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbeManager_ShaderProperties(ReflectionProbeManager_ShaderProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeManager_ShaderProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbeManager_ShaderProperties(ReflectionProbeManager_ShaderProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies Unity.Mathematics.int2, UnityEngine.Rendering.Universal.BuddyAllocator
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ReflectionProbeManager
struct CORDL_TYPE ReflectionProbeManager {
public:
  // Declarations
  using CachedProbe = ::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe;

  using ShaderProperties = ::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties;

  __declspec(property(get = get_atlasRT)) ::UnityW<::UnityEngine::RenderTexture> atlasRT;

  __declspec(property(get = get_atlasRTHandle)) ::UnityEngine::Rendering::RTHandle* atlasRTHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Create, addr 0x668bc68, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::ReflectionProbeManager Create();

  /// @brief Method Dispose, addr 0x668d960, size 0xc4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetScaleOffset, addr 0x668d86c, size 0xf4, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 GetScaleOffset(int32_t level, int32_t dataIndex, bool includePadding, bool yflip);

  /// @brief Method Init, addr 0x668bca8, size 0x48c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method UpdateGpuData, addr 0x668c134, size 0x1738, virtual false, abstract: false, final false
  inline void UpdateGpuData(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults);

  /// @brief Method get_atlasRT, addr 0x668bc58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_atlasRT();

  /// @brief Method get_atlasRTHandle, addr 0x668bc60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_atlasRTHandle();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeManager();

  // Ctor Parameters [CppParam { name: "m_Resolution", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "m_AtlasTexture0", ty:
  // "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "m_AtlasTexture1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None },
  // CppParam { name: "m_AtlasTexture0Handle", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "m_AtlasAllocator", ty:
  // "::UnityEngine::Rendering::Universal::BuddyAllocator", modifiers: "", def_value: None }, CppParam { name: "m_Cache", ty:
  // "::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe>*", modifiers: "", def_value: None }, CppParam { name:
  // "m_WarningCache", ty: "::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_NeedsUpdate", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_NeedsRemove", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "",
  // def_value: None }, CppParam { name: "m_BoxMax", ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "m_BoxMin", ty:
  // "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "m_ProbePosition", ty:
  // "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }, CppParam { name: "m_MipScaleOffset", ty:
  // "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: None }]
  constexpr ReflectionProbeManager(::Unity::Mathematics::int2 m_Resolution, ::UnityW<::UnityEngine::RenderTexture> m_AtlasTexture0, ::UnityW<::UnityEngine::RenderTexture> m_AtlasTexture1,
                                   ::UnityEngine::Rendering::RTHandle* m_AtlasTexture0Handle, ::UnityEngine::Rendering::Universal::BuddyAllocator m_AtlasAllocator,
                                   ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe>* m_Cache,
                                   ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_WarningCache, ::System::Collections::Generic::List_1<int32_t>* m_NeedsUpdate,
                                   ::System::Collections::Generic::List_1<int32_t>* m_NeedsRemove, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_BoxMax,
                                   ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_BoxMin, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_ProbePosition,
                                   ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_MipScaleOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12872 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field k_MaxMipCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxMipCount{ static_cast<int32_t>(0x7) };

  /// @brief Field k_ReflectionProbeAtlasName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ReflectionProbeAtlasName{ u"URP Reflection Probe Atlas" };

  /// @brief Field m_Resolution, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::int2 m_Resolution;

  /// @brief Field m_AtlasTexture0, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> m_AtlasTexture0;

  /// @brief Field m_AtlasTexture1, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> m_AtlasTexture1;

  /// @brief Field m_AtlasTexture0Handle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* m_AtlasTexture0Handle;

  /// @brief Field m_AtlasAllocator, offset: 0x20, size: 0x28, def value: None
  ::UnityEngine::Rendering::Universal::BuddyAllocator m_AtlasAllocator;

  /// @brief Field m_Cache, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe>* m_Cache;

  /// @brief Field m_WarningCache, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_WarningCache;

  /// @brief Field m_NeedsUpdate, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* m_NeedsUpdate;

  /// @brief Field m_NeedsRemove, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* m_NeedsRemove;

  /// @brief Field m_BoxMax, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_BoxMax;

  /// @brief Field m_BoxMin, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_BoxMin;

  /// @brief Field m_ProbePosition, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_ProbePosition;

  /// @brief Field m_MipScaleOffset, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_MipScaleOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_Resolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_AtlasTexture0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_AtlasTexture1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_AtlasTexture0Handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_AtlasAllocator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_Cache) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_WarningCache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_NeedsUpdate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_NeedsRemove) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_BoxMax) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_BoxMin) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_ProbePosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeManager, m_MipScaleOffset) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ReflectionProbeManager, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ReflectionProbeManager_ShaderProperties*, "UnityEngine.Rendering.Universal", "ReflectionProbeManager/ShaderProperties");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer, "UnityEngine.Rendering.Universal",
                       "ReflectionProbeManager/CachedProbe/<dataIndices>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer, "UnityEngine.Rendering.Universal",
                       "ReflectionProbeManager/CachedProbe/<levels>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ReflectionProbeManager, "UnityEngine.Rendering.Universal", "ReflectionProbeManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ReflectionProbeManager_CachedProbe, "UnityEngine.Rendering.Universal", "ReflectionProbeManager/CachedProbe");
