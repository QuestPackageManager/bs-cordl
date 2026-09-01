#pragma once
// IWYU pragma private; include "System\ComponentModel\SByteConverter.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_impl.hpp"
#include "System/ComponentModel/zzzz__SByteConverter_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::SByteConverter.get_TargetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::SByteConverter::*)()>(&::System::ComponentModel::SByteConverter::get_TargetType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63c8774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::SByteConverter*>(), { ::i2c::class_of<::System::ComponentModel::SByteConverter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SByteConverter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::SByteConverter::*)(::StringW, int32_t)>(&::System::ComponentModel::SByteConverter::FromString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63c87a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::SByteConverter*>(), { ::i2c::class_of<::System::ComponentModel::SByteConverter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SByteConverter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::SByteConverter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::SByteConverter::FromString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63c882c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::SByteConverter*>(), { ::i2c::class_of<::System::ComponentModel::SByteConverter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SByteConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::SByteConverter::*)(::System::Object*, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::SByteConverter::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63c8860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::SByteConverter*>(), { ::i2c::class_of<::System::ComponentModel::SByteConverter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SByteConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::SByteConverter::*)()>(&::System::ComponentModel::SByteConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63c88f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::SByteConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Type* System::ComponentModel::SByteConverter::get_TargetType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::SByteConverter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::SByteConverter::FromString(::StringW value, int32_t radix) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::SByteConverter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, radix);
}
inline ::System::Object* System::ComponentModel::SByteConverter::FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::SByteConverter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, formatInfo);
}
inline ::StringW System::ComponentModel::SByteConverter::ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::SByteConverter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, formatInfo);
}
inline void System::ComponentModel::SByteConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::SByteConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::SByteConverter* System::ComponentModel::SByteConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::SByteConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::SByteConverter::SByteConverter() {}
