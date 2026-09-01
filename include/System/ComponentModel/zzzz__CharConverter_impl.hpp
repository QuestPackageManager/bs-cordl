#pragma once
// IWYU pragma private; include "System\ComponentModel\CharConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__CharConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CharConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::CharConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63b7114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CharConverter*>(), { ::i2c::class_of<::System::ComponentModel::CharConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                      ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::CharConverter::ConvertTo)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x63b7194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CharConverter*>(), { ::i2c::class_of<::System::ComponentModel::CharConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::CharConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x63b7278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CharConverter*>(), { ::i2c::class_of<::System::ComponentModel::CharConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CharConverter::*)()>(&::System::ComponentModel::CharConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63b7384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CharConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::CharConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CharConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline ::System::Object* System::ComponentModel::CharConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                          ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CharConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::Object* System::ComponentModel::CharConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                            ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CharConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline void System::ComponentModel::CharConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CharConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::CharConverter* System::ComponentModel::CharConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CharConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CharConverter::CharConverter() {}
