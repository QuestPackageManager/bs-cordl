#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarEditor/AvatarEditHistory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarEditHistory)
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
struct EditAvatarHistorySnapshot;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarEditHistory;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory);
// Dependencies System.Object
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarAdapter.AvatarEditor.AvatarEditHistory
class CORDL_TYPE AvatarEditHistory : public ::System::Object {
public:
  // Declarations
  /// @brief Field _currentDataId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__currentDataId, put = __cordl_internal_set__currentDataId)) int32_t _currentDataId;

  /// @brief Field _snapShots, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__snapShots,
                      put = __cordl_internal_set__snapShots)) ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>* _snapShots;

  __declspec(property(get = get_currentSnapShot)) ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot currentSnapShot;

  /// @brief Field disableNextSnapshotOverride, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disableNextSnapshotOverride, put = __cordl_internal_set_disableNextSnapshotOverride)) bool disableNextSnapshotOverride;

  __declspec(property(get = get_lastEditedPart)) ::BeatSaber::BeatAvatarSDK::AvatarPart lastEditedPart;

  __declspec(property(get = get_redoAvailable)) bool redoAvailable;

  __declspec(property(get = get_undoAvailable)) bool undoAvailable;

  /// @brief Method Clear, addr 0x2254254, size 0x6c, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* New_ctor();

  /// @brief Method Redo, addr 0x22542dc, size 0x68, virtual false, abstract: false, final false
  inline void Redo();

  /// @brief Method Undo, addr 0x22542c0, size 0x1c, virtual false, abstract: false, final false
  inline void Undo();

  /// @brief Method UpdateEditHistory, addr 0x2254344, size 0x1bc, virtual false, abstract: false, final false
  inline void UpdateEditHistory(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart);

  constexpr int32_t const& __cordl_internal_get__currentDataId() const;

  constexpr int32_t& __cordl_internal_get__currentDataId();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>* const& __cordl_internal_get__snapShots() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>*& __cordl_internal_get__snapShots();

  constexpr bool const& __cordl_internal_get_disableNextSnapshotOverride() const;

  constexpr bool& __cordl_internal_get_disableNextSnapshotOverride();

  constexpr void __cordl_internal_set__currentDataId(int32_t value);

  constexpr void __cordl_internal_set__snapShots(::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>* value);

  constexpr void __cordl_internal_set_disableNextSnapshotOverride(bool value);

  /// @brief Method .ctor, addr 0x225450c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentSnapShot, addr 0x22541f0, size 0x54, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot get_currentSnapShot();

  /// @brief Method get_lastEditedPart, addr 0x2254244, size 0x10, virtual false, abstract: false, final false
  inline ::BeatSaber::BeatAvatarSDK::AvatarPart get_lastEditedPart();

  /// @brief Method get_redoAvailable, addr 0x2254198, size 0x58, virtual false, abstract: false, final false
  inline bool get_redoAvailable();

  /// @brief Method get_undoAvailable, addr 0x2254188, size 0x10, virtual false, abstract: false, final false
  inline bool get_undoAvailable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarEditHistory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditHistory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarEditHistory(AvatarEditHistory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditHistory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarEditHistory(AvatarEditHistory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17708 };

  /// @brief Field disableNextSnapshotOverride, offset: 0x10, size: 0x1, def value: None
  bool ___disableNextSnapshotOverride;

  /// @brief Field _snapShots, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>* ____snapShots;

  /// @brief Field _currentDataId, offset: 0x20, size: 0x4, def value: None
  int32_t ____currentDataId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory, ___disableNextSnapshotOverride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory, ____snapShots) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory, ____currentDataId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory, 0x28>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "AvatarEditHistory");
