#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentInfoSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentInfoSO)
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
struct EnvironmentInfoSO_Tags;
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
struct EnvironmentInfoSO_Tags;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentInfoSO_Tags);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentInfoSO);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentInfoSO/Tags
struct CORDL_TYPE EnvironmentInfoSO_Tags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentInfoSO_Tags_Unwrapped
  enum struct __EnvironmentInfoSO_Tags_Unwrapped : int32_t {
    __E_Branded = static_cast<int32_t>(0x1),
    __E_InDevelopment = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentInfoSO_Tags_Unwrapped() const noexcept {
    return static_cast<__EnvironmentInfoSO_Tags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentInfoSO_Tags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentInfoSO_Tags(int32_t value__) noexcept;

  /// @brief Field Branded value: I32(1)
  static ::GlobalNamespace::EnvironmentInfoSO_Tags const Branded;

  /// @brief Field InDevelopment value: I32(2)
  static ::GlobalNamespace::EnvironmentInfoSO_Tags const InDevelopment;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12831 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO_Tags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentInfoSO_Tags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EnvironmentInfoSO::Tags, EnvironmentType, IEnvironmentInfo, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentInfoSO
class CORDL_TYPE EnvironmentInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Tags = ::GlobalNamespace::EnvironmentInfoSO_Tags;

  /// @brief Field _colorScheme, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> _colorScheme;

  /// @brief Field _defaultLightshowAsset, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightshowAsset, put = __cordl_internal_set__defaultLightshowAsset)) ::UnityW<::UnityEngine::TextAsset> _defaultLightshowAsset;

  /// @brief Field _environmentIntensityReductionOptions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentIntensityReductionOptions,
                      put = __cordl_internal_set__environmentIntensityReductionOptions)) ::GlobalNamespace::EnvironmentIntensityReductionOptions* _environmentIntensityReductionOptions;

  /// @brief Field _environmentKeywords, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentKeywords, put = __cordl_internal_set__environmentKeywords)) ::System::Collections::Generic::List_1<::StringW>* _environmentKeywords;

  /// @brief Field _environmentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentName, put = __cordl_internal_set__environmentName)) ::StringW _environmentName;

  /// @brief Field _environmentSizeData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentSizeData, put = __cordl_internal_set__environmentSizeData)) ::GlobalNamespace::EnvironmentSizeData* _environmentSizeData;

  /// @brief Field _environmentType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentType, put = __cordl_internal_set__environmentType)) ::GlobalNamespace::EnvironmentType _environmentType;

  /// @brief Field _lightGroups, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroups, put = __cordl_internal_set__lightGroups)) ::GlobalNamespace::EnvironmentLightGroups* _lightGroups;

  /// @brief Field _order, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__order, put = __cordl_internal_set__order)) int32_t _order;

  /// @brief Field _sceneInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneInfo, put = __cordl_internal_set__sceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _sceneInfo;

  /// @brief Field _serializedName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedName, put = __cordl_internal_set__serializedName)) ::StringW _serializedName;

  /// @brief Field _tags, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags)) ::GlobalNamespace::EnvironmentInfoSO_Tags _tags;

  __declspec(property(get = get_colorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> colorScheme;

  __declspec(property(get = get_defaultLightshowAsset)) ::UnityW<::UnityEngine::TextAsset> defaultLightshowAsset;

  __declspec(property(get = get_environmentIntensityReductionOptions)) ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions;

  __declspec(property(get = get_environmentKeywords)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords;

  __declspec(property(get = get_environmentLightGroups)) ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups;

  __declspec(property(get = get_environmentName)) ::StringW environmentName;

  __declspec(property(get = get_environmentSizeData)) ::GlobalNamespace::EnvironmentSizeData* environmentSizeData;

  __declspec(property(get = get_environmentType)) ::GlobalNamespace::EnvironmentType environmentType;

  __declspec(property(get = get_isBranded)) bool isBranded;

  __declspec(property(get = get_isInDevelopment)) bool isInDevelopment;

  __declspec(property(get = get_order)) int32_t order;

  __declspec(property(get = get_sceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> sceneInfo;

  __declspec(property(get = get_serializedName)) ::StringW serializedName;

  /// @brief Convert operator to "::GlobalNamespace::IEnvironmentInfo"
  constexpr operator ::GlobalNamespace::IEnvironmentInfo*() noexcept;

  static inline ::GlobalNamespace::EnvironmentInfoSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__colorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__colorScheme();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__defaultLightshowAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__defaultLightshowAsset();

  constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions* const& __cordl_internal_get__environmentIntensityReductionOptions() const;

  constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions*& __cordl_internal_get__environmentIntensityReductionOptions();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__environmentKeywords() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__environmentKeywords();

  constexpr ::StringW const& __cordl_internal_get__environmentName() const;

  constexpr ::StringW& __cordl_internal_get__environmentName();

  constexpr ::GlobalNamespace::EnvironmentSizeData* const& __cordl_internal_get__environmentSizeData() const;

  constexpr ::GlobalNamespace::EnvironmentSizeData*& __cordl_internal_get__environmentSizeData();

  constexpr ::GlobalNamespace::EnvironmentType const& __cordl_internal_get__environmentType() const;

  constexpr ::GlobalNamespace::EnvironmentType& __cordl_internal_get__environmentType();

  constexpr ::GlobalNamespace::EnvironmentLightGroups* const& __cordl_internal_get__lightGroups() const;

  constexpr ::GlobalNamespace::EnvironmentLightGroups*& __cordl_internal_get__lightGroups();

  constexpr int32_t const& __cordl_internal_get__order() const;

  constexpr int32_t& __cordl_internal_get__order();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__sceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__sceneInfo();

  constexpr ::StringW const& __cordl_internal_get__serializedName() const;

  constexpr ::StringW& __cordl_internal_get__serializedName();

  constexpr ::GlobalNamespace::EnvironmentInfoSO_Tags const& __cordl_internal_get__tags() const;

  constexpr ::GlobalNamespace::EnvironmentInfoSO_Tags& __cordl_internal_get__tags();

  constexpr void __cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  constexpr void __cordl_internal_set__defaultLightshowAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__environmentIntensityReductionOptions(::GlobalNamespace::EnvironmentIntensityReductionOptions* value);

  constexpr void __cordl_internal_set__environmentKeywords(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__environmentName(::StringW value);

  constexpr void __cordl_internal_set__environmentSizeData(::GlobalNamespace::EnvironmentSizeData* value);

  constexpr void __cordl_internal_set__environmentType(::GlobalNamespace::EnvironmentType value);

  constexpr void __cordl_internal_set__lightGroups(::GlobalNamespace::EnvironmentLightGroups* value);

  constexpr void __cordl_internal_set__order(int32_t value);

  constexpr void __cordl_internal_set__sceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__serializedName(::StringW value);

  constexpr void __cordl_internal_set__tags(::GlobalNamespace::EnvironmentInfoSO_Tags value);

  /// @brief Method .ctor, addr 0x26ac0a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorScheme, addr 0x26ac044, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSchemeSO> get_colorScheme();

  /// @brief Method get_defaultLightshowAsset, addr 0x26ac07c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::TextAsset> get_defaultLightshowAsset();

  /// @brief Method get_environmentIntensityReductionOptions, addr 0x26ac064, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* get_environmentIntensityReductionOptions();

  /// @brief Method get_environmentKeywords, addr 0x26ac06c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords();

  /// @brief Method get_environmentLightGroups, addr 0x26ac074, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IEnvironmentLightGroups* get_environmentLightGroups();

  /// @brief Method get_environmentName, addr 0x26ac03c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environmentName();

  /// @brief Method get_environmentSizeData, addr 0x26ac05c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentSizeData* get_environmentSizeData();

  /// @brief Method get_environmentType, addr 0x26ac054, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentType get_environmentType();

  /// @brief Method get_isBranded, addr 0x26ac08c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isBranded();

  /// @brief Method get_isInDevelopment, addr 0x26ac098, size 0xc, virtual false, abstract: false, final false
  inline bool get_isInDevelopment();

  /// @brief Method get_order, addr 0x26ac084, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

  /// @brief Method get_sceneInfo, addr 0x26ac034, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SceneInfo> get_sceneInfo();

  /// @brief Method get_serializedName, addr 0x26ac04c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12832 };

  /// @brief Field kLightGroupSubDir offset 0xffffffff size 0x8
  static constexpr ::ConstString kLightGroupSubDir{ u"LightGroups" };

  /// @brief Field _environmentName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____environmentName;

  /// @brief Field _colorScheme, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____colorScheme;

  /// @brief Field _sceneInfo, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____sceneInfo;

  /// @brief Field _serializedName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____serializedName;

  /// @brief Field _tags, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentInfoSO_Tags ____tags;

  /// @brief Field _environmentType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentType ____environmentType;

  /// @brief Field _environmentSizeData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSizeData* ____environmentSizeData;

  /// @brief Field _environmentIntensityReductionOptions, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentIntensityReductionOptions* ____environmentIntensityReductionOptions;

  /// @brief Field _environmentKeywords, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____environmentKeywords;

  /// @brief Field _lightGroups, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentLightGroups* ____lightGroups;

  /// @brief Field _defaultLightshowAsset, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____defaultLightshowAsset;

  /// @brief Field _order, offset: 0x68, size: 0x4, def value: None
  int32_t ____order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____colorScheme) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____sceneInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____serializedName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____tags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentSizeData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentIntensityReductionOptions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____environmentKeywords) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____lightGroups) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____defaultLightshowAsset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentInfoSO, ____order) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentInfoSO, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentInfoSO_Tags, "", "EnvironmentInfoSO/Tags");
NEED_NO_BOX(::GlobalNamespace::EnvironmentInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentInfoSO*, "", "EnvironmentInfoSO");
