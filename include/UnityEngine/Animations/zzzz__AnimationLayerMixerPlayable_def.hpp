#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationLayerMixerPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationLayerMixerPlayable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
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
namespace UnityEngine {
class AvatarMask;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationLayerMixerPlayable);
// Dependencies UnityEngine.Playables.PlayableHandle
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

  /// @brief Method Create, addr 0x6876f74, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool singleLayerOptimization);

  /// @brief Method CreateHandle, addr 0x6877020, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method CreateHandleInternal, addr 0x68772a4, size 0x90, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method CreateHandleInternal_Injected, addr 0x6877768, size 0x44, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal_Injected(::ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method Equals, addr 0x68773ec, size 0xa4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable other);

  /// @brief Method GetHandle, addr 0x6877378, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method SetLayerMaskFromAvatarMask, addr 0x6877490, size 0x218, virtual false, abstract: false, final false
  inline void SetLayerMaskFromAvatarMask(uint32_t layerIndex, ::UnityEngine::AvatarMask* mask);

  /// @brief Method SetLayerMaskFromAvatarMaskInternal, addr 0x68776a8, size 0xc0, virtual false, abstract: false, final false
  static inline void SetLayerMaskFromAvatarMaskInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, uint32_t layerIndex, ::UnityEngine::AvatarMask* mask);

  /// @brief Method SetLayerMaskFromAvatarMaskInternal_Injected, addr 0x68777ac, size 0x54, virtual false, abstract: false, final false
  static inline void SetLayerMaskFromAvatarMaskInternal_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, uint32_t layerIndex, ::System::IntPtr mask);

  /// @brief Method SetSingleLayerOptimizationInternal, addr 0x6877334, size 0x44, virtual false, abstract: false, final false
  static inline void SetSingleLayerOptimizationInternal(::ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method .ctor, addr 0x6877130, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle, bool singleLayerOptimization);

  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable getStaticF_m_NullPlayable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationLayerMixerPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Implicit, addr 0x6877384, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationLayerMixerPlayable playable);

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationLayerMixerPlayable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationLayerMixerPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationLayerMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20017 };

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
