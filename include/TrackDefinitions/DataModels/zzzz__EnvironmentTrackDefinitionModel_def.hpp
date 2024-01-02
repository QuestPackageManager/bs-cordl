#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TrackDefinitions/DataModels/zzzz__EventBoxGroupType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentTrackDefinitionModel)
namespace TrackDefinitions::DataModels {
struct TrackToolbarType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo;
}
namespace TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TrackDefinitions {
class __EnvironmentTracksDefinitionSO__BasicEventTrackInfo;
}
namespace TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack;
}
namespace TrackDefinitions {
class EventTrackDefinitionSO;
}
namespace TrackDefinitions {
struct __EnvironmentTracksDefinitionSO__BasicEventTrackPage;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace TrackDefinitions::DataModels {
struct EventBoxGroupType;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
// Forward declare root types
namespace TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionModel;
}
namespace TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack;
}
namespace TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack;
}
namespace TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionModel____c;
}
// Write type traits
MARK_REF_PTR_T(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel);
MARK_REF_PTR_T(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack);
MARK_REF_PTR_T(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack);
MARK_REF_PTR_T(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c);
// Type: ::SpawnableEventBoxGroupTypeTrack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions::DataModels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16066))
// CS Name: ::EnvironmentTrackDefinitionModel::SpawnableEventBoxGroupTypeTrack*
class CORDL_TYPE __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __get_lightGroup, put = __set_lightGroup))::GlobalNamespace::LightGroupSO* lightGroup;

  /// @brief Field groupName, offset 0x18, size 0x8
  __declspec(property(get = __get_groupName, put = __set_groupName))::StringW groupName;

  /// @brief Field trackType, offset 0x20, size 0x4
  __declspec(property(get = __get_trackType, put = __set_trackType))::TrackDefinitions::DataModels::EventBoxGroupType trackType;

  constexpr ::GlobalNamespace::LightGroupSO*& __get_lightGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& __get_lightGroup() const;

  constexpr void __set_lightGroup(::GlobalNamespace::LightGroupSO* value);

  constexpr ::StringW& __get_groupName();

  constexpr ::StringW const& __get_groupName() const;

  constexpr void __set_groupName(::StringW value);

  constexpr ::TrackDefinitions::DataModels::EventBoxGroupType& __get_trackType();

  constexpr ::TrackDefinitions::DataModels::EventBoxGroupType const& __get_trackType() const;

  constexpr void __set_trackType(::TrackDefinitions::DataModels::EventBoxGroupType value);

  static inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack* New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName,
                                                                                                                             ::TrackDefinitions::DataModels::EventBoxGroupType trackType);

  /// @brief Method .ctor, addr 0x2a0c4ec, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, ::TrackDefinitions::DataModels::EventBoxGroupType trackType);

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack(__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack(__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack();

public:
  /// @brief Field lightGroup, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LightGroupSO* ___lightGroup;

  /// @brief Field groupName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___groupName;

  /// @brief Field trackType, offset: 0x20, size: 0x4, def value: None
  ::TrackDefinitions::DataModels::EventBoxGroupType ___trackType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack, 0x28>, "Size mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack, ___lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack, ___groupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack, ___trackType) == 0x20, "Offset mismatch!");

} // namespace TrackDefinitions::DataModels
// Type: ::SpawnableEventBoxGroupTrack
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions::DataModels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16067))
// CS Name: ::EnvironmentTrackDefinitionModel::SpawnableEventBoxGroupTrack*
class CORDL_TYPE __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __get_lightGroup, put = __set_lightGroup))::GlobalNamespace::LightGroupSO* lightGroup;

  /// @brief Field groupName, offset 0x18, size 0x8
  __declspec(property(get = __get_groupName, put = __set_groupName))::StringW groupName;

  /// @brief Field tracksCount, offset 0x20, size 0x4
  __declspec(property(get = __get_tracksCount, put = __set_tracksCount)) int32_t tracksCount;

  /// @brief Field eventBoxGroupTracks, offset 0x28, size 0x8
  __declspec(property(get = __get_eventBoxGroupTracks, put = __set_eventBoxGroupTracks))::System::Collections::Generic::IReadOnlyList_1<
      ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks;

  constexpr ::GlobalNamespace::LightGroupSO*& __get_lightGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& __get_lightGroup() const;

  constexpr void __set_lightGroup(::GlobalNamespace::LightGroupSO* value);

  constexpr ::StringW& __get_groupName();

  constexpr ::StringW const& __get_groupName() const;

  constexpr void __set_groupName(::StringW value);

  constexpr int32_t& __get_tracksCount();

  constexpr int32_t const& __get_tracksCount() const;

  constexpr void __set_tracksCount(int32_t value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*& __get_eventBoxGroupTracks();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*> const&
  __get_eventBoxGroupTracks() const;

  constexpr void __set_eventBoxGroupTracks(::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* value);

  static inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*
  New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
           ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks);

  /// @brief Method .ctor, addr 0x2a0c528, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightGroupSO* lightGroup, ::StringW groupName, int32_t tracksCount,
                    ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* eventBoxGroupTracks);

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack(__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack(__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack();

public:
  /// @brief Field lightGroup, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LightGroupSO* ___lightGroup;

  /// @brief Field groupName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___groupName;

  /// @brief Field tracksCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___tracksCount;

  /// @brief Field eventBoxGroupTracks, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>* ___eventBoxGroupTracks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, 0x30>, "Size mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, ___lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, ___groupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, ___tracksCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack, ___eventBoxGroupTracks) == 0x28, "Offset mismatch!");

} // namespace TrackDefinitions::DataModels
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TrackDefinitions::DataModels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16068))
// CS Name: ::EnvironmentTrackDefinitionModel::<>c*
class CORDL_TYPE __EnvironmentTrackDefinitionModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__11_1,
               put = setStaticF___9__11_1))::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* __9__11_1;

  /// @brief Field <>9__11_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_2, put = setStaticF___9__11_2))::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                      ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* __9__11_2;

  /// @brief Field <>9__11_3, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__11_3,
               put = setStaticF___9__11_3))::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::EventTrackDefinitionSO*>* __9__11_3;

  /// @brief Field <>9__11_4, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__11_4,
      put = setStaticF___9__11_4))::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                   ::TrackDefinitions::EventTrackDefinitionSO*>* __9__11_4;

  /// @brief Field <>9__11_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_5, put = setStaticF___9__11_5))::System::Func_2<
      ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* __9__11_5;

  /// @brief Field <>9__11_6, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__11_6,
               put = setStaticF___9__11_6))::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::DataModels::TrackToolbarType>* __9__11_6;

  /// @brief Field <>9__11_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_7, put = setStaticF___9__11_7))::System::Func_2<
      ::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::TrackDefinitions::DataModels::TrackToolbarType>* __9__11_7;

  /// @brief Field <>9__11_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_8,
                             put = setStaticF___9__11_8))::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                                                          ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>* __9__11_8;

  static inline void setStaticF___9(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* value);

  static inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* getStaticF___9();

  static inline void setStaticF___9__11_0(::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* value);

  static inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, bool>* getStaticF___9__11_0();

  static inline void setStaticF___9__11_1(::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* value);

  static inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::GlobalNamespace::BasicBeatmapEventType>* getStaticF___9__11_1();

  static inline void
  setStaticF___9__11_2(::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* value);

  static inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
  getStaticF___9__11_2();

  static inline void setStaticF___9__11_3(::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::EventTrackDefinitionSO*>* value);

  static inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::EventTrackDefinitionSO*>* getStaticF___9__11_3();

  static inline void
  setStaticF___9__11_4(::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                        ::TrackDefinitions::EventTrackDefinitionSO*>* value);

  static inline ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                 ::TrackDefinitions::EventTrackDefinitionSO*>*
  getStaticF___9__11_4();

  static inline void setStaticF___9__11_5(
      ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                       ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
          value);

  static inline ::System::Func_2<
      ::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
  getStaticF___9__11_5();

  static inline void setStaticF___9__11_6(::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::DataModels::TrackToolbarType>* value);

  static inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::TrackDefinitions::DataModels::TrackToolbarType>* getStaticF___9__11_6();

  static inline void
  setStaticF___9__11_7(::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                        ::TrackDefinitions::DataModels::TrackToolbarType>* value);

  static inline ::System::Func_2<::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                 ::TrackDefinitions::DataModels::TrackToolbarType>*
  getStaticF___9__11_7();

  static inline void setStaticF___9__11_8(::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                                           ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>* value);

  static inline ::System::Func_2<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*,
                                 ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*
  getStaticF___9__11_8();

  static inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c* New_ctor();

  /// @brief Method .ctor, addr 0x2a0c5d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.ctor>b__11_0, addr 0x2a0c5d8, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__11_0(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* info);

  /// @brief Method <.ctor>b__11_1, addr 0x2a0c5f8, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BasicBeatmapEventType __ctor_b__11_1(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo);

  /// @brief Method <.ctor>b__11_2, addr 0x2a0c610, size 0x8, virtual false, abstract: false, final false
  inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* __ctor_b__11_2(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo);

  /// @brief Method <.ctor>b__11_3, addr 0x2a0c618, size 0x18, virtual false, abstract: false, final false
  inline ::TrackDefinitions::EventTrackDefinitionSO* __ctor_b__11_3(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* trackInfo);

  /// @brief Method <.ctor>b__11_4, addr 0x2a0c630, size 0x9c, virtual false, abstract: false, final false
  inline ::TrackDefinitions::EventTrackDefinitionSO*
  __ctor_b__11_4(::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group);

  /// @brief Method <.ctor>b__11_5, addr 0x2a0c6cc, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  __ctor_b__11_5(::System::Linq::IGrouping_2<::TrackDefinitions::EventTrackDefinitionSO*, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group);

  /// @brief Method <.ctor>b__11_6, addr 0x2a0c714, size 0x18, virtual false, abstract: false, final false
  inline ::TrackDefinitions::DataModels::TrackToolbarType __ctor_b__11_6(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* info);

  /// @brief Method <.ctor>b__11_7, addr 0x2a0c72c, size 0x9c, virtual false, abstract: false, final false
  inline ::TrackDefinitions::DataModels::TrackToolbarType
  __ctor_b__11_7(::System::Linq::IGrouping_2<::TrackDefinitions::DataModels::TrackToolbarType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* group);

  /// @brief Method <.ctor>b__11_8, addr 0x2a0c7c8, size 0xf0, virtual false, abstract: false, final false
  inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*
  __ctor_b__11_8(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* trackInfo);

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTrackDefinitionModel____c(__EnvironmentTrackDefinitionModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTrackDefinitionModel____c(__EnvironmentTrackDefinitionModel____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTrackDefinitionModel____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c, 0x10>, "Size mismatch!");

} // namespace TrackDefinitions::DataModels
// Type: TrackDefinitions.DataModels::EnvironmentTrackDefinitionModel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions::DataModels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16069))
// CS Name: ::TrackDefinitions.DataModels::EnvironmentTrackDefinitionModel*
class CORDL_TYPE EnvironmentTrackDefinitionModel : public ::System::Object {
public:
  // Declarations
  using __c = ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c;

