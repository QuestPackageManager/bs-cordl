#pragma once
// IWYU pragma private; include "System\ComponentModel\ArrayConverter.hpp"
#include "System/ComponentModel/zzzz__CollectionConverter_impl.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__ArrayConverter_def.hpp"
#include "System/ComponentModel/zzzz__ArrayConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::*)(::System::Type*, ::System::Type*, int32_t)>(
    &::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63b544c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63b5608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x63b5688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(), 21 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline void System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::_ctor(::System::Type* arrayType, ::System::Type* elementType, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arrayType, elementType, index);
}
inline ::System::Object* System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::GetValue(::System::Object* instance) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, instance);
}
inline void System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::SetValue(::System::Object* instance, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, value);
}
inline ::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor* System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::New_ctor(::System::Type* arrayType,
                                                                                                                                                  ::System::Type* elementType, int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*>(arrayType, elementType, index));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor::ArrayConverter_ArrayPropertyDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                       ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::ArrayConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x63b50fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), { ::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::ArrayConverter::GetProperties)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x63b527c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), { ::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter.GetPropertiesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::ArrayConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b55fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), { ::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ArrayConverter::*)()>(&::System::ComponentModel::ArrayConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63b5604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* System::ComponentModel::ArrayConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                           ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ArrayConverter::GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                                                                     ::ArrayW<::System::Attribute*> attributes) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, context, value, attributes);
}
inline bool System::ComponentModel::ArrayConverter::GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void System::ComponentModel::ArrayConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ArrayConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::ArrayConverter* System::ComponentModel::ArrayConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ArrayConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ArrayConverter::ArrayConverter() {}
