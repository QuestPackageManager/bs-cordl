#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MultiColumnTreeView.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnSortingMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnTreeView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindablePropertyChangedEventArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnSortingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuPopulateEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnTreeViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnTreeView_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescriptions_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d620c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory* UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MultiColumnTreeView_UxmlFactory::MultiColumnTreeView_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6d6212c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6d62350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ColumnSortingMode>*&
UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_get_m_SortingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingMode;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ColumnSortingMode>* const&
UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_get_m_SortingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingMode;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_set_m_SortingMode(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ColumnSortingMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortingMode = value;
}
constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>*& UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_get_m_Columns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Columns;
}
constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>* const&
UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_get_m_Columns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Columns;
}
constexpr void
UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_set_m_Columns(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Columns = value;
}
constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>*&
UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_get_m_SortColumnDescriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortColumnDescriptions;
}
constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>* const&
UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_get_m_SortColumnDescriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortColumnDescriptions;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::__cordl_internal_set_m_SortColumnDescriptions(
    ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortColumnDescriptions = value;
}
inline void UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                          ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits* UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MultiColumnTreeView_UxmlTraits::MultiColumnTreeView_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.get_viewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MultiColumnTreeViewController* (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(
    &::UnityEngine::UIElements::MultiColumnTreeView::get_viewController)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d615b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "get_viewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.get_columns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Columns* (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(
    &::UnityEngine::UIElements::MultiColumnTreeView::get_columns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d6163c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "get_columns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.set_columns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::Columns*)>(
    &::UnityEngine::UIElements::MultiColumnTreeView::set_columns)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6d61644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "set_columns", {}, { ::i2c::type_of<::UnityEngine::UIElements::Columns*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.get_sortColumnDescriptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::SortColumnDescriptions* (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(
    &::UnityEngine::UIElements::MultiColumnTreeView::get_sortColumnDescriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d617c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "get_sortColumnDescriptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.set_sortColumnDescriptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::SortColumnDescriptions*)>(
    &::UnityEngine::UIElements::MultiColumnTreeView::set_sortColumnDescriptions)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6d617cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(),
                                                             { "set_sortColumnDescriptions", {}, { ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.get_sortingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ColumnSortingMode (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(
    &::UnityEngine::UIElements::MultiColumnTreeView::get_sortingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d618cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "get_sortingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.set_sortingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::ColumnSortingMode)>(
    &::UnityEngine::UIElements::MultiColumnTreeView::set_sortingMode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6d618d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(),
                                                                                           { "set_sortingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnSortingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6d61998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::Columns*)>(
    &::UnityEngine::UIElements::MultiColumnTreeView::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6d619f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Columns*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.CreateViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::CollectionViewController* (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(
    &::UnityEngine::UIElements::MultiColumnTreeView::CreateViewController)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6d61b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), 141 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.SetViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::CollectionViewController*)>(
    &::UnityEngine::UIElements::MultiColumnTreeView::SetViewController)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6d61bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), 142 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.CreateVirtualizationController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d61e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), 140 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.RaiseColumnSortingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::RaiseColumnSortingChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d618b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "RaiseColumnSortingChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.ColumnsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::System::Object*, ::UnityEngine::UIElements::BindablePropertyChangedEventArgs)>(
    &::UnityEngine::UIElements::MultiColumnTreeView::ColumnsChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d61e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(),
                                                { "ColumnsChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.RaiseHeaderContextMenuPopulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(
    ::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::MultiColumnTreeView::RaiseHeaderContextMenuPopulate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d61e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(),
            { "RaiseHeaderContextMenuPopulate", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Columns*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_Columns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Columns;
}
constexpr ::UnityEngine::UIElements::Columns* const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_Columns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Columns;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_m_Columns(::UnityEngine::UIElements::Columns* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Columns = value;
}
constexpr ::UnityEngine::UIElements::ColumnSortingMode& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingMode;
}
constexpr ::UnityEngine::UIElements::ColumnSortingMode const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingMode;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_m_SortingMode(::UnityEngine::UIElements::ColumnSortingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortingMode = value;
}
constexpr ::UnityEngine::UIElements::SortColumnDescriptions*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortColumnDescriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortColumnDescriptions;
}
constexpr ::UnityEngine::UIElements::SortColumnDescriptions* const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortColumnDescriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortColumnDescriptions;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_m_SortColumnDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortColumnDescriptions = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortedColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedColumns;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortedColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedColumns;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_m_SortedColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortedColumns = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_columnSortingChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnSortingChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_columnSortingChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnSortingChanged;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_columnSortingChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnSortingChanged = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>*&
UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_headerContextMenuPopulateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerContextMenuPopulateEvent;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* const&
UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_headerContextMenuPopulateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerContextMenuPopulateEvent;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_headerContextMenuPopulateEvent(
    ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerContextMenuPopulateEvent = value;
}
inline void UnityEngine::UIElements::MultiColumnTreeView::setStaticF_columnsProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "columnsProperty", ::UnityEngine::UIElements::MultiColumnTreeView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::MultiColumnTreeView::getStaticF_columnsProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "columnsProperty", ::UnityEngine::UIElements::MultiColumnTreeView*>();
}
inline void UnityEngine::UIElements::MultiColumnTreeView::setStaticF_sortColumnDescriptionsProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "sortColumnDescriptionsProperty", ::UnityEngine::UIElements::MultiColumnTreeView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::MultiColumnTreeView::getStaticF_sortColumnDescriptionsProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "sortColumnDescriptionsProperty", ::UnityEngine::UIElements::MultiColumnTreeView*>();
}
inline void UnityEngine::UIElements::MultiColumnTreeView::setStaticF_sortingModeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "sortingModeProperty", ::UnityEngine::UIElements::MultiColumnTreeView*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::MultiColumnTreeView::getStaticF_sortingModeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "sortingModeProperty", ::UnityEngine::UIElements::MultiColumnTreeView*>();
}
inline ::UnityEngine::UIElements::MultiColumnTreeViewController* UnityEngine::UIElements::MultiColumnTreeView::get_viewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "get_viewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MultiColumnTreeViewController*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Columns* UnityEngine::UIElements::MultiColumnTreeView::get_columns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "get_columns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Columns*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::set_columns(::UnityEngine::UIElements::Columns* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "set_columns", {}, { ::i2c::type_of<::UnityEngine::UIElements::Columns*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::SortColumnDescriptions* UnityEngine::UIElements::MultiColumnTreeView::get_sortColumnDescriptions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "get_sortColumnDescriptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SortColumnDescriptions*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::set_sortColumnDescriptions(::UnityEngine::UIElements::SortColumnDescriptions* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(),
                                                           { "set_sortColumnDescriptions", {}, { ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ColumnSortingMode UnityEngine::UIElements::MultiColumnTreeView::get_sortingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "get_sortingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ColumnSortingMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::set_sortingMode(::UnityEngine::UIElements::ColumnSortingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(),
                                                                                         { "set_sortingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnSortingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::_ctor(::UnityEngine::UIElements::Columns* columns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Columns*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columns);
}
inline ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::MultiColumnTreeView::CreateViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), 141 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionViewController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::SetViewController(::UnityEngine::UIElements::CollectionViewController* controller) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), 142 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::CreateVirtualizationController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), 140 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::RaiseColumnSortingChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(), { "RaiseColumnSortingChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::ColumnsChanged(::System::Object* sender, ::UnityEngine::UIElements::BindablePropertyChangedEventArgs args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(),
                                              { "ColumnsChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::RaiseHeaderContextMenuPopulate(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt, ::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeView*>(),
                       { "RaiseHeaderContextMenuPopulate", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, column);
}
inline ::UnityEngine::UIElements::MultiColumnTreeView* UnityEngine::UIElements::MultiColumnTreeView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MultiColumnTreeView*>());
}
inline ::UnityEngine::UIElements::MultiColumnTreeView* UnityEngine::UIElements::MultiColumnTreeView::New_ctor(::UnityEngine::UIElements::Columns* columns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MultiColumnTreeView*>(columns));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MultiColumnTreeView::MultiColumnTreeView() {}