  using SpawnableEventBoxGroupTrack = ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack;

  using SpawnableEventBoxGroupTypeTrack = ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack;

  /// @brief Field _trackDefinition, offset 0x10, size 0x8
  __declspec(property(get = __get__trackDefinition, put = __set__trackDefinition))::TrackDefinitions::EnvironmentTracksDefinitionSO* _trackDefinition;

  /// @brief Field _beatmapTypeToTrackInfoMap, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapTypeToTrackInfoMap, put = __set__beatmapTypeToTrackInfoMap))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::BasicBeatmapEventType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* _beatmapTypeToTrackInfoMap;

  /// @brief Field _trackDefinitionToTrackInfoListMap, offset 0x20, size 0x8
  __declspec(property(get = __get__trackDefinitionToTrackInfoListMap, put = __set__trackDefinitionToTrackInfoListMap))::System::Collections::Generic::Dictionary_2<
      ::TrackDefinitions::EventTrackDefinitionSO*, ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                            ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* _trackDefinitionToTrackInfoListMap;

  /// @brief Field _trackPageToTrackInfoListMap, offset 0x28, size 0x8
  __declspec(property(get = __get__trackPageToTrackInfoListMap, put = __set__trackPageToTrackInfoListMap))::ArrayW<
      ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*> _trackPageToTrackInfoListMap;

