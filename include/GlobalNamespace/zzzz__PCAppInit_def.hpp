#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PCAppInit)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class OculusInit;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class SteamInit;
}
namespace GlobalNamespace {
class FileSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class PCAppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PCAppInit);
// Type: ::PCAppInit
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4014))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4025))
// CS Name: ::PCAppInit*
class CORDL_TYPE PCAppInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  /// @brief Field _mainSystemInit, offset 0x48, size 0x8
  __declspec(property(get = __get__mainSystemInit, put = __set__mainSystemInit))::GlobalNamespace::MainSystemInit* _mainSystemInit;

  /// @brief Field _oculusInit, offset 0x50, size 0x8
  __declspec(property(get = __get__oculusInit, put = __set__oculusInit))::GlobalNamespace::OculusInit* _oculusInit;

  /// @brief Field _steamInit, offset 0x58, size 0x8
  __declspec(property(get = __get__steamInit, put = __set__steamInit))::GlobalNamespace::SteamInit* _steamInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset 0x60, size 0x8
  __declspec(property(get = __get__defaultScenesTransitionsFromInit,
                      put = __set__defaultScenesTransitionsFromInit))::GlobalNamespace::DefaultScenesTransitionsFromInit* _defaultScenesTransitionsFromInit;

  /// @brief Field _mainSettingsModel, offset 0x68, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _goStraightToMenuCommandArgument, offset 0x70, size 0x8
  __declspec(property(get = __get__goStraightToMenuCommandArgument, put = __set__goStraightToMenuCommandArgument))::StringW _goStraightToMenuCommandArgument;

  /// @brief Field _goStraightToEditorCommandArgument, offset 0x78, size 0x8
  __declspec(property(get = __get__goStraightToEditorCommandArgument, put = __set__goStraightToEditorCommandArgument))::StringW _goStraightToEditorCommandArgument;

  /// @brief Field _saveData, offset 0x80, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::FileSaveData* _saveData;

  constexpr ::GlobalNamespace::MainSystemInit*& __get__mainSystemInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> const& __get__mainSystemInit() const;

  constexpr void __set__mainSystemInit(::GlobalNamespace::MainSystemInit* value);

  constexpr ::GlobalNamespace::OculusInit*& __get__oculusInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusInit*> const& __get__oculusInit() const;

  constexpr void __set__oculusInit(::GlobalNamespace::OculusInit* value);

  constexpr ::GlobalNamespace::SteamInit*& __get__steamInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamInit*> const& __get__steamInit() const;

  constexpr void __set__steamInit(::GlobalNamespace::SteamInit* value);

  constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit*& __get__defaultScenesTransitionsFromInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> const& __get__defaultScenesTransitionsFromInit() const;

  constexpr void __set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit* value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::StringW& __get__goStraightToMenuCommandArgument();

  constexpr ::StringW const& __get__goStraightToMenuCommandArgument() const;

  constexpr void __set__goStraightToMenuCommandArgument(::StringW value);

  constexpr ::StringW& __get__goStraightToEditorCommandArgument();

  constexpr ::StringW const& __get__goStraightToEditorCommandArgument() const;

  constexpr void __set__goStraightToEditorCommandArgument(::StringW value);

  constexpr ::GlobalNamespace::FileSaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FileSaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::FileSaveData* value);

  /// @brief Method AppStartAndMultiSceneEditorSetup addr 0x20c8ac0 size 0x7c virtual true final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetup addr 0x20c8b3c size 0x84 virtual true final false
  inline void RepeatableSetup();

  /// @brief Method TransitionToNextScene addr 0x20c8bc0 size 0xc0 virtual true final false
  inline void TransitionToNextScene();

  /// @brief Method InstallBindings addr 0x20c8c80 size 0x2e0 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PCAppInit* New_ctor();

  /// @brief Method .ctor addr 0x20c8f60 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PCAppInit(PCAppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PCAppInit(PCAppInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PCAppInit();

public:
  /// @brief Field _mainSystemInit, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MainSystemInit* ____mainSystemInit;

  /// @brief Field _oculusInit, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OculusInit* ____oculusInit;

  /// @brief Field _steamInit, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::SteamInit* ____steamInit;

  /// @brief Field _defaultScenesTransitionsFromInit, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::DefaultScenesTransitionsFromInit* ____defaultScenesTransitionsFromInit;

  /// @brief Field _mainSettingsModel, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _goStraightToMenuCommandArgument, offset: 0x70, size: 0x8, def value: None
  ::StringW ____goStraightToMenuCommandArgument;

  /// @brief Field _goStraightToEditorCommandArgument, offset: 0x78, size: 0x8, def value: None
  ::StringW ____goStraightToEditorCommandArgument;

  /// @brief Field _saveData, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::FileSaveData* ____saveData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PCAppInit, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____mainSystemInit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____oculusInit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____steamInit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____defaultScenesTransitionsFromInit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____mainSettingsModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____goStraightToMenuCommandArgument) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____goStraightToEditorCommandArgument) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PCAppInit, ____saveData) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PCAppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PCAppInit*, "", "PCAppInit");
