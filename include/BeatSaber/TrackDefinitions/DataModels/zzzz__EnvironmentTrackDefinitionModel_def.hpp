#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/DataModels/EnvironmentTrackDefinitionModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__EventBoxGroupType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentTrackDefinitionModel)
namespace BeatSaber::TrackDefinitions::DataModels {
struct EventBoxGroupType;
}
namespace BeatSaber::TrackDefinitions::DataModels {
struct TrackToolbarType;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel____c;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace BeatSaber::TrackDefinitions {
class EventTrackDefinitionSO;
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
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BeatSaber::TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionModel;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel____c;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c);
// Type: ::SpawnableEventBoxGroupTypeTrack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: false
// CS Name: ::EnvironmentTrackDefinitionModel::SpawnableEventBoxGroupTypeTrack*
class CORDL_TYPE __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack : public ::System::Object {
public:
  // Declarations
  /// @brief Field groupName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_groupName, put = __cordl_internal_set_groupName)) ::StringW groupName;

  /// @brief Field lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightGroup, put = __cordl_internal_set_lightGroup)) ::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  /// @brief Field trackType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_trackType, put = __cordl_internal_set_trackType)) ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType trackType;

  static inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*
  New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType trackType);

  constexpr ::StringW const& __cordl_internal_get_groupName() const;

  constexpr ::StringW& __cordl_internal_get_groupName();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get_lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get_lightGroup();

  constexpr ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType const& __cordl_internal_get_trackType() const;

  constexpr ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType& __cordl_internal_get_trackType();

  constexpr void __cordl_internal_set_groupName(::StringW value);

  constexpr void __cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value);

  constexpr void __cordl_internal_set_trackType(::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType value);

  /// @brief Method .ctor, addr 0x2244fc8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType trackType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack(__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack(__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack const&) = delete;

  /// @brief Field lightGroup, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ___lightGroup;

  /// @brief Field groupName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___groupName;

  /// @brief Field trackType, offset: 0x20, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType ___trackType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18515 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack, ___lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack, ___groupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack, ___trackType) == 0x20, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
// Type: ::SpawnableEventBoxGroupTrack
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: false
// CS Name: ::EnvironmentTrackDefinitionModel::SpawnableEventBoxGroupTrack*
class CORDL_TYPE __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack : public ::System::Object {
public:
  // Declarations
  /// @brief Field eventBoxGroupTracks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_eventBoxGroupTracks, put = __cordl_internal_set_eventBoxGroupTracks)) ::System::Collections::Generic::IReadOnlyList_1<
      ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks;

  /// @brief Field groupName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_groupName, put = __cordl_internal_set_groupName)) ::StringW groupName;

  /// @brief Field lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightGroup, put = __cordl_internal_set_lightGroup)) ::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  /// @brief Field tracksCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_tracksCount, put = __cordl_internal_set_tracksCount)) int32_t tracksCount;

  static inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*
  New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
           ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*&
  __cordl_internal_get_eventBoxGroupTracks();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*> const&
  __cordl_internal_get_eventBoxGroupTracks() const;

  constexpr ::StringW const& __cordl_internal_get_groupName() const;

  constexpr ::StringW& __cordl_internal_get_groupName();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get_lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get_lightGroup();

  constexpr int32_t const& __cordl_internal_get_tracksCount() const;

  constexpr int32_t& __cordl_internal_get_tracksCount();

  constexpr void __cordl_internal_set_eventBoxGroupTracks(
      ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* value);

  constexpr void __cordl_internal_set_groupName(::StringW value);

