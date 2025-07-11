#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioListenerController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioListenerController)
// Forward declare root types
namespace GlobalNamespace {
class AudioListenerController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioListenerController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioListenerController
class CORDL_TYPE AudioListenerController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _startAudioListenerPauseState, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__startAudioListenerPauseState, put = __cordl_internal_set__startAudioListenerPauseState)) bool _startAudioListenerPauseState;

  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Method Awake, addr 0x3ace34c, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::AudioListenerController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ace36c, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x3ace378, size 0xc, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Resume, addr 0x3ace384, size 0xc, virtual false, abstract: false, final false
  inline void Resume();

  constexpr bool const& __cordl_internal_get__startAudioListenerPauseState() const;

  constexpr bool& __cordl_internal_get__startAudioListenerPauseState();

  constexpr void __cordl_internal_set__startAudioListenerPauseState(bool value);

  /// @brief Method .ctor, addr 0x3ace390, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isPaused, addr 0x3ace344, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPaused();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioListenerController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioListenerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioListenerController(AudioListenerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioListenerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioListenerController(AudioListenerController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3992 };

  /// @brief Field _startAudioListenerPauseState, offset: 0x20, size: 0x1, def value: None
  bool ____startAudioListenerPauseState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioListenerController, ____startAudioListenerPauseState) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioListenerController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioListenerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioListenerController*, "", "AudioListenerController");
