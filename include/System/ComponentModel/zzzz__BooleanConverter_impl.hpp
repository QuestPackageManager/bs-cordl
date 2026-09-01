#pragma once
// IWYU pragma private; include "System\ComponentModel\BooleanConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__BooleanConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::BooleanConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::BooleanConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63b6c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BooleanConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::BooleanConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x63b6c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BooleanConverter.GetStandardValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter_StandardValuesCollection* (
    ::System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&::System::ComponentModel::BooleanConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x63b6e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BooleanConverter.GetStandardValuesExclusive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::BooleanConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b6f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BooleanConverter.GetStandardValuesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BooleanConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::BooleanConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b6f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BooleanConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BooleanConverter::*)()>(&::System::ComponentModel::BooleanConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63b6f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::BooleanConverter::setStaticF_s_values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::TypeConverter_StandardValuesCollection*, "s_values", ::System::ComponentModel::BooleanConverter*>(
      std::forward<::System::ComponentModel::TypeConverter_StandardValuesCollection*>(value));
}
inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* System::ComponentModel::BooleanConverter::getStaticF_s_values() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::TypeConverter_StandardValuesCollection*, "s_values", ::System::ComponentModel::BooleanConverter*>();
}
inline bool System::ComponentModel::BooleanConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline ::System::Object* System::ComponentModel::BooleanConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                               ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* System::ComponentModel::BooleanConverter::GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter_StandardValuesCollection*>(this, ___internal_method, context);
}
inline bool System::ComponentModel::BooleanConverter::GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline bool System::ComponentModel::BooleanConverter::GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void System::ComponentModel::BooleanConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::BooleanConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::BooleanConverter* System::ComponentModel::BooleanConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::BooleanConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::BooleanConverter::BooleanConverter() {}
