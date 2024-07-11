#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentInfoSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
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
namespace GlobalNamespace {
struct __EnvironmentInfoSO__Tags;
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
struct __EnvironmentInfoSO__Tags;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EnvironmentInfoSO__Tags);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentInfoSO);
// Type: ::Tags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentInfoSO::Tags
struct CORDL_TYPE __EnvironmentInfoSO__Tags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentInfoSO__Tags_Unwrapped
  enum struct ____EnvironmentInfoSO__Tags_Unwrapped : int32_t {
    __E_Branded = static_cast<int32_t>(0x1),
    __E_InDevelopment = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentInfoSO__Tags_Unwrapped() const noexcept {
    return static_cast<____EnvironmentInfoSO__Tags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentInfoSO__Tags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentInfoSO__Tags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Branded value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EnvironmentInfoSO__Tags const Branded;

  /// @brief Field InDevelopment value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__EnvironmentInfoSO__Tags const InDevelopment;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentInfoSO__Tags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentInfoSO__Tags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentInfoSO
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentInfoSO*
class CORDL_TYPE EnvironmentInfoSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Tags = ::GlobalNamespace::__EnvironmentInfoSO__Tags;

  /// @brief Field _colorScheme, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> _colorScheme;

  /// @brief Field _defaultLightshowAsset, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightshowAsset, put = __cordl_internal_set__defaultLightshowAsset))::UnityW<::UnityEngine::TextAsset> _defaultLightshowAsset;

  /// @brief Field _environmentIntensityReductionOptions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentIntensityReductionOptions,
                      put = __cordl_internal_set__environmentIntensityReductionOptions))::GlobalNamespace::EnvironmentIntensityReductionOptions* _environmentIntensityReductionOptions;

  /// @brief Field _environmentKeywords, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentKeywords, put = __cordl_internal_set__environmentKeywords))::System::Collections::Generic::List_1<::StringW>* _environmentKeywords;

  /// @brief Field _environmentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentName, put = __cordl_internal_set__environmentName))::StringW _environmentName;

  /// @brief Field _environmentSizeData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentSizeData, put = __cordl_internal_set__environmentSizeData))::GlobalNamespace::EnvironmentSizeData* _environmentSizeData;

  /// @brief Field _environmentType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentType, put = __cordl_internal_set__environmentType))::GlobalNamespace::EnvironmentType _environmentType;

  /// @brief Field _lightGroups, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroups, put = __cordl_internal_set__lightGroups))::GlobalNamespace::EnvironmentLightGroups* _lightGroups;

  /// @brief Field _order, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__order, put = __cordl_internal_set__order)) int32_t _order;

  /// @brief Field _sceneInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneInfo, put = __cordl_internal_set__sceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _sceneInfo;

  /// @brief Field _serializedName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedName, put = __cordl_internal_set__serializedName))::StringW _serializedName;

  /// @brief Field _tags, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::GlobalNamespace::__EnvironmentInfoSO__Tags _tags;

  __declspec(property(get = get_colorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> colorScheme;

  __declspec(property(get = get_defaultLightshowAsset))::UnityW<::UnityEngine::TextAsset> defaultLightshowAsset;

  __declspec(property(get = get_environmentIntensityReductionOptions))::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions;

  __declspec(property(get = get_environmentKeywords))::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords;

  __declspec(property(get = get_environmentLightGroups))::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups;

  __declspec(property(get = get_environmentName))::StringW environmentName;

  __declspec(property(get = get_environmentSizeData))::GlobalNamespace::EnvironmentSizeData* environmentSizeData;

  __declspec(property(get = get_environmentType))::GlobalNamespace::EnvironmentType environmentType;

  __declspec(property(get = get_isBranded)) bool isBranded;

  __declspec(property(get = get_isInDevelopment)) bool isInDevelopment;

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

  constexpr ::GlobalNamespace::__EnvironmentInfoSO__Tags const& __cordl_internal_get__tags() const;

  constexpr ::GlobalNamespace::__EnvironmentInfoSO__Tags& __cordl_internal_get__tags();

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

  constexpr void __cordl_internal_set__tags(::GlobalNamespace::__EnvironmentInfoSO__Tags value);

  /// @brief Method .ctor, addr 0x14ac6a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorScheme, addr 0x14ac644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSchemeSO> get_colorScheme();

  /// @brief Method get_defaultLightshowAsset, addr 0x14ac67c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::TextAsset> get_defaultLightshowAsset();

  /// @brief Method get_environmentIntensityReductionOptions, addr 0x14ac664, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* get_environmentIntensityReductionOptions();

  /// @brief Method get_environmentKeywords, addr 0x14ac66c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords();

  /// @brief Method get_environmentLightGroups, addr 0x14ac674, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IEnvironmentLightGroups* get_environmentLightGroups();

  /// @brief Method get_environmentName, addr 0x14ac63c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environmentName();

  /// @brief Method get_environmentSizeData, addr 0x14ac65c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentSizeData* get_environmentSizeData();

  /// @brief Method get_environmentType, addr 0x14ac654, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentType get_environmentType();

  /// @brief Method get_isBranded, addr 0x14ac68c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isBranded();

  /// @brief Method get_isInDevelopment, addr 0x14ac698, size 0xc, virtual false, abstract: false, final false
  inline bool get_isInDevelopment();

  /// @brief Method get_order, addr 0x14ac684, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

  /// @brief Method get_sceneInfo, addr 0x14ac634, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SceneInfo> get_sceneInfo();

  /// @brief Method get_serializedName, addr 0x14ac64c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _tags, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__EnvironmentInfoSO__Tags ____tags;

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

  /// @brief Field kLightGroupSubDir offset 0xffffffff size 0x8
  static constexpr ::ConstString kLightGroupSubDir{ u"LightGroups" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentInfoSO, 0x70>, "Size mismatch!");

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentInfoSO__Tags, "", "EnvironmentInfoSO/Tags");
NEED_NO_BOX(::GlobalNamespace::EnvironmentInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentInfoSO*, "", "EnvironmentInfoSO");
