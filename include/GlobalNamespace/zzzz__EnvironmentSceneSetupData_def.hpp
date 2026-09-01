#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentSceneSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnvironmentSceneSetupData)
namespace GlobalNamespace {
class BeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnvironmentSceneSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentSceneSetupData*, "", "EnvironmentSceneSetupData");
// Dependencies SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentSceneSetupData
class CORDL_TYPE EnvironmentSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field beatmapLevel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field environmentSerializedName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentSerializedName, put = __cordl_internal_set_environmentSerializedName)) ::StringW environmentSerializedName;

  /// @brief Field hideBranding, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_hideBranding, put = __cordl_internal_set_hideBranding)) bool hideBranding;

  static inline ::GlobalNamespace::EnvironmentSceneSetupData* New_ctor(::StringW environmentSerializedName, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hideBranding);

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::StringW const& __cordl_internal_get_environmentSerializedName() const;

  constexpr ::StringW& __cordl_internal_get_environmentSerializedName();

  constexpr bool const& __cordl_internal_get_hideBranding() const;

  constexpr bool& __cordl_internal_get_hideBranding();

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_environmentSerializedName(::StringW value);

  constexpr void __cordl_internal_set_hideBranding(bool value);

  /// @brief Method .ctor, addr 0x590ce00, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW environmentSerializedName, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hideBranding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentSceneSetupData(EnvironmentSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentSceneSetupData(EnvironmentSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6720 };

  /// @brief Field hideBranding, offset: 0x10, size: 0x1, def value: None
  bool ___hideBranding;

  /// @brief Field environmentSerializedName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___environmentSerializedName;

  /// @brief Field beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___hideBranding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___environmentSerializedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnvironmentSceneSetupData) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
