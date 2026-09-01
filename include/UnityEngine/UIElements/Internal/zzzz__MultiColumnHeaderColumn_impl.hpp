#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Internal\MultiColumnHeaderColumn.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumn_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__ColumnMover_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnSortIndicator_def.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnDataType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.get_clickable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Clickable* (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_clickable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2a5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_clickable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.set_clickable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Clickable*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_clickable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2a5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                           { "set_clickable", {}, { ::i2c::type_of<::UnityEngine::UIElements::Clickable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.get_mover
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Internal::ColumnMover* (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_mover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2a5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_mover", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.set_mover
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Internal::ColumnMover*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_mover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2a5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                           { "set_mover", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::ColumnMover*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.set_sortOrderLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::StringW)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_sortOrderLabel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6d28c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "set_sortOrderLabel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.get_column
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Column* (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_column)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2a5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_column", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.set_column
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_column)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2a5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                           { "set_column", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.get_content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2a5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_content", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.set_content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_content)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d2a5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                           { "set_content", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.get_isContentBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_isContentBound)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6d2a844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_isContentBound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.set_isContentBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(bool)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_isContentBound)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6d2a8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "set_isContentBound", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::_ctor)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x6d264d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.OnColumnChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(
    ::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType)>(&::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::OnColumnChanged)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6d2af38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                { "OnColumnChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::UIElements::ColumnDataType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.OnColumnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::OnColumnResized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d2b11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                           { "OnColumnResized", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.InitManipulators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::InitManipulators)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6d2acd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "InitManipulators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.OnMoverChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::Internal::ColumnMover*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::OnMoverChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d2b120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                           { "OnMoverChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::ColumnMover*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.UpdateDataFromColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateDataFromColumn)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d2b0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "UpdateDataFromColumn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.BindHeaderContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::BindHeaderContent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6d2b2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "BindHeaderContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.UnbindHeaderContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UnbindHeaderContent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6d2b1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "UnbindHeaderContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.DestroyHeaderContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::DestroyHeaderContent)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6d2a6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "DestroyHeaderContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.CreateDefaultHeaderContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::CreateDefaultHeaderContent)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6d2b37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "CreateDefaultHeaderContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.DefaultBindHeaderContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::DefaultBindHeaderContent)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6d2b524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                           { "DefaultBindHeaderContent", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.UpdateHeaderTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateHeaderTemplate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6d2a9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "UpdateHeaderTemplate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.UpdateGeometryFromColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateGeometryFromColumn)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6d2abc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "UpdateGeometryFromColumn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::Dispose)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6d29740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get_m_ContentContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get_m_ContentContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentContainer = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get_m_Content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get_m_Content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_set_m_Content(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Content = value;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get_m_SortIndicatorContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortIndicatorContainer;
}
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* const&
UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get_m_SortIndicatorContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortIndicatorContainer;
}
constexpr void
UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_set_m_SortIndicatorContainer(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnSortIndicator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortIndicatorContainer = value;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get_m_ScheduledHeaderTemplateUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledHeaderTemplateUpdate;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get_m_ScheduledHeaderTemplateUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledHeaderTemplateUpdate;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_set_m_ScheduledHeaderTemplateUpdate(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScheduledHeaderTemplateUpdate = value;
}
constexpr ::UnityEngine::UIElements::Clickable*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get__clickable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickable_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Clickable* const& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get__clickable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickable_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_set__clickable_k__BackingField(::UnityEngine::UIElements::Clickable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clickable_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::Internal::ColumnMover*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get__mover_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mover_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Internal::ColumnMover* const& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get__mover_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mover_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_set__mover_k__BackingField(::UnityEngine::UIElements::Internal::ColumnMover* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mover_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get__column_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Column* const& UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_get__column_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::__cordl_internal_set__column_k__BackingField(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____column_k__BackingField = value;
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_sortableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "sortableUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_sortableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "sortableUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_sortedAscendingUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "sortedAscendingUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_sortedAscendingUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "sortedAscendingUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_sortedDescendingUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "sortedDescendingUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_sortedDescendingUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "sortedDescendingUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_movingUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "movingUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_movingUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "movingUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_contentContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentContainerUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_contentContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentContainerUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_contentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_contentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_defaultContentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "defaultContentUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_defaultContentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "defaultContentUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_hasIconUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "hasIconUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_hasIconUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "hasIconUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_hasTitleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "hasTitleUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_hasTitleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "hasTitleUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_titleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "titleUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_titleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "titleUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_iconElementName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconElementName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_iconElementName() {
  return ::cordl_internals::getStaticField<::StringW, "iconElementName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_titleElementName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "titleElementName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_titleElementName() {
  return ::cordl_internals::getStaticField<::StringW, "titleElementName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_s_BoundVEPropertyName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_BoundVEPropertyName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_s_BoundVEPropertyName() {
  return ::cordl_internals::getStaticField<::StringW, "s_BoundVEPropertyName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_s_BindingCallbackVEPropertyName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_BindingCallbackVEPropertyName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_s_BindingCallbackVEPropertyName() {
  return ::cordl_internals::getStaticField<::StringW, "s_BindingCallbackVEPropertyName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_s_UnbindingCallbackVEPropertyName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_UnbindingCallbackVEPropertyName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_s_UnbindingCallbackVEPropertyName() {
  return ::cordl_internals::getStaticField<::StringW, "s_UnbindingCallbackVEPropertyName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::setStaticF_s_DestroyCallbackVEPropertyName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_DestroyCallbackVEPropertyName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::getStaticF_s_DestroyCallbackVEPropertyName() {
  return ::cordl_internals::getStaticField<::StringW, "s_DestroyCallbackVEPropertyName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>();
}
inline ::UnityEngine::UIElements::Clickable* UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_clickable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_clickable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Clickable*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_clickable(::UnityEngine::UIElements::Clickable* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                         { "set_clickable", {}, { ::i2c::type_of<::UnityEngine::UIElements::Clickable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Internal::ColumnMover* UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_mover() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_mover", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Internal::ColumnMover*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_mover(::UnityEngine::UIElements::Internal::ColumnMover* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                         { "set_mover", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::ColumnMover*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_sortOrderLabel(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "set_sortOrderLabel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Column* UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_column() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_column", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Column*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_column(::UnityEngine::UIElements::Column* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                         { "set_column", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_content() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_content", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_content(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                         { "set_content", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::get_isContentBound() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "get_isContentBound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::set_isContentBound(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "set_isContentBound", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::_ctor(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::OnColumnChanged(::UnityEngine::UIElements::Column* c, ::UnityEngine::UIElements::ColumnDataType role) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                              { "OnColumnChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::UIElements::ColumnDataType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, role);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::OnColumnResized(::UnityEngine::UIElements::Column* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                         { "OnColumnResized", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::InitManipulators() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "InitManipulators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::OnMoverChanged(::UnityEngine::UIElements::Internal::ColumnMover* mv) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                         { "OnMoverChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::ColumnMover*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mv);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateDataFromColumn() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "UpdateDataFromColumn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::BindHeaderContent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "BindHeaderContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UnbindHeaderContent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "UnbindHeaderContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::DestroyHeaderContent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "DestroyHeaderContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::CreateDefaultHeaderContent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "CreateDefaultHeaderContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::DefaultBindHeaderContent(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(),
                                                                                         { "DefaultBindHeaderContent", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateHeaderTemplate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "UpdateHeaderTemplate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::UpdateGeometryFromColumn() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "UpdateGeometryFromColumn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::New_ctor(::UnityEngine::UIElements::Column* column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*>(column));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn::MultiColumnHeaderColumn() {}
