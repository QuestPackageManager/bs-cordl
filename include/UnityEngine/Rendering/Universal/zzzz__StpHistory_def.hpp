#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StpHistory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CameraHistoryItem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StpHistory)
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class BufferedRTHandleSystem;
}
namespace UnityEngine::Rendering {
class STP_HistoryContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class StpHistory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::StpHistory);
// Dependencies UnityEngine.Rendering.CameraHistoryItem
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.StpHistory
class CORDL_TYPE StpHistory : public ::UnityEngine::Rendering::CameraHistoryItem {
public:
  // Declarations
  /// @brief Field m_historyContexts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_historyContexts,
                      put = __cordl_internal_set_m_historyContexts)) ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*, ::Array<::UnityEngine::Rendering::STP_HistoryContext*>*>
      m_historyContexts;

  /// @brief Method GetHistoryContext, addr 0x66c08ec, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::STP_HistoryContext* GetHistoryContext(int32_t eyeIndex);

  static inline ::UnityEngine::Rendering::Universal::StpHistory* New_ctor();

  /// @brief Method OnCreate, addr 0x66c07d8, size 0xb4, virtual true, abstract: false, final false
  inline void OnCreate(::UnityEngine::Rendering::BufferedRTHandleSystem* owner, uint32_t typeId);

  /// @brief Method Reset, addr 0x66c088c, size 0x60, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x66c091c, size 0xcc, virtual false, abstract: false, final false
  inline bool Update(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  constexpr ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*, ::Array<::UnityEngine::Rendering::STP_HistoryContext*>*> const& __cordl_internal_get_m_historyContexts() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*, ::Array<::UnityEngine::Rendering::STP_HistoryContext*>*>& __cordl_internal_get_m_historyContexts();

  constexpr void __cordl_internal_set_m_historyContexts(::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*, ::Array<::UnityEngine::Rendering::STP_HistoryContext*>*> value);

  /// @brief Method .ctor, addr 0x66c09e8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StpHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StpHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StpHistory(StpHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StpHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StpHistory(StpHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12738 };

  /// @brief Field m_historyContexts, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::STP_HistoryContext*, ::Array<::UnityEngine::Rendering::STP_HistoryContext*>*> ___m_historyContexts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::StpHistory, ___m_historyContexts) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::StpHistory, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::StpHistory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::StpHistory*, "UnityEngine.Rendering.Universal", "StpHistory");
