#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerVerticalPlayerMovementManager)
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerVerticalPlayerMovementManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager);
// Type: ::MultiplayerVerticalPlayerMovementManager
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerVerticalPlayerMovementManager*
class CORDL_TYPE MultiplayerVerticalPlayerMovementManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _accelerationMetersPerSecondSquared, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__accelerationMetersPerSecondSquared, put = __cordl_internal_set__accelerationMetersPerSecondSquared)) float_t _accelerationMetersPerSecondSquared;

  /// @brief Field _currentSpeedsDictionary, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__currentSpeedsDictionary,
                      put = __cordl_internal_set__currentSpeedsDictionary))::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>,
                                                                                                                        float_t>* _currentSpeedsDictionary;

  /// @brief Field _decelerationMetersPerSecondSquared, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__decelerationMetersPerSecondSquared, put = __cordl_internal_set__decelerationMetersPerSecondSquared)) float_t _decelerationMetersPerSecondSquared;

  /// @brief Field _duelMovementRange, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__duelMovementRange, put = __cordl_internal_set__duelMovementRange)) float_t _duelMovementRange;

  /// @brief Field _lastFrameBaseScore, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameBaseScore, put = __cordl_internal_set__lastFrameBaseScore)) float_t _lastFrameBaseScore;

  /// @brief Field _layoutProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _maxMoveSpeedMetersPerSecond, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__maxMoveSpeedMetersPerSecond, put = __cordl_internal_set__maxMoveSpeedMetersPerSecond)) float_t _maxMoveSpeedMetersPerSecond;

  /// @brief Field _minScoreDifference, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__minScoreDifference, put = __cordl_internal_set__minScoreDifference)) float_t _minScoreDifference;

  /// @brief Field _movementRange, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__movementRange, put = __cordl_internal_set__movementRange)) float_t _movementRange;

  /// @brief Field _multiplayerController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController))::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _multiplayerPlayersManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerPlayersManager,
                      put = __cordl_internal_set__multiplayerPlayersManager))::UnityW<::GlobalNamespace::MultiplayerPlayersManager> _multiplayerPlayersManager;

  /// @brief Field _reusablePlayersList, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__reusablePlayersList,
                      put = __cordl_internal_set__reusablePlayersList))::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* _reusablePlayersList;

  /// @brief Field _scoreProvider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider))::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  /// @brief Method HandleStateChanged, addr 0x261d1dc, size 0x10, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x261d1ec, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x261d134, size 0xa8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x261d2bc, size 0x7e0, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__accelerationMetersPerSecondSquared() const;

  constexpr float_t& __cordl_internal_get__accelerationMetersPerSecondSquared();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>, float_t>*& __cordl_internal_get__currentSpeedsDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>, float_t>*> const&
  __cordl_internal_get__currentSpeedsDictionary() const;

  constexpr float_t const& __cordl_internal_get__decelerationMetersPerSecondSquared() const;

  constexpr float_t& __cordl_internal_get__decelerationMetersPerSecondSquared();

  constexpr float_t const& __cordl_internal_get__duelMovementRange() const;

  constexpr float_t& __cordl_internal_get__duelMovementRange();

  constexpr float_t const& __cordl_internal_get__lastFrameBaseScore() const;

  constexpr float_t& __cordl_internal_get__lastFrameBaseScore();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __cordl_internal_get__layoutProvider() const;

  constexpr float_t const& __cordl_internal_get__maxMoveSpeedMetersPerSecond() const;

  constexpr float_t& __cordl_internal_get__maxMoveSpeedMetersPerSecond();

  constexpr float_t const& __cordl_internal_get__minScoreDifference() const;

  constexpr float_t& __cordl_internal_get__minScoreDifference();

  constexpr float_t const& __cordl_internal_get__movementRange() const;

  constexpr float_t& __cordl_internal_get__movementRange();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__multiplayerPlayersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__multiplayerPlayersManager();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*& __cordl_internal_get__reusablePlayersList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const&
  __cordl_internal_get__reusablePlayersList() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr void __cordl_internal_set__accelerationMetersPerSecondSquared(float_t value);

  constexpr void __cordl_internal_set__currentSpeedsDictionary(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>, float_t>* value);

  constexpr void __cordl_internal_set__decelerationMetersPerSecondSquared(float_t value);

  constexpr void __cordl_internal_set__duelMovementRange(float_t value);

  constexpr void __cordl_internal_set__lastFrameBaseScore(float_t value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr void __cordl_internal_set__maxMoveSpeedMetersPerSecond(float_t value);

  constexpr void __cordl_internal_set__minScoreDifference(float_t value);

  constexpr void __cordl_internal_set__movementRange(float_t value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr void __cordl_internal_set__reusablePlayersList(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  /// @brief Method .ctor, addr 0x261da9c, size 0x10e0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerVerticalPlayerMovementManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerVerticalPlayerMovementManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerVerticalPlayerMovementManager(MultiplayerVerticalPlayerMovementManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerVerticalPlayerMovementManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerVerticalPlayerMovementManager(MultiplayerVerticalPlayerMovementManager const&) = delete;

  /// @brief Field _movementRange, offset: 0x18, size: 0x4, def value: None
  float_t ____movementRange;

  /// @brief Field _duelMovementRange, offset: 0x1c, size: 0x4, def value: None
  float_t ____duelMovementRange;

  /// @brief Field _maxMoveSpeedMetersPerSecond, offset: 0x20, size: 0x4, def value: None
  float_t ____maxMoveSpeedMetersPerSecond;

  /// @brief Field _accelerationMetersPerSecondSquared, offset: 0x24, size: 0x4, def value: None
  float_t ____accelerationMetersPerSecondSquared;

  /// @brief Field _decelerationMetersPerSecondSquared, offset: 0x28, size: 0x4, def value: None
  float_t ____decelerationMetersPerSecondSquared;

  /// @brief Field _minScoreDifference, offset: 0x2c, size: 0x4, def value: None
  float_t ____minScoreDifference;

  /// @brief Field _multiplayerPlayersManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____multiplayerPlayersManager;

  /// @brief Field _scoreProvider, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  /// @brief Field _layoutProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _multiplayerController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _reusablePlayersList, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* ____reusablePlayersList;

  /// @brief Field _currentSpeedsDictionary, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerFacade>, float_t>* ____currentSpeedsDictionary;

  /// @brief Field _lastFrameBaseScore, offset: 0x60, size: 0x4, def value: None
  float_t ____lastFrameBaseScore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____movementRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____duelMovementRange) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____maxMoveSpeedMetersPerSecond) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____accelerationMetersPerSecondSquared) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____decelerationMetersPerSecondSquared) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____minScoreDifference) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____multiplayerPlayersManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____scoreProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____layoutProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____multiplayerController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____reusablePlayersList) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____currentSpeedsDictionary) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager, ____lastFrameBaseScore) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*, "", "MultiplayerVerticalPlayerMovementManager");
