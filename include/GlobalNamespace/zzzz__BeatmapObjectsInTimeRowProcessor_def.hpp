#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectsInTimeRowProcessor)
namespace GlobalNamespace {
class __BeatmapObjectsInTimeRowProcessor____c;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class NoteData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
template <typename T> class __BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1;
}
namespace GlobalNamespace {
class __BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0;
}
namespace GlobalNamespace {
class __BeatmapObjectsInTimeRowProcessor__SliderTailData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor;
}
namespace GlobalNamespace {
class __BeatmapObjectsInTimeRowProcessor__SliderTailData;
}
namespace GlobalNamespace {
template <typename T> class __BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1;
}
namespace GlobalNamespace {
class __BeatmapObjectsInTimeRowProcessor____c;
}
namespace GlobalNamespace {
class __BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0);
// Type: ::TimeSliceContainer`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14769))
// CS Name: ::BeatmapObjectsInTimeRowProcessor::TimeSliceContainer`1<T>*
class CORDL_TYPE __BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__time_k__BackingField, put = __set__time_k__BackingField)) float_t _time_k__BackingField;

  /// @brief Field <previousTimeSliceTime>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__previousTimeSliceTime_k__BackingField, put = __set__previousTimeSliceTime_k__BackingField)) float_t _previousTimeSliceTime_k__BackingField;

  /// @brief Field didFinishTimeSliceEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_didFinishTimeSliceEvent,
                      put = __set_didFinishTimeSliceEvent))::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>* didFinishTimeSliceEvent;

  /// @brief Field didStartNewTimeSliceEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didStartNewTimeSliceEvent,
                      put = __set_didStartNewTimeSliceEvent))::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>* didStartNewTimeSliceEvent;

  /// @brief Field didAddItemEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_didAddItemEvent, put = __set_didAddItemEvent))::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>* didAddItemEvent;

  /// @brief Field _items, offset 0x30, size 0x8
  __declspec(property(get = __get__items, put = __set__items))::System::Collections::Generic::List_1<T>* _items;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_previousTimeSliceTime, put = set_previousTimeSliceTime)) float_t previousTimeSliceTime;

  __declspec(property(get = get_items))::System::Collections::Generic::IReadOnlyList_1<T>* items;

  constexpr float_t& __get__time_k__BackingField();

  constexpr float_t const& __get__time_k__BackingField() const;

  constexpr void __set__time_k__BackingField(float_t value);

  constexpr float_t& __get__previousTimeSliceTime_k__BackingField();

  constexpr float_t const& __get__previousTimeSliceTime_k__BackingField() const;

  constexpr void __set__previousTimeSliceTime_k__BackingField(float_t value);

  constexpr ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>*& __get_didFinishTimeSliceEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>*> const&
  __get_didFinishTimeSliceEvent() const;

  constexpr void __set_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>* value);

  constexpr ::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>*& __get_didStartNewTimeSliceEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>*> const& __get_didStartNewTimeSliceEvent() const;

  constexpr void __set_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>*& __get_didAddItemEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>*> const& __get_didAddItemEvent() const;

  constexpr void __set_didAddItemEvent(::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>* value);

  constexpr ::System::Collections::Generic::List_1<T>*& __get__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __get__items() const;

  constexpr void __set__items(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual false final false
  inline float_t get_time();

  /// @brief Method set_time addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_time(float_t value);

  /// @brief Method get_previousTimeSliceTime addr 0x0 size 0xffffffffffffffff virtual false final false
  inline float_t get_previousTimeSliceTime();

  /// @brief Method set_previousTimeSliceTime addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_previousTimeSliceTime(float_t value);

  /// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<T>* get_items();

  /// @brief Method add_didFinishTimeSliceEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void add_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>* value);

  /// @brief Method remove_didFinishTimeSliceEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void remove_didFinishTimeSliceEvent(::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>* value);

  /// @brief Method add_didStartNewTimeSliceEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void add_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>* value);

  /// @brief Method remove_didStartNewTimeSliceEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void remove_didStartNewTimeSliceEvent(::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>* value);

  /// @brief Method add_didAddItemEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void add_didAddItemEvent(::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>* value);

  /// @brief Method remove_didAddItemEvent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void remove_didAddItemEvent(::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>* value);

  static inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t capacity);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Add(T item);

  /// @brief Method AddWithoutNotifications addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AddWithoutNotifications(T item);

  /// @brief Method FinishTimeSlice addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void FinishTimeSlice(float_t nextTimeSliceTime);

  /// @brief Method StartNewTimeSlice addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void StartNewTimeSlice(float_t newSliceTime);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1(__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1(__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1();

