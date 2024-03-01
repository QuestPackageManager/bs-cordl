#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationPlayableOutput)
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
// Type: UnityEngine.Animations::AnimationPlayableOutput
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: ::UnityEngine.Animations::AnimationPlayableOutput
struct CORDL_TYPE AnimationPlayableOutput {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method Create, addr 0x2d7fd30, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name, ::UnityEngine::Animator* target);

  /// @brief Method GetHandle, addr 0x2d7ff58, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  /// @brief Method GetTarget, addr 0x2d7ffd8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> GetTarget();

  /// @brief Method InternalGetTarget, addr 0x2d80014, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Animator> InternalGetTarget(ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method InternalSetTarget, addr 0x2d80050, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetTarget(ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle, ::UnityEngine::Animator* target);

  /// @brief Method SetTarget, addr 0x2d7ff14, size 0x44, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::Animator* value);

  /// @brief Method .ctor, addr 0x2d7fe54, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle);

  /// @brief Method get_Null, addr 0x2d7fdd8, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput get_Null();

  /// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
  constexpr ::UnityEngine::Playables::IPlayableOutput* i___UnityEngine__Playables__IPlayableOutput();

  /// @brief Method op_Explicit, addr 0x2d7ff94, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput op_Explicit___UnityEngine__Animations__AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutput output);

  /// @brief Method op_Implicit, addr 0x2d7ff64, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Animations::AnimationPlayableOutput output);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableOutput();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationPlayableOutput, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationPlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableOutput, "UnityEngine.Animations", "AnimationPlayableOutput");
