#pragma once
// IWYU pragma private; include "System\ComponentModel\ExpandableObjectConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__ExpandableObjectConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ExpandableObjectConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ExpandableObjectConverter::*)()>(&::System::ComponentModel::ExpandableObjectConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63c1934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExpandableObjectConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExpandableObjectConverter.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::ExpandableObjectConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::ExpandableObjectConverter::GetProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63c1938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExpandableObjectConverter*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExpandableObjectConverter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExpandableObjectConverter.GetPropertiesSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ExpandableObjectConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::ExpandableObjectConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c19a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExpandableObjectConverter*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExpandableObjectConverter*>(), 11 }));
    return ___internal_method;
  }
};
inline void System::ComponentModel::ExpandableObjectConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExpandableObjectConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ExpandableObjectConverter::GetProperties(::System::ComponentModel::ITypeDescriptorContext* context,
                                                                                                                                ::System::Object* value, ::ArrayW<::System::Attribute*> attributes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExpandableObjectConverter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, context, value, attributes);
}
inline bool System::ComponentModel::ExpandableObjectConverter::GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExpandableObjectConverter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::System::ComponentModel::ExpandableObjectConverter* System::ComponentModel::ExpandableObjectConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ExpandableObjectConverter*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ExpandableObjectConverter::ExpandableObjectConverter() {}