public:
  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  /// @brief Field <previousTimeSliceTime>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t ____previousTimeSliceTime_k__BackingField;

  /// @brief Field didFinishTimeSliceEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, float_t>* ___didFinishTimeSliceEvent;

  /// @brief Field didStartNewTimeSliceEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*>* ___didStartNewTimeSliceEvent;

  /// @brief Field didAddItemEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>*, T>* ___didAddItemEvent;

  /// @brief Field _items, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____items;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::SliderTailData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14770))
// CS Name: ::BeatmapObjectsInTimeRowProcessor::SliderTailData*
class CORDL_TYPE __BeatmapObjectsInTimeRowProcessor__SliderTailData : public ::GlobalNamespace::BeatmapDataItem {
public:
  // Declarations
  /// @brief Field slider, offset 0x20, size 0x8
  __declspec(property(get = __get_slider, put = __set_slider))::GlobalNamespace::SliderData* slider;

  constexpr ::GlobalNamespace::SliderData*& __get_slider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderData*> const& __get_slider() const;

  constexpr void __set_slider(::GlobalNamespace::SliderData* value);

  static inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData* New_ctor(::GlobalNamespace::SliderData* slider);

  /// @brief Method .ctor addr 0xe02a1c size 0x50 virtual false final false
  inline void _ctor(::GlobalNamespace::SliderData* slider);

  /// @brief Method GetCopy addr 0xe04ed0 size 0x4 virtual true final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectsInTimeRowProcessor__SliderTailData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapObjectsInTimeRowProcessor__SliderTailData(__BeatmapObjectsInTimeRowProcessor__SliderTailData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectsInTimeRowProcessor__SliderTailData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapObjectsInTimeRowProcessor__SliderTailData(__BeatmapObjectsInTimeRowProcessor__SliderTailData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectsInTimeRowProcessor__SliderTailData();

public:
  /// @brief Field slider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SliderData* ___slider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14771))
// CS Name: ::BeatmapObjectsInTimeRowProcessor::<>c__DisplayClass17_0*
class CORDL_TYPE __BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentTimeSliceTime, offset 0x10, size 0x4
  __declspec(property(get = __get_currentTimeSliceTime, put = __set_currentTimeSliceTime)) float_t currentTimeSliceTime;

  constexpr float_t& __get_currentTimeSliceTime();

  constexpr float_t const& __get_currentTimeSliceTime() const;

  constexpr void __set_currentTimeSliceTime(float_t value);

  static inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0* New_ctor();

