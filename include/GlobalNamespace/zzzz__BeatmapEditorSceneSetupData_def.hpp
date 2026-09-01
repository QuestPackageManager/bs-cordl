#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapEditorSceneSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorSceneSetupData)
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorSceneSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapEditorSceneSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapEditorSceneSetupData*, "", "BeatmapEditorSceneSetupData");
// Dependencies BeatmapCharacteristic, BeatmapDifficulty, SceneSetupData, System.Nullable`1<T>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEditorSceneSetupData
class CORDL_TYPE BeatmapEditorSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field goStraightToEditor, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_goStraightToEditor, put = __cordl_internal_set_goStraightToEditor)) bool goStraightToEditor;

  /// @brief Field ignoreTempFolder, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreTempFolder, put = __cordl_internal_set_ignoreTempFolder)) bool ignoreTempFolder;

  /// @brief Field projectPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_projectPath, put = __cordl_internal_set_projectPath)) ::StringW projectPath;

  /// @brief Field startLevel, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_startLevel,
                      put = __cordl_internal_set_startLevel)) ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>
      startLevel;

  static inline ::GlobalNamespace::BeatmapEditorSceneSetupData*
  New_ctor(bool goStraightToEditor, ::StringW projectPath, bool ignoreTempFolder,
           ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel);

  constexpr bool const& __cordl_internal_get_goStraightToEditor() const;

  constexpr bool& __cordl_internal_get_goStraightToEditor();

  constexpr bool const& __cordl_internal_get_ignoreTempFolder() const;

  constexpr bool& __cordl_internal_get_ignoreTempFolder();

  constexpr ::StringW const& __cordl_internal_get_projectPath() const;

  constexpr ::StringW& __cordl_internal_get_projectPath();

  constexpr ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> const& __cordl_internal_get_startLevel() const;

  constexpr ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>& __cordl_internal_get_startLevel();

  constexpr void __cordl_internal_set_goStraightToEditor(bool value);

  constexpr void __cordl_internal_set_ignoreTempFolder(bool value);

  constexpr void __cordl_internal_set_projectPath(::StringW value);

  constexpr void __cordl_internal_set_startLevel(::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> value);

  /// @brief Method .ctor, addr 0x590cde8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool goStraightToEditor, ::StringW projectPath, bool ignoreTempFolder,
                    ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorSceneSetupData(BeatmapEditorSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorSceneSetupData(BeatmapEditorSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6719 };

  /// @brief Field goStraightToEditor, offset: 0x10, size: 0x1, def value: None
  bool ___goStraightToEditor;

  /// @brief Field projectPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___projectPath;

  /// @brief Field ignoreTempFolder, offset: 0x20, size: 0x1, def value: None
  bool ___ignoreTempFolder;

  /// @brief Field startLevel, offset: 0x24, size: 0xc, def value: None
  ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> ___startLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorSceneSetupData, ___goStraightToEditor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorSceneSetupData, ___projectPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorSceneSetupData, ___ignoreTempFolder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorSceneSetupData, ___startLevel) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapEditorSceneSetupData) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
