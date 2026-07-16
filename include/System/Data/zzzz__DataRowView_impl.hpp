#pragma once
// IWYU pragma private; include "System/Data/DataRowView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataRowView_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DataRowView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowView::*)(::System::Data::DataView*, ::System::Data::DataRow*)>(&::System::Data::DataRowView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6028cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataView*>(), ::i2c::type_of<::System::Data::DataRow*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRowView::*)(::System::Object*)>(&::System::Data::DataRowView::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6028d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { ::i2c::class_of<::System::Data::DataRowView*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6028d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { ::i2c::class_of<::System::Data::DataRowView*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.get_DataView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataView* (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::get_DataView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6028d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "get_DataView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.get_RowVersionDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowVersion (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::get_RowVersionDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6028d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "get_RowVersionDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.GetRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::GetRecord)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6028d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "GetRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.HasRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::HasRecord)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6028db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "HasRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.GetColumnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataRowView::*)(::System::Data::DataColumn*)>(&::System::Data::DataRowView::GetColumnValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x601dc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "GetColumnValue", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.SetColumnValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowView::*)(::System::Data::DataColumn*, ::System::Object*)>(&::System::Data::DataRowView::SetColumnValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x601dde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "SetColumnValue", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.CreateChildView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataView* (::System::Data::DataRowView::*)(::System::Data::DataRelation*, bool)>(
    &::System::Data::DataRowView::CreateChildView)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6028dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "CreateChildView", {}, { ::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.CreateChildView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataView* (::System::Data::DataRowView::*)(::System::Data::DataRelation*)>(&::System::Data::DataRowView::CreateChildView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6024dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "CreateChildView", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.get_Row
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::get_Row)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6028f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "get_Row", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.EndEdit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::EndEdit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6028f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "EndEdit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.get_IsNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::get_IsNew)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6028fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "get_IsNew", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.RaisePropertyChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRowView::*)(::StringW)>(&::System::Data::DataRowView::RaisePropertyChangedEvent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6028ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "RaisePropertyChangedEvent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::Data::DataRowView::*)()>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6029084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60290e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataRowView::*)()>(&::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60290e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::Data::DataRowView::*)()>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60290f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::Data::DataRowView::*)()>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60290f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::Data::DataRowView::*)()>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6029100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataRowView::*)(::System::Type*)>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6029108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::Data::DataRowView::*)()>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6029110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::Data::DataRowView::*)(::ArrayW<::System::Attribute*>)>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x602916c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::Data::DataRowView::*)()>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60291c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::Data::DataRowView::*)(::ArrayW<::System::Attribute*>)>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6029268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(),
                                                             { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRowView.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataRowView::*)(::System::ComponentModel::PropertyDescriptor*)>(
    &::System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6029300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(),
                                                { "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataView*& System::Data::DataRowView::__cordl_internal_get__dataView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataView;
}
constexpr ::System::Data::DataView* const& System::Data::DataRowView::__cordl_internal_get__dataView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataView;
}
constexpr void System::Data::DataRowView::__cordl_internal_set__dataView(::System::Data::DataView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataView = value;
}
constexpr ::System::Data::DataRow*& System::Data::DataRowView::__cordl_internal_get__row() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____row;
}
constexpr ::System::Data::DataRow* const& System::Data::DataRowView::__cordl_internal_get__row() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____row;
}
constexpr void System::Data::DataRowView::__cordl_internal_set__row(::System::Data::DataRow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____row = value;
}
constexpr bool& System::Data::DataRowView::__cordl_internal_get__delayBeginEdit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayBeginEdit;
}
constexpr bool const& System::Data::DataRowView::__cordl_internal_get__delayBeginEdit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayBeginEdit;
}
constexpr void System::Data::DataRowView::__cordl_internal_set__delayBeginEdit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayBeginEdit = value;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler*& System::Data::DataRowView::__cordl_internal_get_PropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& System::Data::DataRowView::__cordl_internal_get_PropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyChanged;
}
constexpr void System::Data::DataRowView::__cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PropertyChanged = value;
}
inline void System::Data::DataRowView::setStaticF_s_zeroPropertyDescriptorCollection(::System::ComponentModel::PropertyDescriptorCollection* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::PropertyDescriptorCollection*, "s_zeroPropertyDescriptorCollection", ::System::Data::DataRowView*>(
      std::forward<::System::ComponentModel::PropertyDescriptorCollection*>(value));
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::Data::DataRowView::getStaticF_s_zeroPropertyDescriptorCollection() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::PropertyDescriptorCollection*, "s_zeroPropertyDescriptorCollection", ::System::Data::DataRowView*>();
}
inline void System::Data::DataRowView::_ctor(::System::Data::DataView* dataView, ::System::Data::DataRow* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataView*>(), ::i2c::type_of<::System::Data::DataRow*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataView, row);
}
inline bool System::Data::DataRowView::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRowView*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::Data::DataRowView::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataRowView*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Data::DataView* System::Data::DataRowView::get_DataView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "get_DataView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataView*>(this, ___internal_method);
}
inline ::System::Data::DataRowVersion System::Data::DataRowView::get_RowVersionDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "get_RowVersionDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowVersion>(this, ___internal_method);
}
inline int32_t System::Data::DataRowView::GetRecord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "GetRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Data::DataRowView::HasRecord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "HasRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataRowView::GetColumnValue(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "GetColumnValue", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, column);
}
inline void System::Data::DataRowView::SetColumnValue(::System::Data::DataColumn* column, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "SetColumnValue", {}, { ::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, value);
}
inline ::System::Data::DataView* System::Data::DataRowView::CreateChildView(::System::Data::DataRelation* relation, bool followParent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "CreateChildView", {}, { ::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataView*>(this, ___internal_method, relation, followParent);
}
inline ::System::Data::DataView* System::Data::DataRowView::CreateChildView(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "CreateChildView", {}, { ::i2c::type_of<::System::Data::DataRelation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataView*>(this, ___internal_method, relation);
}
inline ::System::Data::DataRow* System::Data::DataRowView::get_Row() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "get_Row", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method);
}
inline void System::Data::DataRowView::EndEdit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "EndEdit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataRowView::get_IsNew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "get_IsNew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataRowView::RaisePropertyChangedEvent(::StringW propName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "RaisePropertyChangedEvent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propName);
}
inline ::System::ComponentModel::AttributeCollection* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::StringW System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(), { "System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, { ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::Object* System::Data::DataRowView::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataRowView*>(),
                                              { "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, { ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pd);
}
inline ::System::Data::DataRowView* System::Data::DataRowView::New_ctor(::System::Data::DataView* dataView, ::System::Data::DataRow* row) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRowView*>(dataView, row));
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::Data::DataRowView::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::Data::DataRowView::i___System__ComponentModel__ICustomTypeDescriptor() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr System::Data::DataRowView::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* System::Data::DataRowView::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
  return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataRowView::DataRowView() {}
