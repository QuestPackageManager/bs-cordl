#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerGameplayAnimator)
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class LightsAnimator;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLeadPlayerProvider;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace Tweening {
class TimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerGameplayAnimator);
// Type: ::MultiplayerGameplayAnimator
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5207))
// CS Name: ::MultiplayerGameplayAnimator*
class CORDL_TYPE MultiplayerGameplayAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeLightsColor, offset 0x18, size 0x8
  __declspec(property(get = __get__activeLightsColor, put = __set__activeLightsColor))::GlobalNamespace::ColorSO* _activeLightsColor;

  /// @brief Field _leadingLightsColor, offset 0x20, size 0x8
  __declspec(property(get = __get__leadingLightsColor, put = __set__leadingLightsColor))::GlobalNamespace::ColorSO* _leadingLightsColor;

  /// @brief Field _failedLightsColor, offset 0x28, size 0x8
  __declspec(property(get = __get__failedLightsColor, put = __set__failedLightsColor))::GlobalNamespace::ColorSO* _failedLightsColor;

  /// @brief Field _leadingSwitchCrossFadeDuration, offset 0x30, size 0x4
  __declspec(property(get = __get__leadingSwitchCrossFadeDuration, put = __set__leadingSwitchCrossFadeDuration)) float_t _leadingSwitchCrossFadeDuration;

  /// @brief Field _gameplayLightsAnimators, offset 0x38, size 0x8
  __declspec(property(get = __get__gameplayLightsAnimators,
                      put = __set__gameplayLightsAnimators))::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> _gameplayLightsAnimators;

  /// @brief Field _allLightsAnimators, offset 0x40, size 0x8
  __declspec(property(get = __get__allLightsAnimators, put = __set__allLightsAnimators))::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> _allLightsAnimators;

  /// @brief Field _leadPlayerProvider, offset 0x48, size 0x8
  __declspec(property(get = __get__leadPlayerProvider, put = __set__leadPlayerProvider))::GlobalNamespace::MultiplayerLeadPlayerProvider* _leadPlayerProvider;

  /// @brief Field _multiplayerController, offset 0x50, size 0x8
  __declspec(property(get = __get__multiplayerController, put = __set__multiplayerController))::GlobalNamespace::MultiplayerController* _multiplayerController;

  /// @brief Field tweeningManager, offset 0x58, size 0x8
  __declspec(property(get = __get_tweeningManager, put = __set_tweeningManager))::Tweening::TimeTweeningManager* tweeningManager;

  /// @brief Field connectedPlayer, offset 0x60, size 0x8
  __declspec(property(get = __get_connectedPlayer, put = __set_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  constexpr ::GlobalNamespace::ColorSO*& __get__activeLightsColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__activeLightsColor() const;

  constexpr void __set__activeLightsColor(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__leadingLightsColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__leadingLightsColor() const;

  constexpr void __set__leadingLightsColor(::GlobalNamespace::ColorSO* value);

  constexpr ::GlobalNamespace::ColorSO*& __get__failedLightsColor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& __get__failedLightsColor() const;

  constexpr void __set__failedLightsColor(::GlobalNamespace::ColorSO* value);

  constexpr float_t& __get__leadingSwitchCrossFadeDuration();

  constexpr float_t const& __get__leadingSwitchCrossFadeDuration() const;

  constexpr void __set__leadingSwitchCrossFadeDuration(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*>& __get__gameplayLightsAnimators();

  constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> const& __get__gameplayLightsAnimators() const;

  constexpr void __set__gameplayLightsAnimators(::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*>& __get__allLightsAnimators();

  constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> const& __get__allLightsAnimators() const;

  constexpr void __set__allLightsAnimators(::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> value);

  constexpr ::GlobalNamespace::MultiplayerLeadPlayerProvider*& __get__leadPlayerProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLeadPlayerProvider*> const& __get__leadPlayerProvider() const;

  constexpr void __set__leadPlayerProvider(::GlobalNamespace::MultiplayerLeadPlayerProvider* value);

  constexpr ::GlobalNamespace::MultiplayerController*& __get__multiplayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get__multiplayerController() const;

  constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController* value);

  constexpr ::Tweening::TimeTweeningManager*& __get_tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get_tweeningManager() const;

  constexpr void __set_tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get_connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get_connectedPlayer() const;

  constexpr void __set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method Start, addr 0x224c8c4, size 0x94, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x224c958, size 0x18c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method AnimateNewLeaderSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AnimateNewLeaderSelected(bool isLeading);

  /// @brief Method HandleStateChanged, addr 0x224cb94, size 0x164, virtual true, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  /// @brief Method HandleNewLeaderWasSelected, addr 0x224cda8, size 0xe8, virtual false, abstract: false, final false
  inline void HandleNewLeaderWasSelected(::StringW userId);

  static inline ::GlobalNamespace::MultiplayerGameplayAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x224ce90, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerGameplayAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerGameplayAnimator(MultiplayerGameplayAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerGameplayAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerGameplayAnimator(MultiplayerGameplayAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerGameplayAnimator();

public:
  /// @brief Field _activeLightsColor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____activeLightsColor;

  /// @brief Field _leadingLightsColor, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____leadingLightsColor;

  /// @brief Field _failedLightsColor, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorSO* ____failedLightsColor;

  /// @brief Field _leadingSwitchCrossFadeDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____leadingSwitchCrossFadeDuration;

  /// @brief Field _gameplayLightsAnimators, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> ____gameplayLightsAnimators;

  /// @brief Field _allLightsAnimators, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> ____allLightsAnimators;

  /// @brief Field _leadPlayerProvider, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLeadPlayerProvider* ____leadPlayerProvider;

  /// @brief Field _multiplayerController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* ____multiplayerController;

  /// @brief Field tweeningManager, offset: 0x58, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ___tweeningManager;

  /// @brief Field connectedPlayer, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ___connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerGameplayAnimator, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____activeLightsColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____leadingLightsColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____failedLightsColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____leadingSwitchCrossFadeDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____gameplayLightsAnimators) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____allLightsAnimators) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____leadPlayerProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____multiplayerController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ___tweeningManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ___connectedPlayer) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerGameplayAnimator*, "", "MultiplayerGameplayAnimator");
