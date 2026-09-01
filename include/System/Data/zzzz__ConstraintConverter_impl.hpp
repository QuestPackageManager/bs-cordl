#pragma once
// IWYU pragma private; include "System\Data\ConstraintConverter.hpp"
#include "System/ComponentModel/zzzz__ExpandableObjectConverter_impl.hpp"
#include "System/Data/zzzz__ConstraintConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::ConstraintConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintConverter::*)()>(&::System::Data::ConstraintConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x601f5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ConstraintConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::Data::ConstraintConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x601f600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ConstraintConverter*>(), { ::i2c::class_of<::System::Data::ConstraintConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::ConstraintConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                  ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::Data::ConstraintConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x601f6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ConstraintConverter*>(), { ::i2c::class_of<::System::Data::ConstraintConverter*>(), 7 }));
    return ___internal_method;
  }
};
inline void System::Data::ConstraintConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::ConstraintConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ConstraintConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::Data::ConstraintConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                                                      ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ConstraintConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::Data::ConstraintConverter* System::Data::ConstraintConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ConstraintConverter*>());
}
// Ctor Parameters []
constexpr ::System::Data::ConstraintConverter::ConstraintConverter() {}
