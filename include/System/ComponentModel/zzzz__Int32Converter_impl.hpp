#pragma once
// IWYU pragma private; include "System\ComponentModel\Int32Converter.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_impl.hpp"
#include "System/ComponentModel/zzzz__Int32Converter_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Int32Converter.get_TargetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::Int32Converter::*)()>(&::System::ComponentModel::Int32Converter::get_TargetType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63c284c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Int32Converter*>(), { ::i2c::class_of<::System::ComponentModel::Int32Converter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Int32Converter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Int32Converter::*)(::StringW, int32_t)>(&::System::ComponentModel::Int32Converter::FromString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63c287c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Int32Converter*>(), { ::i2c::class_of<::System::ComponentModel::Int32Converter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Int32Converter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Int32Converter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::Int32Converter::FromString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63c2904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Int32Converter*>(), { ::i2c::class_of<::System::ComponentModel::Int32Converter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Int32Converter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::Int32Converter::*)(::System::Object*, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::Int32Converter::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63c2938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::Int32Converter*>(), { ::i2c::class_of<::System::ComponentModel::Int32Converter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Int32Converter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Int32Converter::*)()>(&::System::ComponentModel::Int32Converter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63c29d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Int32Converter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Type* System::ComponentModel::Int32Converter::get_TargetType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Int32Converter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::Int32Converter::FromString(::StringW value, int32_t radix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Int32Converter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, radix);
}
inline ::System::Object* System::ComponentModel::Int32Converter::FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Int32Converter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, formatInfo);
}
inline ::StringW System::ComponentModel::Int32Converter::ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::Int32Converter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, formatInfo);
}
inline void System::ComponentModel::Int32Converter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Int32Converter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::Int32Converter* System::ComponentModel::Int32Converter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Int32Converter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Int32Converter::Int32Converter() {}
