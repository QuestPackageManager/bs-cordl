#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPosePlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationPosePlayable)
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationPosePlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationPosePlayable);
// Dependencies System.IEquatable`1<T>, UnityEngine.Playables.IPlayable, UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationPosePlayable
struct CORDL_TYPE AnimationPosePlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationPosePlayable m_NullPlayable;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Equals, addr 0x485b2ec, size 0xb4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationPosePlayable other);

  /// @brief Method GetHandle, addr 0x485b2e0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method .ctor, addr 0x485b1f0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  static inline ::UnityEngine::Animations::AnimationPosePlayable getStaticF_m_NullPlayable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationPosePlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationPosePlayable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPosePlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationPosePlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16899 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationPosePlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationPosePlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPosePlayable, "UnityEngine.Animations", "AnimationPosePlayable");
