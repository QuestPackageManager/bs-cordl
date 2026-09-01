#pragma once
// IWYU pragma private; include "System\ComponentModel\UInt16Converter.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_impl.hpp"
#include "System/ComponentModel/zzzz__UInt16Converter_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::UInt16Converter.get_TargetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::UInt16Converter::*)()>(&::System::ComponentModel::UInt16Converter::get_TargetType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63c9cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), { ::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::UInt16Converter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::UInt16Converter::*)(::StringW, int32_t)>(&::System::ComponentModel::UInt16Converter::FromString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63c9ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), { ::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::UInt16Converter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::UInt16Converter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::UInt16Converter::FromString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63c9d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), { ::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::UInt16Converter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::UInt16Converter::*)(::System::Object*, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::UInt16Converter::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63c9da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), { ::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::UInt16Converter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::UInt16Converter::*)()>(&::System::ComponentModel::UInt16Converter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63c9e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Type* System::ComponentModel::UInt16Converter::get_TargetType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::UInt16Converter::FromString(::StringW value, int32_t radix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, radix);
}
inline ::System::Object* System::ComponentModel::UInt16Converter::FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, formatInfo);
}
inline ::StringW System::ComponentModel::UInt16Converter::ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, formatInfo);
}
inline void System::ComponentModel::UInt16Converter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::UInt16Converter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::UInt16Converter* System::ComponentModel::UInt16Converter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::UInt16Converter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::UInt16Converter::UInt16Converter() {}
