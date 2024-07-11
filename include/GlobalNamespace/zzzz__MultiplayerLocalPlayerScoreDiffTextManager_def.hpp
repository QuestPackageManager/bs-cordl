#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalPlayerScoreDiffTextManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalPlayerScoreDiffTextManager)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerScoreDiffTextManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager);
// Type: ::MultiplayerLocalPlayerScoreDiffTextManager
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 70, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalPlayerScoreDiffTextManager*
class CORDL_TYPE MultiplayerLocalPlayerScoreDiffTextManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hudInitData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hudInitData, put = __cordl_internal_set__hudInitData))::GlobalNamespace::__CoreGameHUDController__InitData* _hudInitData;

  /// @brief Field _multiplayerController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController))::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _multiplayerSessionManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _scoreDiffText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreDiffText, put = __cordl_internal_set__scoreDiffText))::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> _scoreDiffText;

  /// @brief Field _scoreProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider))::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  /// @brief Field _timeToNextUpdate, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToNextUpdate, put = __cordl_internal_set__timeToNextUpdate)) float_t _timeToNextUpdate;

  /// @brief Field _wasLocalPlayerLeader, offset 0x44, size 0x2
  __declspec(property(get = __cordl_internal_get__wasLocalPlayerLeader, put = __cordl_internal_set__wasLocalPlayerLeader))::System::Nullable_1<bool> _wasLocalPlayerLeader;

  /// @brief Method HandleStateChanged, addr 0x2741a08, size 0x4c, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State newState);

  static inline ::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x2741548, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x2741498, size 0xb0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2741618, size 0x33c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& __cordl_internal_get__hudInitData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& __cordl_internal_get__hudInitData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> const& __cordl_internal_get__scoreDiffText() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText>& __cordl_internal_get__scoreDiffText();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr float_t const& __cordl_internal_get__timeToNextUpdate() const;

  constexpr float_t& __cordl_internal_get__timeToNextUpdate();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__wasLocalPlayerLeader() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__wasLocalPlayerLeader();

  constexpr void __cordl_internal_set__hudInitData(::GlobalNamespace::__CoreGameHUDController__InitData* value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__scoreDiffText(::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  constexpr void __cordl_internal_set__timeToNextUpdate(float_t value);

  constexpr void __cordl_internal_set__wasLocalPlayerLeader(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x2741a54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalPlayerScoreDiffTextManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerScoreDiffTextManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalPlayerScoreDiffTextManager(MultiplayerLocalPlayerScoreDiffTextManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerScoreDiffTextManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalPlayerScoreDiffTextManager(MultiplayerLocalPlayerScoreDiffTextManager const&) = delete;

  /// @brief Field _scoreDiffText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreDiffText> ____scoreDiffText;

  /// @brief Field _multiplayerController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _scoreProvider, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  /// @brief Field _hudInitData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__CoreGameHUDController__InitData* ____hudInitData;

  /// @brief Field _multiplayerSessionManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _timeToNextUpdate, offset: 0x40, size: 0x4, def value: None
  float_t ____timeToNextUpdate;

  /// @brief Field _wasLocalPlayerLeader, offset: 0x44, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____wasLocalPlayerLeader;

  /// @brief Field kUpdateInterval offset 0xffffffff size 0x4
  static constexpr float_t kUpdateInterval{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, ____scoreDiffText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, ____multiplayerController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, ____scoreProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, ____hudInitData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, ____multiplayerSessionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, ____timeToNextUpdate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, ____wasLocalPlayerLeader) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager*, "", "MultiplayerLocalPlayerScoreDiffTextManager");
