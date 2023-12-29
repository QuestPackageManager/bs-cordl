#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentSceneSetupData)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6103))
// CS Name: ::EnvironmentSceneSetupData*
class CORDL_TYPE EnvironmentSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field hideBranding, offset 0x10, size 0x1
  __declspec(property(get = __get_hideBranding, put = __set_hideBranding)) bool hideBranding;

  /// @brief Field environmentInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_environmentInfo, put = __set_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  /// @brief Field previewBeatmapLevel, offset 0x20, size 0x8
  __declspec(property(get = __get_previewBeatmapLevel, put = __set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  constexpr bool& __get_hideBranding();

  constexpr bool const& __get_hideBranding() const;

  constexpr void __set_hideBranding(bool value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get_environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get_environmentInfo() const;

  constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_previewBeatmapLevel() const;

  constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  static inline ::GlobalNamespace::EnvironmentSceneSetupData* New_ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                       bool hideBranding);

  /// @brief Method .ctor addr 0x21c8778 size 0x3c virtual false final false
  inline void _ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, bool hideBranding);

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentSceneSetupData(EnvironmentSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentSceneSetupData(EnvironmentSceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSceneSetupData();

public:
  /// @brief Field hideBranding, offset: 0x10, size: 0x1, def value: None
  bool ___hideBranding;

  /// @brief Field environmentInfo, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ___environmentInfo;

  /// @brief Field previewBeatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___previewBeatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSceneSetupData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___hideBranding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___environmentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSceneSetupData, ___previewBeatmapLevel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSceneSetupData*, "", "EnvironmentSceneSetupData");
