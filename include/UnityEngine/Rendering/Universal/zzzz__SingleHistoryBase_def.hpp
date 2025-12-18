#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SingleHistoryBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SingleHistoryBase)
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
class SingleHistoryBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::SingleHistoryBase);
// Dependencies UnityEngine.Hash128, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.CameraHistoryItem
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.SingleHistoryBase
class CORDL_TYPE SingleHistoryBase : public ::UnityEngine::Rendering::CameraHistoryItem {
public:
  // Declarations
  /// @brief Field m_DescKey, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DescKey, put = __cordl_internal_set_m_DescKey)) ::UnityEngine::Hash128 m_DescKey;

  /// @brief Field m_Descriptor, offset 0x20, size 0x34
  __declspec(property(get = __cordl_internal_get_m_Descriptor, put = __cordl_internal_set_m_Descriptor)) ::UnityEngine::RenderTextureDescriptor m_Descriptor;

  /// @brief Field m_Id, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) int32_t m_Id;

  /// @brief Method Alloc, addr 0x66c063c, size 0xbc, virtual false, abstract: false, final false
  inline void Alloc(::ByRef<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method GetCurrentTexture, addr 0x66c05a0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetCurrentTexture();

  /// @brief Method GetHistoryDescriptor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetHistoryDescriptor(::ByRef<::UnityEngine::RenderTextureDescriptor> cameraDesc);

  /// @brief Method GetHistoryFrameCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHistoryFrameCount();

  /// @brief Method GetHistoryName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetHistoryName();

  /// @brief Method GetPreviousTexture, addr 0x66c05ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetPreviousTexture();

  /// @brief Method GetTexture, addr 0x66c0540, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetTexture(int32_t frameIndex);

  /// @brief Method IsAllocated, addr 0x66c05b4, size 0x1c, virtual false, abstract: false, final false
  inline bool IsAllocated();

  /// @brief Method IsDirty, addr 0x66c05d0, size 0x6c, virtual false, abstract: false, final false
  inline bool IsDirty(::ByRef<::UnityEngine::RenderTextureDescriptor> desc);

  static inline ::UnityEngine::Rendering::Universal::SingleHistoryBase* New_ctor();

  /// @brief Method OnCreate, addr 0x66c0530, size 0x10, virtual true, abstract: false, final false
  inline void OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId);

  /// @brief Method Reset, addr 0x66c06f8, size 0x20, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x66c0718, size 0xb4, virtual false, abstract: false, final false
  inline bool Update(::ByRef<::UnityEngine::RenderTextureDescriptor> cameraDesc);

  constexpr ::UnityEngine::Hash128 const& __cordl_internal_get_m_DescKey() const;

  constexpr ::UnityEngine::Hash128& __cordl_internal_get_m_DescKey();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_Descriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_Descriptor();

  constexpr int32_t const& __cordl_internal_get_m_Id() const;

  constexpr int32_t& __cordl_internal_get_m_Id();

  constexpr void __cordl_internal_set_m_DescKey(::UnityEngine::Hash128 value);

  constexpr void __cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_Id(int32_t value);

  /// @brief Method .ctor, addr 0x66c07cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleHistoryBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingleHistoryBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleHistoryBase(SingleHistoryBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleHistoryBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleHistoryBase(SingleHistoryBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12737 };

  /// @brief Field m_Id, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Id;

  /// @brief Field m_Descriptor, offset: 0x20, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_Descriptor;

  /// @brief Field m_DescKey, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Hash128 ___m_DescKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::SingleHistoryBase, ___m_Id) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SingleHistoryBase, ___m_Descriptor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SingleHistoryBase, ___m_DescKey) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SingleHistoryBase, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SingleHistoryBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SingleHistoryBase*, "UnityEngine.Rendering.Universal", "SingleHistoryBase");
