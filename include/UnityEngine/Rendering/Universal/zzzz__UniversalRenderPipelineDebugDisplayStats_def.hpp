#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineDebugDisplayStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__URPProfileId_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplayStats_1_def.hpp"
CORDL_MODULE_EXPORT(UniversalRenderPipelineDebugDisplayStats)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct URPProfileId;
}
namespace UnityEngine::Rendering {
class DebugFrameTiming;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineDebugDisplayStats;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplayStats);
// Dependencies UnityEngine.Rendering.DebugDisplayStats`1<TProfileId>, UnityEngine.Rendering.Universal.URPProfileId
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugDisplayStats
class CORDL_TYPE UniversalRenderPipelineDebugDisplayStats : public ::UnityEngine::Rendering::DebugDisplayStats_1<::UnityEngine::Rendering::Universal::URPProfileId> {
public:
  // Declarations
  /// @brief Field m_DebugFrameTiming, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugFrameTiming, put = __cordl_internal_set_m_DebugFrameTiming)) ::UnityEngine::Rendering::DebugFrameTiming* m_DebugFrameTiming;

  /// @brief Field m_RecordedSamplers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RecordedSamplers,
                      put = __cordl_internal_set_m_RecordedSamplers)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::URPProfileId>* m_RecordedSamplers;

  /// @brief Method DisableProfilingRecorders, addr 0x669a558, size 0x12c, virtual true, abstract: false, final false
  inline void DisableProfilingRecorders();

  /// @brief Method EnableProfilingRecorders, addr 0x669a504, size 0x54, virtual true, abstract: false, final false
  inline void EnableProfilingRecorders();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplayStats* New_ctor();

  /// @brief Method RegisterDebugUI, addr 0x669a684, size 0x584, virtual true, abstract: false, final false
  inline void RegisterDebugUI(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* list);

  /// @brief Method Update, addr 0x669ac08, size 0x64, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method <RegisterDebugUI>b__4_0, addr 0x669ac6c, size 0x8, virtual false, abstract: false, final false
  inline bool _RegisterDebugUI_b__4_0();

  /// @brief Method <RegisterDebugUI>b__4_1, addr 0x669ac74, size 0x8, virtual false, abstract: false, final false
  inline void _RegisterDebugUI_b__4_1(bool value);

  /// @brief Method <RegisterDebugUI>b__4_2, addr 0x669ac7c, size 0x8, virtual false, abstract: false, final false
  inline bool _RegisterDebugUI_b__4_2();

  /// @brief Method <RegisterDebugUI>b__4_3, addr 0x669ac84, size 0x8, virtual false, abstract: false, final false
  inline void _RegisterDebugUI_b__4_3(bool value);

  constexpr ::UnityEngine::Rendering::DebugFrameTiming* const& __cordl_internal_get_m_DebugFrameTiming() const;

  constexpr ::UnityEngine::Rendering::DebugFrameTiming*& __cordl_internal_get_m_DebugFrameTiming();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::URPProfileId>* const& __cordl_internal_get_m_RecordedSamplers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::URPProfileId>*& __cordl_internal_get_m_RecordedSamplers();

  constexpr void __cordl_internal_set_m_DebugFrameTiming(::UnityEngine::Rendering::DebugFrameTiming* value);

  constexpr void __cordl_internal_set_m_RecordedSamplers(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::URPProfileId>* value);

  /// @brief Method .ctor, addr 0x669a2a0, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineDebugDisplayStats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineDebugDisplayStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineDebugDisplayStats(UniversalRenderPipelineDebugDisplayStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineDebugDisplayStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineDebugDisplayStats(UniversalRenderPipelineDebugDisplayStats const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12643 };

  /// @brief Field m_DebugFrameTiming, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugFrameTiming* ___m_DebugFrameTiming;

  /// @brief Field m_RecordedSamplers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::URPProfileId>* ___m_RecordedSamplers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplayStats, ___m_DebugFrameTiming) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplayStats, ___m_RecordedSamplers) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplayStats, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplayStats);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplayStats*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineDebugDisplayStats");
