#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneSettingsApplicatorSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
CORDL_MODULE_EXPORT(StandaloneSettingsApplicatorSO)
namespace BeatSaber::Settings {
struct WindowSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneSettingsApplicatorSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StandaloneSettingsApplicatorSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StandaloneSettingsApplicatorSO*, "", "StandaloneSettingsApplicatorSO");
// Dependencies SettingsApplicatorSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandaloneSettingsApplicatorSO
class CORDL_TYPE StandaloneSettingsApplicatorSO : public ::GlobalNamespace::SettingsApplicatorSO {
public:
  // Declarations
  /// @brief Method ApplyWindowSettings, addr 0x5900290, size 0x15c, virtual true, abstract: false, final false
  inline void ApplyWindowSettings(::by_ref<::BeatSaber::Settings::WindowSettings> settings);

  static inline ::GlobalNamespace::StandaloneSettingsApplicatorSO* New_ctor();

  /// @brief Method .ctor, addr 0x59003ec, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StandaloneSettingsApplicatorSO) == 0x68, "Size mismatch!");

} // namespace GlobalNamespace
