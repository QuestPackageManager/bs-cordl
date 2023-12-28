#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentTracksDefinitionSO)
namespace TrackDefinitions {
struct __EnvironmentTracksDefinitionSO__BasicEventTrackPage;
}
namespace TrackDefinitions {
struct __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__BasicEventTrackInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace TrackDefinitions {
class EventTrackDefinitionSO;
}
namespace TrackDefinitions::DataModels {
struct TrackToolbarType;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace TrackDefinitions {
class LightGroupDuplicationGroup;
}
// Forward declare root types
namespace TrackDefinitions {
struct __EnvironmentTracksDefinitionSO__BasicEventTrackPage;
}
namespace TrackDefinitions {
struct __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis;
}
namespace TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__BasicEventTrackInfo;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo;
}
// Write type traits
MARK_VAL_T(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage);
MARK_VAL_T(::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis);
MARK_REF_PTR_T(::TrackDefinitions::EnvironmentTracksDefinitionSO);
MARK_REF_PTR_T(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo);
MARK_REF_PTR_T(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo);
MARK_REF_PTR_T(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo);
// Type: ::BasicEventTrackPage
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16056))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentTracksDefinitionSO__BasicEventTrackPage(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__BasicEventTrackPage();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Page1 value: static_cast<int32_t>(0x0)
  static ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const Page1;

  /// @brief Field Page2 value: static_cast<int32_t>(0x1)
  static ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const Page2;

  /// @brief Field Count value: static_cast<int32_t>(0x2)
  static ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, 0x4>, "Size mismatch!");

} // namespace TrackDefinitions
// Type: ::OverrideDefaultLightAxis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16057))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoOverride value: static_cast<int32_t>(0x0)
  static ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const NoOverride;

  /// @brief Field X value: static_cast<int32_t>(0x1)
  static ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const X;

  /// @brief Field Y value: static_cast<int32_t>(0x2)
  static ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x3)
  static ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const Z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, 0x4>, "Size mismatch!");

} // namespace TrackDefinitions
// Type: ::BasicEventTrackInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16073)), TypeDefinitionIndex(TypeDefinitionIndex(16056)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(14724))} Self: TypeDefinitionIndex(TypeDefinitionIndex(16058)) CS Name: ::EnvironmentTracksDefinitionSO::BasicEventTrackInfo*
class CORDL_TYPE __EnvironmentTracksDefinitionSO__BasicEventTrackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _trackName, offset 0x10, size 0x8
  __declspec(property(get = __get__trackName, put = __set__trackName))::StringW _trackName;

  /// @brief Field _beatmapEventType, offset 0x18, size 0x4
  __declspec(property(get = __get__beatmapEventType, put = __set__beatmapEventType))::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _trackToolbarType, offset 0x1c, size 0x4
  __declspec(property(get = __get__trackToolbarType, put = __set__trackToolbarType))::TrackDefinitions::DataModels::TrackToolbarType _trackToolbarType;

  /// @brief Field _trackDefinition, offset 0x20, size 0x8
  __declspec(property(get = __get__trackDefinition, put = __set__trackDefinition))::TrackDefinitions::EventTrackDefinitionSO* _trackDefinition;

  /// @brief Field _basicEventTrackPage, offset 0x28, size 0x4
  __declspec(property(get = __get__basicEventTrackPage, put = __set__basicEventTrackPage))::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage _basicEventTrackPage;

  __declspec(property(get = get_trackName))::StringW trackName;

  __declspec(property(get = get_basicBeatmapEventType))::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType;

  __declspec(property(get = get_trackToolbarType))::TrackDefinitions::DataModels::TrackToolbarType trackToolbarType;

  __declspec(property(get = get_trackDefinition))::TrackDefinitions::EventTrackDefinitionSO* trackDefinition;

  __declspec(property(get = get_basicEventTrackPage))::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage basicEventTrackPage;

  constexpr ::StringW& __get__trackName();

  constexpr ::StringW const& __get__trackName() const;

  constexpr void __set__trackName(::StringW value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__beatmapEventType();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__beatmapEventType() const;

  constexpr void __set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::TrackDefinitions::DataModels::TrackToolbarType& __get__trackToolbarType();

  constexpr ::TrackDefinitions::DataModels::TrackToolbarType const& __get__trackToolbarType() const;

  constexpr void __set__trackToolbarType(::TrackDefinitions::DataModels::TrackToolbarType value);

  constexpr ::TrackDefinitions::EventTrackDefinitionSO*& __get__trackDefinition();

  constexpr ::cordl_internals::to_const_pointer<::TrackDefinitions::EventTrackDefinitionSO*> const& __get__trackDefinition() const;

  constexpr void __set__trackDefinition(::TrackDefinitions::EventTrackDefinitionSO* value);

  constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage& __get__basicEventTrackPage();

  constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const& __get__basicEventTrackPage() const;

  constexpr void __set__basicEventTrackPage(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage value);

  /// @brief Method get_trackName addr 0x2a0ad9c size 0x8 virtual false final false
  inline ::StringW get_trackName();

  /// @brief Method get_basicBeatmapEventType addr 0x2a0ada4 size 0x8 virtual false final false
  inline ::GlobalNamespace::BasicBeatmapEventType get_basicBeatmapEventType();

  /// @brief Method get_trackToolbarType addr 0x2a0adac size 0x8 virtual false final false
  inline ::TrackDefinitions::DataModels::TrackToolbarType get_trackToolbarType();

  /// @brief Method get_trackDefinition addr 0x2a0adb4 size 0x8 virtual false final false
  inline ::TrackDefinitions::EventTrackDefinitionSO* get_trackDefinition();

  /// @brief Method get_basicEventTrackPage addr 0x2a0adbc size 0x8 virtual false final false
  inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage get_basicEventTrackPage();

  static inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* New_ctor();

  /// @brief Method .ctor addr 0x2a0adc4 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__BasicEventTrackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTracksDefinitionSO__BasicEventTrackInfo(__EnvironmentTracksDefinitionSO__BasicEventTrackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__BasicEventTrackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTracksDefinitionSO__BasicEventTrackInfo(__EnvironmentTracksDefinitionSO__BasicEventTrackInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__BasicEventTrackInfo();

public:
  /// @brief Field _trackName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____trackName;

  /// @brief Field _beatmapEventType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _trackToolbarType, offset: 0x1c, size: 0x4, def value: None
  ::TrackDefinitions::DataModels::TrackToolbarType ____trackToolbarType;

  /// @brief Field _trackDefinition, offset: 0x20, size: 0x8, def value: None
  ::TrackDefinitions::EventTrackDefinitionSO* ____trackDefinition;

  /// @brief Field _basicEventTrackPage, offset: 0x28, size: 0x4, def value: None
  ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage ____basicEventTrackPage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo, 0x30>, "Size mismatch!");

} // namespace TrackDefinitions
// Type: ::EventBoxGroupPageInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16059))
// CS Name: ::EnvironmentTracksDefinitionSO::EventBoxGroupPageInfo*
class CORDL_TYPE __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventBoxGroupPageName, offset 0x10, size 0x8
  __declspec(property(get = __get__eventBoxGroupPageName, put = __set__eventBoxGroupPageName))::StringW _eventBoxGroupPageName;

  /// @brief Field _eventBoxGroupTrackInfos, offset 0x18, size 0x8
  __declspec(
      property(get = __get__eventBoxGroupTrackInfos,
               put = __set__eventBoxGroupTrackInfos))::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* _eventBoxGroupTrackInfos;

  __declspec(property(get = get_eventBoxGroupPageName))::StringW eventBoxGroupPageName;

  __declspec(property(get = get_eventBoxGroupTrackInfos))::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* eventBoxGroupTrackInfos;

  constexpr ::StringW& __get__eventBoxGroupPageName();

  constexpr ::StringW const& __get__eventBoxGroupPageName() const;

  constexpr void __set__eventBoxGroupPageName(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*& __get__eventBoxGroupTrackInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> const&
  __get__eventBoxGroupTrackInfos() const;

  constexpr void __set__eventBoxGroupTrackInfos(::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* value);

  /// @brief Method get_eventBoxGroupPageName addr 0x2a0ae1c size 0x8 virtual false final false
  inline ::StringW get_eventBoxGroupPageName();

  /// @brief Method get_eventBoxGroupTrackInfos addr 0x2a0ae24 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* get_eventBoxGroupTrackInfos();

  static inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo* New_ctor();

  /// @brief Method .ctor addr 0x2a0ae2c size 0xa4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo(__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo(__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo();

public:
  /// @brief Field _eventBoxGroupPageName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____eventBoxGroupPageName;

  /// @brief Field _eventBoxGroupTrackInfos, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* ____eventBoxGroupTrackInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo, 0x20>, "Size mismatch!");

} // namespace TrackDefinitions
// Type: ::EventBoxGroupTrackInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16057)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16060))
// CS Name: ::EnvironmentTracksDefinitionSO::EventBoxGroupTrackInfo*
class CORDL_TYPE __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _groupName, offset 0x10, size 0x8
  __declspec(property(get = __get__groupName, put = __set__groupName))::StringW _groupName;

  /// @brief Field _lightGroup, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroup, put = __set__lightGroup))::GlobalNamespace::LightGroupSO* _lightGroup;

  /// @brief Field _showColorTrack, offset 0x20, size 0x1
  __declspec(property(get = __get__showColorTrack, put = __set__showColorTrack)) bool _showColorTrack;

  /// @brief Field _showRotationXTrack, offset 0x21, size 0x1
  __declspec(property(get = __get__showRotationXTrack, put = __set__showRotationXTrack)) bool _showRotationXTrack;

  /// @brief Field _showRotationYTrack, offset 0x22, size 0x1
  __declspec(property(get = __get__showRotationYTrack, put = __set__showRotationYTrack)) bool _showRotationYTrack;

  /// @brief Field _showRotationZTrack, offset 0x23, size 0x1
  __declspec(property(get = __get__showRotationZTrack, put = __set__showRotationZTrack)) bool _showRotationZTrack;

  /// @brief Field _overrideDefaultRotationAxis, offset 0x24, size 0x4
  __declspec(property(get = __get__overrideDefaultRotationAxis,
                      put = __set__overrideDefaultRotationAxis))::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis _overrideDefaultRotationAxis;

  /// @brief Field _showTranslationXTrack, offset 0x28, size 0x1
  __declspec(property(get = __get__showTranslationXTrack, put = __set__showTranslationXTrack)) bool _showTranslationXTrack;

  /// @brief Field _showTranslationYTrack, offset 0x29, size 0x1
  __declspec(property(get = __get__showTranslationYTrack, put = __set__showTranslationYTrack)) bool _showTranslationYTrack;

  /// @brief Field _showTranslationZTrack, offset 0x2a, size 0x1
  __declspec(property(get = __get__showTranslationZTrack, put = __set__showTranslationZTrack)) bool _showTranslationZTrack;

  /// @brief Field _overrideDefaultTranslationAxis, offset 0x2c, size 0x4
  __declspec(property(get = __get__overrideDefaultTranslationAxis,
                      put = __set__overrideDefaultTranslationAxis))::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis _overrideDefaultTranslationAxis;

  /// @brief Field _showFloatFxTrack, offset 0x30, size 0x1
  __declspec(property(get = __get__showFloatFxTrack, put = __set__showFloatFxTrack)) bool _showFloatFxTrack;

  /// @brief Field _enableDuplicate, offset 0x31, size 0x1
  __declspec(property(get = __get__enableDuplicate, put = __set__enableDuplicate)) bool _enableDuplicate;

  /// @brief Field _duplicationGroup, offset 0x38, size 0x8
  __declspec(property(get = __get__duplicationGroup, put = __set__duplicationGroup))::TrackDefinitions::LightGroupDuplicationGroup* _duplicationGroup;

  /// @brief Field _targetLightGroups, offset 0x40, size 0x8
  __declspec(property(get = __get__targetLightGroups, put = __set__targetLightGroups))::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> _targetLightGroups;

  __declspec(property(get = get_groupName, put = set_groupName))::StringW groupName;

  __declspec(property(get = get_lightGroup, put = set_lightGroup))::GlobalNamespace::LightGroupSO* lightGroup;

  __declspec(property(get = get_showColorTrack)) bool showColorTrack;

  __declspec(property(get = get_showRotationTrack)) bool showRotationTrack;

  __declspec(property(get = get_showTranslationTrack)) bool showTranslationTrack;

  __declspec(property(get = get_showRotationXTrack)) bool showRotationXTrack;

  __declspec(property(get = get_showRotationYTrack)) bool showRotationYTrack;

  __declspec(property(get = get_showRotationZTrack)) bool showRotationZTrack;

  __declspec(property(get = get_overrideDefaultRotationAxis))::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis overrideDefaultRotationAxis;

  __declspec(property(get = get_showTranslationXTrack)) bool showTranslationXTrack;

  __declspec(property(get = get_showTranslationYTrack)) bool showTranslationYTrack;

  __declspec(property(get = get_showTranslationZTrack)) bool showTranslationZTrack;

  __declspec(property(get = get_overrideDefaultTranslationAxis))::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis overrideDefaultTranslationAxis;

  __declspec(property(get = get_showFloatFxTrack)) bool showFloatFxTrack;

  __declspec(property(get = get_enableDuplicate)) bool enableDuplicate;

  __declspec(property(get = get_targetLightGroups))::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> targetLightGroups;

  constexpr ::StringW& __get__groupName();

  constexpr ::StringW const& __get__groupName() const;

  constexpr void __set__groupName(::StringW value);

  constexpr ::GlobalNamespace::LightGroupSO*& __get__lightGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& __get__lightGroup() const;

  constexpr void __set__lightGroup(::GlobalNamespace::LightGroupSO* value);

  constexpr bool& __get__showColorTrack();

  constexpr bool const& __get__showColorTrack() const;

  constexpr void __set__showColorTrack(bool value);

  constexpr bool& __get__showRotationXTrack();

  constexpr bool const& __get__showRotationXTrack() const;

  constexpr void __set__showRotationXTrack(bool value);

  constexpr bool& __get__showRotationYTrack();

  constexpr bool const& __get__showRotationYTrack() const;

  constexpr void __set__showRotationYTrack(bool value);

  constexpr bool& __get__showRotationZTrack();

  constexpr bool const& __get__showRotationZTrack() const;

  constexpr void __set__showRotationZTrack(bool value);

  constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis& __get__overrideDefaultRotationAxis();

  constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const& __get__overrideDefaultRotationAxis() const;

  constexpr void __set__overrideDefaultRotationAxis(::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis value);

  constexpr bool& __get__showTranslationXTrack();

  constexpr bool const& __get__showTranslationXTrack() const;

  constexpr void __set__showTranslationXTrack(bool value);

  constexpr bool& __get__showTranslationYTrack();

  constexpr bool const& __get__showTranslationYTrack() const;

  constexpr void __set__showTranslationYTrack(bool value);

  constexpr bool& __get__showTranslationZTrack();

  constexpr bool const& __get__showTranslationZTrack() const;

  constexpr void __set__showTranslationZTrack(bool value);

  constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis& __get__overrideDefaultTranslationAxis();

  constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const& __get__overrideDefaultTranslationAxis() const;

  constexpr void __set__overrideDefaultTranslationAxis(::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis value);

  constexpr bool& __get__showFloatFxTrack();

  constexpr bool const& __get__showFloatFxTrack() const;

  constexpr void __set__showFloatFxTrack(bool value);

  constexpr bool& __get__enableDuplicate();

  constexpr bool const& __get__enableDuplicate() const;

  constexpr void __set__enableDuplicate(bool value);

  constexpr ::TrackDefinitions::LightGroupDuplicationGroup*& __get__duplicationGroup();

  constexpr ::cordl_internals::to_const_pointer<::TrackDefinitions::LightGroupDuplicationGroup*> const& __get__duplicationGroup() const;

  constexpr void __set__duplicationGroup(::TrackDefinitions::LightGroupDuplicationGroup* value);

  constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*>& __get__targetLightGroups();

  constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> const& __get__targetLightGroups() const;

  constexpr void __set__targetLightGroups(::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> value);

  /// @brief Method get_groupName addr 0x2a0aed0 size 0x8 virtual false final false
  inline ::StringW get_groupName();

  /// @brief Method set_groupName addr 0x2a0aed8 size 0x8 virtual false final false
  inline void set_groupName(::StringW value);

  /// @brief Method get_lightGroup addr 0x2a0aee0 size 0x8 virtual false final false
  inline ::GlobalNamespace::LightGroupSO* get_lightGroup();

  /// @brief Method set_lightGroup addr 0x2a0aee8 size 0x8 virtual false final false
  inline void set_lightGroup(::GlobalNamespace::LightGroupSO* value);

  /// @brief Method get_showColorTrack addr 0x2a0aef0 size 0x8 virtual false final false
  inline bool get_showColorTrack();

  /// @brief Method get_showRotationTrack addr 0x2a0aef8 size 0x28 virtual false final false
  inline bool get_showRotationTrack();

  /// @brief Method get_showTranslationTrack addr 0x2a0af20 size 0x28 virtual false final false
  inline bool get_showTranslationTrack();

  /// @brief Method get_showRotationXTrack addr 0x2a0af48 size 0x8 virtual false final false
  inline bool get_showRotationXTrack();

  /// @brief Method get_showRotationYTrack addr 0x2a0af50 size 0x8 virtual false final false
  inline bool get_showRotationYTrack();

  /// @brief Method get_showRotationZTrack addr 0x2a0af58 size 0x8 virtual false final false
  inline bool get_showRotationZTrack();

  /// @brief Method get_overrideDefaultRotationAxis addr 0x2a0af60 size 0x8 virtual false final false
  inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis get_overrideDefaultRotationAxis();

  /// @brief Method get_showTranslationXTrack addr 0x2a0af68 size 0x8 virtual false final false
  inline bool get_showTranslationXTrack();

  /// @brief Method get_showTranslationYTrack addr 0x2a0af70 size 0x8 virtual false final false
  inline bool get_showTranslationYTrack();

  /// @brief Method get_showTranslationZTrack addr 0x2a0af78 size 0x8 virtual false final false
  inline bool get_showTranslationZTrack();

  /// @brief Method get_overrideDefaultTranslationAxis addr 0x2a0af80 size 0x8 virtual false final false
  inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis get_overrideDefaultTranslationAxis();

  /// @brief Method get_showFloatFxTrack addr 0x2a0af88 size 0x8 virtual false final false
  inline bool get_showFloatFxTrack();

  /// @brief Method get_enableDuplicate addr 0x2a0af90 size 0x8 virtual false final false
  inline bool get_enableDuplicate();

  /// @brief Method get_targetLightGroups addr 0x2a0af98 size 0x84 virtual false final false
  inline ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> get_targetLightGroups();

  static inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* New_ctor();

  /// @brief Method .ctor addr 0x2a0b01c size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo(__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo(__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo();