  constexpr void __cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value);

  constexpr void __cordl_internal_set_tracksCount(int32_t value);

  /// @brief Method .ctor, addr 0x2245004, size 0x44, virtual false, abstract: false, final false
  inline void
  _ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
        ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack(__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack(__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack const&) = delete;

  /// @brief Field lightGroup, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ___lightGroup;

  /// @brief Field groupName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___groupName;

  /// @brief Field tracksCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___tracksCount;

  /// @brief Field eventBoxGroupTracks, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* ___eventBoxGroupTracks;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18516 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, ___lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, ___groupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, ___tracksCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, ___eventBoxGroupTracks) == 0x28, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: false
// CS Name: ::EnvironmentTrackDefinitionModel::<>c*
class CORDL_TYPE __EnvironmentTrackDefinitionModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0,
                             put = setStaticF___9__11_0)) ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__11_1,
      put = setStaticF___9__11_1)) ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* __9__11_1;

  /// @brief Field <>9__11_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_2, put = setStaticF___9__11_2)) ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                       ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* __9__11_2;

  /// @brief Field <>9__11_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_3, put = setStaticF___9__11_3)) ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                       ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* __9__11_3;

  /// @brief Field <>9__11_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_4, put = setStaticF___9__11_4)) ::System::Func_2<
      ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* __9__11_4;

  /// @brief Field <>9__11_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_5, put = setStaticF___9__11_5)) ::System::Func_2<
      ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
      __9__11_5;

  /// @brief Field <>9__11_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_6, put = setStaticF___9__11_6)) ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                       ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* __9__11_6;

  /// @brief Field <>9__11_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_7, put = setStaticF___9__11_7)) ::System::Func_2<
      ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* __9__11_7;

  /// @brief Field <>9__11_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_8,
                             put = setStaticF___9__11_8)) ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                                                           ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>* __9__11_8;

  static inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* New_ctor();

  /// @brief Method <.ctor>b__11_0, addr 0x22450ac, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__11_0(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* info);

  /// @brief Method <.ctor>b__11_1, addr 0x22450cc, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventType __ctor_b__11_1(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo);

  /// @brief Method <.ctor>b__11_2, addr 0x22450e4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*
  __ctor_b__11_2(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo);

  /// @brief Method <.ctor>b__11_3, addr 0x22450ec, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> __ctor_b__11_3(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo);

  /// @brief Method <.ctor>b__11_4, addr 0x2245104, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO> __ctor_b__11_4(
      ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group);

  /// @brief Method <.ctor>b__11_5, addr 0x22451a0, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  __ctor_b__11_5(
      ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group);

  /// @brief Method <.ctor>b__11_6, addr 0x22451e8, size 0x18, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType __ctor_b__11_6(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* info);

  /// @brief Method <.ctor>b__11_7, addr 0x2245200, size 0x9c, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType
  __ctor_b__11_7(::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group);

  /// @brief Method <.ctor>b__11_8, addr 0x224529c, size 0xe8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*
  __ctor_b__11_8(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* trackInfo);

  /// @brief Method .ctor, addr 0x22450a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* getStaticF___9();

  static inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* getStaticF___9__11_0();

  static inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* getStaticF___9__11_1();

  static inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                 ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
  getStaticF___9__11_2();

  static inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*
  getStaticF___9__11_3();

  static inline ::System::Func_2<
      ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>*
  getStaticF___9__11_4();

  static inline ::System::Func_2<
      ::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
  getStaticF___9__11_5();

  static inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
  getStaticF___9__11_6();

  static inline ::System::Func_2<
      ::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
  getStaticF___9__11_7();

  static inline ::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                 ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*
  getStaticF___9__11_8();

  static inline void setStaticF___9(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* value);

  static inline void setStaticF___9__11_1(::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* value);

  static inline void setStaticF___9__11_2(::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                           ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* value);

  static inline void
  setStaticF___9__11_3(::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* value);

  static inline void setStaticF___9__11_4(::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                                                       ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                           ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>>* value);

  static inline void setStaticF___9__11_5(::System::Func_2<::System::Linq::IGrouping_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                                                       ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                           ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                    ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* value);

  static inline void
  setStaticF___9__11_6(::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* value);

  static inline void setStaticF___9__11_7(
      ::System::Func_2<::System::Linq::IGrouping_2<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>* value);

  static inline void setStaticF___9__11_8(::System::Func_2<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                                           ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTrackDefinitionModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTrackDefinitionModel____c(__EnvironmentTrackDefinitionModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTrackDefinitionModel____c(__EnvironmentTrackDefinitionModel____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
// Type: BeatSaber.TrackDefinitions.DataModels::EnvironmentTrackDefinitionModel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: false
// CS Name: ::BeatSaber.TrackDefinitions.DataModels::EnvironmentTrackDefinitionModel*
class CORDL_TYPE EnvironmentTrackDefinitionModel : public ::System::Object {
public:
  // Declarations
  using SpawnableEventBoxGroupTrack = ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack;

  using SpawnableEventBoxGroupTypeTrack = ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack;

  using __c = ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c;

  __declspec(property(get = get_Item)) ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
      Item[];

  __declspec(property(get = get_Item)) ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* Item[];

  __declspec(property(get = get_Item)) ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* Item[];

  /// @brief Field _beatmapTypeToTrackInfoMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapTypeToTrackInfoMap, put = __cordl_internal_set__beatmapTypeToTrackInfoMap)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* _beatmapTypeToTrackInfoMap;

  /// @brief Field _groupIdToPageMap, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__groupIdToPageMap, put = __cordl_internal_set__groupIdToPageMap)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* _groupIdToPageMap;

  /// @brief Field _groupIdToTrackMap, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__groupIdToTrackMap, put = __cordl_internal_set__groupIdToTrackMap)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* _groupIdToTrackMap;

  /// @brief Field _spawnableEventBoxGroupTracksByPageMap, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnableEventBoxGroupTracksByPageMap, put = __cordl_internal_set__spawnableEventBoxGroupTracksByPageMap)) ::System::Collections::Generic::
      Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*
          _spawnableEventBoxGroupTracksByPageMap;

  /// @brief Field _trackDefinition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__trackDefinition, put = __cordl_internal_set__trackDefinition)) ::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>
      _trackDefinition;

  /// @brief Field _trackDefinitionToTrackInfoListMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trackDefinitionToTrackInfoListMap, put = __cordl_internal_set__trackDefinitionToTrackInfoListMap)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
      _trackDefinitionToTrackInfoListMap;

  /// @brief Field _trackPageToTrackInfoListMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__trackPageToTrackInfoListMap, put = __cordl_internal_set__trackPageToTrackInfoListMap)) ::ArrayW<
      ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
      _trackPageToTrackInfoListMap;

  /// @brief Field _trackPageToTrackToolbarTypeMap, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__trackPageToTrackToolbarTypeMap,
      put = __cordl_internal_set__trackPageToTrackToolbarTypeMap)) ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
                                                                            ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>*>
      _trackPageToTrackToolbarTypeMap;

  /// @brief Field _visibleTrackInfos, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__visibleTrackInfos,
                      put = __cordl_internal_set__visibleTrackInfos)) ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                               ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
      _visibleTrackInfos;

  __declspec(property(get = get_basicEventTrackInfos)) ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
      basicEventTrackInfos;

  __declspec(property(
      get = get_beatmapTypeToTrackInfoMap)) ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                     ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
      beatmapTypeToTrackInfoMap;

  __declspec(property(
      get = get_eventBoxGroupPageInfos)) ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* eventBoxGroupPageInfos;

  __declspec(property(get = get_groupIdToPageMap)) ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* groupIdToPageMap;

  __declspec(property(
      get = get_groupIdToTrackInfo)) ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*
      groupIdToTrackInfo;

  __declspec(property(get = get_pageCount)) int32_t pageCount;

  __declspec(property(get = get_visibleTrackInfos)) ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                             ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
      visibleTrackInfos;

  /// @brief Method GetSpawnableEventBoxGroupTracks, addr 0x2244bb8, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*
  GetSpawnableEventBoxGroupTracks(int32_t pageId);

  /// @brief Method GetSpawnableEventBoxGroupTypeTracksForTrackInfo, addr 0x2244c90, size 0x338, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*
  GetSpawnableEventBoxGroupTypeTracksForTrackInfo(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* trackInfo);

  /// @brief Method GetToolbarTypesOnPage, addr 0x2244b5c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*
  GetToolbarTypesOnPage(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage page);

  static inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* New_ctor(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*&
  __cordl_internal_get__beatmapTypeToTrackInfoMap();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
  __cordl_internal_get__beatmapTypeToTrackInfoMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get__groupIdToPageMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __cordl_internal_get__groupIdToPageMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*& __cordl_internal_get__groupIdToTrackMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> const&
  __cordl_internal_get__groupIdToTrackMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*&
  __cordl_internal_get__spawnableEventBoxGroupTracksByPageMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*> const&
  __cordl_internal_get__spawnableEventBoxGroupTracksByPageMap() const;

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO> const& __cordl_internal_get__trackDefinition() const;

  constexpr ::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>& __cordl_internal_get__trackDefinition();

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*&
  __cordl_internal_get__trackDefinitionToTrackInfoListMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>, ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*> const&
  __cordl_internal_get__trackDefinitionToTrackInfoListMap() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                     ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*> const&
  __cordl_internal_get__trackPageToTrackInfoListMap() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                     ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>&
  __cordl_internal_get__trackPageToTrackInfoListMap();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
                     ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>*> const&
  __cordl_internal_get__trackPageToTrackToolbarTypeMap() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
                     ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>*>&
  __cordl_internal_get__trackPageToTrackToolbarTypeMap();

  constexpr ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                     ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
  __cordl_internal_get__visibleTrackInfos() const;

  constexpr ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                     ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>&
  __cordl_internal_get__visibleTrackInfos();

  constexpr void __cordl_internal_set__beatmapTypeToTrackInfoMap(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* value);

  constexpr void __cordl_internal_set__groupIdToPageMap(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void
  __cordl_internal_set__groupIdToTrackMap(::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* value);

  constexpr void __cordl_internal_set__spawnableEventBoxGroupTracksByPageMap(
      ::System::Collections::Generic::Dictionary_2<
          int32_t, ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>* value);

  constexpr void __cordl_internal_set__trackDefinition(::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO> value);

  constexpr void __cordl_internal_set__trackDefinitionToTrackInfoListMap(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                                   ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                            ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* value);

  constexpr void
  __cordl_internal_set__trackPageToTrackInfoListMap(::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                             ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
                                                        value);

  constexpr void __cordl_internal_set__trackPageToTrackToolbarTypeMap(::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
                                                                               ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>*>
                                                                          value);

  constexpr void __cordl_internal_set__visibleTrackInfos(
      ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
          value);

  /// @brief Method .ctor, addr 0x2243b94, size 0xe90, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  /// @brief Method get_Item, addr 0x2244ab8, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  get_Item(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO* trackDefinition);

  /// @brief Method get_Item, addr 0x2244a48, size 0x70, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* get_Item(::GlobalNamespace::BasicBeatmapEventType type);

  /// @brief Method get_Item, addr 0x2244b2c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
  get_Item(::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage page);

  /// @brief Method get_basicEventTrackInfos, addr 0x2244a24, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  get_basicEventTrackInfos();

  /// @brief Method get_beatmapTypeToTrackInfoMap, addr 0x2244c88, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                  ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
  get_beatmapTypeToTrackInfoMap();

  /// @brief Method get_eventBoxGroupPageInfos, addr 0x2244b8c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* get_eventBoxGroupPageInfos();

  /// @brief Method get_groupIdToPageMap, addr 0x2244ba8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* get_groupIdToPageMap();

  /// @brief Method get_groupIdToTrackInfo, addr 0x2244bb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* get_groupIdToTrackInfo();

  /// @brief Method get_pageCount, addr 0x2244b10, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_pageCount();

  /// @brief Method get_visibleTrackInfos, addr 0x2244a40, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  get_visibleTrackInfos();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTrackDefinitionModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTrackDefinitionModel(EnvironmentTrackDefinitionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTrackDefinitionModel(EnvironmentTrackDefinitionModel const&) = delete;

  /// @brief Field _trackDefinition, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO> ____trackDefinition;

  /// @brief Field _beatmapTypeToTrackInfoMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
      ____beatmapTypeToTrackInfoMap;

  /// @brief Field _trackDefinitionToTrackInfoListMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO>,
                                               ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                        ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* ____trackDefinitionToTrackInfoListMap;

  /// @brief Field _trackPageToTrackInfoListMap, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
           ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
      ____trackPageToTrackInfoListMap;

  /// @brief Field _trackPageToTrackToolbarTypeMap, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*,
           ::Array<::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType>*>*>
      ____trackPageToTrackToolbarTypeMap;

  /// @brief Field _visibleTrackInfos, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
      ____visibleTrackInfos;

  /// @brief Field _groupIdToPageMap, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ____groupIdToPageMap;

  /// @brief Field _groupIdToTrackMap, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::BeatSaber::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* ____groupIdToTrackMap;

  /// @brief Field _spawnableEventBoxGroupTracksByPageMap, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t,
                                               ::System::Collections::Generic::List_1<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*
      ____spawnableEventBoxGroupTracksByPageMap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, 0x58>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____trackDefinition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____beatmapTypeToTrackInfoMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____trackDefinitionToTrackInfoListMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____trackPageToTrackInfoListMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____trackPageToTrackToolbarTypeMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____visibleTrackInfos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____groupIdToPageMap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____groupIdToTrackMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____spawnableEventBoxGroupTracksByPageMap) == 0x50, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
NEED_NO_BOX(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*, "BeatSaber.TrackDefinitions.DataModels", "EnvironmentTrackDefinitionModel");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*, "BeatSaber.TrackDefinitions.DataModels",
                       "EnvironmentTrackDefinitionModel/SpawnableEventBoxGroupTrack");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*, "BeatSaber.TrackDefinitions.DataModels",
                       "EnvironmentTrackDefinitionModel/SpawnableEventBoxGroupTypeTrack");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*, "BeatSaber.TrackDefinitions.DataModels", "EnvironmentTrackDefinitionModel/<>c");
