#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationMixerPlayable)
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
struct AnimationMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationMixerPlayable);
// Type: UnityEngine.Animations::AnimationMixerPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: ::UnityEngine.Animations::AnimationMixerPlayable
struct CORDL_TYPE AnimationMixerPlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable))::UnityEngine::Animations::AnimationMixerPlayable m_NullPlayable;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Create, addr 0x33cc300, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Animations::AnimationMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method CreateHandle, addr 0x33cc398, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method CreateHandleInternal, addr 0x33cc53c, size 0x8c, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method CreateHandleInternal_Injected, addr 0x33cc67c, size 0x44, virtual false, abstract: false, final false
  static inline bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method Equals, addr 0x33cc604, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationMixerPlayable other);

  /// @brief Method GetHandle, addr 0x33cc5c8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method .ctor, addr 0x33cc47c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  static inline ::UnityEngine::Animations::AnimationMixerPlayable getStaticF_m_NullPlayable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationMixerPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Implicit, addr 0x33cc5d4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationMixerPlayable playable);

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationMixerPlayable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationMixerPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationMixerPlayable, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationMixerPlayable, "UnityEngine.Animations", "AnimationMixerPlayable");
