#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerProfile)
namespace BeatSaber::GameSettings {
class ControllerProfileSaveData;
}
namespace BeatSaber::GameSettings {
struct Controller;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class ControllerProfile;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::ControllerProfile);
// Dependencies BeatSaber.GameSettings.Controller, System.Object
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfile
class CORDL_TYPE ControllerProfile : public ::System::Object {
public:
  // Declarations
  /// @brief Field <alternativeHandling>k__BackingField, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get__alternativeHandling_k__BackingField, put = __cordl_internal_set__alternativeHandling_k__BackingField)) bool _alternativeHandling_k__BackingField;

  /// @brief Field <leftController>k__BackingField, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get__leftController_k__BackingField,
                      put = __cordl_internal_set__leftController_k__BackingField)) ::BeatSaber::GameSettings::Controller _leftController_k__BackingField;

  /// @brief Field <rightController>k__BackingField, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get__rightController_k__BackingField,
                      put = __cordl_internal_set__rightController_k__BackingField)) ::BeatSaber::GameSettings::Controller _rightController_k__BackingField;

  /// @brief Field _vrPlatformHelper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_alternativeHandling, put = set_alternativeHandling)) bool alternativeHandling;

  /// @brief Field index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  __declspec(property(get = get_leftController, put = set_leftController)) ::BeatSaber::GameSettings::Controller leftController;

  /// @brief Field localizationKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localizationKey, put = __cordl_internal_set_localizationKey)) ::StringW localizationKey;

  /// @brief Field modifiable, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_modifiable, put = __cordl_internal_set_modifiable)) bool modifiable;

  __declspec(property(get = get_rightController, put = set_rightController)) ::BeatSaber::GameSettings::Controller rightController;

  /// @brief Method Activate, addr 0x226fd84, size 0x8, virtual false, abstract: false, final false
  inline void Activate(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method CopyFromLeftToRight, addr 0x226fd8c, size 0x14, virtual false, abstract: false, final false
  inline void CopyFromLeftToRight();

  /// @brief Method CopyFromOtherControllerProfile, addr 0x226fe60, size 0x3c, virtual false, abstract: false, final false
  inline void CopyFromOtherControllerProfile(::BeatSaber::GameSettings::ControllerProfile* other);

  /// @brief Method CopyFromRightToLeft, addr 0x226fe4c, size 0x14, virtual false, abstract: false, final false
  inline void CopyFromRightToLeft();

  /// @brief Method Deactivate, addr 0x226ea64, size 0x8, virtual false, abstract: false, final false
  inline void Deactivate();

  /// @brief Method FromSaveData, addr 0x226fb7c, size 0xe4, virtual false, abstract: false, final false
  static inline ::BeatSaber::GameSettings::ControllerProfile* FromSaveData(::BeatSaber::GameSettings::ControllerProfileSaveData* controllerProfileSaveData, int32_t index);

  /// @brief Method HasDefaultValues, addr 0x226fc60, size 0x58, virtual false, abstract: false, final false
  inline bool HasDefaultValues();

  static inline ::BeatSaber::GameSettings::ControllerProfile* New_ctor(::StringW localizationKey, int32_t index, bool modifiable, bool alternativeHandling,
                                                                       ::BeatSaber::GameSettings::Controller leftController, ::BeatSaber::GameSettings::Controller rightController);

  /// @brief Method RefreshControllers, addr 0x226fda0, size 0xac, virtual false, abstract: false, final false
  inline void RefreshControllers();

  /// @brief Method SetRotateThanMove, addr 0x226fe9c, size 0xc, virtual false, abstract: false, final false
  inline void SetRotateThanMove(bool value);

  /// @brief Method ToSaveData, addr 0x226f26c, size 0xa8, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::ControllerProfileSaveData* ToSaveData();

  /// @brief Method UpdateControllerPosition, addr 0x226ffd0, size 0x84, virtual false, abstract: false, final false
  inline void UpdateControllerPosition(bool isLeft, ::UnityEngine::Vector3 value);

  /// @brief Method UpdateControllerRotation, addr 0x2270054, size 0x20, virtual false, abstract: false, final false
  inline void UpdateControllerRotation(bool isLeft, ::UnityEngine::Vector3 value);

  constexpr bool const& __cordl_internal_get__alternativeHandling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__alternativeHandling_k__BackingField();

  constexpr ::BeatSaber::GameSettings::Controller const& __cordl_internal_get__leftController_k__BackingField() const;

  constexpr ::BeatSaber::GameSettings::Controller& __cordl_internal_get__leftController_k__BackingField();

  constexpr ::BeatSaber::GameSettings::Controller const& __cordl_internal_get__rightController_k__BackingField() const;

  constexpr ::BeatSaber::GameSettings::Controller& __cordl_internal_get__rightController_k__BackingField();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::StringW const& __cordl_internal_get_localizationKey() const;

  constexpr ::StringW& __cordl_internal_get_localizationKey();

  constexpr bool const& __cordl_internal_get_modifiable() const;

  constexpr bool& __cordl_internal_get_modifiable();

  constexpr void __cordl_internal_set__alternativeHandling_k__BackingField(bool value);

  constexpr void __cordl_internal_set__leftController_k__BackingField(::BeatSaber::GameSettings::Controller value);

  constexpr void __cordl_internal_set__rightController_k__BackingField(::BeatSaber::GameSettings::Controller value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_localizationKey(::StringW value);

  constexpr void __cordl_internal_set_modifiable(bool value);

  /// @brief Method .ctor, addr 0x226f028, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW localizationKey, int32_t index, bool modifiable, bool alternativeHandling, ::BeatSaber::GameSettings::Controller leftController,
                    ::BeatSaber::GameSettings::Controller rightController);

  /// @brief Method get_alternativeHandling, addr 0x226fd20, size 0x8, virtual false, abstract: false, final false
  inline bool get_alternativeHandling();

  /// @brief Method get_leftController, addr 0x226fd34, size 0x14, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::Controller get_leftController();

  /// @brief Method get_rightController, addr 0x226fd5c, size 0x14, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::Controller get_rightController();

  /// @brief Method set_alternativeHandling, addr 0x226fd28, size 0xc, virtual false, abstract: false, final false
  inline void set_alternativeHandling(bool value);

  /// @brief Method set_leftController, addr 0x226fd48, size 0x14, virtual false, abstract: false, final false
  inline void set_leftController(::BeatSaber::GameSettings::Controller value);

  /// @brief Method set_rightController, addr 0x226fd70, size 0x14, virtual false, abstract: false, final false
  inline void set_rightController(::BeatSaber::GameSettings::Controller value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfile(ControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfile(ControllerProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18095 };

  /// @brief Field localizationKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localizationKey;

  /// @brief Field index, offset: 0x18, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field modifiable, offset: 0x1c, size: 0x1, def value: None
  bool ___modifiable;

  /// @brief Field <alternativeHandling>k__BackingField, offset: 0x1d, size: 0x1, def value: None
  bool ____alternativeHandling_k__BackingField;

  /// @brief Field <leftController>k__BackingField, offset: 0x20, size: 0x18, def value: None
  ::BeatSaber::GameSettings::Controller ____leftController_k__BackingField;

  /// @brief Field <rightController>k__BackingField, offset: 0x38, size: 0x18, def value: None
  ::BeatSaber::GameSettings::Controller ____rightController_k__BackingField;

  /// @brief Field _vrPlatformHelper, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfile, ___localizationKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfile, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfile, ___modifiable) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfile, ____alternativeHandling_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfile, ____leftController_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfile, ____rightController_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfile, ____vrPlatformHelper) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfile, 0x58>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::ControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfile*, "BeatSaber.GameSettings", "ControllerProfile");
