#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentInfoSO)
namespace GlobalNamespace {
class ColorSchemeSO;
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
struct EnvironmentType;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
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
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentInfoSO);
// Type: ::EnvironmentInfoSO
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentInfoSO*
class CORDL_TYPE EnvironmentInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _colorScheme, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> _colorScheme;

  /// @brief Field _defaultLightshowAsset, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightshowAsset, put = __cordl_internal_set__defaultLightshowAsset))::UnityW<::UnityEngine::TextAsset> _defaultLightshowAsset;

  /// @brief Field _environmentAssetDirectory, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentAssetDirectory, put = __cordl_internal_set__environmentAssetDirectory))::StringW _environmentAssetDirectory;

  /// @brief Field _environmentIntensityReductionOptions, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentIntensityReductionOptions,
                      put = __cordl_internal_set__environmentIntensityReductionOptions))::GlobalNamespace::EnvironmentIntensityReductionOptions* _environmentIntensityReductionOptions;

  /// @brief Field _environmentKeywords, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentKeywords, put = __cordl_internal_set__environmentKeywords))::System::Collections::Generic::List_1<::StringW>* _environmentKeywords;

  /// @brief Field _environmentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentName, put = __cordl_internal_set__environmentName))::StringW _environmentName;

  /// @brief Field _environmentSizeData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentSizeData, put = __cordl_internal_set__environmentSizeData))::GlobalNamespace::EnvironmentSizeData* _environmentSizeData;

  /// @brief Field _environmentType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentType, put = __cordl_internal_set__environmentType))::GlobalNamespace::EnvironmentType _environmentType;

  /// @brief Field _lightGroups, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroups, put = __cordl_internal_set__lightGroups))::GlobalNamespace::EnvironmentLightGroups* _lightGroups;

  /// @brief Field _order, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__order, put = __cordl_internal_set__order)) int32_t _order;

  /// @brief Field _sceneInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneInfo, put = __cordl_internal_set__sceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _sceneInfo;

  /// @brief Field _serializedName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedName, put = __cordl_internal_set__serializedName))::StringW _serializedName;

  __declspec(property(get = get_colorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> colorScheme;

  __declspec(property(get = get_defaultLightshowAsset))::UnityW<::UnityEngine::TextAsset> defaultLightshowAsset;

  __declspec(property(get = get_environmentAssetDirectory))::StringW environmentAssetDirectory;

  __declspec(property(get = get_environmentIntensityReductionOptions))::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions;

  __declspec(property(get = get_environmentKeywords))::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords;

  __declspec(property(get = get_environmentLightGroups))::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups;

  __declspec(property(get = get_environmentName))::StringW environmentName;

  __declspec(property(get = get_environmentSizeData))::GlobalNamespace::EnvironmentSizeData* environmentSizeData;

  __declspec(property(get = get_environmentType))::GlobalNamespace::EnvironmentType environmentType;

  __declspec(property(get = get_order)) int32_t order;

  __declspec(property(get = get_sceneInfo))::UnityW<::GlobalNamespace::SceneInfo> sceneInfo;

  __declspec(property(get = get_serializedName))::StringW serializedName;

  /// @brief Convert operator to "::GlobalNamespace::IEnvironmentInfo"
  constexpr operator ::GlobalNamespace::IEnvironmentInfo*() noexcept;

  static inline ::GlobalNamespace::EnvironmentInfoSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__colorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__colorScheme();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__defaultLightshowAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__defaultLightshowAsset();

  constexpr ::StringW const& __cordl_internal_get__environmentAssetDirectory() const;

  constexpr ::StringW& __cordl_internal_get__environmentAssetDirectory();

  constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions*& __cordl_internal_get__environmentIntensityReductionOptions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentIntensityReductionOptions*> const& __cordl_internal_get__environmentIntensityReductionOptions() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__environmentKeywords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__environmentKeywords() const;

  constexpr ::StringW const& __cordl_internal_get__environmentName() const;

  constexpr ::StringW& __cordl_internal_get__environmentName();

  constexpr ::GlobalNamespace::EnvironmentSizeData*& __cordl_internal_get__environmentSizeData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSizeData*> const& __cordl_internal_get__environmentSizeData() const;

  constexpr ::GlobalNamespace::EnvironmentType const& __cordl_internal_get__environmentType() const;

  constexpr ::GlobalNamespace::EnvironmentType& __cordl_internal_get__environmentType();

  constexpr ::GlobalNamespace::EnvironmentLightGroups*& __cordl_internal_get__lightGroups();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentLightGroups*> const& __cordl_internal_get__lightGroups() const;

  constexpr int32_t const& __cordl_internal_get__order() const;

  constexpr int32_t& __cordl_internal_get__order();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__sceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__sceneInfo();

  constexpr ::StringW const& __cordl_internal_get__serializedName() const;

  constexpr ::StringW& __cordl_internal_get__serializedName();

  constexpr void __cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  constexpr void __cordl_internal_set__defaultLightshowAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__environmentAssetDirectory(::StringW value);

  constexpr void __cordl_internal_set__environmentIntensityReductionOptions(::GlobalNamespace::EnvironmentIntensityReductionOptions* value);

  constexpr void __cordl_internal_set__environmentKeywords(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__environmentName(::StringW value);

  constexpr void __cordl_internal_set__environmentSizeData(::GlobalNamespace::EnvironmentSizeData* value);

  constexpr void __cordl_internal_set__environmentType(::GlobalNamespace::EnvironmentType value);

  constexpr void __cordl_internal_set__lightGroups(::GlobalNamespace::EnvironmentLightGroups* value);

  constexpr void __cordl_internal_set__order(int32_t value);

  constexpr void __cordl_internal_set__sceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__serializedName(::StringW value);

  /// @brief Method .ctor, addr 0x12a926c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorScheme, addr 0x12a921c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSchemeSO> get_colorScheme();

  /// @brief Method get_defaultLightshowAsset, addr 0x12a925c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::TextAsset> get_defaultLightshowAsset();

  /// @brief Method get_environmentAssetDirectory, addr 0x12a922c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environmentAssetDirectory();

  /// @brief Method get_environmentIntensityReductionOptions, addr 0x12a9244, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* get_environmentIntensityReductionOptions();

  /// @brief Method get_environmentKeywords, addr 0x12a924c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords();

  /// @brief Method get_environmentLightGroups, addr 0x12a9254, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IEnvironmentLightGroups* get_environmentLightGroups();

  /// @brief Method get_environmentName, addr 0x12a9214, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environmentName();

  /// @brief Method get_environmentSizeData, addr 0x12a923c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentSizeData* get_environmentSizeData();

  /// @brief Method get_environmentType, addr 0x12a9234, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentType get_environmentType();

  /// @brief Method get_order, addr 0x12a9264, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

  /// @brief Method get_sceneInfo, addr 0x12a920c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SceneInfo> get_sceneInfo();

  /// @brief Method get_serializedName, addr 0x12a9224, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_serializedName();

  /// @brief Convert to "::GlobalNamespace::IEnvironmentInfo"
  constexpr ::GlobalNamespace::IEnvironmentInfo* i___GlobalNamespace__IEnvironmentInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentInfoSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfoSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentInfoSO(EnvironmentInfoSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfoSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentInfoSO(EnvironmentInfoSO const&) = delete;

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

  /// @brief Field _environmentType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentType ____environmentType;

  /// @brief Field _environmentSizeData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSizeData* ____environmentSizeData;

  /// @brief Field _environmentIntensityReductionOptions, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentIntensityReductionOptions* ____environmentIntensityReductionOptions;

  /// @brief Field _environmentKeywords, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____environmentKeywords;

  /// @brief Field _lightGroups, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentLightGroups* ____lightGroups;

  /// @brief Field _defaultLightshowAsset, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____defaultLightshowAsset;

  /// @brief Field _order, offset: 0x70, size: 0x4, def value: None
  int32_t ____order;

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

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____defaultLightshowAsset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____order) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentInfoSO*, "", "EnvironmentInfoSO");
