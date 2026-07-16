#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableGraph)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableGraph);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
// Dependencies System.IntPtr
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableGraph
struct CORDL_TYPE PlayableGraph {
public:
  // Declarations
  /// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U, typename V> inline bool Connect(U source, int32_t sourceOutputPort, V destination, int32_t destinationInputPort);

  /// @brief Method ConnectInternal, addr 0x6b01a50, size 0x74, virtual false, abstract: false, final false
  inline bool ConnectInternal(::UnityEngine::Playables::PlayableHandle source, int32_t sourceOutputPort, ::UnityEngine::Playables::PlayableHandle destination, int32_t destinationInputPort);

  /// @brief Method ConnectInternal_Injected, addr 0x6b01ac4, size 0x6c, virtual false, abstract: false, final false
  static inline bool ConnectInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle> source, int32_t sourceOutputPort,
                                              ::by_ref<::UnityEngine::Playables::PlayableHandle> destination, int32_t destinationInputPort);

  /// @brief Method CreatePlayableHandle, addr 0x6b00d60, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle CreatePlayableHandle();

  /// @brief Method CreatePlayableHandle_Injected, addr 0x6b01750, size 0x44, virtual false, abstract: false, final false
  static inline void CreatePlayableHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle> ret);

  /// @brief Method CreateScriptOutputInternal, addr 0x6b01794, size 0x148, virtual false, abstract: false, final false
  inline bool CreateScriptOutputInternal(::StringW name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method CreateScriptOutputInternal_Injected, addr 0x6b018dc, size 0x54, virtual false, abstract: false, final false
  static inline bool CreateScriptOutputInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                         ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method Evaluate, addr 0x6b01504, size 0x40, virtual false, abstract: false, final false
  inline void Evaluate();

  /// @brief Method Evaluate, addr 0x6b01544, size 0x4c, virtual false, abstract: false, final false
  inline void Evaluate(float_t deltaTime);

  /// @brief Method GetFrameRate, addr 0x6b019c0, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::FrameRate GetFrameRate();

  /// @brief Method GetFrameRate_Injected, addr 0x6b01a0c, size 0x44, virtual false, abstract: false, final false
  static inline void GetFrameRate_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::FrameRate> ret);

  /// @brief Method GetPlayableCount, addr 0x6b01644, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetPlayableCount();

  /// @brief Method GetResolver, addr 0x6b01608, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::IExposedPropertyTable* GetResolver();

  /// @brief Method GetRootPlayable, addr 0x6b014a4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable GetRootPlayable(int32_t index);

  /// @brief Method GetRootPlayableCount, addr 0x6b01680, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetRootPlayableCount();

  /// @brief Method GetRootPlayableInternal, addr 0x6b014a8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int32_t index);

  /// @brief Method GetRootPlayableInternal_Injected, addr 0x6b01930, size 0x54, virtual false, abstract: false, final false
  static inline void GetRootPlayableInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, int32_t index, ::by_ref<::UnityEngine::Playables::PlayableHandle> ret);

  /// @brief Method IsMatchFrameRateEnabled, addr 0x6b01984, size 0x3c, virtual false, abstract: false, final false
  inline bool IsMatchFrameRateEnabled();

  /// @brief Method IsPlaying, addr 0x6b015cc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsPlaying();

  /// @brief Method IsValid, addr 0x6b01590, size 0x3c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method SynchronizeEvaluation, addr 0x6b016bc, size 0x50, virtual false, abstract: false, final false
  inline void SynchronizeEvaluation(::UnityEngine::Playables::PlayableGraph playable);

  /// @brief Method SynchronizeEvaluation_Injected, addr 0x6b0170c, size 0x44, virtual false, abstract: false, final false
  static inline void SynchronizeEvaluation_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph> playable);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableGraph();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PlayableGraph(::System::IntPtr m_Handle, uint32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10653 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Handle;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  uint32_t m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableGraph, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableGraph, m_Version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::PlayableGraph) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Playables