  /// @brief Field _trackPageToTrackToolbarTypeMap, offset 0x30, size 0x8
  __declspec(property(
      get = __get__trackPageToTrackToolbarTypeMap,
      put = __set__trackPageToTrackToolbarTypeMap))::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*,
                                                            ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*>*> _trackPageToTrackToolbarTypeMap;

  /// @brief Field _visibleTrackInfos, offset 0x38, size 0x8
  __declspec(property(get = __get__visibleTrackInfos, put = __set__visibleTrackInfos))::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                               ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> _visibleTrackInfos;

  /// @brief Field _groupIdToPageMap, offset 0x40, size 0x8
  __declspec(property(get = __get__groupIdToPageMap, put = __set__groupIdToPageMap))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* _groupIdToPageMap;

  /// @brief Field _groupIdToTrackMap, offset 0x48, size 0x8
  __declspec(
      property(get = __get__groupIdToTrackMap,
               put = __set__groupIdToTrackMap))::System::Collections::Generic::Dictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* _groupIdToTrackMap;

  /// @brief Field _spawnableEventBoxGroupTracksByPageMap, offset 0x50, size 0x8
  __declspec(property(get = __get__spawnableEventBoxGroupTracksByPageMap, put = __set__spawnableEventBoxGroupTracksByPageMap))::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>* _spawnableEventBoxGroupTracksByPageMap;

