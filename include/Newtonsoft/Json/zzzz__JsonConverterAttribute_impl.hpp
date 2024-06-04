#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConverterAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute.get_ConverterType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::JsonConverterAttribute::*)()>(
    &::Newtonsoft::Json::JsonConverterAttribute::get_ConverterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e2764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(),
                                                                               "get_ConverterType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute.get_ConverterParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::Newtonsoft::Json::JsonConverterAttribute::*)()>(
    &::Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e276c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(),
                                                                               "get_ConverterParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonConverterAttribute::*)(::System::Type*)>(
    &::Newtonsoft::Json::JsonConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x29e2774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonConverterAttribute::*)(::System::Type*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Newtonsoft::Json::JsonConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29e2840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_get__converterType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converterType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_get__converterType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converterType;
}
constexpr void Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_set__converterType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____converterType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_get__ConverterParameters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterParameters_k__BackingField;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_get__ConverterParameters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterParameters_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_set__ConverterParameters_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConverterParameters_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Type* Newtonsoft::Json::JsonConverterAttribute::get_ConverterType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(),
                                                                             "get_ConverterType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(),
                                                                             "get_ConverterParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonConverterAttribute* Newtonsoft::Json::JsonConverterAttribute::New_ctor(::System::Type* converterType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonConverterAttribute*>(converterType));
}
inline void Newtonsoft::Json::JsonConverterAttribute::_ctor(::System::Type* converterType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converterType);
}
inline ::Newtonsoft::Json::JsonConverterAttribute* Newtonsoft::Json::JsonConverterAttribute::New_ctor(::System::Type* converterType,
                                                                                                      ::ArrayW<::System::Object*, ::Array<::System::Object*>*> converterParameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonConverterAttribute*>(converterType, converterParameters));
}
inline void Newtonsoft::Json::JsonConverterAttribute::_ctor(::System::Type* converterType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> converterParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converterType, converterParameters);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConverterAttribute::JsonConverterAttribute() {}
