#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/EnvironmentTracksDefinitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentTracksDefinitionSO)
namespace BeatSaber::TrackDefinitions::DataModels {
struct TrackToolbarType;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO_BasicEventTrackInfo;
}
namespace BeatSaber::TrackDefinitions {
struct EnvironmentTracksDefinitionSO_BasicEventTrackPage;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo;
}
namespace BeatSaber::TrackDefinitions {
struct EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis;
}
namespace BeatSaber::TrackDefinitions {
class EventTrackDefinitionSO;
}
namespace BeatSaber::TrackDefinitions {
class LightGroupDuplicationGroup;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::TrackDefinitions {
struct EnvironmentTracksDefinitionSO_BasicEventTrackPage;
}
namespace BeatSaber::TrackDefinitions {
struct EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO_BasicEventTrackInfo;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo;
}
// Write type traits
MARK_VAL_T(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage);
MARK_VAL_T(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo);
// Dependencies
namespace BeatSaber::TrackDefinitions {
// Is value type: true
// CS Name: BeatSaber.TrackDefinitions.EnvironmentTracksDefinitionSO/BasicEventTrackPage
struct CORDL_TYPE EnvironmentTracksDefinitionSO_BasicEventTrackPage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentTracksDefinitionSO_BasicEventTrackPage_Unwrapped
  enum struct __EnvironmentTracksDefinitionSO_BasicEventTrackPage_Unwrapped : int32_t {
    __E_Page1 = static_cast<int32_t>(0x0),
    __E_Page2 = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentTracksDefinitionSO_BasicEventTrackPage_Unwrapped() const noexcept {
    return static_cast<__EnvironmentTracksDefinitionSO_BasicEventTrackPage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTracksDefinitionSO_BasicEventTrackPage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentTracksDefinitionSO_BasicEventTrackPage(int32_t value__) noexcept;

  /// @brief Field Count value: I32(2)
  static ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage const Count;

  /// @brief Field Page1 value: I32(0)
  static ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage const Page1;

  /// @brief Field Page2 value: I32(1)
  static ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage const Page2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18631 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage, 0x4>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Dependencies
namespace BeatSaber::TrackDefinitions {
// Is value type: true
// CS Name: BeatSaber.TrackDefinitions.EnvironmentTracksDefinitionSO/OverrideDefaultLightAxis
struct CORDL_TYPE EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis_Unwrapped
  enum struct __EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis_Unwrapped : int32_t {
    __E_NoOverride = static_cast<int32_t>(0x0),
    __E_X = static_cast<int32_t>(0x1),
    __E_Y = static_cast<int32_t>(0x2),
    __E_Z = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis_Unwrapped() const noexcept {
    return static_cast<__EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis(int32_t value__) noexcept;

  /// @brief Field NoOverride value: I32(0)
  static ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis const NoOverride;

  /// @brief Field X value: I32(1)
  static ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis const X;

  /// @brief Field Y value: I32(2)
  static ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis const Y;

  /// @brief Field Z value: I32(3)
  static ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis const Z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18632 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis, 0x4>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Dependencies BasicBeatmapEventType, BeatSaber.TrackDefinitions.DataModels.TrackToolbarType, BeatSaber.TrackDefinitions.EnvironmentTracksDefinitionSO::BasicEventTrackPage, System.Object
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: BeatSaber.TrackDefinitions.EnvironmentTracksDefinitionSO/BasicEventTrackInfo
class CORDL_TYPE EnvironmentTracksDefinitionSO_BasicEventTrackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _basicEventTrackPage, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__basicEventTrackPage,
                      put = __cordl_internal_set__basicEventTrackPage)) ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage _basicEventTrackPage;

  /// @brief Field _beatmapEventType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEventType, put = __cordl_internal_set__beatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _trackDefinition, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trackDefinition, put = __cordl_internal_set__trackDefinition)) ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> _trackDefinition;

  /// @brief Field _trackName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__trackName, put = __cordl_internal_set__trackName)) ::StringW _trackName;

  /// @brief Field _trackToolbarType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__trackToolbarType, put = __cordl_internal_set__trackToolbarType)) ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType _trackToolbarType;

  __declspec(property(get = get_basicBeatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType;

  __declspec(property(get = get_basicEventTrackPage)) ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage basicEventTrackPage;

  __declspec(property(get = get_trackDefinition)) ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> trackDefinition;

  __declspec(property(get = get_trackName)) ::StringW trackName;

  __declspec(property(get = get_trackToolbarType)) ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType trackToolbarType;

  static inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo* New_ctor();

  constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage const& __cordl_internal_get__basicEventTrackPage() const;

  constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage& __cordl_internal_get__basicEventTrackPage();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEventType();

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> const& __cordl_internal_get__trackDefinition() const;

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>& __cordl_internal_get__trackDefinition();

  constexpr ::StringW const& __cordl_internal_get__trackName() const;

  constexpr ::StringW& __cordl_internal_get__trackName();

  constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const& __cordl_internal_get__trackToolbarType() const;

  constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType& __cordl_internal_get__trackToolbarType();

  constexpr void __cordl_internal_set__basicEventTrackPage(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage value);

  constexpr void __cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__trackDefinition(::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> value);

  constexpr void __cordl_internal_set__trackName(::StringW value);

  constexpr void __cordl_internal_set__trackToolbarType(::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType value);

  /// @brief Method .ctor, addr 0x227f218, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_basicBeatmapEventType, addr 0x227f1f8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventType get_basicBeatmapEventType();

  /// @brief Method get_basicEventTrackPage, addr 0x227f210, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage get_basicEventTrackPage();

  /// @brief Method get_trackDefinition, addr 0x227f208, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> get_trackDefinition();

  /// @brief Method get_trackName, addr 0x227f1f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_trackName();

  /// @brief Method get_trackToolbarType, addr 0x227f200, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType get_trackToolbarType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTracksDefinitionSO_BasicEventTrackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO_BasicEventTrackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTracksDefinitionSO_BasicEventTrackInfo(EnvironmentTracksDefinitionSO_BasicEventTrackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO_BasicEventTrackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTracksDefinitionSO_BasicEventTrackInfo(EnvironmentTracksDefinitionSO_BasicEventTrackInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18633 };

  /// @brief Field _trackName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____trackName;

  /// @brief Field _beatmapEventType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _trackToolbarType, offset: 0x1c, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType ____trackToolbarType;

  /// @brief Field _trackDefinition, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> ____trackDefinition;

  /// @brief Field _basicEventTrackPage, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage ____basicEventTrackPage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo, ____trackName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo, ____beatmapEventType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo, ____trackToolbarType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo, ____trackDefinition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo, ____basicEventTrackPage) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo, 0x30>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Dependencies System.Object
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: BeatSaber.TrackDefinitions.EnvironmentTracksDefinitionSO/EventBoxGroupPageInfo
class CORDL_TYPE EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventBoxGroupPageName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBoxGroupPageName, put = __cordl_internal_set__eventBoxGroupPageName)) ::StringW _eventBoxGroupPageName;

  /// @brief Field _eventBoxGroupTrackInfos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBoxGroupTrackInfos, put = __cordl_internal_set__eventBoxGroupTrackInfos)) ::System::Collections::Generic::List_1<
      ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* _eventBoxGroupTrackInfos;

  __declspec(property(get = get_eventBoxGroupPageName)) ::StringW eventBoxGroupPageName;

  __declspec(property(
      get = get_eventBoxGroupTrackInfos)) ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* eventBoxGroupTrackInfos;

  static inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__eventBoxGroupPageName() const;

  constexpr ::StringW& __cordl_internal_get__eventBoxGroupPageName();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* const& __cordl_internal_get__eventBoxGroupTrackInfos() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>*& __cordl_internal_get__eventBoxGroupTrackInfos();

  constexpr void __cordl_internal_set__eventBoxGroupPageName(::StringW value);

  constexpr void __cordl_internal_set__eventBoxGroupTrackInfos(::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* value);

  /// @brief Method .ctor, addr 0x227f280, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventBoxGroupPageName, addr 0x227f270, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_eventBoxGroupPageName();

  /// @brief Method get_eventBoxGroupTrackInfos, addr 0x227f278, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* get_eventBoxGroupTrackInfos();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo(EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo(EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18634 };

  /// @brief Field _eventBoxGroupPageName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____eventBoxGroupPageName;

  /// @brief Field _eventBoxGroupTrackInfos, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*>* ____eventBoxGroupTrackInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo, ____eventBoxGroupPageName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo, ____eventBoxGroupTrackInfos) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo, 0x20>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Dependencies BeatSaber.TrackDefinitions.EnvironmentTracksDefinitionSO::OverrideDefaultLightAxis, System.Object
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: BeatSaber.TrackDefinitions.EnvironmentTracksDefinitionSO/EventBoxGroupTrackInfo
class CORDL_TYPE EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _duplicationGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__duplicationGroup, put = __cordl_internal_set__duplicationGroup)) ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup>
      _duplicationGroup;

