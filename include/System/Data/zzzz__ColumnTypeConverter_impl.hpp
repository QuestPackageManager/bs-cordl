#pragma once
// IWYU pragma private; include "System\Data\ColumnTypeConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Data/zzzz__ColumnTypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::ColumnTypeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ColumnTypeConverter::*)()>(&::System::Data::ColumnTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x601be00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ColumnTypeConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ColumnTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::Data::ColumnTypeConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x601be04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ColumnTypeConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::ColumnTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                  ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::Data::ColumnTypeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x601bea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ColumnTypeConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ColumnTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::Data::ColumnTypeConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x601c334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ColumnTypeConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Data::ColumnTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::Data::ColumnTypeConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x601c3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ColumnTypeConverter.GetStandardValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter_StandardValuesCollection* (
    ::System::Data::ColumnTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&::System::Data::ColumnTypeConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x601c584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ColumnTypeConverter.GetStandardValuesExclusive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ColumnTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::Data::ColumnTypeConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601c6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ColumnTypeConverter.GetStandardValuesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ColumnTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::Data::ColumnTypeConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601c6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection*& System::Data::ColumnTypeConverter::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::System::ComponentModel::TypeConverter_StandardValuesCollection* const& System::Data::ColumnTypeConverter::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Data::ColumnTypeConverter::__cordl_internal_set__values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
inline void System::Data::ColumnTypeConverter::setStaticF_s_types(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "s_types", ::System::Data::ColumnTypeConverter*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::Data::ColumnTypeConverter::getStaticF_s_types() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "s_types", ::System::Data::ColumnTypeConverter*>();
}
inline void System::Data::ColumnTypeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ColumnTypeConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::ColumnTypeConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::Data::ColumnTypeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                                                      ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline bool System::Data::ColumnTypeConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline ::System::Object* System::Data::ColumnTypeConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                        ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* System::Data::ColumnTypeConverter::GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter_StandardValuesCollection*>(this, ___internal_method, context);
}
inline bool System::Data::ColumnTypeConverter::GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline bool System::Data::ColumnTypeConverter::GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ColumnTypeConverter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::System::Data::ColumnTypeConverter* System::Data::ColumnTypeConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ColumnTypeConverter*>());
}
// Ctor Parameters []
constexpr ::System::Data::ColumnTypeConverter::ColumnTypeConverter() {}
