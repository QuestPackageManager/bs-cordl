#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/EnvironmentTracksDefinitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentTracksDefinitionSO)
namespace BeatSaber::TrackDefinitions::DataModels {
struct TrackToolbarType;
}
namespace BeatSaber::TrackDefinitions {
class EventTrackDefinitionSO;
}
namespace BeatSaber::TrackDefinitions {
class LightGroupDuplicationGroup;
}
namespace BeatSaber::TrackDefinitions {
class __EnvironmentTracksDefinitionSO__BasicEventTrackInfo;
}
namespace BeatSaber::TrackDefinitions {
struct __EnvironmentTracksDefinitionSO__BasicEventTrackPage;
}
namespace BeatSaber::TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo;
}
namespace BeatSaber::TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo;
}
namespace BeatSaber::TrackDefinitions {
struct __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis;
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
struct __EnvironmentTracksDefinitionSO__BasicEventTrackPage;
}
namespace BeatSaber::TrackDefinitions {
struct __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace BeatSaber::TrackDefinitions {
class __EnvironmentTracksDefinitionSO__BasicEventTrackInfo;
}
namespace BeatSaber::TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo;
}
namespace BeatSaber::TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo;
}
// Write type traits
MARK_VAL_T(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage);
MARK_VAL_T(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo);
// Type: ::BasicEventTrackPage
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: true
// CS Name: ::EnvironmentTracksDefinitionSO::BasicEventTrackPage
struct CORDL_TYPE __EnvironmentTracksDefinitionSO__BasicEventTrackPage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentTracksDefinitionSO__BasicEventTrackPage_Unwrapped
  enum struct ____EnvironmentTracksDefinitionSO__BasicEventTrackPage_Unwrapped : int32_t {
    __E_Page1 = static_cast<int32_t>(0x0),
    __E_Page2 = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentTracksDefinitionSO__BasicEventTrackPage_Unwrapped() const noexcept {
    return static_cast<____EnvironmentTracksDefinitionSO__BasicEventTrackPage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__BasicEventTrackPage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentTracksDefinitionSO__BasicEventTrackPage(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Count value: static_cast<int32_t>(0x2)
  static ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const Count;

  /// @brief Field Page1 value: static_cast<int32_t>(0x0)
  static ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const Page1;

  /// @brief Field Page2 value: static_cast<int32_t>(0x1)
  static ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const Page2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18540 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Type: ::OverrideDefaultLightAxis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: true
// CS Name: ::EnvironmentTracksDefinitionSO::OverrideDefaultLightAxis
struct CORDL_TYPE __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis_Unwrapped
  enum struct ____EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis_Unwrapped : int32_t {
    __E_NoOverride = static_cast<int32_t>(0x0),
    __E_X = static_cast<int32_t>(0x1),
    __E_Y = static_cast<int32_t>(0x2),
    __E_Z = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis_Unwrapped() const noexcept {
    return static_cast<____EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NoOverride value: static_cast<int32_t>(0x0)
  static ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const NoOverride;

  /// @brief Field X value: static_cast<int32_t>(0x1)
  static ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const X;

  /// @brief Field Y value: static_cast<int32_t>(0x2)
  static ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x3)
  static ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const Z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18541 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Type: ::BasicEventTrackInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: ::EnvironmentTracksDefinitionSO::BasicEventTrackInfo*
class CORDL_TYPE __EnvironmentTracksDefinitionSO__BasicEventTrackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _basicEventTrackPage, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__basicEventTrackPage,
                      put = __cordl_internal_set__basicEventTrackPage)) ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage _basicEventTrackPage;

  /// @brief Field _beatmapEventType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEventType, put = __cordl_internal_set__beatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _trackDefinition, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trackDefinition, put = __cordl_internal_set__trackDefinition)) ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> _trackDefinition;

  /// @brief Field _trackName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__trackName, put = __cordl_internal_set__trackName)) ::StringW _trackName;

  /// @brief Field _trackToolbarType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__trackToolbarType, put = __cordl_internal_set__trackToolbarType)) ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType _trackToolbarType;

  __declspec(property(get = get_basicBeatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType;

  __declspec(property(get = get_basicEventTrackPage)) ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage basicEventTrackPage;

  __declspec(property(get = get_trackDefinition)) ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> trackDefinition;

  __declspec(property(get = get_trackName)) ::StringW trackName;

  __declspec(property(get = get_trackToolbarType)) ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType trackToolbarType;

  static inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* New_ctor();

  constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const& __cordl_internal_get__basicEventTrackPage() const;

  constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage& __cordl_internal_get__basicEventTrackPage();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEventType();

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> const& __cordl_internal_get__trackDefinition() const;

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>& __cordl_internal_get__trackDefinition();

  constexpr ::StringW const& __cordl_internal_get__trackName() const;

  constexpr ::StringW& __cordl_internal_get__trackName();

  constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const& __cordl_internal_get__trackToolbarType() const;

  constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType& __cordl_internal_get__trackToolbarType();

  constexpr void __cordl_internal_set__basicEventTrackPage(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage value);

  constexpr void __cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__trackDefinition(::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> value);

  constexpr void __cordl_internal_set__trackName(::StringW value);

  constexpr void __cordl_internal_set__trackToolbarType(::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType value);

  /// @brief Method .ctor, addr 0x224e848, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_basicBeatmapEventType, addr 0x224e828, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventType get_basicBeatmapEventType();

  /// @brief Method get_basicEventTrackPage, addr 0x224e840, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage get_basicEventTrackPage();

  /// @brief Method get_trackDefinition, addr 0x224e838, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> get_trackDefinition();

  /// @brief Method get_trackName, addr 0x224e820, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_trackName();

  /// @brief Method get_trackToolbarType, addr 0x224e830, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType get_trackToolbarType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__BasicEventTrackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__BasicEventTrackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTracksDefinitionSO__BasicEventTrackInfo(__EnvironmentTracksDefinitionSO__BasicEventTrackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__BasicEventTrackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTracksDefinitionSO__BasicEventTrackInfo(__EnvironmentTracksDefinitionSO__BasicEventTrackInfo const&) = delete;

  /// @brief Field _trackName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____trackName;

  /// @brief Field _beatmapEventType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _trackToolbarType, offset: 0x1c, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType ____trackToolbarType;

  /// @brief Field _trackDefinition, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> ____trackDefinition;

  /// @brief Field _basicEventTrackPage, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage ____basicEventTrackPage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo, ____trackName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo, ____beatmapEventType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo, ____trackToolbarType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo, ____trackDefinition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo, ____basicEventTrackPage) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Type: ::EventBoxGroupPageInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: ::EnvironmentTracksDefinitionSO::EventBoxGroupPageInfo*
class CORDL_TYPE __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventBoxGroupPageName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBoxGroupPageName, put = __cordl_internal_set__eventBoxGroupPageName)) ::StringW _eventBoxGroupPageName;

  /// @brief Field _eventBoxGroupTrackInfos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBoxGroupTrackInfos, put = __cordl_internal_set__eventBoxGroupTrackInfos)) ::System::Collections::Generic::List_1<
      ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* _eventBoxGroupTrackInfos;

  __declspec(property(get = get_eventBoxGroupPageName)) ::StringW eventBoxGroupPageName;

  __declspec(property(
      get = get_eventBoxGroupTrackInfos)) ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* eventBoxGroupTrackInfos;

  static inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__eventBoxGroupPageName() const;

  constexpr ::StringW& __cordl_internal_get__eventBoxGroupPageName();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*& __cordl_internal_get__eventBoxGroupTrackInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> const&
  __cordl_internal_get__eventBoxGroupTrackInfos() const;

  constexpr void __cordl_internal_set__eventBoxGroupPageName(::StringW value);

  constexpr void __cordl_internal_set__eventBoxGroupTrackInfos(::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* value);

  /// @brief Method .ctor, addr 0x224e8b0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventBoxGroupPageName, addr 0x224e8a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_eventBoxGroupPageName();

  /// @brief Method get_eventBoxGroupTrackInfos, addr 0x224e8a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* get_eventBoxGroupTrackInfos();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo(__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo(__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo const&) = delete;

  /// @brief Field _eventBoxGroupPageName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____eventBoxGroupPageName;

  /// @brief Field _eventBoxGroupTrackInfos, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* ____eventBoxGroupTrackInfos;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo, ____eventBoxGroupPageName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo, ____eventBoxGroupTrackInfos) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Type: ::EventBoxGroupTrackInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: ::EnvironmentTracksDefinitionSO::EventBoxGroupTrackInfo*
class CORDL_TYPE __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo : public ::System::Object {
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
                      put = __cordl_internal_set__overrideDefaultRotationAxis)) ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis _overrideDefaultRotationAxis;

  /// @brief Field _overrideDefaultTranslationAxis, offset 0x2c, size 0x4
  __declspec(property(
      get = __cordl_internal_get__overrideDefaultTranslationAxis,
      put = __cordl_internal_set__overrideDefaultTranslationAxis)) ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis _overrideDefaultTranslationAxis;

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

  __declspec(property(get = get_overrideDefaultRotationAxis)) ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis overrideDefaultRotationAxis;

  __declspec(property(get = get_overrideDefaultTranslationAxis)) ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis overrideDefaultTranslationAxis;

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

  static inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* New_ctor();

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> const& __cordl_internal_get__duplicationGroup() const;

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup>& __cordl_internal_get__duplicationGroup();

  constexpr bool const& __cordl_internal_get__enableDuplicate() const;

  constexpr bool& __cordl_internal_get__enableDuplicate();

  constexpr ::StringW const& __cordl_internal_get__groupName() const;

  constexpr ::StringW& __cordl_internal_get__groupName();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get__lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get__lightGroup();

  constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const& __cordl_internal_get__overrideDefaultRotationAxis() const;

  constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis& __cordl_internal_get__overrideDefaultRotationAxis();

  constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const& __cordl_internal_get__overrideDefaultTranslationAxis() const;

  constexpr ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis& __cordl_internal_get__overrideDefaultTranslationAxis();

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

  constexpr void __cordl_internal_set__overrideDefaultRotationAxis(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis value);

  constexpr void __cordl_internal_set__overrideDefaultTranslationAxis(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis value);

  constexpr void __cordl_internal_set__showColorTrack(bool value);

  constexpr void __cordl_internal_set__showFloatFxTrack(bool value);

  constexpr void __cordl_internal_set__showRotationXTrack(bool value);

  constexpr void __cordl_internal_set__showRotationYTrack(bool value);

  constexpr void __cordl_internal_set__showRotationZTrack(bool value);

  constexpr void __cordl_internal_set__showTranslationXTrack(bool value);

  constexpr void __cordl_internal_set__showTranslationYTrack(bool value);

  constexpr void __cordl_internal_set__showTranslationZTrack(bool value);

  constexpr void __cordl_internal_set__targetLightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> value);

  /// @brief Method .ctor, addr 0x224ea98, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableDuplicate, addr 0x224ea0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableDuplicate();

  /// @brief Method get_groupName, addr 0x224e94c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groupName();

  /// @brief Method get_lightGroup, addr 0x224e95c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroup();

  /// @brief Method get_overrideDefaultRotationAxis, addr 0x224e9dc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis get_overrideDefaultRotationAxis();

  /// @brief Method get_overrideDefaultTranslationAxis, addr 0x224e9fc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis get_overrideDefaultTranslationAxis();

  /// @brief Method get_showColorTrack, addr 0x224e96c, size 0x8, virtual false, abstract: false, final false
  inline bool get_showColorTrack();

  /// @brief Method get_showFloatFxTrack, addr 0x224ea04, size 0x8, virtual false, abstract: false, final false
  inline bool get_showFloatFxTrack();

  /// @brief Method get_showRotationTrack, addr 0x224e974, size 0x28, virtual false, abstract: false, final false
  inline bool get_showRotationTrack();

  /// @brief Method get_showRotationXTrack, addr 0x224e9c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_showRotationXTrack();

  /// @brief Method get_showRotationYTrack, addr 0x224e9cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_showRotationYTrack();

  /// @brief Method get_showRotationZTrack, addr 0x224e9d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_showRotationZTrack();

  /// @brief Method get_showTranslationTrack, addr 0x224e99c, size 0x28, virtual false, abstract: false, final false
  inline bool get_showTranslationTrack();

  /// @brief Method get_showTranslationXTrack, addr 0x224e9e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_showTranslationXTrack();

  /// @brief Method get_showTranslationYTrack, addr 0x224e9ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_showTranslationYTrack();

  /// @brief Method get_showTranslationZTrack, addr 0x224e9f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_showTranslationZTrack();

  /// @brief Method get_targetLightGroups, addr 0x224ea14, size 0x84, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> get_targetLightGroups();

  /// @brief Method set_groupName, addr 0x224e954, size 0x8, virtual false, abstract: false, final false
  inline void set_groupName(::StringW value);

  /// @brief Method set_lightGroup, addr 0x224e964, size 0x8, virtual false, abstract: false, final false
  inline void set_lightGroup(::GlobalNamespace::LightGroupSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo(__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo(__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo const&) = delete;

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
  ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis ____overrideDefaultRotationAxis;

  /// @brief Field _showTranslationXTrack, offset: 0x28, size: 0x1, def value: None
  bool ____showTranslationXTrack;

  /// @brief Field _showTranslationYTrack, offset: 0x29, size: 0x1, def value: None
  bool ____showTranslationYTrack;

  /// @brief Field _showTranslationZTrack, offset: 0x2a, size: 0x1, def value: None
  bool ____showTranslationZTrack;

  /// @brief Field _overrideDefaultTranslationAxis, offset: 0x2c, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis ____overrideDefaultTranslationAxis;

  /// @brief Field _showFloatFxTrack, offset: 0x30, size: 0x1, def value: None
  bool ____showFloatFxTrack;

  /// @brief Field _enableDuplicate, offset: 0x31, size: 0x1, def value: None
  bool ____enableDuplicate;

  /// @brief Field _duplicationGroup, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup> ____duplicationGroup;

  /// @brief Field _targetLightGroups, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> ____targetLightGroups;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18544 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, 0x48>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____groupName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____lightGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____showColorTrack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____showRotationXTrack) == 0x21, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____showRotationYTrack) == 0x22, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____showRotationZTrack) == 0x23, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____overrideDefaultRotationAxis) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____showTranslationXTrack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____showTranslationYTrack) == 0x29, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____showTranslationZTrack) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____overrideDefaultTranslationAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____showFloatFxTrack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____enableDuplicate) == 0x31, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____duplicationGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, ____targetLightGroups) == 0x40, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Type: BeatSaber.TrackDefinitions::EnvironmentTracksDefinitionSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: ::BeatSaber.TrackDefinitions::EnvironmentTracksDefinitionSO*
class CORDL_TYPE EnvironmentTracksDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using BasicEventTrackInfo = ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo;

  using BasicEventTrackPage = ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage;

  using EventBoxGroupPageInfo = ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo;

  using EventBoxGroupTrackInfo = ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo;

  using OverrideDefaultLightAxis = ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis;

  /// @brief Field _basicEventTrackInfos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__basicEventTrackInfos,
                      put = __cordl_internal_set__basicEventTrackInfos)) ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                  ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
      _basicEventTrackInfos;

  /// @brief Field _environmentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentInfo, put = __cordl_internal_set__environmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> _environmentInfo;

  /// @brief Field _eventBoxGroupPageInfos, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eventBoxGroupPageInfos, put = __cordl_internal_set__eventBoxGroupPageInfos)) ::System::Collections::Generic::List_1<
      ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* _eventBoxGroupPageInfos;

  __declspec(property(get = get_basicEventTrackInfos)) ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
      basicEventTrackInfos;

  __declspec(property(get = get_environmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo;

  __declspec(property(
      get = get_eventBoxGroupPageInfos)) ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* eventBoxGroupPageInfos;

  static inline ::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* New_ctor();

  constexpr ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                     ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
  __cordl_internal_get__basicEventTrackInfos() const;

  constexpr ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                     ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>&
  __cordl_internal_get__basicEventTrackInfos();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__environmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__environmentInfo();

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*& __cordl_internal_get__eventBoxGroupPageInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*> const&
  __cordl_internal_get__eventBoxGroupPageInfos() const;

  constexpr void __cordl_internal_set__basicEventTrackInfos(
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
          value);

  constexpr void __cordl_internal_set__environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set__eventBoxGroupPageInfos(::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* value);

  /// @brief Method .ctor, addr 0x224e818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_basicEventTrackInfos, addr 0x224e808, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  get_basicEventTrackInfos();

  /// @brief Method get_environmentInfo, addr 0x224e800, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> get_environmentInfo();

  /// @brief Method get_eventBoxGroupPageInfos, addr 0x224e810, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* get_eventBoxGroupPageInfos();

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

  /// @brief Field _environmentInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____environmentInfo;

  /// @brief Field _basicEventTrackInfos, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
      ____basicEventTrackInfos;

  /// @brief Field _eventBoxGroupPageInfos, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* ____eventBoxGroupPageInfos;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18545 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO, ____environmentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO, ____basicEventTrackInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO, ____eventBoxGroupPageInfos) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/BasicEventTrackPage");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, "BeatSaber.TrackDefinitions",
                       "EnvironmentTracksDefinitionSO/OverrideDefaultLightAxis");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO*, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/BasicEventTrackInfo");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/EventBoxGroupPageInfo");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*, "BeatSaber.TrackDefinitions", "EnvironmentTracksDefinitionSO/EventBoxGroupTrackInfo");
