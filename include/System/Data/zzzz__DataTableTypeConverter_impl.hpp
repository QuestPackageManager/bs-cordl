#pragma once
// IWYU pragma private; include "System\Data\DataTableTypeConverter.hpp"
#include "System/ComponentModel/zzzz__ReferenceConverter_impl.hpp"
#include "System/Data/zzzz__DataTableTypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
//  Writing Method size for method: ::System::Data::DataTableTypeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTableTypeConverter::*)()>(&::System::Data::DataTableTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x603138c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableTypeConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTableTypeConverter.GetPropertiesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTableTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::Data::DataTableTypeConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6031428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTableTypeConverter*>(), { ::i2c::class_of<::System::Data::DataTableTypeConverter*>(), 11 }));
    return ___internal_method;
  }
};
inline void System::Data::DataTableTypeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTableTypeConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataTableTypeConverter::GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTableTypeConverter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::System::Data::DataTableTypeConverter* System::Data::DataTableTypeConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataTableTypeConverter*>());
}
// Ctor Parameters []
constexpr ::System::Data::DataTableTypeConverter::DataTableTypeConverter() {}
