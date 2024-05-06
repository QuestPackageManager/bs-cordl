#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_def.hpp"
CORDL_MODULE_EXPORT(VRControllersValueSettingsOffsets)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllersValueSettingsOffsets;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRControllersValueSettingsOffsets);
// Type: ::VRControllersValueSettingsOffsets
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersValueSettingsOffsets*
class CORDL_TYPE VRControllersValueSettingsOffsets : public ::GlobalNamespace::VRControllerTransformOffset {
public:
  // Declarations
  /// @brief Field _mainSettingsHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  __declspec(property(get = get_positionOffset))::UnityEngine::Vector3 positionOffset;

  __declspec(property(get = get_rotationOffset))::UnityEngine::Vector3 rotationOffset;

  static inline ::GlobalNamespace::VRControllersValueSettingsOffsets* New_ctor();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  /// @brief Method .ctor, addr 0x14f0a94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_positionOffset, addr 0x14f09c4, size 0x68, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_positionOffset();

  /// @brief Method get_rotationOffset, addr 0x14f0a2c, size 0x68, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rotationOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllersValueSettingsOffsets();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSettingsOffsets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRControllersValueSettingsOffsets(VRControllersValueSettingsOffsets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSettingsOffsets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRControllersValueSettingsOffsets(VRControllersValueSettingsOffsets const&) = delete;

  /// @brief Field _mainSettingsHandler, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllersValueSettingsOffsets, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersValueSettingsOffsets, ____mainSettingsHandler) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRControllersValueSettingsOffsets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersValueSettingsOffsets*, "", "VRControllersValueSettingsOffsets");
