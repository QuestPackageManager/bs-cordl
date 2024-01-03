#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AvatarDataModel)
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarPartsModel;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarSaveData;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarDataModel);
// Type: BeatSaber.BeatAvatarSDK::AvatarDataModel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15681))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarDataModel*
class CORDL_TYPE AvatarDataModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field <avatarCreated>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__avatarCreated_k__BackingField, put = __set__avatarCreated_k__BackingField)) bool _avatarCreated_k__BackingField;

  /// @brief Field didChangeAvatarDataEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_didChangeAvatarDataEvent, put = __set_didChangeAvatarDataEvent))::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* didChangeAvatarDataEvent;

  /// @brief Field _avatarPartsModel, offset 0x20, size 0x8
  __declspec(property(get = __get__avatarPartsModel, put = __set__avatarPartsModel))::BeatSaber::BeatAvatarSDK::AvatarPartsModel* _avatarPartsModel;

  /// @brief Field _saveData, offset 0x28, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  /// @brief Field _avatarData, offset 0x30, size 0x8
  __declspec(property(get = __get__avatarData, put = __set__avatarData))::BeatSaber::BeatAvatarSDK::AvatarData* _avatarData;

  /// @brief Field filePath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_filePath, put = setStaticF_filePath))::StringW filePath;

  /// @brief Field tempFilePath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tempFilePath, put = setStaticF_tempFilePath))::StringW tempFilePath;

  /// @brief Field backupFilePath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_backupFilePath, put = setStaticF_backupFilePath))::StringW backupFilePath;

  __declspec(property(get = get_avatarData, put = set_avatarData))::BeatSaber::BeatAvatarSDK::AvatarData* avatarData;

  __declspec(property(get = get_avatarCreated, put = set_avatarCreated)) bool avatarCreated;

  constexpr bool& __get__avatarCreated_k__BackingField();

  constexpr bool const& __get__avatarCreated_k__BackingField() const;

  constexpr void __set__avatarCreated_k__BackingField(bool value);

  constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*& __get_didChangeAvatarDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*> const& __get_didChangeAvatarDataEvent() const;

  constexpr void __set_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& __get__avatarPartsModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*> const& __get__avatarPartsModel() const;

  constexpr void __set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarData*& __get__avatarData();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarData*> const& __get__avatarData() const;

  constexpr void __set__avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value);

  static inline void setStaticF_filePath(::StringW value);

  static inline ::StringW getStaticF_filePath();

  static inline void setStaticF_tempFilePath(::StringW value);

  static inline ::StringW getStaticF_tempFilePath();

  static inline void setStaticF_backupFilePath(::StringW value);

  static inline ::StringW getStaticF_backupFilePath();

  /// @brief Method get_avatarData, addr 0xe1932c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarData* get_avatarData();

  /// @brief Method set_avatarData, addr 0xe19334, size 0x78, virtual false, abstract: false, final false
  inline void set_avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value);

  /// @brief Method get_avatarCreated, addr 0xe193cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_avatarCreated();

  /// @brief Method set_avatarCreated, addr 0xe193d4, size 0xc, virtual false, abstract: false, final false
  inline void set_avatarCreated(bool value);

  /// @brief Method add_didChangeAvatarDataEvent, addr 0xe193e0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value);

  /// @brief Method remove_didChangeAvatarDataEvent, addr 0xe19490, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value);

  /// @brief Method Init, addr 0xe19540, size 0x84, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Save, addr 0xe19658, size 0x178, virtual false, abstract: false, final false
  inline void Save();

  /// @brief Method Load, addr 0xe195c4, size 0x94, virtual false, abstract: false, final false
  inline void Load();

  /// @brief Method Delete, addr 0xe198c4, size 0x1cc, virtual false, abstract: false, final false
  inline void Delete();

  /// @brief Method ReportAvatarChanged, addr 0xe193ac, size 0x20, virtual false, abstract: false, final false
  inline void ReportAvatarChanged();

  /// @brief Method LoadFromSaveData, addr 0xe197d8, size 0xe8, virtual false, abstract: false, final false
  static inline ::BeatSaber::BeatAvatarSDK::AvatarData* LoadFromSaveData(::GlobalNamespace::ISaveData* saveData);

  /// @brief Method LoadFromCurrentVersion, addr 0xe19a90, size 0x24c, virtual false, abstract: false, final false
  static inline ::BeatSaber::BeatAvatarSDK::AvatarData* LoadFromCurrentVersion(::BeatSaber::BeatAvatarSDK::AvatarSaveData* avatarSaveData);

  /// @brief Method CreateDefaultAvatarData, addr 0xe198c0, size 0x4, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarData* CreateDefaultAvatarData();

  /// @brief Method CreateRandomAvatarData, addr 0xe19cdc, size 0xac, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarData* CreateRandomAvatarData();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarDataModel* New_ctor();

  /// @brief Method .ctor, addr 0xe19e34, size 0x8, virtual false, abstract: false, final false
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
  /// @brief Field <avatarCreated>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____avatarCreated_k__BackingField;

  /// @brief Field didChangeAvatarDataEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* ___didChangeAvatarDataEvent;

  /// @brief Field _avatarPartsModel, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* ____avatarPartsModel;

  /// @brief Field _saveData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  /// @brief Field _avatarData, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarData* ____avatarData;

  /// @brief Field kAvatarDataFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kAvatarDataFileName{ u"AvatarData.dat" };

  /// @brief Field kTempFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kTempFileName{ u"AvatarData.dat.tmp" };

  /// @brief Field kBackupFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kBackupFileName{ u"AvatarData.dat.bak" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarDataModel, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarCreated_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ___didChangeAvatarDataEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarPartsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____saveData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarDataModel, ____avatarData) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarDataModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarDataModel*, "BeatSaber.BeatAvatarSDK", "AvatarDataModel");
