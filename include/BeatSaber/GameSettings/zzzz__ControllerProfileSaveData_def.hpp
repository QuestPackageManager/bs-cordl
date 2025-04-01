#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfileSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ControllerProfileSaveData)
namespace BeatSaber::GameSettings {
struct Controller;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class ControllerProfileSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::ControllerProfileSaveData);
// Dependencies BeatSaber.GameSettings.Controller, System.Object
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfileSaveData
class CORDL_TYPE ControllerProfileSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field alternativeHandling, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_alternativeHandling, put = __cordl_internal_set_alternativeHandling)) bool alternativeHandling;

  /// @brief Field leftController, offset 0x14, size 0x18
  __declspec(property(get = __cordl_internal_get_leftController, put = __cordl_internal_set_leftController)) ::BeatSaber::GameSettings::Controller leftController;

  /// @brief Field rightController, offset 0x2c, size 0x18
  __declspec(property(get = __cordl_internal_get_rightController, put = __cordl_internal_set_rightController)) ::BeatSaber::GameSettings::Controller rightController;

  static inline ::BeatSaber::GameSettings::ControllerProfileSaveData* New_ctor(bool alternativeHandling, ::BeatSaber::GameSettings::Controller leftController,
                                                                               ::BeatSaber::GameSettings::Controller rightController);

  constexpr bool const& __cordl_internal_get_alternativeHandling() const;

  constexpr bool& __cordl_internal_get_alternativeHandling();

  constexpr ::BeatSaber::GameSettings::Controller const& __cordl_internal_get_leftController() const;

  constexpr ::BeatSaber::GameSettings::Controller& __cordl_internal_get_leftController();

  constexpr ::BeatSaber::GameSettings::Controller const& __cordl_internal_get_rightController() const;

  constexpr ::BeatSaber::GameSettings::Controller& __cordl_internal_get_rightController();

  constexpr void __cordl_internal_set_alternativeHandling(bool value);

  constexpr void __cordl_internal_set_leftController(::BeatSaber::GameSettings::Controller value);

  constexpr void __cordl_internal_set_rightController(::BeatSaber::GameSettings::Controller value);

  /// @brief Method .ctor, addr 0x226c3f8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(bool alternativeHandling, ::BeatSaber::GameSettings::Controller leftController, ::BeatSaber::GameSettings::Controller rightController);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfileSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfileSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfileSaveData(ControllerProfileSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfileSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfileSaveData(ControllerProfileSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18096 };

  /// @brief Field alternativeHandling, offset: 0x10, size: 0x1, def value: None
  bool ___alternativeHandling;

  /// @brief Field leftController, offset: 0x14, size: 0x18, def value: None
  ::BeatSaber::GameSettings::Controller ___leftController;

  /// @brief Field rightController, offset: 0x2c, size: 0x18, def value: None
  ::BeatSaber::GameSettings::Controller ___rightController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileSaveData, ___alternativeHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileSaveData, ___leftController) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfileSaveData, ___rightController) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfileSaveData, 0x48>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::ControllerProfileSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfileSaveData*, "BeatSaber.GameSettings", "ControllerProfileSaveData");
