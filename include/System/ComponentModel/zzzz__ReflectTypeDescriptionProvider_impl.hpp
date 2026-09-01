#pragma once
// IWYU pragma private; include "System\ComponentModel\ReflectTypeDescriptionProvider.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/ComponentModel/zzzz__ReflectTypeDescriptionProvider_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__EditorAttribute_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__ReflectTypeDescriptionProvider_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63da63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.get_IsPopulated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)()>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::get_IsPopulated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63da77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "get_IsPopulated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)()>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetAttributes)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x63d5c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "GetAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetClassName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63d64ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                           { "GetClassName", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetComponentName)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x63d6530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                           { "GetComponentName", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetConverter)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x63d6708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                           { "GetConverter", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetDefaultEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetDefaultEvent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x63d6bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                           { "GetDefaultEvent", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetDefaultProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)(::System::Object*)>(
        &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetDefaultProperty)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x63d6d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                           { "GetDefaultProperty", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)(::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetEditor)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x63d6f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                           { "GetEditor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetEditorAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EditorAttribute* (*)(::System::ComponentModel::AttributeCollection*, ::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetEditorAttribute)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x63dc92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                             { "GetEditorAttribute", {}, { ::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)()>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetEvents)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x63d7928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "GetEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)()>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetProperties)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x63da318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "GetProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.GetTypeFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)(::StringW)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetTypeFromName)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x63dc438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "GetTypeFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::*)()>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::Refresh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63db8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::System::ComponentModel::AttributeCollection*& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributes;
}
constexpr ::System::ComponentModel::AttributeCollection* const& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributes;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_set__attributes(::System::ComponentModel::AttributeCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributes = value;
}
constexpr ::System::ComponentModel::EventDescriptorCollection*& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____events;
}
constexpr ::System::ComponentModel::EventDescriptorCollection* const& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____events;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_set__events(::System::ComponentModel::EventDescriptorCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____events = value;
}
constexpr ::System::ComponentModel::PropertyDescriptorCollection*& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____properties;
}
constexpr ::System::ComponentModel::PropertyDescriptorCollection* const& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____properties;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_set__properties(::System::ComponentModel::PropertyDescriptorCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____properties = value;
}
constexpr ::System::ComponentModel::TypeConverter*& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__converter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr ::System::ComponentModel::TypeConverter* const& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__converter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_set__converter(::System::ComponentModel::TypeConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____converter = value;
}
constexpr ::ArrayW<::System::Object*>& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__editors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editors;
}
constexpr ::ArrayW<::System::Object*> const& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__editors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editors;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_set__editors(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editors = value;
}
constexpr ::ArrayW<::System::Type*>& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__editorTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__editorTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorTypes;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_set__editorTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editorTypes = value;
}
constexpr int32_t& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__editorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorCount;
}
constexpr int32_t const& System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_get__editorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorCount;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::__cordl_internal_set__editorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editorCount = value;
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline bool System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::get_IsPopulated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "get_IsPopulated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "GetAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetClassName(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                         { "GetClassName", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetComponentName(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                         { "GetComponentName", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetConverter(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                         { "GetConverter", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetDefaultEvent(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                         { "GetDefaultEvent", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetDefaultProperty(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                         { "GetDefaultProperty", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method, instance);
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetEditor(::System::Object* instance, ::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                                                         { "GetEditor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, instance, editorBaseType);
}
inline ::System::ComponentModel::EditorAttribute*
System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetEditorAttribute(::System::ComponentModel::AttributeCollection* attributes, ::System::Type* editorBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(),
                                                           { "GetEditorAttribute", {}, { ::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EditorAttribute*>(nullptr, ___internal_method, attributes, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "GetEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "GetProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::GetTypeFromName(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "GetTypeFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName);
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::Refresh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(type));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData::ReflectTypeDescriptionProvider_ReflectedTypeData() {}
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectTypeDescriptionProvider::*)()>(&::System::ComponentModel::ReflectTypeDescriptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63d4cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.get_IntrinsicTypeConverters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (*)()>(&::System::ComponentModel::ReflectTypeDescriptionProvider::get_IntrinsicTypeConverters)> {
  constexpr static std::size_t size = 0xa54;
  constexpr static std::size_t addrs = 0x63d4cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "get_IntrinsicTypeConverters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(
        &::System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x63d5708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Type*)>(&::System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x63d58a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                           { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetAttributes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63d59ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetCache)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x63d6148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetClassName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63d64bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetClassName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetComponentName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63d650c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                           { "GetComponentName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetConverter)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63d66e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                           { "GetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetDefaultEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetDefaultEvent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63d6b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                           { "GetDefaultEvent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetDefaultProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetDefaultProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63d6d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                           { "GetDefaultProperty", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetEditor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63d6ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                             { "GetEditor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetEditorTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (*)(::System::Type*)>(&::System::ComponentModel::ReflectTypeDescriptionProvider::GetEditorTable)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x63d7514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetEditorTable", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetEvents)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63d790c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetEvents", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63d7c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedAttributes", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedClassName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63d7ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedClassName", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedComponentName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63d7ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedComponentName", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedConverter)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63d7d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedConverter", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedDefaultEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedDefaultEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63d7d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedDefaultEvent", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedDefaultProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedDefaultProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63d7d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedDefaultProperty", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedEditor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x63d7d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                           { "GetExtendedEditor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63d7d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedEvents", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedProperties)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x63d7df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedProperties", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x63d930c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtenders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (*)(
    ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenders)> {
  constexpr static std::size_t size = 0xab8;
  constexpr static std::size_t addrs = 0x63d97a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
            { "GetExtenders", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedPropertyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*, ::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedPropertyOwner)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63da260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                { "GetExtendedPropertyOwner", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetExtendedTypeDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63da2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetProperties)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63da2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetProperties", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetPropertyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::System::Object*, ::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::ReflectTypeDescriptionProvider::GetPropertyOwner)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x63da28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                            { "GetPropertyOwner", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetReflectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::GetReflectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63da634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetTypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* (
    ::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, bool)>(&::System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeData)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x63d59c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                           { "GetTypeData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63da644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.GetTypeFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeFromName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x63da64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetTypeFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.IsPopulated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::IsPopulated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63da74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "IsPopulated", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.ReflectGetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Type*)>(&::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x63da798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "ReflectGetAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.ReflectGetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::MemberInfo*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x63d3628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                           { "ReflectGetAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.ReflectGetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::EventDescriptor*> (*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetEvents)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x63dabc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "ReflectGetEvents", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.ReflectGetExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::PropertyDescriptor*> (*)(::System::ComponentModel::IExtenderProvider*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetExtendedProperties)> {
  constexpr static std::size_t size = 0xf64;
  constexpr static std::size_t addrs = 0x63d83a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                             { "ReflectGetExtendedProperties", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.ReflectGetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::PropertyDescriptor*> (*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetProperties)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x63db27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "ReflectGetProperties", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectTypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::Refresh)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63db880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "Refresh", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectTypeDescriptionProvider.SearchIntrinsicTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Collections::Hashtable*, ::System::Type*)>(
    &::System::ComponentModel::ReflectTypeDescriptionProvider::SearchIntrinsicTable)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x63db8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                             { "SearchIntrinsicTable", {}, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::ComponentModel::ReflectTypeDescriptionProvider::__cordl_internal_get__typeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeData;
}
constexpr ::System::Collections::Hashtable* const& System::ComponentModel::ReflectTypeDescriptionProvider::__cordl_internal_get__typeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeData;
}
constexpr void System::ComponentModel::ReflectTypeDescriptionProvider::__cordl_internal_set__typeData(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeData = value;
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__typeConstructor(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "_typeConstructor", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__typeConstructor() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "_typeConstructor", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__editorTables(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_editorTables", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__editorTables() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_editorTables", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__intrinsicTypeConverters(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_intrinsicTypeConverters", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__intrinsicTypeConverters() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_intrinsicTypeConverters", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__intrinsicReferenceKey(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_intrinsicReferenceKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__intrinsicReferenceKey() {
  return ::cordl_internals::getStaticField<::System::Object*, "_intrinsicReferenceKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__intrinsicNullableKey(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_intrinsicNullableKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__intrinsicNullableKey() {
  return ::cordl_internals::getStaticField<::System::Object*, "_intrinsicNullableKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__dictionaryKey(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_dictionaryKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__dictionaryKey() {
  return ::cordl_internals::getStaticField<::System::Object*, "_dictionaryKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__propertyCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_propertyCache", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__propertyCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_propertyCache", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__eventCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_eventCache", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__eventCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_eventCache", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__attributeCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_attributeCache", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__attributeCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_attributeCache", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__extendedPropertyCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_extendedPropertyCache", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__extendedPropertyCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_extendedPropertyCache", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__extenderProviderKey(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "_extenderProviderKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__extenderProviderKey() {
  return ::cordl_internals::getStaticField<::System::Guid, "_extenderProviderKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__extenderPropertiesKey(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "_extenderPropertiesKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__extenderPropertiesKey() {
  return ::cordl_internals::getStaticField<::System::Guid, "_extenderPropertiesKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__extenderProviderPropertiesKey(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "_extenderProviderPropertiesKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__extenderProviderPropertiesKey() {
  return ::cordl_internals::getStaticField<::System::Guid, "_extenderProviderPropertiesKey", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__skipInterfaceAttributeList(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "_skipInterfaceAttributeList", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(
      std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__skipInterfaceAttributeList() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "_skipInterfaceAttributeList", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::setStaticF__internalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_internalSyncObject", ::System::ComponentModel::ReflectTypeDescriptionProvider*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::getStaticF__internalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "_internalSyncObject", ::System::ComponentModel::ReflectTypeDescriptionProvider*>();
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::ComponentModel::ReflectTypeDescriptionProvider::get_IntrinsicTypeConverters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "get_IntrinsicTypeConverters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(nullptr, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*> argTypes,
                                                                                                ::ArrayW<::System::Object*> args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::CreateInstance(::System::Type* objectType, ::System::Type* callingType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, objectType, callingType);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::ReflectTypeDescriptionProvider::GetAttributes(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method, type);
}
inline ::System::Collections::IDictionary* System::ComponentModel::ReflectTypeDescriptionProvider::GetCache(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::ReflectTypeDescriptionProvider::GetClassName(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetClassName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type);
}
inline ::StringW System::ComponentModel::ReflectTypeDescriptionProvider::GetComponentName(::System::Type* type, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "GetComponentName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type, instance);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::ReflectTypeDescriptionProvider::GetConverter(::System::Type* type, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "GetConverter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method, type, instance);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::ReflectTypeDescriptionProvider::GetDefaultEvent(::System::Type* type, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "GetDefaultEvent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method, type, instance);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::ReflectTypeDescriptionProvider::GetDefaultProperty(::System::Type* type, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "GetDefaultProperty", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method, type, instance);
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::GetEditor(::System::Type* type, ::System::Object* instance, ::System::Type* editorBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                           { "GetEditor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, instance, editorBaseType);
}
inline ::System::Collections::Hashtable* System::ComponentModel::ReflectTypeDescriptionProvider::GetEditorTable(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetEditorTable", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(nullptr, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::ReflectTypeDescriptionProvider::GetEvents(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetEvents", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method, type);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedAttributes(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedAttributes", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedClassName(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedClassName", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedComponentName(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedComponentName", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedConverter(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedConverter", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedDefaultEvent(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedDefaultEvent", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedDefaultProperty(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedDefaultProperty", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method, instance);
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedEditor(::System::Object* instance, ::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "GetExtendedEditor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, instance, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedEvents(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedEvents", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedProperties(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetExtendedProperties", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*> System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenderProviders(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*>>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*>
System::ComponentModel::ReflectTypeDescriptionProvider::GetExtenders(::System::Collections::ICollection* components, ::System::Object* instance, ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                       { "GetExtenders", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*>>(nullptr, ___internal_method, components, instance, cache);
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedPropertyOwner(::System::Object* instance, ::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                              { "GetExtendedPropertyOwner", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, instance, pd);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::ReflectTypeDescriptionProvider::GetExtendedTypeDescriptor(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ReflectTypeDescriptionProvider::GetProperties(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetProperties", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, type);
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::GetPropertyOwner(::System::Type* type, ::System::Object* instance, ::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                          { "GetPropertyOwner", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, instance, pd);
}
inline ::System::Type* System::ComponentModel::ReflectTypeDescriptionProvider::GetReflectionType(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeData(::System::Type* type, bool createIfNeeded) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "GetTypeData", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*>(this, ___internal_method, type, createIfNeeded);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, objectType, instance);
}
inline ::System::Type* System::ComponentModel::ReflectTypeDescriptionProvider::GetTypeFromName(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "GetTypeFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeName);
}
inline bool System::ComponentModel::ReflectTypeDescriptionProvider::IsPopulated(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "IsPopulated", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::ArrayW<::System::Attribute*> System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "ReflectGetAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Attribute*> System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetAttributes(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "ReflectGetAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, member);
}
inline ::ArrayW<::System::ComponentModel::EventDescriptor*> System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetEvents(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "ReflectGetEvents", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::EventDescriptor*>>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::ComponentModel::PropertyDescriptor*>
System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetExtendedProperties(::System::ComponentModel::IExtenderProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                                                         { "ReflectGetExtendedProperties", {}, { ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>(nullptr, ___internal_method, provider);
}
inline ::ArrayW<::System::ComponentModel::PropertyDescriptor*> System::ComponentModel::ReflectTypeDescriptionProvider::ReflectGetProperties(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "ReflectGetProperties", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::ReflectTypeDescriptionProvider::Refresh(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(), { "Refresh", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Object* System::ComponentModel::ReflectTypeDescriptionProvider::SearchIntrinsicTable(::System::Collections::Hashtable* table, ::System::Type* callingType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ReflectTypeDescriptionProvider*>(),
                                                           { "SearchIntrinsicTable", {}, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, table, callingType);
}
inline ::System::ComponentModel::ReflectTypeDescriptionProvider* System::ComponentModel::ReflectTypeDescriptionProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectTypeDescriptionProvider*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectTypeDescriptionProvider() {}
