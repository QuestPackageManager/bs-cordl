#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentInfoSO)
namespace BeatmapSaveDataVersion3 {
class BeatmapLightshowSaveData;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace GlobalNamespace {
class EnvironmentSizeData;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentInfoSO);
// Type: ::EnvironmentInfoSO
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4170))
// CS Name: ::EnvironmentInfoSO*
class CORDL_TYPE EnvironmentInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _environmentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentName, put = __cordl_internal_set__environmentName))::StringW _environmentName;

  /// @brief Field _colorScheme, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> _colorScheme;

  /// @brief Field _sceneInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneInfo, put = __cordl_internal_set__sceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _sceneInfo;

  /// @brief Field _serializedName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedName, put = __cordl_internal_set__serializedName))::StringW _serializedName;

  /// @brief Field _environmentAssetDirectory, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentAssetDirectory, put = __cordl_internal_set__environmentAssetDirectory))::StringW _environmentAssetDirectory;

  /// @brief Field _environmentType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentType, put = __cordl_internal_set__environmentType))::UnityW<::GlobalNamespace::EnvironmentTypeSO> _environmentType;

  /// @brief Field _environmentSizeData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentSizeData, put = __cordl_internal_set__environmentSizeData))::GlobalNamespace::EnvironmentSizeData* _environmentSizeData;

  /// @brief Field _environmentIntensityReductionOptions, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentIntensityReductionOptions,
                      put = __cordl_internal_set__environmentIntensityReductionOptions))::GlobalNamespace::EnvironmentIntensityReductionOptions* _environmentIntensityReductionOptions;

  /// @brief Field _environmentKeywords, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentKeywords, put = __cordl_internal_set__environmentKeywords))::System::Collections::Generic::List_1<::StringW>* _environmentKeywords;

  /// @brief Field _lightGroups, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroups, put = __cordl_internal_set__lightGroups))::GlobalNamespace::EnvironmentLightGroups* _lightGroups;

  /// @brief Field _defaultEnvironmentEvents, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultEnvironmentEvents,
                      put = __cordl_internal_set__defaultEnvironmentEvents))::GlobalNamespace::DefaultEnvironmentEvents* _defaultEnvironmentEvents;

  /// @brief Field _defaultLightshowSaveData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightshowSaveData,
                      put = __cordl_internal_set__defaultLightshowSaveData))::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* _defaultLightshowSaveData;

  __declspec(property(get = get_sceneInfo))::UnityW<::GlobalNamespace::SceneInfo> sceneInfo;

  __declspec(property(get = get_environmentName))::StringW environmentName;

  __declspec(property(get = get_colorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> colorScheme;

  __declspec(property(get = get_serializedName))::StringW serializedName;

  __declspec(property(get = get_environmentAssetDirectory))::StringW environmentAssetDirectory;

  __declspec(property(get = get_environmentType))::UnityW<::GlobalNamespace::EnvironmentTypeSO> environmentType;

  __declspec(property(get = get_environmentSizeData))::GlobalNamespace::EnvironmentSizeData* environmentSizeData;

  __declspec(property(get = get_environmentIntensityReductionOptions))::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions;

  __declspec(property(get = get_environmentKeywords))::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords;

  __declspec(property(get = get_lightGroups))::GlobalNamespace::EnvironmentLightGroups* lightGroups;

  __declspec(property(get = get_defaultEnvironmentEvents))::GlobalNamespace::DefaultEnvironmentEvents* defaultEnvironmentEvents;

  __declspec(property(get = get_defaultLightshowSaveData))::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* defaultLightshowSaveData;

  constexpr ::StringW& __cordl_internal_get__environmentName();

  constexpr ::StringW const& __cordl_internal_get__environmentName() const;

  constexpr void __cordl_internal_set__environmentName(::StringW value);

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__colorScheme();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__colorScheme() const;

  constexpr void __cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__sceneInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__sceneInfo() const;

  constexpr void __cordl_internal_set__sceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr ::StringW& __cordl_internal_get__serializedName();

  constexpr ::StringW const& __cordl_internal_get__serializedName() const;

  constexpr void __cordl_internal_set__serializedName(::StringW value);

  constexpr ::StringW& __cordl_internal_get__environmentAssetDirectory();

  constexpr ::StringW const& __cordl_internal_get__environmentAssetDirectory() const;

  constexpr void __cordl_internal_set__environmentAssetDirectory(::StringW value);

  constexpr ::UnityW<::GlobalNamespace::EnvironmentTypeSO>& __cordl_internal_get__environmentType();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentTypeSO> const& __cordl_internal_get__environmentType() const;

  constexpr void __cordl_internal_set__environmentType(::UnityW<::GlobalNamespace::EnvironmentTypeSO> value);

  constexpr ::GlobalNamespace::EnvironmentSizeData*& __cordl_internal_get__environmentSizeData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSizeData*> const& __cordl_internal_get__environmentSizeData() const;

  constexpr void __cordl_internal_set__environmentSizeData(::GlobalNamespace::EnvironmentSizeData* value);

  constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions*& __cordl_internal_get__environmentIntensityReductionOptions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentIntensityReductionOptions*> const& __cordl_internal_get__environmentIntensityReductionOptions() const;

  constexpr void __cordl_internal_set__environmentIntensityReductionOptions(::GlobalNamespace::EnvironmentIntensityReductionOptions* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__environmentKeywords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__environmentKeywords() const;

  constexpr void __cordl_internal_set__environmentKeywords(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::GlobalNamespace::EnvironmentLightGroups*& __cordl_internal_get__lightGroups();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentLightGroups*> const& __cordl_internal_get__lightGroups() const;

  constexpr void __cordl_internal_set__lightGroups(::GlobalNamespace::EnvironmentLightGroups* value);

  constexpr ::GlobalNamespace::DefaultEnvironmentEvents*& __cordl_internal_get__defaultEnvironmentEvents();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultEnvironmentEvents*> const& __cordl_internal_get__defaultEnvironmentEvents() const;

  constexpr void __cordl_internal_set__defaultEnvironmentEvents(::GlobalNamespace::DefaultEnvironmentEvents* value);

  constexpr ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*& __cordl_internal_get__defaultLightshowSaveData();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*> const& __cordl_internal_get__defaultLightshowSaveData() const;

  constexpr void __cordl_internal_set__defaultLightshowSaveData(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* value);

  /// @brief Method get_sceneInfo, addr 0x22402dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SceneInfo> get_sceneInfo();

  /// @brief Method get_environmentName, addr 0x22402e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environmentName();

  /// @brief Method get_colorScheme, addr 0x22402ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSchemeSO> get_colorScheme();

  /// @brief Method get_serializedName, addr 0x22402f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_serializedName();

  /// @brief Method get_environmentAssetDirectory, addr 0x22402fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environmentAssetDirectory();

  /// @brief Method get_environmentType, addr 0x2240304, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentTypeSO> get_environmentType();

  /// @brief Method get_environmentSizeData, addr 0x224030c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentSizeData* get_environmentSizeData();

  /// @brief Method get_environmentIntensityReductionOptions, addr 0x2240314, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* get_environmentIntensityReductionOptions();

  /// @brief Method get_environmentKeywords, addr 0x224031c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords();

  /// @brief Method get_lightGroups, addr 0x2240324, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentLightGroups* get_lightGroups();

  /// @brief Method get_defaultEnvironmentEvents, addr 0x224032c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DefaultEnvironmentEvents* get_defaultEnvironmentEvents();

  /// @brief Method get_defaultLightshowSaveData, addr 0x2240334, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* get_defaultLightshowSaveData();

  static inline ::GlobalNamespace::EnvironmentInfoSO* New_ctor();

  /// @brief Method .ctor, addr 0x224033c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfoSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentInfoSO(EnvironmentInfoSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfoSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentInfoSO(EnvironmentInfoSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentInfoSO();

public:
  /// @brief Field _environmentName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____environmentName;

  /// @brief Field _colorScheme, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____colorScheme;

  /// @brief Field _sceneInfo, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____sceneInfo;

  /// @brief Field _serializedName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____serializedName;

  /// @brief Field _environmentAssetDirectory, offset: 0x38, size: 0x8, def value: None
  ::StringW ____environmentAssetDirectory;

  /// @brief Field _environmentType, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentTypeSO> ____environmentType;

  /// @brief Field _environmentSizeData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSizeData* ____environmentSizeData;

  /// @brief Field _environmentIntensityReductionOptions, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentIntensityReductionOptions* ____environmentIntensityReductionOptions;

  /// @brief Field _environmentKeywords, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____environmentKeywords;

  /// @brief Field _lightGroups, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentLightGroups* ____lightGroups;

  /// @brief Field _defaultEnvironmentEvents, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::DefaultEnvironmentEvents* ____defaultEnvironmentEvents;

  /// @brief Field _defaultLightshowSaveData, offset: 0x70, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* ____defaultLightshowSaveData;

  /// @brief Field kLightGroupSubDir offset 0xffffffff size 0x8
  static constexpr ::ConstString kLightGroupSubDir{ u"LightGroups" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentInfoSO, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____colorScheme) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____sceneInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____serializedName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentAssetDirectory) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentSizeData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentIntensityReductionOptions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentKeywords) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____lightGroups) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____defaultEnvironmentEvents) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____defaultLightshowSaveData) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentInfoSO*, "", "EnvironmentInfoSO");
