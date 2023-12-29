#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EditAvatarHistorySnapshot)
namespace GlobalNamespace {
struct __EditAvatarViewController__AvatarEditPart;
}
namespace GlobalNamespace {
class AvatarData;
}
// Forward declare root types
namespace Menu::ViewControllers {
class EditAvatarHistorySnapshot;
}
// Write type traits
MARK_REF_PTR_T(::Menu::ViewControllers::EditAvatarHistorySnapshot);
// Type: Menu.ViewControllers::EditAvatarHistorySnapshot
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Menu::ViewControllers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5718)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6147))
// CS Name: ::Menu.ViewControllers::EditAvatarHistorySnapshot*
class CORDL_TYPE EditAvatarHistorySnapshot : public ::System::Object {
public:
  // Declarations
  /// @brief Field <avatarEditPart>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__avatarEditPart_k__BackingField,
                      put = __set__avatarEditPart_k__BackingField))::GlobalNamespace::__EditAvatarViewController__AvatarEditPart _avatarEditPart_k__BackingField;

  /// @brief Field <avatarData>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarData_k__BackingField, put = __set__avatarData_k__BackingField))::GlobalNamespace::AvatarData* _avatarData_k__BackingField;

  __declspec(property(get = get_avatarEditPart))::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart;

  __declspec(property(get = get_avatarData))::GlobalNamespace::AvatarData* avatarData;

  constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart& __get__avatarEditPart_k__BackingField();

  constexpr ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart const& __get__avatarEditPart_k__BackingField() const;

  constexpr void __set__avatarEditPart_k__BackingField(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart value);

  constexpr ::GlobalNamespace::AvatarData*& __get__avatarData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarData*> const& __get__avatarData_k__BackingField() const;

  constexpr void __set__avatarData_k__BackingField(::GlobalNamespace::AvatarData* value);

  /// @brief Method get_avatarEditPart addr 0x21e6320 size 0x8 virtual false final false
  inline ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart get_avatarEditPart();

  /// @brief Method get_avatarData addr 0x21e6328 size 0x8 virtual false final false
  inline ::GlobalNamespace::AvatarData* get_avatarData();

  static inline ::Menu::ViewControllers::EditAvatarHistorySnapshot* New_ctor(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart);

  /// @brief Method .ctor addr 0x21e6330 size 0x30 virtual false final false
  inline void _ctor(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart);

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarHistorySnapshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditAvatarHistorySnapshot(EditAvatarHistorySnapshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarHistorySnapshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditAvatarHistorySnapshot(EditAvatarHistorySnapshot const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarHistorySnapshot();

public:
  /// @brief Field <avatarEditPart>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart ____avatarEditPart_k__BackingField;

  /// @brief Field <avatarData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarData* ____avatarData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Menu::ViewControllers::EditAvatarHistorySnapshot, 0x20>, "Size mismatch!");

static_assert(offsetof(::Menu::ViewControllers::EditAvatarHistorySnapshot, ____avatarEditPart_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Menu::ViewControllers::EditAvatarHistorySnapshot, ____avatarData_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Menu::ViewControllers
NEED_NO_BOX(::Menu::ViewControllers::EditAvatarHistorySnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Menu::ViewControllers::EditAvatarHistorySnapshot*, "Menu.ViewControllers", "EditAvatarHistorySnapshot");