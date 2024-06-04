#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneSettingsApplicatorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
CORDL_MODULE_EXPORT(StandaloneSettingsApplicatorSO)
namespace BeatSaber::GameSettings {
struct WindowMode;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneSettingsApplicatorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandaloneSettingsApplicatorSO);
// Type: ::StandaloneSettingsApplicatorSO
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandaloneSettingsApplicatorSO*
class CORDL_TYPE StandaloneSettingsApplicatorSO : public ::GlobalNamespace::SettingsApplicatorSO {
public:
  // Declarations
  /// @brief Method ApplyWindowSettings, addr 0x26b012c, size 0x60, virtual true, abstract: false, final false
  inline void ApplyWindowSettings(::UnityEngine::Vector2Int resolution, ::BeatSaber::GameSettings::WindowMode windowMode);

  static inline ::GlobalNamespace::StandaloneSettingsApplicatorSO* New_ctor();

  /// @brief Method .ctor, addr 0x26b018c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneSettingsApplicatorSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandaloneSettingsApplicatorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneSettingsApplicatorSO(StandaloneSettingsApplicatorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneSettingsApplicatorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneSettingsApplicatorSO(StandaloneSettingsApplicatorSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneSettingsApplicatorSO, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandaloneSettingsApplicatorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneSettingsApplicatorSO*, "", "StandaloneSettingsApplicatorSO");
