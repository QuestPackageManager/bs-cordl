#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectControlTrackMixerBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VisualEffectControlTrackMixerBehaviour)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrack;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectControlTrackMixerBehaviour;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour*, "UnityEngine.VFX", "VisualEffectControlTrackMixerBehaviour");
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackMixerBehaviour
class CORDL_TYPE VisualEffectControlTrackMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field m_ReinitWithBinding, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReinitWithBinding, put = __cordl_internal_set_m_ReinitWithBinding)) bool m_ReinitWithBinding;

  /// @brief Field m_ReinitWithUnbinding, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReinitWithUnbinding, put = __cordl_internal_set_m_ReinitWithUnbinding)) bool m_ReinitWithUnbinding;

  /// @brief Field m_ScrubbingCacheHelper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrubbingCacheHelper,
                      put = __cordl_internal_set_m_ScrubbingCacheHelper)) ::UnityEngine::VFX::VisualEffectControlTrackController* m_ScrubbingCacheHelper;

  /// @brief Field m_Target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::VFX::VisualEffect> m_Target;

  /// @brief Method ApplyFrame, addr 0x69d7c7c, size 0x1ac, virtual false, abstract: false, final false
  inline void ApplyFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data);

  /// @brief Method BindVFX, addr 0x69d7e28, size 0xa4, virtual false, abstract: false, final false
  inline void BindVFX(::UnityEngine::VFX::VisualEffect* vfx);

  /// @brief Method Init, addr 0x69d4e20, size 0xc, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::VFX::VisualEffectControlTrack* parentTrack, bool reinitWithBinding, bool reinitWithUnbinding);

  /// @brief Method InvalidateScrubbingHelper, addr 0x69d8130, size 0x28, virtual false, abstract: false, final false
  inline void InvalidateScrubbingHelper();

  static inline ::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x69d8158, size 0x2c, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data);

  /// @brief Method OnPlayableCreate, addr 0x69d8184, size 0x28, virtual true, abstract: false, final false
  inline void OnPlayableCreate(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy, addr 0x69d81ac, size 0x2c, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method PrepareFrame, addr 0x69d7f5c, size 0x1d4, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data);

  /// @brief Method UnbindVFX, addr 0x69d7ecc, size 0x90, virtual false, abstract: false, final false
  inline void UnbindVFX();

  constexpr bool const& __cordl_internal_get_m_ReinitWithBinding() const;

  constexpr bool& __cordl_internal_get_m_ReinitWithBinding();

  constexpr bool const& __cordl_internal_get_m_ReinitWithUnbinding() const;

  constexpr bool& __cordl_internal_get_m_ReinitWithUnbinding();

  constexpr ::UnityEngine::VFX::VisualEffectControlTrackController* const& __cordl_internal_get_m_ScrubbingCacheHelper() const;

  constexpr ::UnityEngine::VFX::VisualEffectControlTrackController*& __cordl_internal_get_m_ScrubbingCacheHelper();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get_m_Target() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get_m_Target();

  constexpr void __cordl_internal_set_m_ReinitWithBinding(bool value);

  constexpr void __cordl_internal_set_m_ReinitWithUnbinding(bool value);

  constexpr void __cordl_internal_set_m_ScrubbingCacheHelper(::UnityEngine::VFX::VisualEffectControlTrackController* value);

  constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::VFX::VisualEffect> value);

  /// @brief Method .ctor, addr 0x69d81d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrackMixerBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackMixerBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlTrackMixerBehaviour(VisualEffectControlTrackMixerBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackMixerBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlTrackMixerBehaviour(VisualEffectControlTrackMixerBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19970 };

  /// @brief Field m_ScrubbingCacheHelper, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::VFX::VisualEffectControlTrackController* ___m_ScrubbingCacheHelper;

  /// @brief Field m_Target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffect> ___m_Target;

  /// @brief Field m_ReinitWithBinding, offset: 0x20, size: 0x1, def value: None
  bool ___m_ReinitWithBinding;

  /// @brief Field m_ReinitWithUnbinding, offset: 0x21, size: 0x1, def value: None
  bool ___m_ReinitWithUnbinding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour, ___m_ScrubbingCacheHelper) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour, ___m_Target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour, ___m_ReinitWithBinding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour, ___m_ReinitWithUnbinding) == 0x21, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackMixerBehaviour) == 0x28, "Size mismatch!");

} // namespace UnityEngine::VFX
