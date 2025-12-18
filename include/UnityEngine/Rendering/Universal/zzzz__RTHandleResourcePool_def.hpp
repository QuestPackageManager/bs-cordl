#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RTHandleResourcePool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RTHandleResourcePool)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureSizeMode;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct TextureWrapMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RTHandleResourcePool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RTHandleResourcePool);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RTHandleResourcePool
class CORDL_TYPE RTHandleResourcePool : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_RemoveList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemoveList, put = __cordl_internal_set_m_RemoveList)) ::System::Collections::Generic::List_1<int32_t>* m_RemoveList;

  /// @brief Field m_ResourcePool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourcePool, put = __cordl_internal_set_m_ResourcePool)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Rendering::RTHandle*, int32_t>>*>* m_ResourcePool;

  /// @brief Field s_CurrentStaleResourceCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CurrentStaleResourceCount, put = setStaticF_s_CurrentStaleResourceCount)) int32_t s_CurrentStaleResourceCount;

  /// @brief Field s_StaleResourceLifetime, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_StaleResourceLifetime, put = setStaticF_s_StaleResourceLifetime)) int32_t s_StaleResourceLifetime;

  /// @brief Field s_StaleResourceMaxCapacity, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_StaleResourceMaxCapacity, put = setStaticF_s_StaleResourceMaxCapacity)) int32_t s_StaleResourceMaxCapacity;

  __declspec(property(get = get_staleResourceCapacity, put = set_staleResourceCapacity)) int32_t staleResourceCapacity;

  /// @brief Method AddResourceToPool, addr 0x67004f8, size 0x214, virtual false, abstract: false, final false
  inline bool AddResourceToPool(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc, ::UnityEngine::Rendering::RTHandle* resource, int32_t currentFrameIndex);

  /// @brief Method Cleanup, addr 0x670003c, size 0x4bc, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CreateTextureDesc, addr 0x6701868, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc CreateTextureDesc(::UnityEngine::RenderTextureDescriptor desc,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureSizeMode textureSizeMode, int32_t anisoLevel,
                                                                                           float_t mipMapBias, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                                           ::StringW name);

  /// @brief Method GetHashCodeWithNameHash, addr 0x670070c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetHashCodeWithNameHash(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc);

  /// @brief Method LogDebugInfo, addr 0x6700fcc, size 0x89c, virtual false, abstract: false, final false
  inline void LogDebugInfo();

  static inline ::UnityEngine::Rendering::Universal::RTHandleResourcePool* New_ctor();

  /// @brief Method PurgeUnusedResources, addr 0x67009c4, size 0x608, virtual false, abstract: false, final false
  inline void PurgeUnusedResources(int32_t currentFrameIndex);

  /// @brief Method ShouldReleaseResource, addr 0x670094c, size 0x78, virtual false, abstract: false, final false
  static inline bool ShouldReleaseResource(int32_t lastUsedFrameIndex, int32_t currentFrameIndex);

  /// @brief Method TryGetResource, addr 0x6700764, size 0x1e8, virtual false, abstract: false, final false
  inline bool TryGetResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> texDesc, ::ByRef<::UnityEngine::Rendering::RTHandle*> resource, bool usepool);

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_RemoveList() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_RemoveList();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Rendering::RTHandle*, int32_t>>*>* const&
  __cordl_internal_get_m_ResourcePool() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Rendering::RTHandle*, int32_t>>*>*&
  __cordl_internal_get_m_ResourcePool();

  constexpr void __cordl_internal_set_m_RemoveList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_ResourcePool(
      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Rendering::RTHandle*, int32_t>>*>* value);

  /// @brief Method .ctor, addr 0x67019a8, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_CurrentStaleResourceCount();

  static inline int32_t getStaticF_s_StaleResourceLifetime();

  static inline int32_t getStaticF_s_StaleResourceMaxCapacity();

  /// @brief Method get_staleResourceCapacity, addr 0x66fff40, size 0x5c, virtual false, abstract: false, final false
  inline int32_t get_staleResourceCapacity();

  static inline void setStaticF_s_CurrentStaleResourceCount(int32_t value);

  static inline void setStaticF_s_StaleResourceLifetime(int32_t value);

  static inline void setStaticF_s_StaleResourceMaxCapacity(int32_t value);

  /// @brief Method set_staleResourceCapacity, addr 0x66fff9c, size 0xa0, virtual false, abstract: false, final false
  inline void set_staleResourceCapacity(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleResourcePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandleResourcePool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandleResourcePool(RTHandleResourcePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandleResourcePool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandleResourcePool(RTHandleResourcePool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12919 };

  /// @brief Field m_ResourcePool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Rendering::RTHandle*, int32_t>>*>*
      ___m_ResourcePool;

  /// @brief Field m_RemoveList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_RemoveList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RTHandleResourcePool, ___m_ResourcePool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RTHandleResourcePool, ___m_RemoveList) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RTHandleResourcePool, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RTHandleResourcePool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RTHandleResourcePool*, "UnityEngine.Rendering.Universal", "RTHandleResourcePool");
