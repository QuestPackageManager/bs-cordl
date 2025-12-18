#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationPlayableOutput)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationPlayableOutput);
// Dependencies UnityEngine.Playables.PlayableOutputHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationPlayableOutput
struct CORDL_TYPE AnimationPlayableOutput {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method Create, addr 0x687696c, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name, ::UnityEngine::Animator* target);

  /// @brief Method GetHandle, addr 0x6878e54, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  /// @brief Method GetTarget, addr 0x6878ee0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> GetTarget();

  /// @brief Method InternalGetTarget, addr 0x6878ee4, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Animator> InternalGetTarget(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method InternalGetTarget_Injected, addr 0x6879094, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr InternalGetTarget_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method InternalSetTarget, addr 0x6879004, size 0x90, virtual false, abstract: false, final false
  static inline void InternalSetTarget(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle, ::UnityEngine::Animator* target);

  /// @brief Method InternalSetTarget_Injected, addr 0x68790d0, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetTarget_Injected(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle, ::System::IntPtr target);

  /// @brief Method SetTarget, addr 0x6878e50, size 0x4, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::Animator* value);

  /// @brief Method .ctor, addr 0x6878d3c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle);

  /// @brief Method get_Null, addr 0x6878cbc, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput get_Null();

  /// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
  constexpr ::UnityEngine::Playables::IPlayableOutput* i___UnityEngine__Playables__IPlayableOutput();

  /// @brief Method op_Explicit, addr 0x6878e60, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput op_Explicit___UnityEngine__Animations__AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutput output);

  /// @brief Method op_Implicit, addr 0x68769cc, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Animations::AnimationPlayableOutput output);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableOutput();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20023 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationPlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationPlayableOutput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableOutput, "UnityEngine.Animations", "AnimationPlayableOutput");
