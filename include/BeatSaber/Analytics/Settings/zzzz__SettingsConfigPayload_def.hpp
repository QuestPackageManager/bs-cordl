#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsConfigPayload.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsConfigPayload)
namespace BeatSaber::Analytics::Settings {
class SettingsConfigPayload_ColorsPayload;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::Analytics::Settings {
class SettingsConfigPayload;
}
namespace BeatSaber::Analytics::Settings {
class SettingsConfigPayload_ColorsPayload;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsConfigPayload*);
MARK_REF_T(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsConfigPayload*, "BeatSaber.Analytics.Settings", "SettingsConfigPayload");
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload*, "BeatSaber.Analytics.Settings", "SettingsConfigPayload/ColorsPayload");
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsConfigPayload/ColorsPayload
class CORDL_TYPE SettingsConfigPayload_ColorsPayload : public ::System::Object {
public:
  // Declarations
  /// @brief Field env0, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_env0, put = __cordl_internal_set_env0)) ::StringW env0;

  /// @brief Field env0Boost, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_env0Boost, put = __cordl_internal_set_env0Boost)) ::StringW env0Boost;

  /// @brief Field env1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_env1, put = __cordl_internal_set_env1)) ::StringW env1;

  /// @brief Field env1Boost, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_env1Boost, put = __cordl_internal_set_env1Boost)) ::StringW env1Boost;

  /// @brief Field envW, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_envW, put = __cordl_internal_set_envW)) ::StringW envW;

  /// @brief Field obstacle, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacle, put = __cordl_internal_set_obstacle)) ::StringW obstacle;

  /// @brief Field overrideType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideType, put = __cordl_internal_set_overrideType)) ::StringW overrideType;

  /// @brief Field saberA, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_saberA, put = __cordl_internal_set_saberA)) ::StringW saberA;

  /// @brief Field saberB, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_saberB, put = __cordl_internal_set_saberB)) ::StringW saberB;

  /// @brief Field schemeId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_schemeId, put = __cordl_internal_set_schemeId)) ::StringW schemeId;

  static inline ::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_env0() const;

  constexpr ::StringW& __cordl_internal_get_env0();

  constexpr ::StringW const& __cordl_internal_get_env0Boost() const;

  constexpr ::StringW& __cordl_internal_get_env0Boost();

  constexpr ::StringW const& __cordl_internal_get_env1() const;

  constexpr ::StringW& __cordl_internal_get_env1();

  constexpr ::StringW const& __cordl_internal_get_env1Boost() const;

  constexpr ::StringW& __cordl_internal_get_env1Boost();

  constexpr ::StringW const& __cordl_internal_get_envW() const;

  constexpr ::StringW& __cordl_internal_get_envW();

  constexpr ::StringW const& __cordl_internal_get_obstacle() const;

  constexpr ::StringW& __cordl_internal_get_obstacle();

  constexpr ::StringW const& __cordl_internal_get_overrideType() const;

  constexpr ::StringW& __cordl_internal_get_overrideType();

  constexpr ::StringW const& __cordl_internal_get_saberA() const;

  constexpr ::StringW& __cordl_internal_get_saberA();

  constexpr ::StringW const& __cordl_internal_get_saberB() const;

  constexpr ::StringW& __cordl_internal_get_saberB();

  constexpr ::StringW const& __cordl_internal_get_schemeId() const;

  constexpr ::StringW& __cordl_internal_get_schemeId();

  constexpr void __cordl_internal_set_env0(::StringW value);

  constexpr void __cordl_internal_set_env0Boost(::StringW value);

  constexpr void __cordl_internal_set_env1(::StringW value);

  constexpr void __cordl_internal_set_env1Boost(::StringW value);

  constexpr void __cordl_internal_set_envW(::StringW value);

  constexpr void __cordl_internal_set_obstacle(::StringW value);

  constexpr void __cordl_internal_set_overrideType(::StringW value);

  constexpr void __cordl_internal_set_saberA(::StringW value);

  constexpr void __cordl_internal_set_saberB(::StringW value);

  constexpr void __cordl_internal_set_schemeId(::StringW value);

  /// @brief Method .ctor, addr 0x350b7fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsConfigPayload_ColorsPayload();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsConfigPayload_ColorsPayload", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsConfigPayload_ColorsPayload(SettingsConfigPayload_ColorsPayload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsConfigPayload_ColorsPayload", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsConfigPayload_ColorsPayload(SettingsConfigPayload_ColorsPayload const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22776 };

  /// @brief Field overrideType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___overrideType;

  /// @brief Field schemeId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___schemeId;

  /// @brief Field saberA, offset: 0x20, size: 0x8, def value: None
  ::StringW ___saberA;

  /// @brief Field saberB, offset: 0x28, size: 0x8, def value: None
  ::StringW ___saberB;

  /// @brief Field env0, offset: 0x30, size: 0x8, def value: None
  ::StringW ___env0;

  /// @brief Field env1, offset: 0x38, size: 0x8, def value: None
  ::StringW ___env1;

  /// @brief Field envW, offset: 0x40, size: 0x8, def value: None
  ::StringW ___envW;

  /// @brief Field env0Boost, offset: 0x48, size: 0x8, def value: None
  ::StringW ___env0Boost;

  /// @brief Field env1Boost, offset: 0x50, size: 0x8, def value: None
  ::StringW ___env1Boost;

  /// @brief Field obstacle, offset: 0x58, size: 0x8, def value: None
  ::StringW ___obstacle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___overrideType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___schemeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___saberA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___saberB) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___env0) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___env1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___envW) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___env0Boost) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___env1Boost) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload, ___obstacle) == 0x58, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload) == 0x60, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
// Dependencies System.Object
namespace BeatSaber::Analytics::Settings {
// Is value type: false
// CS Name: BeatSaber.Analytics.Settings.SettingsConfigPayload
class CORDL_TYPE SettingsConfigPayload : public ::System::Object {
public:
  // Declarations
  using ColorsPayload = ::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload;

  /// @brief Method BuildColors, addr 0x350ac60, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW BuildColors(::GlobalNamespace::ColorSchemesSettings* colors);

  /// @brief Method BuildColorsPayload, addr 0x350b418, size 0x194, virtual false, abstract: false, final false
  static inline ::BeatSaber::Analytics::Settings::SettingsConfigPayload_ColorsPayload* BuildColorsPayload(::GlobalNamespace::ColorSchemesSettings* colors);

  /// @brief Method BuildEnvironments, addr 0x350ade8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW BuildEnvironments(::GlobalNamespace::OverrideEnvironmentSettings* environments);

  /// @brief Method BuildEnvironmentsPayload, addr 0x350b5ac, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* BuildEnvironmentsPayload(::GlobalNamespace::OverrideEnvironmentSettings* environments);

  /// @brief Method Hex, addr 0x350b800, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW Hex(::UnityEngine::Color color);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsConfigPayload();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsConfigPayload", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsConfigPayload(SettingsConfigPayload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsConfigPayload", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsConfigPayload(SettingsConfigPayload const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22777 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Analytics::Settings::SettingsConfigPayload) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Analytics::Settings
