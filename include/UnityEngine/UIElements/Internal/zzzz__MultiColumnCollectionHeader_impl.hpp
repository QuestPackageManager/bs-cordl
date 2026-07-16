#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnCollectionHeader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnCollectionHeader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__ColumnMover_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnCollectionHeader_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnResizeHandle_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumn_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnDataType_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnLayout_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuPopulateEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescriptions_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "actualWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "visible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState::ViewState_MultiColumnCollectionHeader_ColumnState(int32_t index, ::StringW name, float_t actualWidth,
                                                                                                                                                    ::UnityEngine::UIElements::Length width,
                                                                                                                                                    bool visible) noexcept {
  this->index = index;
  this->name = name;
  this->actualWidth = actualWidth;
  this->width = width;
  this->visible = visible;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState::ViewState_MultiColumnCollectionHeader_ColumnState() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::Save)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0x6d25b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>(),
                                                                                           { "Save", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::Apply)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x6d257fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>(),
                                                                                           { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d2687c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_get_m_HasPersistedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasPersistedData;
}
constexpr bool const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_get_m_HasPersistedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasPersistedData;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_set_m_HasPersistedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasPersistedData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_get_m_SortDescriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortDescriptions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_get_m_SortDescriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortDescriptions;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_set_m_SortDescriptions(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortDescriptions = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState>*&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_get_m_OrderedColumnStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OrderedColumnStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState>* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_get_m_OrderedColumnStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OrderedColumnStates;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::__cordl_internal_set_m_OrderedColumnStates(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::ViewState_MultiColumnCollectionHeader_ColumnState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OrderedColumnStates = value;
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::Save(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>(),
                                                                                         { "Save", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::Apply(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>(),
                                                                                         { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::MultiColumnCollectionHeader_ViewState() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData.get_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d26938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(), { "get_control", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData.set_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d26940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(),
                                                             { "set_control", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData.get_resizeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::get_resizeHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d26948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(), { "get_resizeHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData.set_resizeHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::set_resizeHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d26950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(),
                                                             { "set_resizeHandle", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d23718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::__cordl_internal_get__control_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____control_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::__cordl_internal_get__control_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____control_k__BackingField;
}
constexpr void
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::__cordl_internal_set__control_k__BackingField(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____control_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::__cordl_internal_get__resizeHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeHandle_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::__cordl_internal_get__resizeHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeHandle_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::__cordl_internal_set__resizeHandle_k__BackingField(
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resizeHandle_k__BackingField = value;
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(), { "get_control", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::set_control(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(),
                                                                                         { "set_control", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::get_resizeHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(), { "get_resizeHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::set_resizeHandle(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(),
                                                           { "set_resizeHandle", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::MultiColumnCollectionHeader_ColumnData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState::*)(
    ::UnityEngine::UIElements::SortColumnDescription*, ::UnityEngine::UIElements::SortDirection)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d22768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescription*>(), ::i2c::type_of<::UnityEngine::UIElements::SortDirection>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState::_ctor(::UnityEngine::UIElements::SortColumnDescription* desc,
                                                                                                    ::UnityEngine::UIElements::SortDirection dir) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescription*>(), ::i2c::type_of<::UnityEngine::UIElements::SortDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, desc, dir);
}
// Ctor Parameters [CppParam { name: "columnDesc", ty: "::UnityEngine::UIElements::SortColumnDescription*", modifiers: "", def_value: Some("{}") }, CppParam { name: "direction", ty:
// "::UnityEngine::UIElements::SortDirection", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState::MultiColumnCollectionHeader_SortedColumnState(
    ::UnityEngine::UIElements::SortColumnDescription* columnDesc, ::UnityEngine::UIElements::SortDirection direction) noexcept {
  this->columnDesc = columnDesc;
  this->direction = direction;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState::MultiColumnCollectionHeader_SortedColumnState() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d24c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0._OnContextualMenuManipulator_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::*)(
    ::UnityEngine::UIElements::DropdownMenuAction*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::_OnContextualMenuManipulator_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d26958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0*>(),
                                                             { "<OnContextualMenuManipulator>b__1", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0._OnContextualMenuManipulator_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DropdownMenuAction_Status (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::*)(
    ::UnityEngine::UIElements::DropdownMenuAction*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::_OnContextualMenuManipulator_b__2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6d2697c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0*>(),
                                                             { "<OnContextualMenuManipulator>b__2", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr ::UnityEngine::UIElements::Column* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::__cordl_internal_set_column(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___column = value;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::__cordl_internal_set___4__this(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::_OnContextualMenuManipulator_b__1(::UnityEngine::UIElements::DropdownMenuAction* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0*>(),
                                                           { "<OnContextualMenuManipulator>b__1", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline ::UnityEngine::UIElements::DropdownMenuAction_Status
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::_OnContextualMenuManipulator_b__2(::UnityEngine::UIElements::DropdownMenuAction* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0*>(),
                                                           { "<OnContextualMenuManipulator>b__2", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DropdownMenuAction_Status>(this, ___internal_method, a);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass67_0::MultiColumnCollectionHeader___c__DisplayClass67_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d25564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0._UpdateSortColumnDescriptionsOnClick_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::*)(
    ::UnityEngine::UIElements::SortColumnDescription*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::_UpdateSortColumnDescriptionsOnClick_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d269ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0*>(),
                                                             { "<UpdateSortColumnDescriptionsOnClick>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescription*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr ::UnityEngine::UIElements::Column* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::__cordl_internal_set_column(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___column = value;
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::_UpdateSortColumnDescriptionsOnClick_b__0(::UnityEngine::UIElements::SortColumnDescription* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0*>(),
                                                           { "<UpdateSortColumnDescriptionsOnClick>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescription*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, d);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass73_0::MultiColumnCollectionHeader___c__DisplayClass73_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_isApplyingViewState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_isApplyingViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_isApplyingViewState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_columnDataMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* (
        ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnDataMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_columnDataMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_columnLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ColumnLayout* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_columnLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_columnContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_columnContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_resizeHandleContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_resizeHandleContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_resizeHandleContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_sortedColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortedColumns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_sortedColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_sortedColumnReadonly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::SortColumnDescription*>* (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortedColumnReadonly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_sortedColumnReadonly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_sortDescriptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::SortColumnDescriptions* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortDescriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_sortDescriptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.set_sortDescriptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::SortColumnDescriptions*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::set_sortDescriptions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d20758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "set_sortDescriptions", {}, { ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_columns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Columns* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_columns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_sortingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d20e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_sortingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.set_sortingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(bool)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::set_sortingEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d20e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "set_sortingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.add_columnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action_2<int32_t, float_t>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_columnResized)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d2149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "add_columnResized", {}, { ::i2c::type_of<::System::Action_2<int32_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.remove_columnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action_2<int32_t, float_t>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_columnResized)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d2155c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "remove_columnResized", {}, { ::i2c::type_of<::System::Action_2<int32_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.add_columnSortingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_columnSortingChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d2161c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "add_columnSortingChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.remove_columnSortingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_columnSortingChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d216c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "remove_columnSortingChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.add_contextMenuPopulateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_contextMenuPopulateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d21774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
            { "add_contextMenuPopulateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.remove_contextMenuPopulateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_contextMenuPopulateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d21834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
            { "remove_contextMenuPopulateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.add_viewDataRestored
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_viewDataRestored)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d218f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "add_viewDataRestored", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.remove_viewDataRestored
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_viewDataRestored)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d219a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "remove_viewDataRestored", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Columns*, ::UnityEngine::UIElements::SortColumnDescriptions*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::_ctor)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x6d21a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.ScheduleDoLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ScheduleDoLayout)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6d22604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "ScheduleDoLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.ResizeToFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ResizeToFit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6d2273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "ResizeToFit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.UpdateSortedColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortedColumns)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x6d207fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "UpdateSortedColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.UpdateColumnControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateColumnControls)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x6d227e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "UpdateColumnControls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*, int32_t)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d22f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                             { "OnColumnAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnAdded)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x6d222b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "OnColumnAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnRemoved)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6d2371c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "OnColumnRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6d239a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                { "OnColumnChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::UIElements::ColumnDataType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnReordered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*, int32_t, int32_t)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnReordered)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6d2424c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                { "OnColumnReordered", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnResized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d243d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "OnColumnResized", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnContextualMenuManipulator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::ContextualMenuPopulateEvent*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnContextualMenuManipulator)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x6d243dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                             { "OnContextualMenuManipulator", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnMoveManipulatorActivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Internal::ColumnMover*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnMoveManipulatorActivated)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6d24c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                             { "OnMoveManipulatorActivated", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::ColumnMover*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnGeometryChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d24d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "OnGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.DoLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::DoLayout)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6d24da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "DoLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnControlGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnControlGeometryChanged)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6d24de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                             { "OnColumnControlGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnClicked)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6d250d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                           { "OnColumnClicked", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.UpdateSortColumnDescriptionsOnClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortColumnDescriptionsOnClick)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6d252fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                         { "UpdateSortColumnDescriptionsOnClick", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.ScrollHorizontally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(float_t)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ScrollHorizontally)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6d25568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "ScrollHorizontally", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.RaiseColumnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(int32_t)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::RaiseColumnResized)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6d24fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "RaiseColumnResized", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.RaiseColumnSortingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::RaiseColumnSortingChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d227a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "RaiseColumnSortingChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.ApplyColumnSorting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ApplyColumnSorting)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x6d239fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "ApplyColumnSorting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.UpdateSortingStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortingStatus)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x6d20e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "UpdateSortingStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnViewDataReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnViewDataReady)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d25710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), 132 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.SaveViewState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::SaveViewState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d22774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "SaveViewState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.CleanupColumnData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::CleanupColumnData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6d237e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                             { "CleanupColumnData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::Dispose)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x6d26348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader._OnContextualMenuManipulator_b__67_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::DropdownMenuAction*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::_OnContextualMenuManipulator_b__67_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d26878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                             { "<OnContextualMenuManipulator>b__67_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_SortingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingEnabled;
}
constexpr bool const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_SortingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingEnabled;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_m_SortingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortingEnabled = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_SortedColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedColumns;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_SortedColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedColumns;
}
constexpr void
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_m_SortedColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortedColumns = value;
}
constexpr ::UnityEngine::UIElements::SortColumnDescriptions*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_SortDescriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortDescriptions;
}
constexpr ::UnityEngine::UIElements::SortColumnDescriptions* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_SortDescriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortDescriptions;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_m_SortDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortDescriptions = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>*&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_OldSortedColumnStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldSortedColumnStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_OldSortedColumnStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OldSortedColumnStates;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_m_OldSortedColumnStates(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OldSortedColumnStates = value;
}
constexpr bool& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_SortingUpdatesTemporarilyDisabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingUpdatesTemporarilyDisabled;
}
constexpr bool const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_SortingUpdatesTemporarilyDisabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingUpdatesTemporarilyDisabled;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_m_SortingUpdatesTemporarilyDisabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortingUpdatesTemporarilyDisabled = value;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_ViewState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewState;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_ViewState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewState;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_m_ViewState(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewState = value;
}
constexpr bool& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_ApplyingViewState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyingViewState;
}
constexpr bool const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_ApplyingViewState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyingViewState;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_m_ApplyingViewState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ApplyingViewState = value;
}
constexpr bool& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_DoLayoutScheduled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoLayoutScheduled;
}
constexpr bool const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_m_DoLayoutScheduled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoLayoutScheduled;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_m_DoLayoutScheduled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DoLayoutScheduled = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>*&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__columnDataMap_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnDataMap_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__columnDataMap_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnDataMap_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set__columnDataMap_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnDataMap_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::ColumnLayout*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__columnLayout_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnLayout_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ColumnLayout* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__columnLayout_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnLayout_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set__columnLayout_k__BackingField(::UnityEngine::UIElements::ColumnLayout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnLayout_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__columnContainer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnContainer_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__columnContainer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnContainer_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set__columnContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnContainer_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__resizeHandleContainer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeHandleContainer_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__resizeHandleContainer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resizeHandleContainer_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set__resizeHandleContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resizeHandleContainer_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::Columns*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__columns_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columns_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Columns* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get__columns_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columns_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set__columns_k__BackingField(::UnityEngine::UIElements::Columns* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columns_k__BackingField = value;
}
constexpr ::System::Action_2<int32_t, float_t>*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_columnResized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnResized;
}
constexpr ::System::Action_2<int32_t, float_t>* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_columnResized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnResized;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_columnResized(::System::Action_2<int32_t, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnResized = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_columnSortingChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnSortingChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_columnSortingChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnSortingChanged;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_columnSortingChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnSortingChanged = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_contextMenuPopulateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextMenuPopulateEvent;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_contextMenuPopulateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextMenuPopulateEvent;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_contextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contextMenuPopulateEvent = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_viewDataRestored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewDataRestored;
}
constexpr ::System::Action* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_get_viewDataRestored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewDataRestored;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::__cordl_internal_set_viewDataRestored(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewDataRestored = value;
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::setStaticF_columnContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "columnContainerUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::getStaticF_columnContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "columnContainerUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::setStaticF_handleContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "handleContainerUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::getStaticF_handleContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "handleContainerUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::setStaticF_reorderableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::getStaticF_reorderableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>();
}
inline bool UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_isApplyingViewState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_isApplyingViewState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>*
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnDataMap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_columnDataMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ColumnLayout* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_columnLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ColumnLayout*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnContainer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_columnContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_resizeHandleContainer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_resizeHandleContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortedColumns() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_sortedColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::SortColumnDescription*>* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortedColumnReadonly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_sortedColumnReadonly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::SortColumnDescription*>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::SortColumnDescriptions* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortDescriptions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_sortDescriptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SortColumnDescriptions*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::set_sortDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "set_sortDescriptions", {}, { ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Columns* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columns() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_columns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Columns*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "get_sortingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::set_sortingEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "set_sortingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_columnResized(::System::Action_2<int32_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "add_columnResized", {}, { ::i2c::type_of<::System::Action_2<int32_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_columnResized(::System::Action_2<int32_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "remove_columnResized", {}, { ::i2c::type_of<::System::Action_2<int32_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_columnSortingChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "add_columnSortingChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_columnSortingChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "remove_columnSortingChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_contextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
          { "add_contextMenuPopulateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_contextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
          { "remove_contextMenuPopulateEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_viewDataRestored(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "add_viewDataRestored", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_viewDataRestored(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "remove_viewDataRestored", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columns, sortDescriptions, sortedColumns);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ScheduleDoLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "ScheduleDoLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ResizeToFit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "ResizeToFit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortedColumns() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "UpdateSortedColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateColumnControls() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "UpdateColumnControls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnAdded(::UnityEngine::UIElements::Column* column, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                           { "OnColumnAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, index);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnAdded(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "OnColumnAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnRemoved(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "OnColumnRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                              { "OnColumnChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::UIElements::ColumnDataType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, type);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnReordered(::UnityEngine::UIElements::Column* column, int32_t from, int32_t to) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                              { "OnColumnReordered", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, from, to);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnResized(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "OnColumnResized", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnContextualMenuManipulator(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                           { "OnContextualMenuManipulator", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnMoveManipulatorActivated(::UnityEngine::UIElements::Internal::ColumnMover* mover) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                           { "OnMoveManipulatorActivated", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::ColumnMover*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mover);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "OnGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::DoLayout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "DoLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnControlGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                           { "OnColumnControlGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnClicked(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                                                         { "OnColumnClicked", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortColumnDescriptionsOnClick(::UnityEngine::UIElements::Column* column, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                       { "UpdateSortColumnDescriptionsOnClick", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, modifiers);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ScrollHorizontally(float_t horizontalOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "ScrollHorizontally", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, horizontalOffset);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::RaiseColumnResized(int32_t columnIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "RaiseColumnResized", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columnIndex);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::RaiseColumnSortingChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "RaiseColumnSortingChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ApplyColumnSorting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "ApplyColumnSorting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortingStatus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "UpdateSortingStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), 132 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::SaveViewState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "SaveViewState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::CleanupColumnData(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                           { "CleanupColumnData", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::_OnContextualMenuManipulator_b__67_0(::UnityEngine::UIElements::DropdownMenuAction* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(),
                                                           { "<OnContextualMenuManipulator>b__67_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(columns, sortDescriptions, sortedColumns));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::MultiColumnCollectionHeader() {}
