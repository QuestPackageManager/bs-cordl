#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\TaaHistory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaaHistory)
namespace UnityEngine::Rendering {
class BufferedRTHandleSystem;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class TaaHistory;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::TaaHistory*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::TaaHistory*, "UnityEngine.Rendering.Universal", "TaaHistory");
// Dependencies UnityEngine.Hash128, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.CameraHistoryItem
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TaaHistory
class CORDL_TYPE TaaHistory : public ::UnityEngine::Rendering::CameraHistoryItem {
public:
  // Declarations
  /// @brief Field m_DescKey, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DescKey, put = __cordl_internal_set_m_DescKey)) ::UnityEngine::Hash128 m_DescKey;

  /// @brief Field m_Descriptor, offset 0x30, size 0x34
  __declspec(property(get = __cordl_internal_get_m_Descriptor, put = __cordl_internal_set_m_Descriptor)) ::UnityEngine::RenderTextureDescriptor m_Descriptor;

  /// @brief Field m_TaaAccumulationNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_TaaAccumulationNames, put = setStaticF_m_TaaAccumulationNames)) ::ArrayW<::StringW> m_TaaAccumulationNames;

  /// @brief Field m_TaaAccumulationTextureIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TaaAccumulationTextureIds, put = __cordl_internal_set_m_TaaAccumulationTextureIds)) ::ArrayW<int32_t> m_TaaAccumulationTextureIds;

  /// @brief Field m_TaaAccumulationVersions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TaaAccumulationVersions, put = __cordl_internal_set_m_TaaAccumulationVersions)) ::ArrayW<int32_t> m_TaaAccumulationVersions;

  /// @brief Method Alloc, addr 0x6879030, size 0x158, virtual false, abstract: false, final false
  inline void Alloc(::by_ref<::UnityEngine::RenderTextureDescriptor> desc, bool xrMultipassEnabled);

  /// @brief Method GetAccumulationTexture, addr 0x6878f14, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetAccumulationTexture(int32_t eyeIndex);

  /// @brief Method GetAccumulationVersion, addr 0x6878f48, size 0x30, virtual false, abstract: false, final false
  inline int32_t GetAccumulationVersion(int32_t eyeIndex);

  /// @brief Method IsDirty, addr 0x6878fc4, size 0x6c, virtual false, abstract: false, final false
  inline bool IsDirty(::by_ref<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method IsValid, addr 0x6878fa8, size 0x1c, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::Rendering::Universal::TaaHistory* New_ctor();

  /// @brief Method OnCreate, addr 0x6878e1c, size 0x4c, virtual true, abstract: false, final false
  inline void OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId);

  /// @brief Method Reset, addr 0x6878e68, size 0xac, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetAccumulationVersion, addr 0x6878f78, size 0x30, virtual false, abstract: false, final false
  inline void SetAccumulationVersion(int32_t eyeIndex, int32_t version);

  /// @brief Method Update, addr 0x6879188, size 0x10c, virtual false, abstract: false, final false
  inline bool Update(::by_ref<::UnityEngine::RenderTextureDescriptor> cameraDesc, bool xrMultipassEnabled);

  constexpr ::UnityEngine::Hash128 const& __cordl_internal_get_m_DescKey() const;

  constexpr ::UnityEngine::Hash128& __cordl_internal_get_m_DescKey();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_Descriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_Descriptor();

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_TaaAccumulationTextureIds() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_TaaAccumulationTextureIds();

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_TaaAccumulationVersions() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_TaaAccumulationVersions();

  constexpr void __cordl_internal_set_m_DescKey(::UnityEngine::Hash128 value);

  constexpr void __cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_TaaAccumulationTextureIds(::ArrayW<int32_t> value);

  constexpr void __cordl_internal_set_m_TaaAccumulationVersions(::ArrayW<int32_t> value);

  /// @brief Method .ctor, addr 0x6879294, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW> getStaticF_m_TaaAccumulationNames();

  static inline void setStaticF_m_TaaAccumulationNames(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaaHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaaHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaaHistory(TaaHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaaHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaaHistory(TaaHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12766 };

  /// @brief Field m_TaaAccumulationTextureIds, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t> ___m_TaaAccumulationTextureIds;

  /// @brief Field m_TaaAccumulationVersions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t> ___m_TaaAccumulationVersions;

  /// @brief Field m_Descriptor, offset: 0x30, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_Descriptor;

  /// @brief Field m_DescKey, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Hash128 ___m_DescKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TaaHistory, ___m_TaaAccumulationTextureIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TaaHistory, ___m_TaaAccumulationVersions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TaaHistory, ___m_Descriptor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TaaHistory, ___m_DescKey) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::TaaHistory) == 0x78, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
