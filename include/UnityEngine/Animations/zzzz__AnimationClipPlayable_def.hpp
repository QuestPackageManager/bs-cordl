#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationClipPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationClipPlayable)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationClipPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationClipPlayable);
// Dependencies System.IEquatable`1<T>, UnityEngine.Playables.IPlayable, UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationClipPlayable
struct CORDL_TYPE AnimationClipPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Create, addr 0x48547b8, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip);

  /// @brief Method CreateHandle, addr 0x48547f0, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip);

  /// @brief Method CreateHandleInternal, addr 0x485498c, size 0x5c, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method CreateHandleInternal_Injected, addr 0x4854cbc, size 0x54, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal_Injected(::ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::UnityEngine::AnimationClip* clip,
                                                   ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method Equals, addr 0x4854a24, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationClipPlayable other);

  /// @brief Method GetHandle, addr 0x48549e8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method SetApplyFootIK, addr 0x4854a9c, size 0x44, virtual false, abstract: false, final false
  inline void SetApplyFootIK(bool value);

  /// @brief Method SetApplyFootIKInternal, addr 0x4854ae0, size 0x44, virtual false, abstract: false, final false
  static inline void SetApplyFootIKInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method SetLoopTime, addr 0x4854c34, size 0x44, virtual false, abstract: false, final false
  inline void SetLoopTime(bool value);

  /// @brief Method SetLoopTimeInternal, addr 0x4854c78, size 0x44, virtual false, abstract: false, final false
  static inline void SetLoopTimeInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method SetOverrideLoopTime, addr 0x4854bac, size 0x44, virtual false, abstract: false, final false
  inline void SetOverrideLoopTime(bool value);

  /// @brief Method SetOverrideLoopTimeInternal, addr 0x4854bf0, size 0x44, virtual false, abstract: false, final false
  static inline void SetOverrideLoopTimeInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method SetRemoveStartOffset, addr 0x4854b24, size 0x44, virtual false, abstract: false, final false
  inline void SetRemoveStartOffset(bool value);

  /// @brief Method SetRemoveStartOffsetInternal, addr 0x4854b68, size 0x44, virtual false, abstract: false, final false
  static inline void SetRemoveStartOffsetInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method .ctor, addr 0x485489c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationClipPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Implicit, addr 0x48549f4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationClipPlayable playable);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationClipPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16897 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationClipPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationClipPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationClipPlayable, "UnityEngine.Animations", "AnimationClipPlayable");