public:
  /// @brief Field _groupName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____groupName;

  /// @brief Field _lightGroup, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LightGroupSO* ____lightGroup;

  /// @brief Field _showColorTrack, offset: 0x20, size: 0x1, def value: None
  bool ____showColorTrack;

  /// @brief Field _showRotationXTrack, offset: 0x21, size: 0x1, def value: None
  bool ____showRotationXTrack;

  /// @brief Field _showRotationYTrack, offset: 0x22, size: 0x1, def value: None
  bool ____showRotationYTrack;

  /// @brief Field _showRotationZTrack, offset: 0x23, size: 0x1, def value: None
  bool ____showRotationZTrack;

  /// @brief Field _overrideDefaultRotationAxis, offset: 0x24, size: 0x4, def value: None
  ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis ____overrideDefaultRotationAxis;

  /// @brief Field _showTranslationXTrack, offset: 0x28, size: 0x1, def value: None
  bool ____showTranslationXTrack;

  /// @brief Field _showTranslationYTrack, offset: 0x29, size: 0x1, def value: None
  bool ____showTranslationYTrack;

  /// @brief Field _showTranslationZTrack, offset: 0x2a, size: 0x1, def value: None
  bool ____showTranslationZTrack;

  /// @brief Field _overrideDefaultTranslationAxis, offset: 0x2c, size: 0x4, def value: None
  ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis ____overrideDefaultTranslationAxis;

  /// @brief Field _showFloatFxTrack, offset: 0x30, size: 0x1, def value: None
  bool ____showFloatFxTrack;

  /// @brief Field _enableDuplicate, offset: 0x31, size: 0x1, def value: None
  bool ____enableDuplicate;

  /// @brief Field _duplicationGroup, offset: 0x38, size: 0x8, def value: None
  ::TrackDefinitions::LightGroupDuplicationGroup* ____duplicationGroup;

  /// @brief Field _targetLightGroups, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> ____targetLightGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo, 0x48>, "Size mismatch!");

} // namespace TrackDefinitions
// Type: TrackDefinitions::EnvironmentTracksDefinitionSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16061))
// CS Name: ::TrackDefinitions::EnvironmentTracksDefinitionSO*
class CORDL_TYPE EnvironmentTracksDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using EventBoxGroupTrackInfo = ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo;

  using EventBoxGroupPageInfo = ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo;

  using BasicEventTrackInfo = ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo;

  using OverrideDefaultLightAxis = ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis;

  using BasicEventTrackPage = ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage;

  /// @brief Field _environmentInfo, offset 0x18, size 0x8
  __declspec(property(get = __get__environmentInfo, put = __set__environmentInfo))::GlobalNamespace::EnvironmentInfoSO* _environmentInfo;

  /// @brief Field _basicEventTrackInfos, offset 0x20, size 0x8
  __declspec(property(get = __get__basicEventTrackInfos,
                      put = __set__basicEventTrackInfos))::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                  ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> _basicEventTrackInfos;

  /// @brief Field _eventBoxGroupPageInfos, offset 0x28, size 0x8
  __declspec(property(get = __get__eventBoxGroupPageInfos,
                      put = __set__eventBoxGroupPageInfos))::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* _eventBoxGroupPageInfos;

  __declspec(property(get = get_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  __declspec(property(get = get_basicEventTrackInfos))::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                               ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> basicEventTrackInfos;

  __declspec(property(get = get_eventBoxGroupPageInfos))::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* eventBoxGroupPageInfos;

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__environmentInfo() const;

  constexpr void __set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>&
  __get__basicEventTrackInfos();

  constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
  __get__basicEventTrackInfos() const;

  constexpr void __set__basicEventTrackInfos(
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> value);

  constexpr ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*& __get__eventBoxGroupPageInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*> const&
  __get__eventBoxGroupPageInfos() const;

  constexpr void __set__eventBoxGroupPageInfos(::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* value);

  /// @brief Method get_environmentInfo addr 0x2a0ad7c size 0x8 virtual false final false
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_basicEventTrackInfos addr 0x2a0ad84 size 0x8 virtual false final false
  inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  get_basicEventTrackInfos();

  /// @brief Method get_eventBoxGroupPageInfos addr 0x2a0ad8c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* get_eventBoxGroupPageInfos();

  static inline ::TrackDefinitions::EnvironmentTracksDefinitionSO* New_ctor();

  /// @brief Method .ctor addr 0x2a0ad94 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTracksDefinitionSO(EnvironmentTracksDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTracksDefinitionSO(EnvironmentTracksDefinitionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTracksDefinitionSO();

public:
  /// @brief Field _environmentInfo, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____environmentInfo;

  /// @brief Field _basicEventTrackInfos, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> ____basicEventTrackInfos;

  /// @brief Field _eventBoxGroupPageInfos, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* ____eventBoxGroupPageInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::EnvironmentTracksDefinitionSO, 0x30>, "Size mismatch!");

} // namespace TrackDefinitions
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, "TrackDefinitions", "EnvironmentTracksDefinitionSO/BasicEventTrackPage");
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, "TrackDefinitions", "EnvironmentTracksDefinitionSO/OverrideDefaultLightAxis");
NEED_NO_BOX(::TrackDefinitions::EnvironmentTracksDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::EnvironmentTracksDefinitionSO*, "TrackDefinitions", "EnvironmentTracksDefinitionSO");
NEED_NO_BOX(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, "TrackDefinitions", "EnvironmentTracksDefinitionSO/BasicEventTrackInfo");
NEED_NO_BOX(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*, "TrackDefinitions", "EnvironmentTracksDefinitionSO/EventBoxGroupPageInfo");
NEED_NO_BOX(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*, "TrackDefinitions", "EnvironmentTracksDefinitionSO/EventBoxGroupTrackInfo");
