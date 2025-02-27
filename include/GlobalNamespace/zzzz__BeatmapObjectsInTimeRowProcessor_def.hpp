#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectsInTimeRowProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectsInTimeRowProcessor)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor_SliderTailData;
}
namespace GlobalNamespace {
template <typename T> class BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor___c;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor_SliderTailData;
}
namespace GlobalNamespace {
template <typename T> class BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor___c;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData);
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1<T>
class CORDL_TYPE BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _items, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items)) ::System::Collections::Generic::List_1<T>* _items;

  /// @brief Field <previousTimeSliceTime>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__previousTimeSliceTime_k__BackingField,
                      put = __cordl_internal_set__previousTimeSliceTime_k__BackingField)) float_t _previousTimeSliceTime_k__BackingField;

  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time_k__BackingField, put = __cordl_internal_set__time_k__BackingField)) float_t _time_k__BackingField;

  /// @brief Field didAddItemEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didAddItemEvent,
                      put = __cordl_internal_set_didAddItemEvent)) ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* didAddItemEvent;

  /// @brief Field didFinishTimeSliceEvent, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didFinishTimeSliceEvent,
      put = __cordl_internal_set_didFinishTimeSliceEvent)) ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* didFinishTimeSliceEvent;

  /// @brief Field didStartNewTimeSliceEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartNewTimeSliceEvent,
                      put =
                          __cordl_internal_set_didStartNewTimeSliceEvent)) ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* didStartNewTimeSliceEvent;

  __declspec(property(get = get_items)) ::System::Collections::Generic::IReadOnlyList_1<T>* items;

  __declspec(property(get = get_previousTimeSliceTime, put = set_previousTimeSliceTime)) float_t previousTimeSliceTime;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method AddWithoutNotifications, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddWithoutNotifications(T item);

  /// @brief Method FinishTimeSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FinishTimeSlice(float_t nextTimeSliceTime);

  static inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>* New_ctor(int32_t capacity);

  /// @brief Method StartNewTimeSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void StartNewTimeSlice(float_t newSliceTime);

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get__items() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__items();

  constexpr float_t const& __cordl_internal_get__previousTimeSliceTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__previousTimeSliceTime_k__BackingField();

  constexpr float_t const& __cordl_internal_get__time_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__time_k__BackingField();

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* const& __cordl_internal_get_didAddItemEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>*& __cordl_internal_get_didAddItemEvent();

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* const& __cordl_internal_get_didFinishTimeSliceEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>*& __cordl_internal_get_didFinishTimeSliceEvent();

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* const& __cordl_internal_get_didStartNewTimeSliceEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>*& __cordl_internal_get_didStartNewTimeSliceEvent();

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set__previousTimeSliceTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__time_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_didAddItemEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* value);

  constexpr void __cordl_internal_set_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* value);

  constexpr void __cordl_internal_set_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method add_didAddItemEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_didAddItemEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* value);

  /// @brief Method add_didFinishTimeSliceEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* value);

  /// @brief Method add_didStartNewTimeSliceEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* value);

  /// @brief Method get_items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<T>* get_items();

  /// @brief Method get_previousTimeSliceTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_previousTimeSliceTime();

  /// @brief Method get_time, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method remove_didAddItemEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_didAddItemEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* value);

  /// @brief Method remove_didFinishTimeSliceEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* value);

  /// @brief Method remove_didStartNewTimeSliceEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* value);

  /// @brief Method set_previousTimeSliceTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_previousTimeSliceTime(float_t value);

  /// @brief Method set_time, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_time(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1(BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1(BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17092 };

  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  /// @brief Field <previousTimeSliceTime>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t ____previousTimeSliceTime_k__BackingField;

  /// @brief Field didFinishTimeSliceEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, float_t>* ___didFinishTimeSliceEvent;

  /// @brief Field didStartNewTimeSliceEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*>* ___didStartNewTimeSliceEvent;

  /// @brief Field didAddItemEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>*, T>* ___didAddItemEvent;

  /// @brief Field _items, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____items;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies BeatmapDataItem
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectsInTimeRowProcessor/SliderTailData
class CORDL_TYPE BeatmapObjectsInTimeRowProcessor_SliderTailData : public ::GlobalNamespace::BeatmapDataItem {
public:
  // Declarations
  /// @brief Field slider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_slider, put = __cordl_internal_set_slider)) ::GlobalNamespace::SliderData* slider;

  /// @brief Method GetCopy, addr 0x224e0d4, size 0x4, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  static inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData* New_ctor(::GlobalNamespace::SliderData* slider);

  constexpr ::GlobalNamespace::SliderData* const& __cordl_internal_get_slider() const;

  constexpr ::GlobalNamespace::SliderData*& __cordl_internal_get_slider();

  constexpr void __cordl_internal_set_slider(::GlobalNamespace::SliderData* value);

