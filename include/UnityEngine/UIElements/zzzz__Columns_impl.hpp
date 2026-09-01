#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Columns.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindablePropertyChangedEventArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnDataType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColumnsDataType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyBindablePropertyChanged_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectListAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Columns_StretchMode::Columns_StretchMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Columns_StretchMode::Columns_StretchMode() {}
constexpr ::UnityEngine::UIElements::Columns_StretchMode UnityEngine::UIElements::Columns_StretchMode::Grow{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Columns_StretchMode UnityEngine::UIElements::Columns_StretchMode::GrowAndFill{ static_cast<int32_t>(0x1) };
template <typename T> inline void UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>* UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>::Columns_UxmlObjectFactory_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Columns_UxmlObjectFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns_UxmlObjectFactory::*)()>(&::UnityEngine::UIElements::Columns_UxmlObjectFactory::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d5ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns_UxmlObjectFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Columns_UxmlObjectFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns_UxmlObjectFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Columns_UxmlObjectFactory* UnityEngine::UIElements::Columns_UxmlObjectFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Columns_UxmlObjectFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Columns_UxmlObjectFactory::Columns_UxmlObjectFactory() {}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_PrimaryColumnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryColumnName;
}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_PrimaryColumnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryColumnName;
}
template <typename T>
constexpr void UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_set_m_PrimaryColumnName(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrimaryColumnName = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns_StretchMode>*&
UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_StretchMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StretchMode;
}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns_StretchMode>* const&
UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_StretchMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StretchMode;
}
template <typename T>
constexpr void UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_set_m_StretchMode(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns_StretchMode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StretchMode = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_Reorderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_Reorderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
template <typename T> constexpr void UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Reorderable = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_Resizable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resizable;
}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_Resizable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resizable;
}
template <typename T> constexpr void UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_set_m_Resizable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Resizable = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_ResizePreview() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResizePreview;
}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_ResizePreview() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResizePreview;
}
template <typename T> constexpr void UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_set_m_ResizePreview(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResizePreview = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>*&
UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_Columns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Columns;
}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>* const&
UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_get_m_Columns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Columns;
}
template <typename T>
constexpr void
UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::__cordl_internal_set_m_Columns(::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Columns = value;
}
template <typename T>
inline void UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::Init(::by_ref<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, bag, cc);
}
template <typename T> inline void UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>* UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>::Columns_UxmlObjectTraits_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Columns___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns___c::*)()>(&::UnityEngine::UIElements::Columns___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d5cb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns___c._UpdateVisibleColumns_b__87_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns___c::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::Columns___c::_UpdateVisibleColumns_b__87_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d5cb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns___c*>(),
                                                                                           { "<UpdateVisibleColumns>b__87_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Columns___c::setStaticF___9(::UnityEngine::UIElements::Columns___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Columns___c*, "<>9", ::UnityEngine::UIElements::Columns___c*>(std::forward<::UnityEngine::UIElements::Columns___c*>(value));
}
inline ::UnityEngine::UIElements::Columns___c* UnityEngine::UIElements::Columns___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Columns___c*, "<>9", ::UnityEngine::UIElements::Columns___c*>();
}
inline void UnityEngine::UIElements::Columns___c::setStaticF___9__87_0(::System::Predicate_1<::UnityEngine::UIElements::Column*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::UIElements::Column*>*, "<>9__87_0", ::UnityEngine::UIElements::Columns___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::UIElements::Column*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::UIElements::Column*>* UnityEngine::UIElements::Columns___c::getStaticF___9__87_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::UIElements::Column*>*, "<>9__87_0", ::UnityEngine::UIElements::Columns___c*>();
}
inline void UnityEngine::UIElements::Columns___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Columns___c::_UpdateVisibleColumns_b__87_0(::UnityEngine::UIElements::Column* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns___c*>(), { "<UpdateVisibleColumns>b__87_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::UnityEngine::UIElements::Columns___c* UnityEngine::UIElements::Columns___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Columns___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Columns___c::Columns___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.add_propertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*)>(
    &::UnityEngine::UIElements::Columns::add_propertyChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5a2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                { "add_propertyChanged", {}, { ::i2c::type_of<::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.remove_propertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*)>(
    &::UnityEngine::UIElements::Columns::remove_propertyChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5a390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                { "remove_propertyChanged", {}, { ::i2c::type_of<::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_primaryColumnName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::get_primaryColumnName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d5a450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_primaryColumnName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.set_primaryColumnName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::StringW)>(&::UnityEngine::UIElements::Columns::set_primaryColumnName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d5a458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_primaryColumnName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_reorderable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::get_reorderable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d5a58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_reorderable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.set_reorderable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(bool)>(&::UnityEngine::UIElements::Columns::set_reorderable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d5a594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_reorderable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_resizable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::get_resizable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d5a660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_resizable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.set_resizable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(bool)>(&::UnityEngine::UIElements::Columns::set_resizable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d5a668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_resizable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_resizePreview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::get_resizePreview)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d5a734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_resizePreview", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.set_resizePreview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(bool)>(&::UnityEngine::UIElements::Columns::set_resizePreview)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d5a73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_resizePreview", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_displayList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* (::UnityEngine::UIElements::Columns::*)()>(
    &::UnityEngine::UIElements::Columns::get_displayList)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d5441c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_displayList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_visibleList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* (::UnityEngine::UIElements::Columns::*)()>(
    &::UnityEngine::UIElements::Columns::get_visibleList)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d54504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_visibleList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.add_changed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>*)>(
    &::UnityEngine::UIElements::Columns::add_changed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5aac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "add_changed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.remove_changed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>*)>(
    &::UnityEngine::UIElements::Columns::remove_changed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5ab84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "remove_changed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_stretchMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Columns_StretchMode (::UnityEngine::UIElements::Columns::*)()>(
    &::UnityEngine::UIElements::Columns::get_stretchMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d5ac44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_stretchMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.set_stretchMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::Columns_StretchMode)>(
    &::UnityEngine::UIElements::Columns::set_stretchMode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d5ac4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_stretchMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::Columns_StretchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.add_columnAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>*)>(
    &::UnityEngine::UIElements::Columns::add_columnAdded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d56670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                             { "add_columnAdded", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.remove_columnAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>*)>(
    &::UnityEngine::UIElements::Columns::remove_columnAdded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5ad18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                             { "remove_columnAdded", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.add_columnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_1<::UnityEngine::UIElements::Column*>*)>(
    &::UnityEngine::UIElements::Columns::add_columnRemoved)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d56730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "add_columnRemoved", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Column*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.remove_columnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_1<::UnityEngine::UIElements::Column*>*)>(
    &::UnityEngine::UIElements::Columns::remove_columnRemoved)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5add8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "remove_columnRemoved", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Column*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.add_columnChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(
    ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*)>(&::UnityEngine::UIElements::Columns::add_columnChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5ae98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                         { "add_columnChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.remove_columnChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(
    ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*)>(&::UnityEngine::UIElements::Columns::remove_columnChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5af58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                         { "remove_columnChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.add_columnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_1<::UnityEngine::UIElements::Column*>*)>(
    &::UnityEngine::UIElements::Columns::add_columnResized)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5b018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "add_columnResized", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Column*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.remove_columnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_1<::UnityEngine::UIElements::Column*>*)>(
    &::UnityEngine::UIElements::Columns::remove_columnResized)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5b0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "remove_columnResized", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Column*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.add_columnReordered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>*)>(
    &::UnityEngine::UIElements::Columns::add_columnReordered)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d567f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                             { "add_columnReordered", {}, { ::i2c::type_of<::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.remove_columnReordered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>*)>(
    &::UnityEngine::UIElements::Columns::remove_columnReordered)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5b198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                             { "remove_columnReordered", {}, { ::i2c::type_of<::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.IsPrimary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::Columns::IsPrimary)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d5b258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "IsPrimary", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Column*>* (::UnityEngine::UIElements::Columns::*)()>(
    &::UnityEngine::UIElements::Columns::GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d58060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::Columns::*)()>(
    &::UnityEngine::UIElements::Columns::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d5b2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::Columns::Add)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5b2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::Clear)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6d5b638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::Columns::Contains)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6d5ba58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Contains", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns::*)(::StringW)>(&::UnityEngine::UIElements::Columns::Contains)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6d5bb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::ArrayW<::UnityEngine::UIElements::Column*>, int32_t)>(
    &::UnityEngine::UIElements::Columns::CopyTo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d5be04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Column*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::Columns::Remove)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6d5b7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.OnColumnsPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::System::Object*, ::UnityEngine::UIElements::BindablePropertyChangedEventArgs)>(
    &::UnityEngine::UIElements::Columns::OnColumnsPropertyChanged)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6d5bec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                         { "OnColumnsPropertyChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.OnColumnChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType)>(
    &::UnityEngine::UIElements::Columns::OnColumnChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d5c128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                { "OnColumnChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::UIElements::ColumnDataType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.OnColumnResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::Columns::OnColumnResized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d5c1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "OnColumnResized", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::get_Count)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d565cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6d5c218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::Columns::IndexOf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6d54294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "IndexOf", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(int32_t, ::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::Columns::Insert)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6d5b380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                                                           { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Column* (::UnityEngine::UIElements::Columns::*)(int32_t)>(&::UnityEngine::UIElements::Columns::get_Item)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6d56424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Column* (::UnityEngine::UIElements::Columns::*)(::StringW)>(&::UnityEngine::UIElements::Columns::get_Item)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6d5c2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.ReorderDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::Columns::ReorderDisplay)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6d5c5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "ReorderDisplay", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.InitOrderColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::InitOrderColumns)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d5a808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "InitOrderColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.DirtyVisibleColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::DirtyVisibleColumns)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6d5c180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "DirtyVisibleColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.UpdateVisibleColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::UpdateVisibleColumns)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6d5a888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "UpdateVisibleColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.NotifyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::UnityEngine::UIElements::ColumnsDataType)>(&::UnityEngine::UIElements::Columns::NotifyChange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d5a524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "NotifyChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnsDataType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns.NotifyPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)(::by_ref<::UnityEngine::UIElements::BindingId>)>(
    &::UnityEngine::UIElements::Columns::NotifyPropertyChanged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d5a540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                                                           { "NotifyPropertyChanged", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Columns._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Columns::*)()>(&::UnityEngine::UIElements::Columns::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d5c6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::Column*>*& UnityEngine::UIElements::Columns::__cordl_internal_get_m_Columns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Columns;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::Column*>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_Columns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Columns;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_Columns(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Columns = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& UnityEngine::UIElements::Columns::__cordl_internal_get_m_DisplayColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayColumns;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_DisplayColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayColumns;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_DisplayColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayColumns = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& UnityEngine::UIElements::Columns::__cordl_internal_get_m_VisibleColumns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleColumns;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_VisibleColumns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleColumns;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_VisibleColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisibleColumns = value;
}
constexpr bool& UnityEngine::UIElements::Columns::__cordl_internal_get_m_VisibleColumnsDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleColumnsDirty;
}
constexpr bool const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_VisibleColumnsDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleColumnsDirty;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_VisibleColumnsDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisibleColumnsDirty = value;
}
constexpr ::UnityEngine::UIElements::Columns_StretchMode& UnityEngine::UIElements::Columns::__cordl_internal_get_m_StretchMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StretchMode;
}
constexpr ::UnityEngine::UIElements::Columns_StretchMode const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_StretchMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StretchMode;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_StretchMode(::UnityEngine::UIElements::Columns_StretchMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StretchMode = value;
}
constexpr bool& UnityEngine::UIElements::Columns::__cordl_internal_get_m_Reorderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
constexpr bool const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_Reorderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Reorderable;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_Reorderable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Reorderable = value;
}
constexpr bool& UnityEngine::UIElements::Columns::__cordl_internal_get_m_Resizable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resizable;
}
constexpr bool const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_Resizable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resizable;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_Resizable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Resizable = value;
}
constexpr bool& UnityEngine::UIElements::Columns::__cordl_internal_get_m_ResizePreview() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResizePreview;
}
constexpr bool const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_ResizePreview() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResizePreview;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_ResizePreview(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResizePreview = value;
}
constexpr ::StringW& UnityEngine::UIElements::Columns::__cordl_internal_get_m_PrimaryColumnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryColumnName;
}
constexpr ::StringW const& UnityEngine::UIElements::Columns::__cordl_internal_get_m_PrimaryColumnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimaryColumnName;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_m_PrimaryColumnName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrimaryColumnName = value;
}
constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*& UnityEngine::UIElements::Columns::__cordl_internal_get_propertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyChanged;
}
constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_propertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyChanged;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyChanged = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>*& UnityEngine::UIElements::Columns::__cordl_internal_get_changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_changed(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___changed = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>*& UnityEngine::UIElements::Columns::__cordl_internal_get_columnAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnAdded;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_columnAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnAdded;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_columnAdded(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnAdded = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>*& UnityEngine::UIElements::Columns::__cordl_internal_get_columnRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnRemoved;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_columnRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnRemoved;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_columnRemoved(::System::Action_1<::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnRemoved = value;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*& UnityEngine::UIElements::Columns::__cordl_internal_get_columnChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnChanged;
}
constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_columnChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnChanged;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_columnChanged(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnChanged = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>*& UnityEngine::UIElements::Columns::__cordl_internal_get_columnResized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnResized;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_columnResized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnResized;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_columnResized(::System::Action_1<::UnityEngine::UIElements::Column*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnResized = value;
}
constexpr ::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>*& UnityEngine::UIElements::Columns::__cordl_internal_get_columnReordered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnReordered;
}
constexpr ::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* const& UnityEngine::UIElements::Columns::__cordl_internal_get_columnReordered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___columnReordered;
}
constexpr void UnityEngine::UIElements::Columns::__cordl_internal_set_columnReordered(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___columnReordered = value;
}
inline void UnityEngine::UIElements::Columns::setStaticF_primaryColumnNameProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "primaryColumnNameProperty", ::UnityEngine::UIElements::Columns*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Columns::getStaticF_primaryColumnNameProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "primaryColumnNameProperty", ::UnityEngine::UIElements::Columns*>();
}
inline void UnityEngine::UIElements::Columns::setStaticF_reorderableProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "reorderableProperty", ::UnityEngine::UIElements::Columns*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Columns::getStaticF_reorderableProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "reorderableProperty", ::UnityEngine::UIElements::Columns*>();
}
inline void UnityEngine::UIElements::Columns::setStaticF_resizableProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "resizableProperty", ::UnityEngine::UIElements::Columns*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Columns::getStaticF_resizableProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "resizableProperty", ::UnityEngine::UIElements::Columns*>();
}
inline void UnityEngine::UIElements::Columns::setStaticF_resizePreviewProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "resizePreviewProperty", ::UnityEngine::UIElements::Columns*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Columns::getStaticF_resizePreviewProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "resizePreviewProperty", ::UnityEngine::UIElements::Columns*>();
}
inline void UnityEngine::UIElements::Columns::setStaticF_stretchModeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "stretchModeProperty", ::UnityEngine::UIElements::Columns*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Columns::getStaticF_stretchModeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "stretchModeProperty", ::UnityEngine::UIElements::Columns*>();
}
inline void UnityEngine::UIElements::Columns::add_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                              { "add_propertyChanged", {}, { ::i2c::type_of<::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::remove_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                              { "remove_propertyChanged", {}, { ::i2c::type_of<::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::Columns::get_primaryColumnName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_primaryColumnName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::set_primaryColumnName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_primaryColumnName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Columns::get_reorderable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_reorderable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::set_reorderable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_reorderable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Columns::get_resizable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_resizable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::set_resizable(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_resizable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Columns::get_resizePreview() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_resizePreview", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::set_resizePreview(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_resizePreview", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* UnityEngine::UIElements::Columns::get_displayList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_displayList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* UnityEngine::UIElements::Columns::get_visibleList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_visibleList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::add_changed(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "add_changed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::remove_changed(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "remove_changed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Columns_StretchMode UnityEngine::UIElements::Columns::get_stretchMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_stretchMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Columns_StretchMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::set_stretchMode(::UnityEngine::UIElements::Columns_StretchMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "set_stretchMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::Columns_StretchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::add_columnAdded(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "add_columnAdded", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::remove_columnAdded(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                           { "remove_columnAdded", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::add_columnRemoved(::System::Action_1<::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                                                         { "add_columnRemoved", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Column*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::remove_columnRemoved(::System::Action_1<::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "remove_columnRemoved", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Column*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::add_columnChanged(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                              { "add_columnChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::remove_columnChanged(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                       { "remove_columnChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::add_columnResized(::System::Action_1<::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                                                         { "add_columnResized", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Column*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::remove_columnResized(::System::Action_1<::UnityEngine::UIElements::Column*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "remove_columnResized", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::Column*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::add_columnReordered(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                           { "add_columnReordered", {}, { ::i2c::type_of<::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Columns::remove_columnReordered(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                                           { "remove_columnReordered", {}, { ::i2c::type_of<::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Columns::IsPrimary(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "IsPrimary", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Column*>* UnityEngine::UIElements::Columns::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Column*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::Columns::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::Add(::UnityEngine::UIElements::Column* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::Columns::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Columns::Contains(::UnityEngine::UIElements::Column* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Contains", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool UnityEngine::UIElements::Columns::Contains(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void UnityEngine::UIElements::Columns::CopyTo(::ArrayW<::UnityEngine::UIElements::Column*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Column*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline bool UnityEngine::UIElements::Columns::Remove(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Columns::OnColumnsPropertyChanged(::System::Object* sender, ::UnityEngine::UIElements::BindablePropertyChangedEventArgs args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                       { "OnColumnsPropertyChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args);
}
inline void UnityEngine::UIElements::Columns::OnColumnChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(),
                                              { "OnColumnChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>(), ::i2c::type_of<::UnityEngine::UIElements::ColumnDataType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, type);
}
inline void UnityEngine::UIElements::Columns::OnColumnResized(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "OnColumnResized", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline int32_t UnityEngine::UIElements::Columns::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Columns::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::Columns::IndexOf(::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "IndexOf", {}, { ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, column);
}
inline void UnityEngine::UIElements::Columns::Insert(int32_t index, ::UnityEngine::UIElements::Column* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Column*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, column);
}
inline ::UnityEngine::UIElements::Column* UnityEngine::UIElements::Columns::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Column*>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Column* UnityEngine::UIElements::Columns::get_Item(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Column*>(this, ___internal_method, name);
}
inline void UnityEngine::UIElements::Columns::ReorderDisplay(int32_t from, int32_t to) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "ReorderDisplay", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline void UnityEngine::UIElements::Columns::InitOrderColumns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "InitOrderColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::DirtyVisibleColumns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "DirtyVisibleColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::UpdateVisibleColumns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "UpdateVisibleColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Columns::NotifyChange(::UnityEngine::UIElements::ColumnsDataType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "NotifyChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColumnsDataType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void UnityEngine::UIElements::Columns::NotifyPropertyChanged(::by_ref<::UnityEngine::UIElements::BindingId> property) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { "NotifyPropertyChanged", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void UnityEngine::UIElements::Columns::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Columns*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Columns* UnityEngine::UIElements::Columns::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Columns*>());
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>"
constexpr UnityEngine::UIElements::Columns::operator ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>"
constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>*
UnityEngine::UIElements::Columns::i___System__Collections__Generic__ICollection_1___UnityEngine__UIElements__Column__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>"
constexpr UnityEngine::UIElements::Columns::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>*
UnityEngine::UIElements::Columns::i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__Column__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::Columns::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::Columns::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::INotifyBindablePropertyChanged"
constexpr UnityEngine::UIElements::Columns::operator ::UnityEngine::UIElements::INotifyBindablePropertyChanged*() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::INotifyBindablePropertyChanged"
constexpr ::UnityEngine::UIElements::INotifyBindablePropertyChanged* UnityEngine::UIElements::Columns::i___UnityEngine__UIElements__INotifyBindablePropertyChanged() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Columns::Columns() {}
