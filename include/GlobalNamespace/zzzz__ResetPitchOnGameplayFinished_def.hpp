#pragma once
// IWYU pragma private; include "GlobalNamespace/ResetPitchOnGameplayFinished.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ResetPitchOnGameplayFinished)
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
// Forward declare root types
namespace GlobalNamespace {
class ResetPitchOnGameplayFinished;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResetPitchOnGameplayFinished);
// Type: ::ResetPitchOnGameplayFinished
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ResetPitchOnGameplayFinished*
class CORDL_TYPE ResetPitchOnGameplayFinished : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager))::UnityW<::GlobalNamespace::AudioManagerSO> _audioManager;

  /// @brief Field _gameplayLevelSceneTransitionEvents, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayLevelSceneTransitionEvents,
                      put = __cordl_internal_set__gameplayLevelSceneTransitionEvents))::GlobalNamespace::GameplayLevelSceneTransitionEvents* _gameplayLevelSceneTransitionEvents;

  /// @brief Method Finalize, addr 0x26220c0, size 0x110, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HandleAnyGameplayLevelDidFinish, addr 0x26221d0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnyGameplayLevelDidFinish();

  static inline ::GlobalNamespace::ResetPitchOnGameplayFinished* New_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents,
                                                                          ::GlobalNamespace::AudioManagerSO* audioManager);

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get__audioManager() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get__audioManager();

  constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& __cordl_internal_get__gameplayLevelSceneTransitionEvents();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> const& __cordl_internal_get__gameplayLevelSceneTransitionEvents() const;

  constexpr void __cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value);

  /// @brief Method .ctor, addr 0x2622018, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManagerSO* audioManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResetPitchOnGameplayFinished();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResetPitchOnGameplayFinished", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResetPitchOnGameplayFinished(ResetPitchOnGameplayFinished&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResetPitchOnGameplayFinished", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResetPitchOnGameplayFinished(ResetPitchOnGameplayFinished const&) = delete;

  /// @brief Field _gameplayLevelSceneTransitionEvents, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayLevelSceneTransitionEvents* ____gameplayLevelSceneTransitionEvents;

  /// @brief Field _audioManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> ____audioManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResetPitchOnGameplayFinished, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetPitchOnGameplayFinished, ____gameplayLevelSceneTransitionEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetPitchOnGameplayFinished, ____audioManager) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResetPitchOnGameplayFinished);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResetPitchOnGameplayFinished*, "", "ResetPitchOnGameplayFinished");
