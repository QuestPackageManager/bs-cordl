#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationMotionXToDeltaPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationMotionXToDeltaPlayable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationMotionXToDeltaPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable);
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct CORDL_TYPE AnimationMotionXToDeltaPlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable m_NullPlayable;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Create, addr 0x6877df8, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable Create(::UnityEngine::Playables::PlayableGraph graph);

  /// @brief Method CreateHandle, addr 0x6877e8c, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph);

  /// @brief Method CreateHandleInternal, addr 0x68780ac, size 0x90, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method CreateHandleInternal_Injected, addr 0x6878320, size 0x44, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal_Injected(::ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method Equals, addr 0x68781b0, size 0xa4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable other);

  /// @brief Method GetHandle, addr 0x687813c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method SetAbsoluteMotion, addr 0x6878254, size 0x88, virtual false, abstract: false, final false
  inline void SetAbsoluteMotion(bool value);

  /// @brief Method SetAbsoluteMotionInternal, addr 0x68782dc, size 0x44, virtual false, abstract: false, final false
  static inline void SetAbsoluteMotionInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method .ctor, addr 0x6877f98, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  static inline ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable getStaticF_m_NullPlayable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationMotionXToDeltaPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Implicit, addr 0x6878148, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable playable);

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationMotionXToDeltaPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationMotionXToDeltaPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20019 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "UnityEngine.Animations", "AnimationMotionXToDeltaPlayable");
