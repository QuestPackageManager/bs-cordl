#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\RawDepthHistory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RawDepthHistory)
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
class RawDepthHistory;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::RawDepthHistory*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::RawDepthHistory*, "UnityEngine.Rendering.Universal", "RawDepthHistory");
// Dependencies UnityEngine.Hash128, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.CameraHistoryItem
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RawDepthHistory
class CORDL_TYPE RawDepthHistory : public ::UnityEngine::Rendering::CameraHistoryItem {
public:
  // Declarations
  /// @brief Field m_DescKey, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DescKey, put = __cordl_internal_set_m_DescKey)) ::UnityEngine::Hash128 m_DescKey;

  /// @brief Field m_Descriptor, offset 0x28, size 0x34
  __declspec(property(get = __cordl_internal_get_m_Descriptor, put = __cordl_internal_set_m_Descriptor)) ::UnityEngine::RenderTextureDescriptor m_Descriptor;

  /// @brief Field m_Ids, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ids, put = __cordl_internal_set_m_Ids)) ::ArrayW<int32_t> m_Ids;

  /// @brief Field m_Names, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Names, put = setStaticF_m_Names)) ::ArrayW<::StringW> m_Names;

  /// @brief Method Alloc, addr 0x6878524, size 0x15c, virtual false, abstract: false, final false
  inline void Alloc(::by_ref<::UnityEngine::RenderTextureDescriptor> desc, bool xrMultipassEnabled);

  /// @brief Method GetCurrentTexture, addr 0x6878404, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetCurrentTexture(int32_t eyeIndex);

  /// @brief Method GetHistoryDescriptor, addr 0x68786e4, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetHistoryDescriptor(::by_ref<::UnityEngine::RenderTextureDescriptor> cameraDesc);

  /// @brief Method GetPreviousTexture, addr 0x6878450, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetPreviousTexture(int32_t eyeIndex);

  /// @brief Method IsAllocated, addr 0x687849c, size 0x1c, virtual false, abstract: false, final false
  inline bool IsAllocated();

  /// @brief Method IsDirty, addr 0x68784b8, size 0x6c, virtual false, abstract: false, final false
  inline bool IsDirty(::by_ref<::UnityEngine::RenderTextureDescriptor> desc);

  static inline ::UnityEngine::Rendering::Universal::RawDepthHistory* New_ctor();

  /// @brief Method OnCreate, addr 0x68783b8, size 0x4c, virtual true, abstract: false, final false
  inline void OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId);

  /// @brief Method Reset, addr 0x6878680, size 0x64, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x6878710, size 0xd0, virtual false, abstract: false, final false
  inline bool Update(::by_ref<::UnityEngine::RenderTextureDescriptor> cameraDesc, bool xrMultipassEnabled);

  constexpr ::UnityEngine::Hash128 const& __cordl_internal_get_m_DescKey() const;

  constexpr ::UnityEngine::Hash128& __cordl_internal_get_m_DescKey();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_Descriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_Descriptor();

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_Ids() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_Ids();

  constexpr void __cordl_internal_set_m_DescKey(::UnityEngine::Hash128 value);

  constexpr void __cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_Ids(::ArrayW<int32_t> value);

  /// @brief Method .ctor, addr 0x68787e0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW> getStaticF_m_Names();

  static inline void setStaticF_m_Names(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RawDepthHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RawDepthHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RawDepthHistory(RawDepthHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RawDepthHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RawDepthHistory(RawDepthHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12763 };

  /// @brief Field m_Ids, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t> ___m_Ids;

  /// @brief Field m_Descriptor, offset: 0x28, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_Descriptor;

  /// @brief Field m_DescKey, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Hash128 ___m_DescKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RawDepthHistory, ___m_Ids) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RawDepthHistory, ___m_Descriptor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RawDepthHistory, ___m_DescKey) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::RawDepthHistory) == 0x70, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
