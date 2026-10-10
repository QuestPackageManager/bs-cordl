#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableHandle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableHandle, "UnityEngine.Playables", "PlayableHandle");
// [NativeHeader("Runtime/Export/Director/PlayableHandle.bindings.h")]
// [NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
// [NativeHeader("Runtime/Director/Core/HPlayable.h")]
// [UsedByNativeCode]
// Dependencies System.IntPtr, UnityEngine.Playables.IPlayableBehaviour
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableHandle
struct CORDL_TYPE PlayableHandle {
public:
  // Declarations
  /// @brief Field m_Null, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_Null, put = setStaticF_m_Null)) ::UnityEngine::Playables::PlayableHandle m_Null;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>*();

  /// @brief Method CheckInputBounds, addr 0x6f60560, size 0x74, virtual false, abstract: false, final false
  inline bool CheckInputBounds(int32_t inputIndex);

  /// @brief Method CheckInputBounds, addr 0x6f608d4, size 0x208, virtual false, abstract: false, final false
  inline bool CheckInputBounds(int32_t inputIndex, bool acceptAny);

  /// @brief Method CompareVersion, addr 0x6f6078c, size 0x10, virtual false, abstract: false, final false
  static inline bool CompareVersion(::UnityEngine::Playables::PlayableHandle lhs, ::UnityEngine::Playables::PlayableHandle rhs);

  /// @brief Method Equals, addr 0x6f60850, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Playables::PlayableHandle other);

  /// @brief Method Equals, addr 0x6f6079c, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* p);

  /// [VisibleToOtherModules]
  /// [FreeFunction("PlayableHandleBindings::GetDuration", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetDuration, addr 0x6f60ddc, size 0x3c, virtual false, abstract: false, final false
  inline double_t GetDuration();

  /// [FreeFunction("PlayableHandleBindings::GetGraph", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method GetGraph, addr 0x6f60ea8, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph GetGraph();

