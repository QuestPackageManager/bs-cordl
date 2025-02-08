#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimatorControllerPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimatorControllerPlayable)
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimatorControllerPlayable);
// Dependencies System.IEquatable`1<T>, UnityEngine.Playables.IPlayable, UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimatorControllerPlayable
struct CORDL_TYPE AnimatorControllerPlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimatorControllerPlayable m_NullPlayable;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Equals, addr 0x485bd7c, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimatorControllerPlayable other);

  /// @brief Method GetHandle, addr 0x485bd70, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method SetHandle, addr 0x485bc2c, size 0x144, virtual false, abstract: false, final false
  inline void SetHandle(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Method .ctor, addr 0x485bb90, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  static inline ::UnityEngine::Animations::AnimatorControllerPlayable getStaticF_m_NullPlayable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimatorControllerPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimatorControllerPlayable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorControllerPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimatorControllerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16903 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimatorControllerPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimatorControllerPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimatorControllerPlayable, "UnityEngine.Animations", "AnimatorControllerPlayable");
