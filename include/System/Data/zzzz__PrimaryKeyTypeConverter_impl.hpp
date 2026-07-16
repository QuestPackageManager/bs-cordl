#pragma once
// IWYU pragma private; include "System/Data/PrimaryKeyTypeConverter.hpp"
#include "System/ComponentModel/zzzz__ReferenceConverter_impl.hpp"
#include "System/Data/zzzz__PrimaryKeyTypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::PrimaryKeyTypeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::PrimaryKeyTypeConverter::*)()>(&::System::Data::PrimaryKeyTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60456ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::PrimaryKeyTypeConverter.GetPropertiesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::PrimaryKeyTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::Data::PrimaryKeyTypeConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6045748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), { ::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::PrimaryKeyTypeConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::PrimaryKeyTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::Data::PrimaryKeyTypeConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6045750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), { ::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::PrimaryKeyTypeConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::PrimaryKeyTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                      ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::Data::PrimaryKeyTypeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x60457d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), { ::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), 7 }));
    return ___internal_method;
  }
};
inline void System::Data::PrimaryKeyTypeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::PrimaryKeyTypeConverter::GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline bool System::Data::PrimaryKeyTypeConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::Data::PrimaryKeyTypeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                          ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::PrimaryKeyTypeConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::Data::PrimaryKeyTypeConverter* System::Data::PrimaryKeyTypeConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::PrimaryKeyTypeConverter*>());
}
// Ctor Parameters []
constexpr ::System::Data::PrimaryKeyTypeConverter::PrimaryKeyTypeConverter() {}
