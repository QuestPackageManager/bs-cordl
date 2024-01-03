#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationLayerMixerPlayable)
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
namespace UnityEngine {
class AvatarMask;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationLayerMixerPlayable);
// Type: UnityEngine.Animations::AnimationLayerMixerPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10440))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14894))
// CS Name: ::UnityEngine.Animations::AnimationLayerMixerPlayable
struct CORDL_TYPE AnimationLayerMixerPlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable))::UnityEngine::Animations::AnimationLayerMixerPlayable m_NullPlayable;

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationLayerMixerPlayable_();

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationLayerMixerPlayable value);

  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable getStaticF_m_NullPlayable();

  /// @brief Method Create, addr 0x2c97890, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method Create, addr 0x2c97900, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool singleLayerOptimization);

  /// @brief Method CreateHandle, addr 0x2c979a8, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method .ctor, addr 0x2c97a8c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle, bool singleLayerOptimization);

  /// @brief Method GetHandle, addr 0x2c97c70, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method op_Implicit, addr 0x2c97c7c, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationLayerMixerPlayable playable);

  /// @brief Method Equals, addr 0x2c97cac, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable other);

  /// @brief Method SetLayerMaskFromAvatarMask, addr 0x2c97d24, size 0x1e0, virtual false, abstract: false, final false
  inline void SetLayerMaskFromAvatarMask(uint32_t layerIndex, ::UnityEngine::AvatarMask* mask);

  /// @brief Method CreateHandleInternal, addr 0x2c97ba0, size 0x8c, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method SetSingleLayerOptimizationInternal, addr 0x2c97c2c, size 0x44, virtual false, abstract: false, final false
  static inline void SetSingleLayerOptimizationInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value);

  /// @brief Method SetLayerMaskFromAvatarMaskInternal, addr 0x2c97f04, size 0x54, virtual false, abstract: false, final false
  static inline void SetLayerMaskFromAvatarMaskInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, uint32_t layerIndex, ::UnityEngine::AvatarMask* mask);

  /// @brief Method CreateHandleInternal_Injected, addr 0x2c97f58, size 0x44, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationLayerMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationLayerMixerPlayable();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationLayerMixerPlayable, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationLayerMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationLayerMixerPlayable, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
