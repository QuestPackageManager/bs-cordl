#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MultiColumnListViewController.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListViewController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnListViewController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescriptions_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.get_columnController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MultiColumnController* (::UnityEngine::UIElements::MultiColumnListViewController::*)()>(
    &::UnityEngine::UIElements::MultiColumnListViewController::get_columnController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c53a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), { "get_columnController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)(
    ::UnityEngine::UIElements::Columns*, ::UnityEngine::UIElements::SortColumnDescriptions*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6c53a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.PreRefresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)()>(&::UnityEngine::UIElements::MultiColumnListViewController::PreRefresh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c53b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.SortIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)()>(&::UnityEngine::UIElements::MultiColumnListViewController::SortIfNeeded)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c53b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), { "SortIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.InvokeMakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::InvokeMakeItem)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6c53b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.InvokeBindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)(::UnityEngine::UIElements::ReusableCollectionItem*, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::InvokeBindItem)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c5405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.GetItemForIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::MultiColumnListViewController::*)(int32_t)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::GetItemForIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c54258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.GetIndexForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::MultiColumnListViewController::*)(int32_t)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::GetIndexForId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c54284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.GetIdForIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::MultiColumnListViewController::*)(int32_t)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::GetIdForIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c5429c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.MakeItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::MultiColumnListViewController::*)()>(
    &::UnityEngine::UIElements::MultiColumnListViewController::MakeItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c542b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.BindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::BindItem)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c542cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.UnbindItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::UnbindItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c54358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.DestroyItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::MultiColumnListViewController::DestroyItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c54370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.PrepareView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)()>(&::UnityEngine::UIElements::MultiColumnListViewController::PrepareView)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6c54388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)()>(&::UnityEngine::UIElements::MultiColumnListViewController::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6c54514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnListViewController.UpdateReorderClassList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MultiColumnListViewController::*)()>(
    &::UnityEngine::UIElements::MultiColumnListViewController::UpdateReorderClassList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6c54678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), { "UpdateReorderClassList", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::MultiColumnController*& UnityEngine::UIElements::MultiColumnListViewController::__cordl_internal_get_m_ColumnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnController;
}
constexpr ::UnityEngine::UIElements::MultiColumnController* const& UnityEngine::UIElements::MultiColumnListViewController::__cordl_internal_get_m_ColumnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnController;
}
constexpr void UnityEngine::UIElements::MultiColumnListViewController::__cordl_internal_set_m_ColumnController(::UnityEngine::UIElements::MultiColumnController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColumnController = value;
}
inline ::UnityEngine::UIElements::MultiColumnController* UnityEngine::UIElements::MultiColumnListViewController::get_columnController() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), { "get_columnController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MultiColumnController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                          ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::Columns*>(), ::i2c::type_of<::UnityEngine::UIElements::SortColumnDescriptions*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columns, sortDescriptions, sortedColumns);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::PreRefresh() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::SortIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), { "SortIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reusableItem, index);
}
inline ::System::Object* UnityEngine::UIElements::MultiColumnListViewController::GetItemForIndex(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline int32_t UnityEngine::UIElements::MultiColumnListViewController::GetIndexForId(int32_t id) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline int32_t UnityEngine::UIElements::MultiColumnListViewController::GetIdForIndex(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::MultiColumnListViewController::MakeItem() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::DestroyItem(::UnityEngine::UIElements::VisualElement* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::PrepareView() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnListViewController::UpdateReorderClassList() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MultiColumnListViewController*>(), { "UpdateReorderClassList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MultiColumnListViewController*
UnityEngine::UIElements::MultiColumnListViewController::New_ctor(::UnityEngine::UIElements::Columns* columns, ::UnityEngine::UIElements::SortColumnDescriptions* sortDescriptions,
                                                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* sortedColumns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MultiColumnListViewController*>(columns, sortDescriptions, sortedColumns));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MultiColumnListViewController::MultiColumnListViewController() {}
