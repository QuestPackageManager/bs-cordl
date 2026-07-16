#pragma once
// IWYU pragma private; include "System/Data/DefaultValueTypeConverter.hpp"
#include "System/ComponentModel/zzzz__StringConverter_impl.hpp"
#include "System/Data/zzzz__DefaultValueTypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DefaultValueTypeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DefaultValueTypeConverter::*)()>(&::System::Data::DefaultValueTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60304dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DefaultValueTypeConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DefaultValueTypeConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DefaultValueTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                        ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::Data::DefaultValueTypeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x60304e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DefaultValueTypeConverter*>(), { ::i2c::class_of<::System::Data::DefaultValueTypeConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DefaultValueTypeConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Data::DefaultValueTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::Data::DefaultValueTypeConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6030664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DefaultValueTypeConverter*>(), { ::i2c::class_of<::System::Data::DefaultValueTypeConverter*>(), 6 }));
    return ___internal_method;
  }
};
inline void System::Data::DefaultValueTypeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DefaultValueTypeConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Data::DefaultValueTypeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                            ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DefaultValueTypeConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::Object* System::Data::DefaultValueTypeConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                              ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DefaultValueTypeConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::Data::DefaultValueTypeConverter* System::Data::DefaultValueTypeConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DefaultValueTypeConverter*>());
}
// Ctor Parameters []
constexpr ::System::Data::DefaultValueTypeConverter::DefaultValueTypeConverter() {}
