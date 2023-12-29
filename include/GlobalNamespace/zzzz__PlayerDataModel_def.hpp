#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerDataModel)
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class PlayerDataFileManagerSO;
}
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataModel);
// Type: ::PlayerDataModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4744))
// CS Name: ::PlayerDataModel*
class CORDL_TYPE PlayerDataModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerDataFileManager, offset 0x18, size 0x8
  __declspec(property(get = __get__playerDataFileManager, put = __set__playerDataFileManager))::GlobalNamespace::PlayerDataFileManagerSO* _playerDataFileManager;

  /// @brief Field _playerData, offset 0x20, size 0x8
  __declspec(property(get = __get__playerData, put = __set__playerData))::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _saveData, offset 0x28, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  __declspec(property(get = get_playerDataFileManager))::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager;

  __declspec(property(get = get_playerData))::GlobalNamespace::PlayerData* playerData;

  constexpr ::GlobalNamespace::PlayerDataFileManagerSO*& __get__playerDataFileManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataFileManagerSO*> const& __get__playerDataFileManager() const;

  constexpr void __set__playerDataFileManager(::GlobalNamespace::PlayerDataFileManagerSO* value);

  constexpr ::GlobalNamespace::PlayerData*& __get__playerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& __get__playerData() const;

  constexpr void __set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  /// @brief Method get_playerDataFileManager addr 0x223bbbc size 0x8 virtual false final false
  inline ::GlobalNamespace::PlayerDataFileManagerSO* get_playerDataFileManager();

  /// @brief Method get_playerData addr 0x223bbc4 size 0x8 virtual false final false
  inline ::GlobalNamespace::PlayerData* get_playerData();

  /// @brief Method OnEnable addr 0x223bbcc size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnApplicationPause addr 0x223bbf8 size 0xc virtual false final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDisable addr 0x223bc24 size 0x4 virtual false final false
  inline void OnDisable();

  /// @brief Method ResetData addr 0x223bc28 size 0x24 virtual false final false
  inline void ResetData();

  /// @brief Method Save addr 0x223bc04 size 0x20 virtual false final false
  inline void Save();

  /// @brief Method Load addr 0x223bbd0 size 0x28 virtual false final false
  inline void Load();

  static inline ::GlobalNamespace::PlayerDataModel* New_ctor();

  /// @brief Method .ctor addr 0x223bc4c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataModel(PlayerDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataModel(PlayerDataModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataModel();

public:
  /// @brief Field _playerDataFileManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataFileManagerSO* ____playerDataFileManager;

  /// @brief Field _playerData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  /// @brief Field _saveData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____playerDataFileManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____playerData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataModel, ____saveData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataModel*, "", "PlayerDataModel");
