#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorGameplaySceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorGameplaySceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorGameplaySceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData);
// Type: ::BeatmapEditorGameplaySceneSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapEditorGameplaySceneSetupData*
class CORDL_TYPE BeatmapEditorGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field playVRMovement, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_playVRMovement, put = __cordl_internal_set_playVRMovement)) bool playVRMovement;

  /// @brief Field recordVRMovement, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_recordVRMovement, put = __cordl_internal_set_recordVRMovement)) bool recordVRMovement;

  /// @brief Field useFirstPersonFlyingController, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useFirstPersonFlyingController, put = __cordl_internal_set_useFirstPersonFlyingController)) bool useFirstPersonFlyingController;

  static inline ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData* New_ctor(bool useFirstPersonFlyingController, bool recordVRMovement, bool playVRMovement);

  constexpr bool const& __cordl_internal_get_playVRMovement() const;

  constexpr bool& __cordl_internal_get_playVRMovement();

  constexpr bool const& __cordl_internal_get_recordVRMovement() const;

  constexpr bool& __cordl_internal_get_recordVRMovement();

  constexpr bool const& __cordl_internal_get_useFirstPersonFlyingController() const;

  constexpr bool& __cordl_internal_get_useFirstPersonFlyingController();

  constexpr void __cordl_internal_set_playVRMovement(bool value);

  constexpr void __cordl_internal_set_recordVRMovement(bool value);

  constexpr void __cordl_internal_set_useFirstPersonFlyingController(bool value);

  /// @brief Method .ctor, addr 0x26a1954, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool useFirstPersonFlyingController, bool recordVRMovement, bool playVRMovement);

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

  /// @brief Field useFirstPersonFlyingController, offset: 0x10, size: 0x1, def value: None
  bool ___useFirstPersonFlyingController;

  /// @brief Field recordVRMovement, offset: 0x11, size: 0x1, def value: None
  bool ___recordVRMovement;

  /// @brief Field playVRMovement, offset: 0x12, size: 0x1, def value: None
  bool ___playVRMovement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData, ___useFirstPersonFlyingController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData, ___recordVRMovement) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData, ___playVRMovement) == 0x12, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*, "", "BeatmapEditorGameplaySceneSetupData");