  /// @brief Field _enableDuplicate, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__enableDuplicate, put = __cordl_internal_set__enableDuplicate)) bool _enableDuplicate;

  /// @brief Field _groupName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__groupName, put = __cordl_internal_set__groupName)) ::StringW _groupName;

  /// @brief Field _lightGroup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup)) ::UnityW<::GlobalNamespace::LightGroupSO> _lightGroup;

  /// @brief Field _overrideDefaultRotationAxis, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__overrideDefaultRotationAxis,
                      put = __cordl_internal_set__overrideDefaultRotationAxis)) ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis _overrideDefaultRotationAxis;

  /// @brief Field _overrideDefaultTranslationAxis, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__overrideDefaultTranslationAxis,
                      put =
                          __cordl_internal_set__overrideDefaultTranslationAxis)) ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis _overrideDefaultTranslationAxis;

  /// @brief Field _showColorTrack, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__showColorTrack, put = __cordl_internal_set__showColorTrack)) bool _showColorTrack;

  /// @brief Field _showFloatFxTrack, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__showFloatFxTrack, put = __cordl_internal_set__showFloatFxTrack)) bool _showFloatFxTrack;

  /// @brief Field _showRotationXTrack, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__showRotationXTrack, put = __cordl_internal_set__showRotationXTrack)) bool _showRotationXTrack;

  /// @brief Field _showRotationYTrack, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__showRotationYTrack, put = __cordl_internal_set__showRotationYTrack)) bool _showRotationYTrack;

  /// @brief Field _showRotationZTrack, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get__showRotationZTrack, put = __cordl_internal_set__showRotationZTrack)) bool _showRotationZTrack;

  /// @brief Field _showTranslationXTrack, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__showTranslationXTrack, put = __cordl_internal_set__showTranslationXTrack)) bool _showTranslationXTrack;

  /// @brief Field _showTranslationYTrack, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__showTranslationYTrack, put = __cordl_internal_set__showTranslationYTrack)) bool _showTranslationYTrack;

  /// @brief Field _showTranslationZTrack, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__showTranslationZTrack, put = __cordl_internal_set__showTranslationZTrack)) bool _showTranslationZTrack;

  /// @brief Field _targetLightGroups, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__targetLightGroups,
                      put = __cordl_internal_set__targetLightGroups)) ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>
      _targetLightGroups;

  __declspec(property(get = get_enableDuplicate)) bool enableDuplicate;

  __declspec(property(get = get_groupName, put = set_groupName)) ::StringW groupName;

  __declspec(property(get = get_lightGroup, put = set_lightGroup)) ::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  __declspec(property(get = get_overrideDefaultRotationAxis)) ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis overrideDefaultRotationAxis;

  __declspec(property(get = get_overrideDefaultTranslationAxis)) ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis overrideDefaultTranslationAxis;

  __declspec(property(get = get_showColorTrack)) bool showColorTrack;

  __declspec(property(get = get_showFloatFxTrack)) bool showFloatFxTrack;

  __declspec(property(get = get_showRotationTrack)) bool showRotationTrack;

  __declspec(property(get = get_showRotationXTrack)) bool showRotationXTrack;

  __declspec(property(get = get_showRotationYTrack)) bool showRotationYTrack;

  __declspec(property(get = get_showRotationZTrack)) bool showRotationZTrack;

  __declspec(property(get = get_showTranslationTrack)) bool showTranslationTrack;

  __declspec(property(get = get_showTranslationXTrack)) bool showTranslationXTrack;

  __declspec(property(get = get_showTranslationYTrack)) bool showTranslationYTrack;

  __declspec(property(get = get_showTranslationZTrack)) bool showTranslationZTrack;

  __declspec(property(get = get_targetLightGroups)) ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> targetLightGroups;

  static inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo* New_ctor();

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> const& __cordl_internal_get__duplicationGroup() const;

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup>& __cordl_internal_get__duplicationGroup();

  constexpr bool const& __cordl_internal_get__enableDuplicate() const;

  constexpr bool& __cordl_internal_get__enableDuplicate();

  constexpr ::StringW const& __cordl_internal_get__groupName() const;

  constexpr ::StringW& __cordl_internal_get__groupName();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get__lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get__lightGroup();

  constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis const& __cordl_internal_get__overrideDefaultRotationAxis() const;

  constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis& __cordl_internal_get__overrideDefaultRotationAxis();

  constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis const& __cordl_internal_get__overrideDefaultTranslationAxis() const;

  constexpr ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis& __cordl_internal_get__overrideDefaultTranslationAxis();

  constexpr bool const& __cordl_internal_get__showColorTrack() const;

  constexpr bool& __cordl_internal_get__showColorTrack();

  constexpr bool const& __cordl_internal_get__showFloatFxTrack() const;

  constexpr bool& __cordl_internal_get__showFloatFxTrack();

  constexpr bool const& __cordl_internal_get__showRotationXTrack() const;

  constexpr bool& __cordl_internal_get__showRotationXTrack();

  constexpr bool const& __cordl_internal_get__showRotationYTrack() const;

  constexpr bool& __cordl_internal_get__showRotationYTrack();

  constexpr bool const& __cordl_internal_get__showRotationZTrack() const;

  constexpr bool& __cordl_internal_get__showRotationZTrack();

  constexpr bool const& __cordl_internal_get__showTranslationXTrack() const;

  constexpr bool& __cordl_internal_get__showTranslationXTrack();

  constexpr bool const& __cordl_internal_get__showTranslationYTrack() const;

  constexpr bool& __cordl_internal_get__showTranslationYTrack();

  constexpr bool const& __cordl_internal_get__showTranslationZTrack() const;

  constexpr bool& __cordl_internal_get__showTranslationZTrack();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> const& __cordl_internal_get__targetLightGroups() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>& __cordl_internal_get__targetLightGroups();

  constexpr void __cordl_internal_set__duplicationGroup(::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> value);

  constexpr void __cordl_internal_set__enableDuplicate(bool value);

  constexpr void __cordl_internal_set__groupName(::StringW value);

  constexpr void __cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value);

  constexpr void __cordl_internal_set__overrideDefaultRotationAxis(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis value);

  constexpr void __cordl_internal_set__overrideDefaultTranslationAxis(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis value);

  constexpr void __cordl_internal_set__showColorTrack(bool value);

  constexpr void __cordl_internal_set__showFloatFxTrack(bool value);

  constexpr void __cordl_internal_set__showRotationXTrack(bool value);

  constexpr void __cordl_internal_set__showRotationYTrack(bool value);

  constexpr void __cordl_internal_set__showRotationZTrack(bool value);

  constexpr void __cordl_internal_set__showTranslationXTrack(bool value);

  constexpr void __cordl_internal_set__showTranslationYTrack(bool value);

  constexpr void __cordl_internal_set__showTranslationZTrack(bool value);

  constexpr void __cordl_internal_set__targetLightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> value);

  /// @brief Method .ctor, addr 0x227f468, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableDuplicate, addr 0x227f3dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableDuplicate();

  /// @brief Method get_groupName, addr 0x227f31c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groupName();

  /// @brief Method get_lightGroup, addr 0x227f32c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroup();

  /// @brief Method get_overrideDefaultRotationAxis, addr 0x227f3ac, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis get_overrideDefaultRotationAxis();

  /// @brief Method get_overrideDefaultTranslationAxis, addr 0x227f3cc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis get_overrideDefaultTranslationAxis();

  /// @brief Method get_showColorTrack, addr 0x227f33c, size 0x8, virtual false, abstract: false, final false
  inline bool get_showColorTrack();

  /// @brief Method get_showFloatFxTrack, addr 0x227f3d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_showFloatFxTrack();

  /// @brief Method get_showRotationTrack, addr 0x227f344, size 0x28, virtual false, abstract: false, final false
  inline bool get_showRotationTrack();

  /// @brief Method get_showRotationXTrack, addr 0x227f394, size 0x8, virtual false, abstract: false, final false
  inline bool get_showRotationXTrack();

  /// @brief Method get_showRotationYTrack, addr 0x227f39c, size 0x8, virtual false, abstract: false, final false
  inline bool get_showRotationYTrack();

  /// @brief Method get_showRotationZTrack, addr 0x227f3a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_showRotationZTrack();

  /// @brief Method get_showTranslationTrack, addr 0x227f36c, size 0x28, virtual false, abstract: false, final false
  inline bool get_showTranslationTrack();

  /// @brief Method get_showTranslationXTrack, addr 0x227f3b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_showTranslationXTrack();

  /// @brief Method get_showTranslationYTrack, addr 0x227f3bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_showTranslationYTrack();

  /// @brief Method get_showTranslationZTrack, addr 0x227f3c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_showTranslationZTrack();

  /// @brief Method get_targetLightGroups, addr 0x227f3e4, size 0x84, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> get_targetLightGroups();

  /// @brief Method set_groupName, addr 0x227f324, size 0x8, virtual false, abstract: false, final false
  inline void set_groupName(::StringW value);

  /// @brief Method set_lightGroup, addr 0x227f334, size 0x8, virtual false, abstract: false, final false
  inline void set_lightGroup(::GlobalNamespace::LightGroupSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo(EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo(EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18635 };

  /// @brief Field _groupName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____groupName;

  /// @brief Field _lightGroup, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ____lightGroup;

  /// @brief Field _showColorTrack, offset: 0x20, size: 0x1, def value: None
  bool ____showColorTrack;

  /// @brief Field _showRotationXTrack, offset: 0x21, size: 0x1, def value: None
  bool ____showRotationXTrack;

  /// @brief Field _showRotationYTrack, offset: 0x22, size: 0x1, def value: None
  bool ____showRotationYTrack;

  /// @brief Field _showRotationZTrack, offset: 0x23, size: 0x1, def value: None
  bool ____showRotationZTrack;

  /// @brief Field _overrideDefaultRotationAxis, offset: 0x24, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis ____overrideDefaultRotationAxis;

  /// @brief Field _showTranslationXTrack, offset: 0x28, size: 0x1, def value: None
  bool ____showTranslationXTrack;

  /// @brief Field _showTranslationYTrack, offset: 0x29, size: 0x1, def value: None
  bool ____showTranslationYTrack;

  /// @brief Field _showTranslationZTrack, offset: 0x2a, size: 0x1, def value: None
  bool ____showTranslationZTrack;

  /// @brief Field _overrideDefaultTranslationAxis, offset: 0x2c, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis ____overrideDefaultTranslationAxis;

  /// @brief Field _showFloatFxTrack, offset: 0x30, size: 0x1, def value: None
  bool ____showFloatFxTrack;

  /// @brief Field _enableDuplicate, offset: 0x31, size: 0x1, def value: None
  bool ____enableDuplicate;

  /// @brief Field _duplicationGroup, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> ____duplicationGroup;

  /// @brief Field _targetLightGroups, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> ____targetLightGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____groupName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____lightGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____showColorTrack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____showRotationXTrack) == 0x21, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____showRotationYTrack) == 0x22, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____showRotationZTrack) == 0x23, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____overrideDefaultRotationAxis) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____showTranslationXTrack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____showTranslationYTrack) == 0x29, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____showTranslationZTrack) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____overrideDefaultTranslationAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____showFloatFxTrack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____enableDuplicate) == 0x31, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____duplicationGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, ____targetLightGroups) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo, 0x48>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Dependencies PersistentScriptableObject
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: BeatSaber.TrackDefinitions.EnvironmentTracksDefinitionSO
class CORDL_TYPE EnvironmentTracksDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using BasicEventTrackInfo = ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo;

  using BasicEventTrackPage = ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage;

  using EventBoxGroupPageInfo = ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo;

  using EventBoxGroupTrackInfo = ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo;

  using OverrideDefaultLightAxis = ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis;

  /// @brief Field _basicEventTrackInfos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__basicEventTrackInfos,
                      put = __cordl_internal_set__basicEventTrackInfos)) ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*,
                                                                                  ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
      _basicEventTrackInfos;

  /// @brief Field _environmentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentInfo, put = __cordl_internal_set__environmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> _environmentInfo;

  /// @brief Field _eventBoxGroupPageInfos, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBoxGroupPageInfos,
                      put = __cordl_internal_set__eventBoxGroupPageInfos)) ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*
      _eventBoxGroupPageInfos;

  __declspec(property(get = get_basicEventTrackInfos)) ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*,
                                                                ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
      basicEventTrackInfos;

  __declspec(property(get = get_environmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo;

  __declspec(property(
      get = get_eventBoxGroupPageInfos)) ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* eventBoxGroupPageInfos;

  static inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* New_ctor();

  constexpr ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*,
                     ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> const&
  __cordl_internal_get__basicEventTrackInfos() const;

  constexpr ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>&
  __cordl_internal_get__basicEventTrackInfos();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__environmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__environmentInfo();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* const& __cordl_internal_get__eventBoxGroupPageInfos() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>*& __cordl_internal_get__eventBoxGroupPageInfos();

  constexpr void __cordl_internal_set__basicEventTrackInfos(
      ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*> value);

  constexpr void __cordl_internal_set__environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set__eventBoxGroupPageInfos(::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* value);

  /// @brief Method .ctor, addr 0x227f1e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_basicEventTrackInfos, addr 0x227f1d8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
  get_basicEventTrackInfos();

  /// @brief Method get_environmentInfo, addr 0x227f1d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> get_environmentInfo();

  /// @brief Method get_eventBoxGroupPageInfos, addr 0x227f1e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* get_eventBoxGroupPageInfos();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTracksDefinitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTracksDefinitionSO(EnvironmentTracksDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTracksDefinitionSO(EnvironmentTracksDefinitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18636 };

  /// @brief Field _environmentInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____environmentInfo;

  /// @brief Field _basicEventTrackInfos, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*>*>
      ____basicEventTrackInfos;

  /// @brief Field _eventBoxGroupPageInfos, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*>* ____eventBoxGroupPageInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO, ____environmentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO, ____basicEventTrackInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO, ____eventBoxGroupPageInfos) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO, 0x30>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackPage, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/BasicEventTrackPage");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_OverrideDefaultLightAxis, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/OverrideDefaultLightAxis");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_BasicEventTrackInfo*, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/BasicEventTrackInfo");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupPageInfo*, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/EventBoxGroupPageInfo");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO_EventBoxGroupTrackInfo*, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/EventBoxGroupTrackInfo");
