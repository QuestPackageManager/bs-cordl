#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarEditHistory)
namespace Menu::ViewControllers {
class EditAvatarHistorySnapshot;
}
namespace GlobalNamespace {
struct __EditAvatarViewController__AvatarEditPart;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class AvatarData;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarEditHistory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarEditHistory);
// Type: ::AvatarEditHistory
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5708))
// CS Name: ::AvatarEditHistory*
class CORDL_TYPE AvatarEditHistory : public ::System::Object {
public:
  // Declarations
  /// @brief Field disableNextSnapshotOverride, offset 0x10, size 0x1
  __declspec(property(get = __get_disableNextSnapshotOverride, put = __set_disableNextSnapshotOverride)) bool disableNextSnapshotOverride;

  /// @brief Field _snapShots, offset 0x18, size 0x8
  __declspec(property(get = __get__snapShots, put = __set__snapShots))::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>* _snapShots;

  /// @brief Field _currentDataId, offset 0x20, size 0x4
  __declspec(property(get = __get__currentDataId, put = __set__currentDataId)) int32_t _currentDataId;

  __declspec(property(get = get_undoAvailable)) bool undoAvailable;

  __declspec(property(get = get_redoAvailable)) bool redoAvailable;

  __declspec(property(get = get_currentSnapShot))::Menu::ViewControllers::EditAvatarHistorySnapshot* currentSnapShot;

  __declspec(property(get = get_lastEditedPart))::GlobalNamespace::__EditAvatarViewController__AvatarEditPart lastEditedPart;

  constexpr bool& __get_disableNextSnapshotOverride();

  constexpr bool const& __get_disableNextSnapshotOverride() const;

  constexpr void __set_disableNextSnapshotOverride(bool value);

  constexpr ::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>*& __get__snapShots();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>*> const& __get__snapShots() const;

  constexpr void __set__snapShots(::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>* value);

  constexpr int32_t& __get__currentDataId();

  constexpr int32_t const& __get__currentDataId() const;

  constexpr void __set__currentDataId(int32_t value);

  /// @brief Method get_undoAvailable addr 0x2167ae0 size 0x10 virtual false final false
  inline bool get_undoAvailable();

  /// @brief Method get_redoAvailable addr 0x2167af0 size 0x58 virtual false final false
  inline bool get_redoAvailable();

  /// @brief Method get_currentSnapShot addr 0x2167b48 size 0x54 virtual false final false
  inline ::Menu::ViewControllers::EditAvatarHistorySnapshot* get_currentSnapShot();

  /// @brief Method get_lastEditedPart addr 0x2167b9c size 0x1c virtual false final false
  inline ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart get_lastEditedPart();

  /// @brief Method Clear addr 0x2167bb8 size 0x6c virtual false final false
  inline void Clear();

  /// @brief Method Undo addr 0x2167c24 size 0x1c virtual false final false
  inline void Undo();

  /// @brief Method Redo addr 0x2167c40 size 0x68 virtual false final false
  inline void Redo();

  /// @brief Method UpdateEditHistory addr 0x2167ca8 size 0x1c4 virtual false final false
  inline void UpdateEditHistory(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarEditPart);

  static inline ::GlobalNamespace::AvatarEditHistory* New_ctor();

  /// @brief Method .ctor addr 0x2167e6c size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarEditHistory(AvatarEditHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarEditHistory(AvatarEditHistory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarEditHistory();

public:
  /// @brief Field disableNextSnapshotOverride, offset: 0x10, size: 0x1, def value: None
  bool ___disableNextSnapshotOverride;

  /// @brief Field _snapShots, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>* ____snapShots;

  /// @brief Field _currentDataId, offset: 0x20, size: 0x4, def value: None
  int32_t ____currentDataId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarEditHistory, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarEditHistory, ___disableNextSnapshotOverride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarEditHistory, ____snapShots) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarEditHistory, ____currentDataId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarEditHistory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarEditHistory*, "", "AvatarEditHistory");