  /// @brief Method .ctor, addr 0x224bc40, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SliderData* slider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsInTimeRowProcessor_SliderTailData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor_SliderTailData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsInTimeRowProcessor_SliderTailData(BeatmapObjectsInTimeRowProcessor_SliderTailData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor_SliderTailData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsInTimeRowProcessor_SliderTailData(BeatmapObjectsInTimeRowProcessor_SliderTailData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17093 };

  /// @brief Field slider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SliderData* ___slider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData, ___slider) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectsInTimeRowProcessor/<>c
class CORDL_TYPE BeatmapObjectsInTimeRowProcessor___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* __9__17_0;

  static inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* New_ctor();

  /// @brief Method <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0, addr 0x224e13c, size 0xb8, virtual false, abstract: false, final false
  inline bool _HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0(::GlobalNamespace::BeatmapDataItem* item);

  /// @brief Method .ctor, addr 0x224e134, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* getStaticF___9__17_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsInTimeRowProcessor___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsInTimeRowProcessor___c(BeatmapObjectsInTimeRowProcessor___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsInTimeRowProcessor___c(BeatmapObjectsInTimeRowProcessor___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectsInTimeRowProcessor/<>c__DisplayClass17_0
class CORDL_TYPE BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentTimeSliceTime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_currentTimeSliceTime, put = __cordl_internal_set_currentTimeSliceTime)) float_t currentTimeSliceTime;

  static inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0* New_ctor();

  /// @brief Method <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1, addr 0x224e1f4, size 0x80, virtual false, abstract: false, final false
  inline bool _HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1(::GlobalNamespace::SliderData* tail);

  constexpr float_t const& __cordl_internal_get_currentTimeSliceTime() const;

  constexpr float_t& __cordl_internal_get_currentTimeSliceTime();

  constexpr void __cordl_internal_set_currentTimeSliceTime(float_t value);

  /// @brief Method .ctor, addr 0x224dd24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0(BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0(BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17095 };

  /// @brief Field currentTimeSliceTime, offset: 0x10, size: 0x4, def value: None
  float_t ___currentTimeSliceTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0, ___currentTimeSliceTime) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectsInTimeRowProcessor
class CORDL_TYPE BeatmapObjectsInTimeRowProcessor : public ::System::Object {
public:
  // Declarations
  using SliderTailData = ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData;

  template <typename T> using TimeSliceContainer_1 = ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<T>;

  using __c = ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c;

  using __c__DisplayClass17_0 = ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0;

