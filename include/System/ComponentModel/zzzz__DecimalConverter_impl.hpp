#pragma once
// IWYU pragma private; include "System\ComponentModel\DecimalConverter.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_impl.hpp"
#include "System/ComponentModel/zzzz__DecimalConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DecimalConverter.get_AllowHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DecimalConverter::*)()>(&::System::ComponentModel::DecimalConverter::get_AllowHex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bf4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DecimalConverter.get_TargetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::DecimalConverter::*)()>(&::System::ComponentModel::DecimalConverter::get_TargetType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63bf4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DecimalConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DecimalConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::DecimalConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63bf530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DecimalConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DecimalConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                         ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::DecimalConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x63bf5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DecimalConverter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DecimalConverter::*)(::StringW, int32_t)>(
    &::System::ComponentModel::DecimalConverter::FromString)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x63bf8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DecimalConverter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DecimalConverter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::DecimalConverter::FromString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x63bf9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DecimalConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DecimalConverter::*)(::System::Object*, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::DecimalConverter::ToString)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x63bfa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DecimalConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DecimalConverter::*)()>(&::System::ComponentModel::DecimalConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63bfb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::DecimalConverter::get_AllowHex() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::DecimalConverter::get_TargetType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::ComponentModel::DecimalConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::ComponentModel::DecimalConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                             ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::Object* System::ComponentModel::DecimalConverter::FromString(::StringW value, int32_t radix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, radix);
}
inline ::System::Object* System::ComponentModel::DecimalConverter::FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, formatInfo);
}
inline ::StringW System::ComponentModel::DecimalConverter::ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, formatInfo);
}
inline void System::ComponentModel::DecimalConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DecimalConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::DecimalConverter* System::ComponentModel::DecimalConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DecimalConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DecimalConverter::DecimalConverter() {}
