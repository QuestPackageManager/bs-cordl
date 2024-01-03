#pragma once
#include "System/ComponentModel/zzzz__CollectionConverter_impl.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__ArrayConverter_def.hpp"
#include "System/ComponentModel/zzzz__ArrayConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::*)(
    ::System::Type*, ::System::Type*, int32_t)>(&::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x290550c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x29056c4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2905778;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>::get(), 20));
    return ___internal_method;
  }
};
constexpr int32_t& System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline ::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor* System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::New_ctor(::System::Type* arrayType,
                                                                                                                                                        ::System::Type* elementType, int32_t index) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>(arrayType, elementType, index));
}
inline void System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::_ctor(::System::Type* arrayType, ::System::Type* elementType, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arrayType, elementType, index);
}
inline ::System::Object* System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::GetValue(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, instance);
}
inline void System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::SetValue(::System::Object* instance, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, value);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor::__ArrayConverter__ArrayPropertyDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::ArrayConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x290516c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::ArrayConverter::GetProperties)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2905338;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter.GetPropertiesSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ArrayConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::ArrayConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29056b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArrayConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ArrayConverter::*)()>(&::System::ComponentModel::ArrayConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29056bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Object* System::ComponentModel::ArrayConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                           ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ArrayConverter::GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                                                                     ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, context, value, attributes);
}
inline bool System::ComponentModel::ArrayConverter::GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline ::System::ComponentModel::ArrayConverter* System::ComponentModel::ArrayConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::ArrayConverter*>());
}
inline void System::ComponentModel::ArrayConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ArrayConverter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ArrayConverter::ArrayConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
