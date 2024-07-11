#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyOnGoingToBackgroundSaveHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SonyOnGoingToBackgroundSaveHandler)
namespace BGLib::SaveDataCore {
class SaveDataFlushingService;
}
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
// Type: ::SonyOnGoingToBackgroundSaveHandler
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyOnGoingToBackgroundSaveHandler*
class CORDL_TYPE SonyOnGoingToBackgroundSaveHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _flushingService, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__flushingService, put = __cordl_internal_set__flushingService))::BGLib::SaveDataCore::SaveDataFlushingService* _flushingService;

  /// @brief Field _localLeaderboardModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__localLeaderboardModel, put = __cordl_internal_set__localLeaderboardModel))::GlobalNamespace::LocalLeaderboardsModel* _localLeaderboardModel;

  /// @brief Field _playerDataModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _sonyBackgroundExecutionHelper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sonyBackgroundExecutionHelper,
                      put = __cordl_internal_set__sonyBackgroundExecutionHelper))::GlobalNamespace::SonyBackgroundExecutionHelper* _sonyBackgroundExecutionHelper;

  /// @brief Method HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution, addr 0x14f0648, size 0x114, virtual false, abstract: false, final false
  inline void HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution();

  /// @brief Method Initialize, addr 0x14f04fc, size 0xb8, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* New_ctor();

  /// @brief Method OnDestroy, addr 0x14f05b4, size 0x94, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::BGLib::SaveDataCore::SaveDataFlushingService*& __cordl_internal_get__flushingService();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::SaveDataCore::SaveDataFlushingService*> const& __cordl_internal_get__flushingService() const;

  constexpr ::GlobalNamespace::LocalLeaderboardsModel*& __cordl_internal_get__localLeaderboardModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardsModel*> const& __cordl_internal_get__localLeaderboardModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& __cordl_internal_get__sonyBackgroundExecutionHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> const& __cordl_internal_get__sonyBackgroundExecutionHelper() const;

  constexpr void __cordl_internal_set__flushingService(::BGLib::SaveDataCore::SaveDataFlushingService* value);

  constexpr void __cordl_internal_set__localLeaderboardModel(::GlobalNamespace::LocalLeaderboardsModel* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__sonyBackgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper* value);

  /// @brief Method .ctor, addr 0x14f075c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _playerDataModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _flushingService, offset: 0x20, size: 0x8, def value: None
  ::BGLib::SaveDataCore::SaveDataFlushingService* ____flushingService;

  /// @brief Field _sonyBackgroundExecutionHelper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SonyBackgroundExecutionHelper* ____sonyBackgroundExecutionHelper;

  /// @brief Field _localLeaderboardModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* ____localLeaderboardModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, ____playerDataModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, ____flushingService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, ____sonyBackgroundExecutionHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, ____localLeaderboardModel) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, "", "SonyOnGoingToBackgroundSaveHandler");
