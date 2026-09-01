#pragma once
// IWYU pragma private; include "System\ComponentModel\DateTimeOffsetConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__DateTimeOffsetConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DateTimeOffsetConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DateTimeOffsetConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::DateTimeOffsetConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63cb804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), { ::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DateTimeOffsetConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DateTimeOffsetConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::DateTimeOffsetConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63cb8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), { ::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DateTimeOffsetConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::DateTimeOffsetConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::DateTimeOffsetConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x63cb99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), { ::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DateTimeOffsetConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::ComponentModel::DateTimeOffsetConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::DateTimeOffsetConverter::ConvertTo)> {
  constexpr static std::size_t size = 0xb80;
  constexpr static std::size_t addrs = 0x63cbd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), { ::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DateTimeOffsetConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DateTimeOffsetConverter::*)()>(&::System::ComponentModel::DateTimeOffsetConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63cc8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::DateTimeOffsetConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline bool System::ComponentModel::DateTimeOffsetConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::ComponentModel::DateTimeOffsetConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                                      ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::ComponentModel::DateTimeOffsetConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                                    ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline void System::ComponentModel::DateTimeOffsetConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DateTimeOffsetConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::DateTimeOffsetConverter* System::ComponentModel::DateTimeOffsetConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DateTimeOffsetConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DateTimeOffsetConverter::DateTimeOffsetConverter() {}
