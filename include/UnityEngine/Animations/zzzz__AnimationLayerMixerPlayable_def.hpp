#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationLayerMixerPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationLayerMixerPlayable)
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
class AvatarMask;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationLayerMixerPlayable);
// Dependencies System.IEquatable`1<T>, UnityEngine.Playables.IPlayable, UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationLayerMixerPlayable
struct CORDL_TYPE AnimationLayerMixerPlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationLayerMixerPlayable m_NullPlayable;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Create, addr 0x486259c, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool singleLayerOptimization);

  /// @brief Method CreateHandle, addr 0x4862644, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method CreateHandleInternal, addr 0x486287c, size 0x8c, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method CreateHandleInternal_Injected, addr 0x4862cdc, size 0x44, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal_Injected(::ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method Equals, addr 0x48629d8, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable other);

  /// @brief Method GetHandle, addr 0x486294c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method SetLayerMaskFromAvatarMask, addr 0x4862a74, size 0x214, virtual false, abstract: false, final false
  inline void SetLayerMaskFromAvatarMask(uint32_t layerIndex, ::UnityEngine::AvatarMask* mask);

  /// @brief Method SetLayerMaskFromAvatarMaskInternal, addr 0x4862c88, size 0x54, virtual false, abstract: false, final false
  static inline void SetLayerMaskFromAvatarMaskInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, uint32_t layerIndex, ::UnityEngine::AvatarMask* mask);

  /// @brief Method SetSingleLayerOptimizationInternal, addr 0x4862908, size 0x44, virtual false, abstract: false, final false
  static inline void SetSingleLayerOptimizationInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method .ctor, addr 0x4862730, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle, bool singleLayerOptimization);

  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable getStaticF_m_NullPlayable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationLayerMixerPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Implicit, addr 0x4862958, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationLayerMixerPlayable playable);

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationLayerMixerPlayable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationLayerMixerPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationLayerMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16897 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationLayerMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationLayerMixerPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationLayerMixerPlayable, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
