#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AvatarDataModel)
namespace GlobalNamespace {
class AvatarPartsModel;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class AvatarSaveData;
}
namespace GlobalNamespace {
class AvatarData;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarDataModel);
// Type: ::AvatarDataModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4772))
// CS Name: ::AvatarDataModel*
class CORDL_TYPE AvatarDataModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarPartsModel, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarPartsModel, put = __set__avatarPartsModel))::GlobalNamespace::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _saveData, offset 0x20, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  /// @brief Field <avatarData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__avatarData_k__BackingField, put = __set__avatarData_k__BackingField))::GlobalNamespace::AvatarData* _avatarData_k__BackingField;

  __declspec(property(get = get_avatarData, put = set_avatarData))::GlobalNamespace::AvatarData* avatarData;

  constexpr ::GlobalNamespace::AvatarPartsModel*& __get__avatarPartsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPartsModel*> const& __get__avatarPartsModel() const;

  constexpr void __set__avatarPartsModel(::GlobalNamespace::AvatarPartsModel* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  constexpr ::GlobalNamespace::AvatarData*& __get__avatarData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarData*> const& __get__avatarData_k__BackingField() const;

  constexpr void __set__avatarData_k__BackingField(::GlobalNamespace::AvatarData* value);

  /// @brief Method get_avatarData addr 0x223c768 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarData* get_avatarData();

  /// @brief Method set_avatarData addr 0x223c770 size 0x8 virtual false final false
  inline void set_avatarData(::GlobalNamespace::AvatarData* value);

  /// @brief Method OnEnable addr 0x223c778 size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method Randomize addr 0x223c7a4 size 0x18 virtual false final false
  inline void Randomize();

  /// @brief Method Save addr 0x223c8bc size 0x1c4 virtual false final false
  inline void Save();

  /// @brief Method Load addr 0x223c77c size 0x28 virtual false final false
  inline void Load();

  /// @brief Method LoadFromSaveData addr 0x223ca88 size 0xb0 virtual false final false
  static inline ::GlobalNamespace::AvatarData* LoadFromSaveData(::GlobalNamespace::ISaveData* saveData);

  /// @brief Method LoadFromCurrentVersion addr 0x223cb38 size 0x24c virtual false final false
  static inline ::GlobalNamespace::AvatarData* LoadFromCurrentVersion(::GlobalNamespace::AvatarSaveData* avatarSaveData);

  /// @brief Method CreateDefaultAvatarData addr 0x223c7bc size 0x100 virtual false final false
  inline ::GlobalNamespace::AvatarData* CreateDefaultAvatarData();

  static inline ::GlobalNamespace::AvatarDataModel* New_ctor();

  /// @brief Method .ctor addr 0x223cdc4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarDataModel(AvatarDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarDataModel(AvatarDataModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarDataModel();

public:
  /// @brief Field _avatarPartsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPartsModel* ____avatarPartsModel;

  /// @brief Field _saveData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  /// @brief Field <avatarData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AvatarData* ____avatarData_k__BackingField;

  /// @brief Field kAvatarDataFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kAvatarDataFileName{ u"AvatarData.dat" };

  /// @brief Field kTempFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kTempFileName{ u"AvatarData.dat.tmp" };

  /// @brief Field kBackupFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBackupFileName{ u"AvatarData.dat.bak" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarDataModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarDataModel, ____avatarPartsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarDataModel, ____saveData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarDataModel, ____avatarData_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarDataModel*, "", "AvatarDataModel");
