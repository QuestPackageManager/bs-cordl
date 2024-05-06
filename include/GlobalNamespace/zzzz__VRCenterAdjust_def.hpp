#pragma once
// IWYU pragma private; include "GlobalNamespace/VRCenterAdjust.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRCenterAdjust)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class VRCenterAdjust;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRCenterAdjust);
// Type: ::VRCenterAdjust
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRCenterAdjust*
class CORDL_TYPE VRCenterAdjust : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSettingsHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Method Awake, addr 0x269b1a8, size 0xc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleRoomCenterDidChange, addr 0x269b6ac, size 0x80, virtual false, abstract: false, final false
  inline void HandleRoomCenterDidChange();

  /// @brief Method HandleRoomRotationDidChange, addr 0x269b72c, size 0x84, virtual false, abstract: false, final false
  inline void HandleRoomRotationDidChange();

  static inline ::GlobalNamespace::VRCenterAdjust* New_ctor();

  /// @brief Method OnDisable, addr 0x269b52c, size 0x180, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x269b3ac, size 0x180, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResetRoom, addr 0x269b2fc, size 0xb0, virtual false, abstract: false, final false
  inline void ResetRoom();

  /// @brief Method Start, addr 0x269b1b4, size 0x148, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x269b7b0, size 0x2c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  /// @brief Method .ctor, addr 0x269b7dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRCenterAdjust();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRCenterAdjust", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRCenterAdjust(VRCenterAdjust&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRCenterAdjust", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRCenterAdjust(VRCenterAdjust const&) = delete;

  /// @brief Field _mainSettingsHandler, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRCenterAdjust, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____mainSettingsHandler) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRCenterAdjust);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRCenterAdjust*, "", "VRCenterAdjust");
