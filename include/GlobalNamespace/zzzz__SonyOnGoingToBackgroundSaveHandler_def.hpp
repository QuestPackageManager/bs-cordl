#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyOnGoingToBackgroundSaveHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SonyOnGoingToBackgroundSaveHandler)
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SonyBackgroundExecutionHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyOnGoingToBackgroundSaveHandler
class CORDL_TYPE SonyOnGoingToBackgroundSaveHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _localLeaderboardModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__localLeaderboardModel, put = __cordl_internal_set__localLeaderboardModel)) ::GlobalNamespace::LocalLeaderboardsModel* _localLeaderboardModel;

  /// @brief Field _playerDataModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _sonyBackgroundExecutionHelper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyBackgroundExecutionHelper,
                      put = __cordl_internal_set__sonyBackgroundExecutionHelper)) ::GlobalNamespace::SonyBackgroundExecutionHelper* _sonyBackgroundExecutionHelper;

  /// @brief Method HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution, addr 0x26e939c, size 0xc4, virtual false, abstract: false, final false
  inline void HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution();

  /// @brief Method Initialize, addr 0x26e9254, size 0xbc, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* New_ctor();

  /// @brief Method OnDestroy, addr 0x26e9310, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::GlobalNamespace::LocalLeaderboardsModel* const& __cordl_internal_get__localLeaderboardModel() const;

  constexpr ::GlobalNamespace::LocalLeaderboardsModel*& __cordl_internal_get__localLeaderboardModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper* const& __cordl_internal_get__sonyBackgroundExecutionHelper() const;

  constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& __cordl_internal_get__sonyBackgroundExecutionHelper();

  constexpr void __cordl_internal_set__localLeaderboardModel(::GlobalNamespace::LocalLeaderboardsModel* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__sonyBackgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper* value);

  /// @brief Method .ctor, addr 0x26e9460, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyOnGoingToBackgroundSaveHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyOnGoingToBackgroundSaveHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyOnGoingToBackgroundSaveHandler(SonyOnGoingToBackgroundSaveHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyOnGoingToBackgroundSaveHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyOnGoingToBackgroundSaveHandler(SonyOnGoingToBackgroundSaveHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13196 };

  /// @brief Field _playerDataModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _sonyBackgroundExecutionHelper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SonyBackgroundExecutionHelper* ____sonyBackgroundExecutionHelper;

  /// @brief Field _localLeaderboardModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* ____localLeaderboardModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, ____playerDataModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, ____sonyBackgroundExecutionHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, ____localLeaderboardModel) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, "", "SonyOnGoingToBackgroundSaveHandler");
