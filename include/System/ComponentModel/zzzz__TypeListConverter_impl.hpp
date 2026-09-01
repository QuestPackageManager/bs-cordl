#pragma once
// IWYU pragma private; include "System\ComponentModel\TypeListConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/ComponentModel/zzzz__TypeListConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::TypeListConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeListConverter::*)(::ArrayW<::System::Type*>)>(&::System::ComponentModel::TypeListConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c984c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeListConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::TypeListConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63c9854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeListConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::TypeListConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63c98d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeListConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::TypeListConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63c9978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeListConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                          ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::TypeListConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x63c9a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeListConverter.GetStandardValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter_StandardValuesCollection* (
    ::System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&::System::ComponentModel::TypeListConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x63c9be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeListConverter.GetStandardValuesExclusive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::TypeListConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c9ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeListConverter.GetStandardValuesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeListConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::TypeListConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c9cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& System::ComponentModel::TypeListConverter::__cordl_internal_get__types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____types;
}
constexpr ::ArrayW<::System::Type*> const& System::ComponentModel::TypeListConverter::__cordl_internal_get__types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____types;
}
constexpr void System::ComponentModel::TypeListConverter::__cordl_internal_set__types(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____types = value;
}
constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection*& System::ComponentModel::TypeListConverter::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection* const& System::ComponentModel::TypeListConverter::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::ComponentModel::TypeListConverter::__cordl_internal_set__values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline void System::ComponentModel::TypeListConverter::_ctor(::ArrayW<::System::Type*> types) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, types);
}
inline bool System::ComponentModel::TypeListConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline bool System::ComponentModel::TypeListConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::ComponentModel::TypeListConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                                ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::ComponentModel::TypeListConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                              ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* System::ComponentModel::TypeListConverter::GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter_StandardValuesCollection*>(this, ___internal_method, context);
}
inline bool System::ComponentModel::TypeListConverter::GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline bool System::ComponentModel::TypeListConverter::GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeListConverter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::System::ComponentModel::TypeListConverter* System::ComponentModel::TypeListConverter::New_ctor(::ArrayW<::System::Type*> types) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeListConverter*>(types));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeListConverter::TypeListConverter() {}
