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
namespace UnityEngine {
class Animator;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10415))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14901))
// CS Name: ::UnityEngine.Animations::AnimationPlayableOutput
struct CORDL_TYPE AnimationPlayableOutput {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method Create, addr 0x2c990f0, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name, ::UnityEngine::Animator* target);

  /// @brief Method .ctor, addr 0x2c99214, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle);

  /// @brief Method get_Null, addr 0x2c99198, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput get_Null();

  /// @brief Method GetHandle, addr 0x2c99318, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  /// @brief Method op_Implicit, addr 0x2c99324, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Animations::AnimationPlayableOutput output);

  /// @brief Method op_Explicit, addr 0x2c99354, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationPlayableOutput op_Explicit___UnityEngine__Animations__AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutput output);

  /// @brief Method GetTarget, addr 0x2c99398, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Animator* GetTarget();

  /// @brief Method SetTarget, addr 0x2c992d4, size 0x44, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::Animator* value);

  /// @brief Method InternalGetTarget, addr 0x2c993d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animator* InternalGetTarget(ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method InternalSetTarget, addr 0x2c99410, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetTarget(ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle, ::UnityEngine::Animator* target);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableOutput();

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
