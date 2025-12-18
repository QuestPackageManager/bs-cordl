#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationRemoveScalePlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationRemoveScalePlayable)
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
struct AnimationRemoveScalePlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationRemoveScalePlayable);
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationRemoveScalePlayable
struct CORDL_TYPE AnimationRemoveScalePlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationRemoveScalePlayable m_NullPlayable;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Create, addr 0x6879390, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationRemoveScalePlayable Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method CreateHandle, addr 0x687942c, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method CreateHandleInternal, addr 0x6879650, size 0x90, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method CreateHandleInternal_Injected, addr 0x687980c, size 0x44, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal_Injected(::ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method Equals, addr 0x6879754, size 0xb8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationRemoveScalePlayable other);

  /// @brief Method GetHandle, addr 0x68796e0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method .ctor, addr 0x687953c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  static inline ::UnityEngine::Animations::AnimationRemoveScalePlayable getStaticF_m_NullPlayable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationRemoveScalePlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Implicit, addr 0x68796ec, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationRemoveScalePlayable playable);

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationRemoveScalePlayable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationRemoveScalePlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationRemoveScalePlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20025 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationRemoveScalePlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationRemoveScalePlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationRemoveScalePlayable, "UnityEngine.Animations", "AnimationRemoveScalePlayable");
