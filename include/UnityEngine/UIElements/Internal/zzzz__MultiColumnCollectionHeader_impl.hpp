#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnCollectionHeader.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnCollectionHeader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::Save)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x49eea04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::Apply)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x49ee6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x49ef6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortDescriptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OrderedColumnStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::Save(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::Apply(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ViewState::MultiColumnCollectionHeader_ViewState() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData.get_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49ef7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(),
                                                 "get_control", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData.set_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49ef7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(), "set_control",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData.get_resizeHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::get_resizeHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49ef7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(),
                                                 "get_resizeHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData.set_resizeHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)(
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::set_resizeHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49ef7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(), "set_resizeHandle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49ec4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____control_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resizeHandle_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(),
                                               "get_control", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::set_control(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(), "set_control",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::get_resizeHandle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(),
                                               "get_resizeHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::set_resizeHandle(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(), "set_resizeHandle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData::MultiColumnCollectionHeader_ColumnData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState::*)(
    ::UnityEngine::UIElements::SortColumnDescription*, ::UnityEngine::UIElements::SortDirection)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x49eb44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortDirection>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState::_ctor(::UnityEngine::UIElements::SortColumnDescription* desc,
                                                                                                    ::UnityEngine::UIElements::SortDirection dir) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_SortedColumnState>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc, dir);
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
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49eda68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0._OnContextualMenuManipulator_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::*)(
    ::UnityEngine::UIElements::DropdownMenuAction*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::_OnContextualMenuManipulator_b__1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x49ef7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0*>::get(), "<OnContextualMenuManipulator>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0._OnContextualMenuManipulator_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DropdownMenuAction_Status (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::*)(::UnityEngine::UIElements::DropdownMenuAction*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::_OnContextualMenuManipulator_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x49ef7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0*>::get(), "<OnContextualMenuManipulator>b__2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr ::UnityEngine::UIElements::Column* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::__cordl_internal_set_column(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___column)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* const&
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::__cordl_internal_set___4__this(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::_OnContextualMenuManipulator_b__1(::UnityEngine::UIElements::DropdownMenuAction* a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0*>::get(), "<OnContextualMenuManipulator>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
inline ::UnityEngine::UIElements::DropdownMenuAction_Status
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::_OnContextualMenuManipulator_b__2(::UnityEngine::UIElements::DropdownMenuAction* a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0*>::get(), "<OnContextualMenuManipulator>b__2",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DropdownMenuAction_Status, false>(this, ___internal_method, a);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass65_0::MultiColumnCollectionHeader___c__DisplayClass65_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49ee3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0._UpdateSortColumnDescriptionsOnClick_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::*)(
    ::UnityEngine::UIElements::SortColumnDescription*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::_UpdateSortColumnDescriptionsOnClick_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x49ef874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0*>::get(),
                                    "<UpdateSortColumnDescriptionsOnClick>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr ::UnityEngine::UIElements::Column* const& UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::__cordl_internal_set_column(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___column)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::_UpdateSortColumnDescriptionsOnClick_b__0(::UnityEngine::UIElements::SortColumnDescription* d) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0*>::get(),
                                               "<UpdateSortColumnDescriptionsOnClick>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, d);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader___c__DisplayClass71_0::MultiColumnCollectionHeader___c__DisplayClass71_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_isApplyingViewState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_isApplyingViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "get_isApplyingViewState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_columnDataMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>* (
        ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnDataMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_columnDataMap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_columnLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ColumnLayout* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_columnLayout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_columnContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "get_columnContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_resizeHandleContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_resizeHandleContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "get_resizeHandleContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_sortedColumns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortedColumns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_sortedColumns",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_sortDescriptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SortColumnDescriptions* (
    ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortDescriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "get_sortDescriptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.set_sortDescriptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::SortColumnDescriptions*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::set_sortDescriptions)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x49e9488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "set_sortDescriptions",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescriptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_columns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Columns* (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_columns",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.get_sortingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e9c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_sortingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.set_sortingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(bool)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::set_sortingEnabled)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x49e9c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "set_sortingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.add_columnResized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action_2<int32_t, float_t>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_columnResized)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x49ea2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "add_columnResized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.remove_columnResized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action_2<int32_t, float_t>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_columnResized)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x49ea388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "remove_columnResized",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.add_columnSortingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_columnSortingChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x49ea43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "add_columnSortingChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.remove_columnSortingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_columnSortingChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x49ea4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "remove_columnSortingChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.add_contextMenuPopulateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_contextMenuPopulateEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x49ea57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "add_contextMenuPopulateEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.remove_contextMenuPopulateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_contextMenuPopulateEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x49ea630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "remove_contextMenuPopulateEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.add_viewDataRestored
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_viewDataRestored)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x49ea6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "add_viewDataRestored",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.remove_viewDataRestored
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::System::Action*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_viewDataRestored)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x49ea784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "remove_viewDataRestored",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Columns*, ::UnityEngine::UIElements::SortColumnDescriptions*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::_ctor)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x49ea824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Columns*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.ScheduleDoLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ScheduleDoLayout)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x49eb310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "ScheduleDoLayout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.ResizeToFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ResizeToFit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x49eb420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "ResizeToFit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.UpdateSortedColumns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortedColumns)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x49e9524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "UpdateSortedColumns", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.UpdateColumnControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateColumnControls)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x49eb4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "UpdateColumnControls", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Column*, int32_t)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x49ebc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnAdded)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x49eb004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnRemoved)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x49ec4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x49ec730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColumnDataType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnReordered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Column*, int32_t, int32_t)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnReordered)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x49ed048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnReordered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnResized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnResized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x49ed1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnResized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnContextualMenuManipulator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::ContextualMenuPopulateEvent*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnContextualMenuManipulator)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x49ed1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnContextualMenuManipulator",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnMoveManipulatorActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Internal::ColumnMover*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnMoveManipulatorActivated)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x49eda70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnMoveManipulatorActivated",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::ColumnMover*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnGeometryChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::GeometryChangedEvent*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnGeometryChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x49edb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnGeometryChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.DoLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::DoLayout)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x49edbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "DoLayout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnControlGeometryChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::GeometryChangedEvent*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnControlGeometryChanged)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x49edc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnControlGeometryChanged",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnColumnClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnClicked)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x49edf4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnClicked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.UpdateSortColumnDescriptionsOnClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::Column*, ::UnityEngine::EventModifiers)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortColumnDescriptionsOnClick)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x49ee174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "UpdateSortColumnDescriptionsOnClick", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.ScrollHorizontally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(float_t)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ScrollHorizontally)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x49ee3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "ScrollHorizontally",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.RaiseColumnResized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(int32_t)>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::RaiseColumnResized)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x49ede5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "RaiseColumnResized",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.RaiseColumnSortingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::RaiseColumnSortingChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x49eb490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "RaiseColumnSortingChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.ApplyColumnSorting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ApplyColumnSorting)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x49ec78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "ApplyColumnSorting",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.UpdateSortingStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortingStatus)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x49e9c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                 "UpdateSortingStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.OnViewDataReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnViewDataReady)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x49ee5b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), 96));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.SaveViewState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::SaveViewState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x49eb458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "SaveViewState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::Dispose)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x49ef114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader._OnContextualMenuManipulator_b__65_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::*)(
    ::UnityEngine::UIElements::DropdownMenuAction*)>(&::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::_OnContextualMenuManipulator_b__65_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x49ef6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "<OnContextualMenuManipulator>b__65_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortedColumns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortDescriptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OldSortedColumnStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ViewState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnDataMap_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnLayout_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnContainer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resizeHandleContainer_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columns_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___columnResized)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___columnSortingChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contextMenuPopulateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewDataRestored)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::setStaticF_columnContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "columnContainerUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::getStaticF_columnContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "columnContainerUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::setStaticF_handleContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "handleContainerUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::getStaticF_handleContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "handleContainerUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::setStaticF_reorderableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::getStaticF_reorderableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get>();
}
inline bool UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_isApplyingViewState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                               "get_isApplyingViewState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>*
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnDataMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_columnDataMap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader_ColumnData*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ColumnLayout* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_columnLayout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ColumnLayout*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columnContainer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_columnContainer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_resizeHandleContainer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                               "get_resizeHandleContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortedColumns() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_sortedColumns",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::SortColumnDescriptions* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortDescriptions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_sortDescriptions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SortColumnDescriptions*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::set_sortDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "set_sortDescriptions",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescriptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Columns* UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_columns() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_columns",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Columns*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::get_sortingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "get_sortingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::set_sortingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "set_sortingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_columnResized(::System::Action_2<int32_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "add_columnResized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_columnResized(::System::Action_2<int32_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "remove_columnResized",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_columnSortingChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "add_columnSortingChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_columnSortingChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "remove_columnSortingChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_contextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "add_contextMenuPopulateEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_contextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "remove_contextMenuPopulateEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::add_viewDataRestored(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "add_viewDataRestored",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::remove_viewDataRestored(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "remove_viewDataRestored",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Columns*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, columns, sortDescriptions, sortedColumns);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ScheduleDoLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "ScheduleDoLayout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ResizeToFit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "ResizeToFit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortedColumns() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "UpdateSortedColumns",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateColumnControls() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "UpdateColumnControls",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnAdded(::UnityEngine::UIElements::Column* column, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, index);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnAdded(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnRemoved(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColumnDataType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, type);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnReordered(::UnityEngine::UIElements::Column* column, int32_t from, int32_t to) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnReordered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, from, to);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnResized(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnResized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnContextualMenuManipulator(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnContextualMenuManipulator",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnMoveManipulatorActivated(::UnityEngine::UIElements::Internal::ColumnMover* mover) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                               "OnMoveManipulatorActivated", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Internal::ColumnMover*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnGeometryChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::DoLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "DoLayout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnControlGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnControlGeometryChanged",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnColumnClicked(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "OnColumnClicked", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortColumnDescriptionsOnClick(::UnityEngine::UIElements::Column* column, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                               "UpdateSortColumnDescriptionsOnClick", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, modifiers);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ScrollHorizontally(float_t horizontalOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "ScrollHorizontally",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, horizontalOffset);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::RaiseColumnResized(int32_t columnIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "RaiseColumnResized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, columnIndex);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::RaiseColumnSortingChanged() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(),
                                               "RaiseColumnSortingChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ApplyColumnSorting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "ApplyColumnSorting",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::UpdateSortingStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "UpdateSortingStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::OnViewDataReady() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), 96)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::SaveViewState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "SaveViewState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::_OnContextualMenuManipulator_b__65_0(::UnityEngine::UIElements::DropdownMenuAction* a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>::get(), "<OnContextualMenuManipulator>b__65_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*
UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*>(columns, sortDescriptions, sortedColumns));
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
