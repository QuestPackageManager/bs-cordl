#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerDataModel)
namespace GlobalNamespace {
class PlayerDataFileModel;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataModel);
// Type: ::PlayerDataModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataModel*
class CORDL_TYPE PlayerDataModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerData, put = __cordl_internal_set__playerData))::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _playerDataFileModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileModel, put = __cordl_internal_set__playerDataFileModel))::GlobalNamespace::PlayerDataFileModel* _playerDataFileModel;

  __declspec(property(get = get_playerData))::GlobalNamespace::PlayerData* playerData;

  __declspec(property(get = get_playerDataFileModel))::GlobalNamespace::PlayerDataFileModel* playerDataFileModel;

  /// @brief Method Inject, addr 0x131e500, size 0x28, virtual false, abstract: false, final false
  inline void Inject(::StringW playerDataJsonString, ::GlobalNamespace::PlayerDataFileModel* playerDataFileModel);

  static inline ::GlobalNamespace::PlayerDataModel* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x131e528, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDisable, addr 0x131e554, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method ResetData, addr 0x131e5d4, size 0x24, virtual false, abstract: false, final false
  inline void ResetData();

  /// @brief Method Save, addr 0x131e534, size 0x20, virtual false, abstract: false, final false
  inline void Save();

  /// @brief Method SaveAsync, addr 0x131e5f8, size 0x20, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync();

  constexpr ::GlobalNamespace::PlayerData*& __cordl_internal_get__playerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& __cordl_internal_get__playerData() const;

  constexpr ::GlobalNamespace::PlayerDataFileModel*& __cordl_internal_get__playerDataFileModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataFileModel*> const& __cordl_internal_get__playerDataFileModel() const;

  constexpr void __cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr void __cordl_internal_set__playerDataFileModel(::GlobalNamespace::PlayerDataFileModel* value);

  /// @brief Method .ctor, addr 0x131e618, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_playerData, addr 0x131e4f8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* get_playerData();

  /// @brief Method get_playerDataFileModel, addr 0x131e4f0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerDataFileModel* get_playerDataFileModel();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataModel(PlayerDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataModel(PlayerDataModel const&) = delete;

  /// @brief Field _playerData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _playerDataFileModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataFileModel* ____playerDataFileModel;

  /// @brief Field kPlayerDataSaveInjectID offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayerDataSaveInjectID{ u"SavedPlayerData" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____playerData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____playerDataFileModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataModel*, "", "PlayerDataModel");