  __declspec(property(get = get_basicEventTrackInfos))::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                               ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> basicEventTrackInfos;

  __declspec(property(get = get_visibleTrackInfos))::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                            ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> visibleTrackInfos;

  __declspec(property(get = get_Item))::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* Item[];

  __declspec(property(
      get = get_Item))::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> Item[];

  __declspec(property(get = get_pageCount)) int32_t pageCount;

  __declspec(property(get = get_Item))::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* Item[];

  __declspec(property(get = get_eventBoxGroupPageInfos))::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* eventBoxGroupPageInfos;

  __declspec(property(get = get_groupIdToPageMap))::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* groupIdToPageMap;

  __declspec(property(
      get = get_groupIdToTrackInfo))::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* groupIdToTrackInfo;

  __declspec(property(get = get_beatmapTypeToTrackInfoMap))::ArrayW<
      ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
      ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*> beatmapTypeToTrackInfoMap;

  constexpr ::TrackDefinitions::EnvironmentTracksDefinitionSO*& __get__trackDefinition();

  constexpr ::cordl_internals::to_const_pointer<::TrackDefinitions::EnvironmentTracksDefinitionSO*> const& __get__trackDefinition() const;

  constexpr void __set__trackDefinition(::TrackDefinitions::EnvironmentTracksDefinitionSO* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*&
  __get__beatmapTypeToTrackInfoMap();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
  __get__beatmapTypeToTrackInfoMap() const;

  constexpr void __set__beatmapTypeToTrackInfoMap(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::TrackDefinitions::EventTrackDefinitionSO*, ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                               ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*&
  __get__trackDefinitionToTrackInfoListMap();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::TrackDefinitions::EventTrackDefinitionSO*, ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                         ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*> const&
  __get__trackDefinitionToTrackInfoListMap() const;

  constexpr void __set__trackDefinitionToTrackInfoListMap(
      ::System::Collections::Generic::Dictionary_2<::TrackDefinitions::EventTrackDefinitionSO*, ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                         ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>* value);

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                     ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>&
  __get__trackPageToTrackInfoListMap();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                     ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*> const&
  __get__trackPageToTrackInfoListMap() const;

  constexpr void __set__trackPageToTrackInfoListMap(::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                                                             ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
                                                        value);

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*,
                     ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*>*>&
  __get__trackPageToTrackToolbarTypeMap();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*,
                     ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*>*> const&
  __get__trackPageToTrackToolbarTypeMap() const;

  constexpr void __set__trackPageToTrackToolbarTypeMap(::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*,
                                                                ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*>*>
                                                           value);

  constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>&
  __get__visibleTrackInfos();

  constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const&
  __get__visibleTrackInfos() const;

  constexpr void __set__visibleTrackInfos(
      ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __get__groupIdToPageMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __get__groupIdToPageMap() const;

  constexpr void __set__groupIdToPageMap(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*& __get__groupIdToTrackMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> const&
  __get__groupIdToTrackMap() const;

  constexpr void __set__groupIdToTrackMap(::System::Collections::Generic::Dictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t,
                                                         ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*&
  __get__spawnableEventBoxGroupTracksByPageMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*> const&
  __get__spawnableEventBoxGroupTracksByPageMap() const;

  constexpr void __set__spawnableEventBoxGroupTracksByPageMap(
      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*
          value);

  static inline ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* New_ctor(::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  /// @brief Method .ctor, addr 0x2a0b070, size 0xec0, virtual false, abstract: false, final false
  inline void _ctor(::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  /// @brief Method get_basicEventTrackInfos, addr 0x2a0bf30, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  get_basicEventTrackInfos();

  /// @brief Method get_visibleTrackInfos, addr 0x2a0bf4c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  get_visibleTrackInfos();

  /// @brief Method get_Item, addr 0x2a0bf54, size 0x70, virtual false, abstract: false, final false
  inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* get_Item(::GlobalNamespace::BasicBeatmapEventType type);

  /// @brief Method get_Item, addr 0x2a0bfc4, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>
  get_Item(::TrackDefinitions::EventTrackDefinitionSO* trackDefinition);

  /// @brief Method get_pageCount, addr 0x2a0c01c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_pageCount();

  /// @brief Method get_Item, addr 0x2a0c038, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*
  get_Item(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage page);

  /// @brief Method GetToolbarTypesOnPage, addr 0x2a0c068, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>* GetToolbarTypesOnPage(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage page);

  /// @brief Method get_eventBoxGroupPageInfos, addr 0x2a0c098, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* get_eventBoxGroupPageInfos();

  /// @brief Method get_groupIdToPageMap, addr 0x2a0c0b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, int32_t>* get_groupIdToPageMap();

  /// @brief Method get_groupIdToTrackInfo, addr 0x2a0c0bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* get_groupIdToTrackInfo();

  /// @brief Method GetSpawnableEventBoxGroupTracks, addr 0x2a0c0c4, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>* GetSpawnableEventBoxGroupTracks(int32_t pageId);

  /// @brief Method get_beatmapTypeToTrackInfoMap, addr 0x2a0c198, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
                  ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
  get_beatmapTypeToTrackInfoMap();

  /// @brief Method GetSpawnableEventBoxGroupTypeTracksForTrackInfo, addr 0x2a0c1a0, size 0x34c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*>*
  GetSpawnableEventBoxGroupTypeTracksForTrackInfo(::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* trackInfo);

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTrackDefinitionModel(EnvironmentTrackDefinitionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTrackDefinitionModel(EnvironmentTrackDefinitionModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTrackDefinitionModel();

public:
  /// @brief Field _trackDefinition, offset: 0x10, size: 0x8, def value: None
  ::TrackDefinitions::EnvironmentTracksDefinitionSO* ____trackDefinition;

  /// @brief Field _beatmapTypeToTrackInfoMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BasicBeatmapEventType, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>* ____beatmapTypeToTrackInfoMap;

  /// @brief Field _trackDefinitionToTrackInfoListMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::TrackDefinitions::EventTrackDefinitionSO*, ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,
                                                                                                     ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>*
      ____trackDefinitionToTrackInfoListMap;

  /// @brief Field _trackPageToTrackInfoListMap, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*,
           ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>*>
      ____trackPageToTrackInfoListMap;

  /// @brief Field _trackPageToTrackToolbarTypeMap, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*,
           ::Array<::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::TrackToolbarType>*>*>
      ____trackPageToTrackToolbarTypeMap;

  /// @brief Field _visibleTrackInfos, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*, ::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> ____visibleTrackInfos;

  /// @brief Field _groupIdToPageMap, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ____groupIdToPageMap;

  /// @brief Field _groupIdToTrackMap, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* ____groupIdToTrackMap;

  /// @brief Field _spawnableEventBoxGroupTracksByPageMap, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*>*>*
      ____spawnableEventBoxGroupTracksByPageMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, 0x58>, "Size mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____trackDefinition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____beatmapTypeToTrackInfoMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____trackDefinitionToTrackInfoListMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____trackPageToTrackInfoListMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____trackPageToTrackToolbarTypeMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____visibleTrackInfos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____groupIdToPageMap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____groupIdToTrackMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel, ____spawnableEventBoxGroupTracksByPageMap) == 0x50, "Offset mismatch!");

} // namespace TrackDefinitions::DataModels
NEED_NO_BOX(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*, "TrackDefinitions.DataModels", "EnvironmentTrackDefinitionModel");
NEED_NO_BOX(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTrack*, "TrackDefinitions.DataModels",
                       "EnvironmentTrackDefinitionModel/SpawnableEventBoxGroupTrack");
NEED_NO_BOX(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel__SpawnableEventBoxGroupTypeTrack*, "TrackDefinitions.DataModels",
                       "EnvironmentTrackDefinitionModel/SpawnableEventBoxGroupTypeTrack");
NEED_NO_BOX(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionModel____c*, "TrackDefinitions.DataModels", "EnvironmentTrackDefinitionModel/<>c");
