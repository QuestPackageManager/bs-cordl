#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorGameplaySceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorGameplaySceneSetupData)
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorGameplaySceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData);
// Dependencies BeatmapEditorStartTestLevelData, SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEditorGameplaySceneSetupData
class CORDL_TYPE BeatmapEditorGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::GlobalNamespace::BeatmapEditorStartTestLevelData data;

  /// @brief Field playVRMovement, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_playVRMovement, put = __cordl_internal_set_playVRMovement)) bool playVRMovement;

  /// @brief Field recordVRMovement, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_recordVRMovement, put = __cordl_internal_set_recordVRMovement)) bool recordVRMovement;

  static inline ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData* New_ctor(bool recordVRMovement, bool playVRMovement, ::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData> data);

  constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData const& __cordl_internal_get_data() const;

  constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData& __cordl_internal_get_data();

  constexpr bool const& __cordl_internal_get_playVRMovement() const;

  constexpr bool& __cordl_internal_get_playVRMovement();

  constexpr bool const& __cordl_internal_get_recordVRMovement() const;

  constexpr bool& __cordl_internal_get_recordVRMovement();

  constexpr void __cordl_internal_set_data(::GlobalNamespace::BeatmapEditorStartTestLevelData value);

  constexpr void __cordl_internal_set_playVRMovement(bool value);

  constexpr void __cordl_internal_set_recordVRMovement(bool value);

  /// @brief Method .ctor, addr 0x3b39f34, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(bool recordVRMovement, bool playVRMovement, ::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData> data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorGameplaySceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorGameplaySceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorGameplaySceneSetupData(BeatmapEditorGameplaySceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorGameplaySceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorGameplaySceneSetupData(BeatmapEditorGameplaySceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5236 };

  /// @brief Field data, offset: 0x10, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapEditorStartTestLevelData ___data;

  /// @brief Field recordVRMovement, offset: 0x30, size: 0x1, def value: None
  bool ___recordVRMovement;

  /// @brief Field playVRMovement, offset: 0x31, size: 0x1, def value: None
  bool ___playVRMovement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData, ___recordVRMovement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData, ___playVRMovement) == 0x31, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*, "", "BeatmapEditorGameplaySceneSetupData");
