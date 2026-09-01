#pragma once
// IWYU pragma private; include "System\ComponentModel\GuidConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__GuidConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::GuidConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::GuidConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::GuidConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63c21b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::GuidConverter*>(), { ::i2c::class_of<::System::ComponentModel::GuidConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::GuidConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::GuidConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::ComponentModel::GuidConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63c2238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::GuidConverter*>(), { ::i2c::class_of<::System::ComponentModel::GuidConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::GuidConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::GuidConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::GuidConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x63c22dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::GuidConverter*>(), { ::i2c::class_of<::System::ComponentModel::GuidConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::GuidConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::GuidConverter::*)(::System::ComponentModel::ITypeDescriptorContext*,
                                                                                                                      ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::GuidConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x63c23b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::GuidConverter*>(), { ::i2c::class_of<::System::ComponentModel::GuidConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::GuidConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::GuidConverter::*)()>(&::System::ComponentModel::GuidConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63c26c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::GuidConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::GuidConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::GuidConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline bool System::ComponentModel::GuidConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::GuidConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::ComponentModel::GuidConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                            ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::GuidConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::ComponentModel::GuidConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                          ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::GuidConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline void System::ComponentModel::GuidConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::GuidConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::GuidConverter* System::ComponentModel::GuidConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::GuidConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::GuidConverter::GuidConverter() {}
