#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
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
// [NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
// [NativeHeader("Runtime/Director/Core/HPlayable.h")]
// [NativeHeader("Runtime/Export/Director/PlayableGraph.bindings.h")]
// [UsedByNativeCode]
// [NativeHeader("Runtime/Director/Core/HPlayableOutput.h")]
// Dependencies System.IntPtr, UnityEngine.Playables.IPlayable
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableGraph
struct CORDL_TYPE PlayableGraph {
public:
  // Declarations
  /// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U, typename V>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<V, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
  inline bool Connect(U source, int32_t sourceOutputPort, V destination, int32_t destinationInputPort);

  /// [FreeFunction("PlayableGraphBindings::ConnectInternal", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method ConnectInternal, addr 0x6b04e6c, size 0x74, virtual false, abstract: false, final false
  inline bool ConnectInternal(::UnityEngine::Playables::PlayableHandle source, int32_t sourceOutputPort, ::UnityEngine::Playables::PlayableHandle destination, int32_t destinationInputPort);

  /// @brief Method ConnectInternal_Injected, addr 0x6b04ee0, size 0x6c, virtual false, abstract: false, final false
  static inline bool ConnectInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle> source, int32_t sourceOutputPort,
                                              ::by_ref<::UnityEngine::Playables::PlayableHandle> destination, int32_t destinationInputPort);

  /// [FreeFunction("PlayableGraphBindings::CreatePlayableHandle", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method CreatePlayableHandle, addr 0x6b0417c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle CreatePlayableHandle();

  /// @brief Method CreatePlayableHandle_Injected, addr 0x6b04b6c, size 0x44, virtual false, abstract: false, final false
  static inline void CreatePlayableHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle> ret);

  /// [FreeFunction("PlayableGraphBindings::CreateScriptOutputInternal", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method CreateScriptOutputInternal, addr 0x6b04bb0, size 0x148, virtual false, abstract: false, final false
  inline bool CreateScriptOutputInternal(::StringW name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method CreateScriptOutputInternal_Injected, addr 0x6b04cf8, size 0x54, virtual false, abstract: false, final false
  static inline bool CreateScriptOutputInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                         ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method Evaluate, addr 0x6b04920, size 0x40, virtual false, abstract: false, final false
  inline void Evaluate();

  /// [FreeFunction("PlayableGraphBindings::Evaluate", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method Evaluate, addr 0x6b04960, size 0x4c, virtual false, abstract: false, final false
  inline void Evaluate(/* [DefaultValue("0")] */ float_t deltaTime);

  /// [FreeFunction("PlayableGraphBindings::GetFrameRate", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetFrameRate, addr 0x6b04ddc, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::FrameRate GetFrameRate();

  /// @brief Method GetFrameRate_Injected, addr 0x6b04e28, size 0x44, virtual false, abstract: false, final false
  static inline void GetFrameRate_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::FrameRate> ret);

  /// [FreeFunction("PlayableGraphBindings::GetPlayableCount", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetPlayableCount, addr 0x6b04a60, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetPlayableCount();

  /// [FreeFunction("PlayableGraphBindings::GetResolver", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetResolver, addr 0x6b04a24, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::IExposedPropertyTable* GetResolver();

  /// @brief Method GetRootPlayable, addr 0x6b048c0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable GetRootPlayable(int32_t index);

  /// [FreeFunction("PlayableGraphBindings::GetRootPlayableCount", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetRootPlayableCount, addr 0x6b04a9c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetRootPlayableCount();

  /// [FreeFunction("PlayableGraphBindings::GetRootPlayableInternal", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetRootPlayableInternal, addr 0x6b048c4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int32_t index);

  /// @brief Method GetRootPlayableInternal_Injected, addr 0x6b04d4c, size 0x54, virtual false, abstract: false, final false
  static inline void GetRootPlayableInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, int32_t index, ::by_ref<::UnityEngine::Playables::PlayableHandle> ret);

  /// [FreeFunction("PlayableGraphBindings::IsMatchFrameRateEnabled", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method IsMatchFrameRateEnabled, addr 0x6b04da0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsMatchFrameRateEnabled();

  /// [FreeFunction("PlayableGraphBindings::IsPlaying", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method IsPlaying, addr 0x6b049e8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsPlaying();

  /// @brief Method IsValid, addr 0x6b049ac, size 0x3c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// [FreeFunction("PlayableGraphBindings::SynchronizeEvaluation", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SynchronizeEvaluation, addr 0x6b04ad8, size 0x50, virtual false, abstract: false, final false
  inline void SynchronizeEvaluation(::UnityEngine::Playables::PlayableGraph playable);

  /// @brief Method SynchronizeEvaluation_Injected, addr 0x6b04b28, size 0x44, virtual false, abstract: false, final false
  static inline void SynchronizeEvaluation_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph> playable);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableGraph();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value:
  // None, comment: None }]
  constexpr PlayableGraph(::System::IntPtr m_Handle, uint32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10680 };

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
