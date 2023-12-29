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
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5351))
// CS Name: ::MultiplayerVerticalPlayerMovementManager*
class CORDL_TYPE MultiplayerVerticalPlayerMovementManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _movementRange, offset 0x18, size 0x4
  __declspec(property(get = __get__movementRange, put = __set__movementRange)) float_t _movementRange;

  /// @brief Field _duelMovementRange, offset 0x1c, size 0x4
  __declspec(property(get = __get__duelMovementRange, put = __set__duelMovementRange)) float_t _duelMovementRange;

  /// @brief Field _maxMoveSpeedMetersPerSecond, offset 0x20, size 0x4
  __declspec(property(get = __get__maxMoveSpeedMetersPerSecond, put = __set__maxMoveSpeedMetersPerSecond)) float_t _maxMoveSpeedMetersPerSecond;

  /// @brief Field _accelerationMetersPerSecondSquared, offset 0x24, size 0x4
  __declspec(property(get = __get__accelerationMetersPerSecondSquared, put = __set__accelerationMetersPerSecondSquared)) float_t _accelerationMetersPerSecondSquared;

  /// @brief Field _decelerationMetersPerSecondSquared, offset 0x28, size 0x4
  __declspec(property(get = __get__decelerationMetersPerSecondSquared, put = __set__decelerationMetersPerSecondSquared)) float_t _decelerationMetersPerSecondSquared;

  /// @brief Field _minScoreDifference, offset 0x2c, size 0x4
  __declspec(property(get = __get__minScoreDifference, put = __set__minScoreDifference)) float_t _minScoreDifference;

  /// @brief Field _multiplayerPlayersManager, offset 0x30, size 0x8
  __declspec(property(get = __get__multiplayerPlayersManager, put = __set__multiplayerPlayersManager))::GlobalNamespace::MultiplayerPlayersManager* _multiplayerPlayersManager;

  /// @brief Field _scoreProvider, offset 0x38, size 0x8
  __declspec(property(get = __get__scoreProvider, put = __set__scoreProvider))::GlobalNamespace::MultiplayerScoreProvider* _scoreProvider;

  /// @brief Field _layoutProvider, offset 0x40, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _multiplayerController, offset 0x48, size 0x8
  __declspec(property(get = __get__multiplayerController, put = __set__multiplayerController))::GlobalNamespace::MultiplayerController* _multiplayerController;

  /// @brief Field _reusablePlayersList, offset 0x50, size 0x8
  __declspec(property(get = __get__reusablePlayersList,
                      put = __set__reusablePlayersList))::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* _reusablePlayersList;

  /// @brief Field _currentSpeedsDictionary, offset 0x58, size 0x8
  __declspec(property(get = __get__currentSpeedsDictionary,
                      put = __set__currentSpeedsDictionary))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float_t>* _currentSpeedsDictionary;

  /// @brief Field _lastFrameBaseScore, offset 0x60, size 0x4
  __declspec(property(get = __get__lastFrameBaseScore, put = __set__lastFrameBaseScore)) float_t _lastFrameBaseScore;

  constexpr float_t& __get__movementRange();

  constexpr float_t const& __get__movementRange() const;

  constexpr void __set__movementRange(float_t value);

  constexpr float_t& __get__duelMovementRange();

  constexpr float_t const& __get__duelMovementRange() const;

  constexpr void __set__duelMovementRange(float_t value);

  constexpr float_t& __get__maxMoveSpeedMetersPerSecond();

  constexpr float_t const& __get__maxMoveSpeedMetersPerSecond() const;

  constexpr void __set__maxMoveSpeedMetersPerSecond(float_t value);

  constexpr float_t& __get__accelerationMetersPerSecondSquared();

  constexpr float_t const& __get__accelerationMetersPerSecondSquared() const;

  constexpr void __set__accelerationMetersPerSecondSquared(float_t value);

  constexpr float_t& __get__decelerationMetersPerSecondSquared();

  constexpr float_t const& __get__decelerationMetersPerSecondSquared() const;

  constexpr void __set__decelerationMetersPerSecondSquared(float_t value);

  constexpr float_t& __get__minScoreDifference();

  constexpr float_t const& __get__minScoreDifference() const;

  constexpr void __set__minScoreDifference(float_t value);

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get__multiplayerPlayersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get__multiplayerPlayersManager() const;

  constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager* value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreProvider() const;

  constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::GlobalNamespace::MultiplayerController*& __get__multiplayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get__multiplayerController() const;

  constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*& __get__reusablePlayersList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const& __get__reusablePlayersList() const;

  constexpr void __set__reusablePlayersList(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float_t>*& __get__currentSpeedsDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float_t>*> const&
  __get__currentSpeedsDictionary() const;

  constexpr void __set__currentSpeedsDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float_t>* value);

  constexpr float_t& __get__lastFrameBaseScore();

  constexpr float_t const& __get__lastFrameBaseScore() const;

  constexpr void __set__lastFrameBaseScore(float_t value);

  /// @brief Method Start addr 0x2118118 size 0xac virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x21181d4 size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x21182a8 size 0x7e4 virtual false final false
  inline void Update();

  /// @brief Method HandleStateChanged addr 0x21181c4 size 0x10 virtual false final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager* New_ctor();

  /// @brief Method .ctor addr 0x2118a8c size 0xe0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerVerticalPlayerMovementManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerVerticalPlayerMovementManager(MultiplayerVerticalPlayerMovementManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerVerticalPlayerMovementManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerVerticalPlayerMovementManager(MultiplayerVerticalPlayerMovementManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerVerticalPlayerMovementManager();

public:
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
  ::GlobalNamespace::MultiplayerPlayersManager* ____multiplayerPlayersManager;

  /// @brief Field _scoreProvider, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreProvider;

  /// @brief Field _layoutProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _multiplayerController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* ____multiplayerController;

  /// @brief Field _reusablePlayersList, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* ____reusablePlayersList;

  /// @brief Field _currentSpeedsDictionary, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float_t>* ____currentSpeedsDictionary;

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
