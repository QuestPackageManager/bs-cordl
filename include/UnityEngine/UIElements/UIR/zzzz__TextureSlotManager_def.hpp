#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TextureSlotManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureSlotManager)
namespace UnityEngine::UIElements::UIR {
class CommandList;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TextureSlotManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::TextureSlotManager);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.TextureSlotManager
class CORDL_TYPE TextureSlotManager : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FreeSlots, put = set_FreeSlots)) int32_t FreeSlots;

  /// @brief Field <FreeSlots>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__FreeSlots_k__BackingField, put = __cordl_internal_set__FreeSlots_k__BackingField)) int32_t _FreeSlots_k__BackingField;

  /// @brief Field k_SlotCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_SlotCount, put = setStaticF_k_SlotCount)) int32_t k_SlotCount;

  /// @brief Field k_SlotSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_SlotSize, put = setStaticF_k_SlotSize)) int32_t k_SlotSize;

  /// @brief Field m_CurrentTicket, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentTicket, put = __cordl_internal_set_m_CurrentTicket)) int32_t m_CurrentTicket;

  /// @brief Field m_FirstUsedTicket, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstUsedTicket, put = __cordl_internal_set_m_FirstUsedTicket)) int32_t m_FirstUsedTicket;

  /// @brief Field m_GpuTextures, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GpuTextures, put = __cordl_internal_set_m_GpuTextures)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_GpuTextures;

  /// @brief Field m_Textures, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Textures, put = __cordl_internal_set_m_Textures)) ::ArrayW<::UnityEngine::UIElements::TextureId, ::Array<::UnityEngine::UIElements::TextureId>*>
      m_Textures;

  /// @brief Field m_Tickets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tickets, put = __cordl_internal_set_m_Tickets)) ::ArrayW<int32_t, ::Array<int32_t>*> m_Tickets;

  /// @brief Field slotIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_slotIds, put = setStaticF_slotIds)) ::ArrayW<int32_t, ::Array<int32_t>*> slotIds;

  /// @brief Field textureRegistry, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_textureRegistry, put = __cordl_internal_set_textureRegistry)) ::UnityEngine::UIElements::TextureRegistry* textureRegistry;

  /// @brief Field textureTableId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_textureTableId, put = setStaticF_textureTableId)) int32_t textureTableId;

  /// @brief Method Bind, addr 0x6b28328, size 0x28c, virtual false, abstract: false, final false
  inline void Bind(::UnityEngine::UIElements::TextureId id, float_t sdfScale, float_t sharpness, int32_t slot, ::UnityEngine::MaterialPropertyBlock* mat,
                   ::UnityEngine::UIElements::UIR::CommandList* commandList);

  /// @brief Method FindOldestSlot, addr 0x6b2825c, size 0xcc, virtual false, abstract: false, final false
  inline int32_t FindOldestSlot();

  /// @brief Method IndexOf, addr 0x6b28108, size 0xec, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::TextureId id);

  /// @brief Method MarkUsed, addr 0x6b281f4, size 0x58, virtual false, abstract: false, final false
  inline void MarkUsed(int32_t slotIndex);

  static inline ::UnityEngine::UIElements::UIR::TextureSlotManager* New_ctor();

  /// @brief Method Reset, addr 0x6b27e40, size 0x128, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetGpuData, addr 0x6b27f68, size 0x130, virtual false, abstract: false, final false
  inline void SetGpuData(int32_t slotIndex, ::UnityEngine::UIElements::TextureId id, int32_t textureWidth, int32_t textureHeight, float_t sdfScale, float_t sharpness);

  /// @brief Method StartNewBatch, addr 0x6b28098, size 0x70, virtual false, abstract: false, final false
  inline void StartNewBatch();

  constexpr int32_t const& __cordl_internal_get__FreeSlots_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__FreeSlots_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_CurrentTicket() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentTicket();

  constexpr int32_t const& __cordl_internal_get_m_FirstUsedTicket() const;

  constexpr int32_t& __cordl_internal_get_m_FirstUsedTicket();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_GpuTextures() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_GpuTextures();

  constexpr ::ArrayW<::UnityEngine::UIElements::TextureId, ::Array<::UnityEngine::UIElements::TextureId>*> const& __cordl_internal_get_m_Textures() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::TextureId, ::Array<::UnityEngine::UIElements::TextureId>*>& __cordl_internal_get_m_Textures();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_Tickets() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_Tickets();

  constexpr ::UnityEngine::UIElements::TextureRegistry* const& __cordl_internal_get_textureRegistry() const;

  constexpr ::UnityEngine::UIElements::TextureRegistry*& __cordl_internal_get_textureRegistry();

  constexpr void __cordl_internal_set__FreeSlots_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentTicket(int32_t value);

  constexpr void __cordl_internal_set_m_FirstUsedTicket(int32_t value);

  constexpr void __cordl_internal_set_m_GpuTextures(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_Textures(::ArrayW<::UnityEngine::UIElements::TextureId, ::Array<::UnityEngine::UIElements::TextureId>*> value);

  constexpr void __cordl_internal_set_m_Tickets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_textureRegistry(::UnityEngine::UIElements::TextureRegistry* value);

  /// @brief Method .ctor, addr 0x6b27cc0, size 0x180, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_k_SlotCount();

  static inline int32_t getStaticF_k_SlotSize();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_slotIds();

  static inline int32_t getStaticF_textureTableId();

  /// @brief Method get_FreeSlots, addr 0x6b2824c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FreeSlots();

  static inline void setStaticF_k_SlotCount(int32_t value);

  static inline void setStaticF_k_SlotSize(int32_t value);

  static inline void setStaticF_slotIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_textureTableId(int32_t value);

  /// @brief Method set_FreeSlots, addr 0x6b28254, size 0x8, virtual false, abstract: false, final false
  inline void set_FreeSlots(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureSlotManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureSlotManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureSlotManager(TextureSlotManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureSlotManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureSlotManager(TextureSlotManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5354 };

  /// @brief Field m_Textures, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::TextureId, ::Array<::UnityEngine::UIElements::TextureId>*> ___m_Textures;

  /// @brief Field m_Tickets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_Tickets;

  /// @brief Field m_CurrentTicket, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CurrentTicket;

  /// @brief Field m_FirstUsedTicket, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_FirstUsedTicket;

  /// @brief Field m_GpuTextures, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_GpuTextures;

  /// @brief Field <FreeSlots>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____FreeSlots_k__BackingField;

  /// @brief Field textureRegistry, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextureRegistry* ___textureRegistry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureSlotManager, ___m_Textures) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureSlotManager, ___m_Tickets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureSlotManager, ___m_CurrentTicket) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureSlotManager, ___m_FirstUsedTicket) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureSlotManager, ___m_GpuTextures) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureSlotManager, ____FreeSlots_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureSlotManager, ___textureRegistry) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextureSlotManager, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::TextureSlotManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureSlotManager*, "UnityEngine.UIElements.UIR", "TextureSlotManager");
