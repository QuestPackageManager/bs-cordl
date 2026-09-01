#pragma once
// IWYU pragma private; include "System\ComponentModel\DoubleConverter.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_impl.hpp"
#include "System/ComponentModel/zzzz__DoubleConverter_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.get_AllowHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DoubleConverter::*)()>(&::System::ComponentModel::DoubleConverter::get_AllowHex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c0468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.get_TargetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::DoubleConverter::*)()>(&::System::ComponentModel::DoubleConverter::get_TargetType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63c0470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DoubleConverter::*)(::StringW, int32_t)>(&::System::ComponentModel::DoubleConverter::FromString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63c04a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DoubleConverter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::DoubleConverter::FromString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x63c056c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DoubleConverter::*)(::System::Object*, ::System::Globalization::NumberFormatInfo*)>(
    &::System::ComponentModel::DoubleConverter::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x63c059c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DoubleConverter::*)()>(&::System::ComponentModel::DoubleConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63c0634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::DoubleConverter::get_AllowHex() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::DoubleConverter::get_TargetType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::DoubleConverter::FromString(::StringW value, int32_t radix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, radix);
}
inline ::System::Object* System::ComponentModel::DoubleConverter::FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, formatInfo);
}
inline ::StringW System::ComponentModel::DoubleConverter::ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value, formatInfo);
}
inline void System::ComponentModel::DoubleConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DoubleConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::DoubleConverter* System::ComponentModel::DoubleConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DoubleConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DoubleConverter::DoubleConverter() {}
