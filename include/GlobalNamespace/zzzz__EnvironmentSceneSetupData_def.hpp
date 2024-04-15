#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentSceneSetupData)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentSceneSetupData);
// Type: ::EnvironmentSceneSetupData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentSceneSetupData*
class CORDL_TYPE EnvironmentSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field beatmapLevel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field environmentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentInfo, put = __cordl_internal_set_environmentInfo))::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo;

  /// @brief Field hideBranding, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_hideBranding, put = __cordl_internal_set_hideBranding)) bool hideBranding;

  static inline ::GlobalNamespace::EnvironmentSceneSetupData* New_ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hideBranding);

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get_environmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get_environmentInfo();

  constexpr bool const& __cordl_internal_get_hideBranding() const;

  constexpr bool& __cordl_internal_get_hideBranding();

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set_hideBranding(bool value);

  /// @brief Method .ctor, addr 0x25a78ec, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool hideBranding);

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

  /// @brief Field hideBranding, offset: 0x10, size: 0x1, def value: None
  bool ___hideBranding;

  /// @brief Field environmentInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ___environmentInfo;

  /// @brief Field beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSceneSetupData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___hideBranding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___environmentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___beatmapLevel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSceneSetupData*, "", "EnvironmentSceneSetupData");