  /// @brief Method .ctor addr 0xe04b2c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__1 addr 0xe04ed4 size 0x80 virtual false final false
  inline bool _HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__1(::GlobalNamespace::SliderData* tail);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0(__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0(__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0();

public:
  /// @brief Field currentTimeSliceTime, offset: 0x10, size: 0x4, def value: None
  float_t ___currentTimeSliceTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14772))
// CS Name: ::BeatmapObjectsInTimeRowProcessor::<>c*
class CORDL_TYPE __BeatmapObjectsInTimeRowProcessor____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* __9__17_0;

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c* value);

  static inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c* getStaticF___9();

  static inline void setStaticF___9__17_0(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::BeatmapDataItem*, bool>* getStaticF___9__17_0();

  static inline ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c* New_ctor();

  /// @brief Method .ctor addr 0xe04fb8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <HandleCurrentTimeSliceColorNotesDidFinishTimeSlice>b__17_0 addr 0xe04fc0 size 0xb8 virtual false final false
  inline bool _HandleCurrentTimeSliceColorNotesDidFinishTimeSlice_b__17_0(::GlobalNamespace::BeatmapDataItem* item);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectsInTimeRowProcessor____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapObjectsInTimeRowProcessor____c(__BeatmapObjectsInTimeRowProcessor____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectsInTimeRowProcessor____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapObjectsInTimeRowProcessor____c(__BeatmapObjectsInTimeRowProcessor____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectsInTimeRowProcessor____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapObjectsInTimeRowProcessor
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14773))
// CS Name: ::BeatmapObjectsInTimeRowProcessor*
class CORDL_TYPE BeatmapObjectsInTimeRowProcessor : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c;

  using __c__DisplayClass17_0 = ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0;

  using SliderTailData = ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData;

  template <typename T> using TimeSliceContainer_1 = ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<T>;

  /// @brief Field _currentTimeSliceColorNotes, offset 0x10, size 0x8
  __declspec(property(get = __get__currentTimeSliceColorNotes,
                      put = __set__currentTimeSliceColorNotes))::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* _currentTimeSliceColorNotes;

  /// @brief Field _currentTimeSliceAllNotesAndSliders, offset 0x18, size 0x8
  __declspec(property(get = __get__currentTimeSliceAllNotesAndSliders, put = __set__currentTimeSliceAllNotesAndSliders))::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<
      ::GlobalNamespace::BeatmapDataItem*>* _currentTimeSliceAllNotesAndSliders;

  /// @brief Field _currentTimeSliceNotesByColorType, offset 0x20, size 0x8
  __declspec(property(get = __get__currentTimeSliceNotesByColorType, put = __set__currentTimeSliceNotesByColorType))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::ColorType, ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* _currentTimeSliceNotesByColorType;

  /// @brief Field _unprocessedSliderTails, offset 0x28, size 0x8
  __declspec(property(get = __get__unprocessedSliderTails, put = __set__unprocessedSliderTails))::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* _unprocessedSliderTails;

  /// @brief Field _notesInColumnsReusableProcessingListOfLists, offset 0x30, size 0x8
  __declspec(property(
      get = __get__notesInColumnsReusableProcessingListOfLists,
      put = __set__notesInColumnsReusableProcessingListOfLists))::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*,
                                                                         ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> _notesInColumnsReusableProcessingListOfLists;

  /// @brief Field _numberOfLines, offset 0x38, size 0x4
  __declspec(property(get = __get__numberOfLines, put = __set__numberOfLines)) int32_t _numberOfLines;

  constexpr ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*& __get__currentTimeSliceColorNotes();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*> const&
  __get__currentTimeSliceColorNotes() const;

  constexpr void __set__currentTimeSliceColorNotes(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* value);

  constexpr ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*& __get__currentTimeSliceAllNotesAndSliders();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>*> const&
  __get__currentTimeSliceAllNotesAndSliders() const;

  constexpr void __set__currentTimeSliceAllNotesAndSliders(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*&
  __get__currentTimeSliceNotesByColorType();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*> const&
  __get__currentTimeSliceNotesByColorType() const;

  constexpr void __set__currentTimeSliceNotesByColorType(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>*& __get__unprocessedSliderTails();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>*> const& __get__unprocessedSliderTails() const;

  constexpr void __set__unprocessedSliderTails(::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* value);

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*>&
  __get__notesInColumnsReusableProcessingListOfLists();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> const&
  __get__notesInColumnsReusableProcessingListOfLists() const;

  constexpr void __set__notesInColumnsReusableProcessingListOfLists(
      ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*> value);

  constexpr int32_t& __get__numberOfLines();

  constexpr int32_t const& __get__numberOfLines() const;

  constexpr void __set__numberOfLines(int32_t value);

  static inline ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* New_ctor(int32_t numberOfLines);

  /// @brief Method .ctor addr 0xe01df4 size 0x5bc virtual false final false
  inline void _ctor(int32_t numberOfLines);

  /// @brief Method ProcessNote addr 0xe023b0 size 0xd4 virtual false final false
  inline void ProcessNote(::GlobalNamespace::NoteData* noteData);

  /// @brief Method ProcessSlider addr 0xe02484 size 0x184 virtual false final false
  inline void ProcessSlider(::GlobalNamespace::SliderData* sliderData);

  /// @brief Method ProcessAllRemainingData addr 0xe02608 size 0x1fc virtual false final false
  inline void ProcessAllRemainingData();

  /// @brief Method HandleCurrentTimeSliceColorNotesDidAddItem addr 0xe02804 size 0x60 virtual false final false
  inline void HandleCurrentTimeSliceColorNotesDidAddItem(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer,
                                                         ::GlobalNamespace::NoteData* noteData);

  /// @brief Method HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice addr 0xe02864 size 0x1b8 virtual false final false
  inline void HandleCurrentNewTimeSliceAllNotesAndSlidersDidStartNewTimeSlice(
      ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice);

  /// @brief Method HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice addr 0xe02a6c size 0x193c virtual false final false
  inline void
  HandleCurrentTimeSliceAllNotesAndSlidersDidFinishTimeSlice(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* allObjectsTimeSlice,
                                                             float_t nextTimeSliceTime);

  /// @brief Method HandleCurrentTimeSliceColorNotesDidFinishTimeSlice addr 0xe0447c size 0x6b0 virtual false final false
  inline void HandleCurrentTimeSliceColorNotesDidFinishTimeSlice(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* currentTimeSlice,
                                                                 float_t nextTimeSliceTime);

  /// @brief Method HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice addr 0xe04b34 size 0x350 virtual false final false
  inline void HandlePerColorTypeTimeSliceContainerDidFinishTimeSlice(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* timeSliceContainer,
                                                                     float_t nextTimeSliceTime);

  /// @brief Method SliderHeadPositionOverlapsWithNote addr 0xe043a8 size 0x40 virtual false final false
  static inline bool SliderHeadPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note);

  /// @brief Method SliderTailPositionOverlapsWithNote addr 0xe0443c size 0x40 virtual false final false
  static inline bool SliderTailPositionOverlapsWithNote(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::NoteData* note);

  /// @brief Method SliderHeadPositionOverlapsWithBurstTail addr 0xe043e8 size 0x54 virtual false final false
  static inline bool SliderHeadPositionOverlapsWithBurstTail(::GlobalNamespace::SliderData* slider, ::GlobalNamespace::SliderData* sliderTail);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsInTimeRowProcessor(BeatmapObjectsInTimeRowProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsInTimeRowProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsInTimeRowProcessor(BeatmapObjectsInTimeRowProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsInTimeRowProcessor();

public:
  /// @brief Field _currentTimeSliceColorNotes, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>* ____currentTimeSliceColorNotes;

  /// @brief Field _currentTimeSliceAllNotesAndSliders, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::BeatmapDataItem*>* ____currentTimeSliceAllNotesAndSliders;

  /// @brief Field _currentTimeSliceNotesByColorType, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1<::GlobalNamespace::NoteData*>*>*
      ____currentTimeSliceNotesByColorType;

  /// @brief Field _unprocessedSliderTails, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::SliderData*>* ____unprocessedSliderTails;

  /// @brief Field _notesInColumnsReusableProcessingListOfLists, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::NoteData*>*>*>
      ____notesInColumnsReusableProcessingListOfLists;

  /// @brief Field _numberOfLines, offset: 0x38, size: 0x4, def value: None
  int32_t ____numberOfLines;

  /// @brief Field kTimeRowEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kTimeRowEpsilon{ 0.001 };

  /// @brief Field kMaxNotesAlignmentAngle offset 0xffffffff size 0x4
  static constexpr float_t kMaxNotesAlignmentAngle{ 40.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*, "", "BeatmapObjectsInTimeRowProcessor");
NEED_NO_BOX(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__SliderTailData*, "", "BeatmapObjectsInTimeRowProcessor/SliderTailData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor__TimeSliceContainer_1, "", "BeatmapObjectsInTimeRowProcessor/TimeSliceContainer`1");
NEED_NO_BOX(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c*, "", "BeatmapObjectsInTimeRowProcessor/<>c");
NEED_NO_BOX(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectsInTimeRowProcessor____c__DisplayClass17_0*, "", "BeatmapObjectsInTimeRowProcessor/<>c__DisplayClass17_0");