  /// @brief Field _currentTimeSliceAllNotesAndSliders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__currentTimeSliceAllNotesAndSliders,
                      put = __cordl_internal_set__currentTimeSliceAllNotesAndSliders)) ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*
      _currentTimeSliceAllNotesAndSliders;

  /// @brief Field _currentTimeSliceColorNotes, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__currentTimeSliceColorNotes,
      put = __cordl_internal_set__currentTimeSliceColorNotes)) ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* _currentTimeSliceColorNotes;

  /// @brief Field _currentTimeSliceNotesByColorType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__currentTimeSliceNotesByColorType, put = __cordl_internal_set__currentTimeSliceNotesByColorType)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* _currentTimeSliceNotesByColorType;

  /// @brief Field _notesInColumnsReusableProcessingListOfLists, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__notesInColumnsReusableProcessingListOfLists,
                      put = __cordl_internal_set__notesInColumnsReusableProcessingListOfLists)) ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*,
                                                                                                         ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*>
      _notesInColumnsReusableProcessingListOfLists;

  /// @brief Field _numberOfLines, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfLines, put = __cordl_internal_set__numberOfLines)) int32_t _numberOfLines;

  /// @brief Field _unprocessedSliderTails, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__unprocessedSliderTails,
                      put = __cordl_internal_set__unprocessedSliderTails)) ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* _unprocessedSliderTails;

  /// @brief Method HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice, addr 0x224ba8c, size 0x1b4, virtual false, abstract: false, final false
  inline void
  HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice);

  /// @brief Method HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice, addr 0x224bc90, size 0x1920, virtual false, abstract: false, final false
  inline void
  HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice,
                                                             float_t nextTimeSliceTime);

  /// @brief Method HandleCurrentTimeSliceColorNotesDidAddItem, addr 0x224ba2c, size 0x60, virtual false, abstract: false, final false
  inline void HandleCurrentTimeSliceColorNotesDidAddItem(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer,
                                                         ::GlobalNamespace::NoteData* noteData);

  /// @brief Method HandleCurrentTimeSliceColorNotesDidFinishTimeSlice, addr 0x224d684, size 0x6a0, virtual false, abstract: false, final false
  inline void HandleCurrentTimeSliceColorNotesDidFinishTimeSlice(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* currentTimeSlice,
                                                                 float_t nextTimeSliceTime);

  /// @brief Method HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice, addr 0x224dd2c, size 0x35c, virtual false, abstract: false, final false
  inline void HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer,
                                                                     float_t nextTimeSliceTime);

  static inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* New_ctor(int32_t numberOfLines);

  /// @brief Method ProcessAllRemainingData, addr 0x224b830, size 0x1fc, virtual false, abstract: false, final false
  inline void ProcessAllRemainingData();

  /// @brief Method ProcessNote, addr 0x224b5ec, size 0xd4, virtual false, abstract: false, final false
  inline void ProcessNote(::GlobalNamespace::NoteData* noteData);

  /// @brief Method ProcessSlider, addr 0x224b6c0, size 0x170, virtual false, abstract: false, final false
  inline void ProcessSlider(::GlobalNamespace::SliderData* sliderData);

  /// @brief Method SliderHeadPositionOverlapsWithBurstTail, addr 0x224d5f0, size 0x54, virtual false, abstract: false, final false
  static inline bool SliderHeadPositionOverlapsWithBurstTail(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::SliderData* sliderTail);

  /// @brief Method SliderHeadPositionOverlapsWithNote, addr 0x224d5b0, size 0x40, virtual false, abstract: false, final false
  static inline bool SliderHeadPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note);

  /// @brief Method SliderTailPositionOverlapsWithNote, addr 0x224d644, size 0x40, virtual false, abstract: false, final false
  static inline bool SliderTailPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note);

  constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* const& __cordl_internal_get__currentTimeSliceAllNotesAndSliders() const;

  constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get__currentTimeSliceAllNotesAndSliders();

  constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* const& __cordl_internal_get__currentTimeSliceColorNotes() const;

  constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*& __cordl_internal_get__currentTimeSliceColorNotes();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* const&
  __cordl_internal_get__currentTimeSliceNotesByColorType() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*&
  __cordl_internal_get__currentTimeSliceNotesByColorType();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> const&
  __cordl_internal_get__notesInColumnsReusableProcessingListOfLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*>&
  __cordl_internal_get__notesInColumnsReusableProcessingListOfLists();

  constexpr int32_t const& __cordl_internal_get__numberOfLines() const;

  constexpr int32_t& __cordl_internal_get__numberOfLines();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* const& __cordl_internal_get__unprocessedSliderTails() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>*& __cordl_internal_get__unprocessedSliderTails();

  constexpr void __cordl_internal_set__currentTimeSliceAllNotesAndSliders(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* value);

  constexpr void __cordl_internal_set__currentTimeSliceColorNotes(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* value);

  constexpr void __cordl_internal_set__currentTimeSliceNotesByColorType(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* value);

  constexpr void __cordl_internal_set__notesInColumnsReusableProcessingListOfLists(
      ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> value);

  constexpr void __cordl_internal_set__numberOfLines(int32_t value);

  constexpr void __cordl_internal_set__unprocessedSliderTails(::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* value);

  /// @brief Method .ctor, addr 0x224b050, size 0x59c, virtual false, abstract: false, final false
  inline void _ctor(int32_t numberOfLines);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsInTimeRowProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsInTimeRowProcessor(BeatmapObjectsInTimeRowProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsInTimeRowProcessor(BeatmapObjectsInTimeRowProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17096 };

  /// @brief Field kMaxNotesAlignmentAngle offset 0xffffffff size 0x4
  static constexpr float_t kMaxNotesAlignmentAngle{ static_cast<float_t>(40.0f) };

  /// @brief Field kTimeRowEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kTimeRowEpsilon{ static_cast<float_t>(0.001f) };

  /// @brief Field _currentTimeSliceColorNotes, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>* ____currentTimeSliceColorNotes;

  /// @brief Field _currentTimeSliceAllNotesAndSliders, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* ____currentTimeSliceAllNotesAndSliders;

  /// @brief Field _currentTimeSliceNotesByColorType, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*
      ____currentTimeSliceNotesByColorType;

  /// @brief Field _unprocessedSliderTails, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* ____unprocessedSliderTails;

  /// @brief Field _notesInColumnsReusableProcessingListOfLists, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*>
      ____notesInColumnsReusableProcessingListOfLists;

  /// @brief Field _numberOfLines, offset: 0x38, size: 0x4, def value: None
  int32_t ____numberOfLines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, ____currentTimeSliceColorNotes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, ____currentTimeSliceAllNotesAndSliders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, ____currentTimeSliceNotesByColorType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, ____unprocessedSliderTails) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, ____notesInColumnsReusableProcessingListOfLists) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, ____numberOfLines) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*, "", "BeatmapObjectsInTimeRowProcessor");
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_SliderTailData*, "", "BeatmapObjectsInTimeRowProcessor/SliderTailData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor_TimeSliceContainer_1, "", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1");
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c*, "", "BeatmapObjectsInTimeRowProcessor/<>c");
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor___c__DisplayClass17_0*, "", "BeatmapObjectsInTimeRowProcessor/<>c__DisplayClass17_0");
