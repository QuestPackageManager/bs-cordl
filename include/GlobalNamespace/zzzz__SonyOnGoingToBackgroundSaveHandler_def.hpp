#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SonyOnGoingToBackgroundSaveHandler)
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class ISaveData;
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4592))
// CS Name: ::SonyOnGoingToBackgroundSaveHandler*
class CORDL_TYPE SonyOnGoingToBackgroundSaveHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _localLeaderboardModel, offset 0x18, size 0x8
  __declspec(property(get = __get__localLeaderboardModel, put = __set__localLeaderboardModel))::GlobalNamespace::LocalLeaderboardsModel* _localLeaderboardModel;

  /// @brief Field _mainSettingsModel, offset 0x20, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _playerDataModel, offset 0x28, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _saveData, offset 0x30, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  /// @brief Field _sonyBackgroundExecutionHelper, offset 0x38, size 0x8
  __declspec(property(get = __get__sonyBackgroundExecutionHelper, put = __set__sonyBackgroundExecutionHelper))::GlobalNamespace::SonyBackgroundExecutionHelper* _sonyBackgroundExecutionHelper;

  constexpr ::GlobalNamespace::LocalLeaderboardsModel*& __get__localLeaderboardModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardsModel*> const& __get__localLeaderboardModel() const;

  constexpr void __set__localLeaderboardModel(::GlobalNamespace::LocalLeaderboardsModel* value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& __get__sonyBackgroundExecutionHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> const& __get__sonyBackgroundExecutionHelper() const;

  constexpr void __set__sonyBackgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper* value);

  /// @brief Method Initialize addr 0x2369be8 size 0xb8 virtual false final false
  inline void Initialize();

  /// @brief Method OnDestroy addr 0x2369ca0 size 0x94 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution addr 0x2369d34 size 0x48 virtual false final false
  inline void HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution();

  static inline ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* New_ctor();

  /// @brief Method .ctor addr 0x2369d7c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyOnGoingToBackgroundSaveHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyOnGoingToBackgroundSaveHandler(SonyOnGoingToBackgroundSaveHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyOnGoingToBackgroundSaveHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyOnGoingToBackgroundSaveHandler(SonyOnGoingToBackgroundSaveHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyOnGoingToBackgroundSaveHandler();

public:
  /// @brief Field _localLeaderboardModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* ____localLeaderboardModel;

  /// @brief Field _mainSettingsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _playerDataModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _saveData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  /// @brief Field _sonyBackgroundExecutionHelper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SonyBackgroundExecutionHelper* ____sonyBackgroundExecutionHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*, "", "SonyOnGoingToBackgroundSaveHandler");
