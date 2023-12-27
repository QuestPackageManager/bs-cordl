#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4076))
// CS Name: ::ResetPitchOnGameplayFinished*
class CORDL_TYPE ResetPitchOnGameplayFinished : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameplayLevelSceneTransitionEvents, offset 0x10, size 0x8
  __declspec(property(get = __get__gameplayLevelSceneTransitionEvents,
                      put = __set__gameplayLevelSceneTransitionEvents))::GlobalNamespace::GameplayLevelSceneTransitionEvents* _gameplayLevelSceneTransitionEvents;

  /// @brief Field _audioManager, offset 0x18, size 0x8
  __declspec(property(get = __get__audioManager, put = __set__audioManager))::GlobalNamespace::AudioManagerSO* _audioManager;

  constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& __get__gameplayLevelSceneTransitionEvents();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> const& __get__gameplayLevelSceneTransitionEvents() const;

  constexpr void __set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value);

  constexpr ::GlobalNamespace::AudioManagerSO*& __get__audioManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& __get__audioManager() const;

  constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO* value);

  static inline ::GlobalNamespace::ResetPitchOnGameplayFinished* New_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents,
                                                                          ::GlobalNamespace::AudioManagerSO* audioManager);

  /// @brief Method .ctor addr 0x222ff5c size 0xa8 virtual false final false
  inline void _ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManagerSO* audioManager);

  /// @brief Method Finalize addr 0x2230004 size 0x110 virtual true final false
  inline void Finalize();

  /// @brief Method HandleAnyGameplayLevelDidFinish addr 0x2230114 size 0x20 virtual false final false
  inline void HandleAnyGameplayLevelDidFinish();

  // Ctor Parameters [CppParam { name: "", ty: "ResetPitchOnGameplayFinished", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResetPitchOnGameplayFinished(ResetPitchOnGameplayFinished&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResetPitchOnGameplayFinished", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResetPitchOnGameplayFinished(ResetPitchOnGameplayFinished const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResetPitchOnGameplayFinished();

public:
  /// @brief Field _gameplayLevelSceneTransitionEvents, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayLevelSceneTransitionEvents* ____gameplayLevelSceneTransitionEvents;

  /// @brief Field _audioManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AudioManagerSO* ____audioManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResetPitchOnGameplayFinished, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResetPitchOnGameplayFinished);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResetPitchOnGameplayFinished*, "", "ResetPitchOnGameplayFinished");
