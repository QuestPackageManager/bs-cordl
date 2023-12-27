#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationClipPlayable)
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class AnimationClip;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationClipPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationClipPlayable);
// Type: UnityEngine.Animations::AnimationClipPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10440))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14895))
// CS Name: ::UnityEngine.Animations::AnimationClipPlayable
struct CORDL_TYPE AnimationClipPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>*();

  /// @brief Method Create addr 0x2c9803c size 0x38 virtual false final false
  static inline ::UnityEngine::Animations::AnimationClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip);

  /// @brief Method CreateHandle addr 0x2c98074 size 0xb0 virtual false final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip);

  /// @brief Method .ctor addr 0x2c98124 size 0xc0 virtual false final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Method GetHandle addr 0x2c98240 size 0xc virtual true final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method op_Implicit addr 0x2c9824c size 0x30 virtual false final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationClipPlayable playable);

  /// @brief Method Equals addr 0x2c9827c size 0x78 virtual true final true
  inline bool Equals(::UnityEngine::Animations::AnimationClipPlayable other);

  /// @brief Method SetApplyFootIK addr 0x2c982f4 size 0x44 virtual false final false
  inline void SetApplyFootIK(bool value);

  /// @brief Method SetRemoveStartOffset addr 0x2c9837c size 0x44 virtual false final false
  inline void SetRemoveStartOffset(bool value);

  /// @brief Method SetOverrideLoopTime addr 0x2c98404 size 0x44 virtual false final false
  inline void SetOverrideLoopTime(bool value);

  /// @brief Method SetLoopTime addr 0x2c9848c size 0x44 virtual false final false
  inline void SetLoopTime(bool value);

  /// @brief Method CreateHandleInternal addr 0x2c981e4 size 0x5c virtual false final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method SetApplyFootIKInternal addr 0x2c98338 size 0x44 virtual false final false
  static inline void SetApplyFootIKInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method SetRemoveStartOffsetInternal addr 0x2c983c0 size 0x44 virtual false final false
  static inline void SetRemoveStartOffsetInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method SetOverrideLoopTimeInternal addr 0x2c98448 size 0x44 virtual false final false
  static inline void SetOverrideLoopTimeInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method SetLoopTimeInternal addr 0x2c984d0 size 0x44 virtual false final false
  static inline void SetLoopTimeInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method CreateHandleInternal_Injected addr 0x2c98514 size 0x54 virtual false final false
  static inline bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::UnityEngine::AnimationClip* clip, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationClipPlayable();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationClipPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationClipPlayable, "UnityEngine.Animations", "AnimationClipPlayable");
