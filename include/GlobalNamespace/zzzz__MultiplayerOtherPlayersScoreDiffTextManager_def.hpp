#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerOtherPlayersScoreDiffTextManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerOtherPlayersScoreDiffTextManager)
namespace GlobalNamespace {
class CoreGameHUDController_InitData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct MultiplayerController_State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerOtherPlayersScoreDiffTextManager___c;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider_RankedPlayer;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOtherPlayersScoreDiffTextManager;
}
namespace GlobalNamespace {
class MultiplayerOtherPlayersScoreDiffTextManager___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerOtherPlayersScoreDiffTextManager/<>c
class CORDL_TYPE MultiplayerOtherPlayersScoreDiffTextManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* __9__10_0;

  static inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c* New_ctor();

  /// @brief Method <Update>b__10_0, addr 0x3bdd324, size 0x14, virtual false, abstract: false, final false
  inline bool _Update_b__10_0(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* p);

  /// @brief Method .ctor, addr 0x3bdd31c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* getStaticF___9__10_0();

  static inline void setStaticF___9(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerOtherPlayersScoreDiffTextManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerOtherPlayersScoreDiffTextManager___c(MultiplayerOtherPlayersScoreDiffTextManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerOtherPlayersScoreDiffTextManager___c(MultiplayerOtherPlayersScoreDiffTextManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4596 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerOtherPlayersScoreDiffTextManager
class CORDL_TYPE MultiplayerOtherPlayersScoreDiffTextManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c;

  /// @brief Field _initData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::CoreGameHUDController_InitData* _initData;

  /// @brief Field _layoutProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider)) ::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field _multiplayerController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController)) ::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _multiplayerSessionManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _playersManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playersManager, put = __cordl_internal_set__playersManager)) ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> _playersManager;

  /// @brief Field _scoreProvider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider)) ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  /// @brief Field _timeToNextUpdate, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToNextUpdate, put = __cordl_internal_set__timeToNextUpdate)) float_t _timeToNextUpdate;

  /// @brief Method HandleStateChanged, addr 0x3bdd150, size 0x168, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::MultiplayerController_State newState);

  /// @brief Method HideAll, addr 0x3bdc8d4, size 0x3c0, virtual false, abstract: false, final false
  inline void HideAll();

  /// @brief Method InitLeftRightPositions, addr 0x3bdcc94, size 0x4bc, virtual false, abstract: false, final false
  inline void InitLeftRightPositions();

  static inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bdc440, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3bdc38c, size 0xb4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3bdc50c, size 0x3c8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::CoreGameHUDController_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::CoreGameHUDController_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& __cordl_internal_get__layoutProvider() const;

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__playersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__playersManager();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr float_t const& __cordl_internal_get__timeToNextUpdate() const;

  constexpr float_t& __cordl_internal_get__timeToNextUpdate();

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::CoreGameHUDController_InitData* value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__playersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  constexpr void __cordl_internal_set__timeToNextUpdate(float_t value);

  /// @brief Method .ctor, addr 0x3bdd2b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerOtherPlayersScoreDiffTextManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerOtherPlayersScoreDiffTextManager(MultiplayerOtherPlayersScoreDiffTextManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerOtherPlayersScoreDiffTextManager(MultiplayerOtherPlayersScoreDiffTextManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4597 };

  /// @brief Field kUpdateInterval offset 0xffffffff size 0x4
  static constexpr float_t kUpdateInterval{ static_cast<float_t>(0.5f) };

  /// @brief Field _multiplayerController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _playersManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____playersManager;

  /// @brief Field _scoreProvider, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  /// @brief Field _multiplayerSessionManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _layoutProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field _initData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::CoreGameHUDController_InitData* ____initData;

  /// @brief Field _timeToNextUpdate, offset: 0x50, size: 0x4, def value: None
  float_t ____timeToNextUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____multiplayerController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____playersManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____scoreProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____multiplayerSessionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____layoutProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____initData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, ____timeToNextUpdate) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*, "", "MultiplayerOtherPlayersScoreDiffTextManager");
NEED_NO_BOX(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*, "", "MultiplayerOtherPlayersScoreDiffTextManager/<>c");
