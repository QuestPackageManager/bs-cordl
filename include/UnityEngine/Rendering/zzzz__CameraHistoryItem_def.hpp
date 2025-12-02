#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraHistoryItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CameraHistoryItem)
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
namespace UnityEngine::Rendering {
class CameraHistoryItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CameraHistoryItem);
// Dependencies UnityEngine.Rendering.ContextItem
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CameraHistoryItem
class CORDL_TYPE CameraHistoryItem : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field m_TypeId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TypeId, put = __cordl_internal_set_m_TypeId)) uint32_t m_TypeId;

  /// @brief Field m_owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_owner, put = __cordl_internal_set_m_owner)) ::UnityEngine::Rendering::BufferedRTHandleSystem* m_owner;

  __declspec(property(get = get_storage)) ::UnityEngine::Rendering::BufferedRTHandleSystem* storage;

  /// @brief Method AllocHistoryFrameRT, addr 0x652df58, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* AllocHistoryFrameRT(int32_t id, int32_t count, ::ByRef<::UnityEngine::RenderTextureDescriptor> desc, ::StringW name);

  /// @brief Method GetCurrentFrameRT, addr 0x652dfa4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetCurrentFrameRT(int32_t id);

  /// @brief Method GetPreviousFrameRT, addr 0x652dfd8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetPreviousFrameRT(int32_t id);

  /// @brief Method MakeId, addr 0x652df48, size 0x10, virtual false, abstract: false, final false
  inline int32_t MakeId(uint32_t index);

  static inline ::UnityEngine::Rendering::CameraHistoryItem* New_ctor();

  /// @brief Method OnCreate, addr 0x652df34, size 0xc, virtual true, abstract: false, final false
  inline void OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId);

  /// @brief Method ReleaseHistoryFrameRT, addr 0x652dfc0, size 0x18, virtual false, abstract: false, final false
  inline void ReleaseHistoryFrameRT(int32_t id);

  constexpr uint32_t const& __cordl_internal_get_m_TypeId() const;

  constexpr uint32_t& __cordl_internal_get_m_TypeId();

  constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem* const& __cordl_internal_get_m_owner() const;

  constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem*& __cordl_internal_get_m_owner();

  constexpr void __cordl_internal_set_m_TypeId(uint32_t value);

  constexpr void __cordl_internal_set_m_owner(::UnityEngine::Rendering::BufferedRTHandleSystem* value);

  /// @brief Method .ctor, addr 0x652dff4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_storage, addr 0x652df40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::BufferedRTHandleSystem* get_storage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraHistoryItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraHistoryItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraHistoryItem(CameraHistoryItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraHistoryItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraHistoryItem(CameraHistoryItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11838 };

  /// @brief Field m_owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::BufferedRTHandleSystem* ___m_owner;

  /// @brief Field m_TypeId, offset: 0x18, size: 0x4, def value: None
  uint32_t ___m_TypeId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CameraHistoryItem, ___m_owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraHistoryItem, ___m_TypeId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraHistoryItem, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CameraHistoryItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraHistoryItem*, "UnityEngine.Rendering", "CameraHistoryItem");