  /// @brief Method GetGraph_Injected, addr 0x6f60f38, size 0x44, virtual false, abstract: false, final false
  static inline void GetGraph_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph> ret);

  /// @brief Method GetHashCode, addr 0x6f608c4, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInput, addr 0x6f60294, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable GetInput(int32_t inputPort);

  /// [FreeFunction("PlayableHandleBindings::GetInputCount", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method GetInputCount, addr 0x6f60adc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetInputCount();

  /// [FreeFunction("PlayableHandleBindings::GetInputHandle", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetInputHandle, addr 0x6f602fc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle GetInputHandle(int32_t index);

  /// @brief Method GetInputHandle_Injected, addr 0x6f611ec, size 0x54, virtual false, abstract: false, final false
  static inline void GetInputHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index, ::by_ref<::UnityEngine::Playables::PlayableHandle> ret);

  /// @brief Method GetInputWeight, addr 0x6f60628, size 0xa4, virtual false, abstract: false, final false
  inline float_t GetInputWeight(int32_t inputIndex);

  /// [FreeFunction("PlayableHandleBindings::GetInputWeightFromIndex", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetInputWeightFromIndex, addr 0x6f606cc, size 0x44, virtual false, abstract: false, final false
  inline float_t GetInputWeightFromIndex(int32_t index);

  /// @brief Method GetObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Playables::IPlayableBehaviour*> && ::cordl_internals::reference_type_constraint<T>)
  inline T GetObject();

  /// @brief Method GetOutput, addr 0x6f6039c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable GetOutput(int32_t outputPort);

  /// [FreeFunction("PlayableHandleBindings::GetOutputHandle", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetOutputHandle, addr 0x6f60404, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle GetOutputHandle(int32_t index);

  /// @brief Method GetOutputHandle_Injected, addr 0x6f61240, size 0x54, virtual false, abstract: false, final false
  static inline void GetOutputHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index, ::by_ref<::UnityEngine::Playables::PlayableHandle> ret);

  /// [FreeFunction("PlayableHandleBindings::GetPlayState", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method GetPlayState, addr 0x6f60bd4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState GetPlayState();

  /// [FreeFunction("PlayableHandleBindings::GetPlayableType", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method GetPlayableType, addr 0x6f60b54, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Type* GetPlayableType();

  /// [FreeFunction("PlayableHandleBindings::GetPreviousTime", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method GetPreviousTime, addr 0x6f610b0, size 0x3c, virtual false, abstract: false, final false
  inline double_t GetPreviousTime();

  /// [FreeFunction("PlayableHandleBindings::GetScriptInstance", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetScriptInstance, addr 0x6f611b0, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* GetScriptInstance();

  /// [FreeFunction("PlayableHandleBindings::GetTime", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method GetTime, addr 0x6f60cd4, size 0x3c, virtual false, abstract: false, final false
  inline double_t GetTime();

  /// [FreeFunction("PlayableHandleBindings::GetTimeWrapMode", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method GetTimeWrapMode, addr 0x6f61130, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode();

  /// [FreeFunction("PlayableHandleBindings::IsDone", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method IsDone, addr 0x6f60d5c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsDone();

  /// [VisibleToOtherModules]
  /// @brief Method IsPlayableOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsPlayableOfType();

  /// [VisibleToOtherModules]
  /// @brief Method IsValid, addr 0x6f60b18, size 0x3c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// [FreeFunction("PlayableHandleBindings::Pause", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method Pause, addr 0x6f60c4c, size 0x3c, virtual false, abstract: false, final false
  inline void Pause();

  /// [FreeFunction("PlayableHandleBindings::Play", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method Play, addr 0x6f60c10, size 0x3c, virtual false, abstract: false, final false
  inline void Play();

  /// [FreeFunction("PlayableHandleBindings::SetDone", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method SetDone, addr 0x6f60d98, size 0x44, virtual false, abstract: false, final false
  inline void SetDone(bool value);

  /// [VisibleToOtherModules]
  /// [FreeFunction("PlayableHandleBindings::SetDuration", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetDuration, addr 0x6f60e18, size 0x4c, virtual false, abstract: false, final false
  inline void SetDuration(double_t value);

  /// [VisibleToOtherModules]
  /// [FreeFunction("PlayableHandleBindings::SetInputCount", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetInputCount, addr 0x6f60f7c, size 0x44, virtual false, abstract: false, final false
  inline void SetInputCount(int32_t value);

  /// @brief Method SetInputWeight, addr 0x6f604a4, size 0xbc, virtual false, abstract: false, final false
  inline bool SetInputWeight(int32_t inputIndex, float_t weight);

  /// [FreeFunction("PlayableHandleBindings::SetInputWeight", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method SetInputWeight, addr 0x6f60fc0, size 0x9c, virtual false, abstract: false, final false
  inline void SetInputWeight(::UnityEngine::Playables::PlayableHandle input, float_t weight);

  /// [FreeFunction("PlayableHandleBindings::SetInputWeightFromIndex", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetInputWeightFromIndex, addr 0x6f605d4, size 0x54, virtual false, abstract: false, final false
  inline void SetInputWeightFromIndex(int32_t index, float_t weight);

  /// @brief Method SetInputWeight_Injected, addr 0x6f6105c, size 0x54, virtual false, abstract: false, final false
  static inline void SetInputWeight_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle const> input, float_t weight);

  /// [VisibleToOtherModules]
  /// [FreeFunction("PlayableHandleBindings::SetPropagateSetTime", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetPropagateSetTime, addr 0x6f60e64, size 0x44, virtual false, abstract: false, final false
  inline void SetPropagateSetTime(bool value);

  /// [FreeFunction("PlayableHandleBindings::SetScriptInstance", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method SetScriptInstance, addr 0x6f60b90, size 0x44, virtual false, abstract: false, final false
  inline void SetScriptInstance(::System::Object* scriptInstance);

  /// [FreeFunction("PlayableHandleBindings::SetSpeed", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method SetSpeed, addr 0x6f60c88, size 0x4c, virtual false, abstract: false, final false
  inline void SetSpeed(double_t value);

  /// [FreeFunction("PlayableHandleBindings::SetTime", HasExplicitThis = true, ThrowsException = true)]
  /// [VisibleToOtherModules]
  /// @brief Method SetTime, addr 0x6f60d10, size 0x4c, virtual false, abstract: false, final false
  inline void SetTime(double_t value);

  /// [VisibleToOtherModules]
  /// [FreeFunction("PlayableHandleBindings::SetTimeWrapMode", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetTimeWrapMode, addr 0x6f6116c, size 0x44, virtual false, abstract: false, final false
  inline void SetTimeWrapMode(::UnityEngine::Playables::DirectorWrapMode mode);

  /// [VisibleToOtherModules]
  /// [FreeFunction("PlayableHandleBindings::SetTraversalMode", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetTraversalMode, addr 0x6f610ec, size 0x44, virtual false, abstract: false, final false
  inline void SetTraversalMode(::UnityEngine::Playables::PlayableTraversalMode mode);

  static inline ::UnityEngine::Playables::PlayableHandle getStaticF_m_Null();

  /// @brief Method get_Null, addr 0x6f60238, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle get_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>* i___System__IEquatable_1___UnityEngine__Playables__PlayableHandle_();

  /// @brief Method op_Equality, addr 0x6f60710, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Playables::PlayableHandle x, ::UnityEngine::Playables::PlayableHandle y);

  static inline void setStaticF_m_Null(::UnityEngine::Playables::PlayableHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableHandle();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value:
  // None, comment: None }]
  constexpr PlayableHandle(::System::IntPtr m_Handle, uint32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Handle;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  uint32_t m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Playables
