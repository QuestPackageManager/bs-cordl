#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MultiColumnTreeViewController.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeViewController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnTreeViewController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescriptions_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.get_columnController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MultiColumnController* (::UnityEngine::UIElements::MultiColumnTreeViewController::*)()>(
    &::UnityEngine::UIElements::MultiColumnTreeViewController::get_columnController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c5473c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), { "get_columnController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeViewController::*)(
    ::UnityEngine::UIElements::Columns*, ::UnityEngine::UIElements::SortColumnDescriptions*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*)>(
    &::UnityEngine::UIElements::MultiColumnTreeViewController::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6c54744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.PreRefresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeViewController::*)()>(&::UnityEngine::UIElements::MultiColumnTreeViewController::PreRefresh)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c547f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.InvokeMakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(
    &::UnityEngine::UIElements::MultiColumnTreeViewController::InvokeMakeItem)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c54828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.MakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::MultiColumnTreeViewController::*)()>(
    &::UnityEngine::UIElements::MultiColumnTreeViewController::MakeItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c54cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.BindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeViewController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnTreeViewController::BindItem)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c54cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.UnbindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeViewController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnTreeViewController::UnbindItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c54d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.DestroyItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeViewController::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::MultiColumnTreeViewController::DestroyItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c54d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.PrepareView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeViewController::*)()>(&::UnityEngine::UIElements::MultiColumnTreeViewController::PrepareView)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c54d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeViewController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeViewController::*)()>(&::UnityEngine::UIElements::MultiColumnTreeViewController::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c54db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::MultiColumnController*& UnityEngine::UIElements::MultiColumnTreeViewController::__cordl_internal_get_m_ColumnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnController;
}
constexpr ::UnityEngine::UIElements::MultiColumnController* const& UnityEngine::UIElements::MultiColumnTreeViewController::__cordl_internal_get_m_ColumnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnController;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeViewController::__cordl_internal_set_m_ColumnController(::UnityEngine::UIElements::MultiColumnController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColumnController = value;
}
inline ::UnityEngine::UIElements::MultiColumnController* UnityEngine::UIElements::MultiColumnTreeViewController::get_columnController() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), { "get_columnController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MultiColumnController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeViewController::_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                          ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columns, sortDescriptions, sortedColumns);
}
inline void UnityEngine::UIElements::MultiColumnTreeViewController::PreRefresh() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeViewController::InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::MultiColumnTreeViewController::MakeItem() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeViewController::BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::MultiColumnTreeViewController::UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::MultiColumnTreeViewController::DestroyItem(::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::MultiColumnTreeViewController::PrepareView() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeViewController::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnTreeViewController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MultiColumnTreeViewController*
UnityEngine::UIElements::MultiColumnTreeViewController::New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MultiColumnTreeViewController*>(columns, sortDescriptions, sortedColumns));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MultiColumnTreeViewController::MultiColumnTreeViewController() {}
