#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute.get_ConverterType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::JsonConverterAttribute::*)()>(
    &::Newtonsoft::Json::JsonConverterAttribute::get_ConverterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263f364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(),
                                                                               "get_ConverterType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute.get_ConverterParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::Newtonsoft::Json::JsonConverterAttribute::*)()>(
    &::Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263f36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(),
                                                                               "get_ConverterParameters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute.set_ConverterParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonConverterAttribute::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Newtonsoft::Json::JsonConverterAttribute::set_ConverterParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263f374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), "set_ConverterParameters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonConverterAttribute::*)(::System::Type*)>(
    &::Newtonsoft::Json::JsonConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x263f37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonConverterAttribute::*)(::System::Type*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Newtonsoft::Json::JsonConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263f3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::JsonConverterAttribute::__get__converterType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converterType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Newtonsoft::Json::JsonConverterAttribute::__get__converterType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converterType;
}
constexpr void Newtonsoft::Json::JsonConverterAttribute::__set__converterType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____converterType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& Newtonsoft::Json::JsonConverterAttribute::__get__ConverterParameters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterParameters_k__BackingField;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& Newtonsoft::Json::JsonConverterAttribute::__get__ConverterParameters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterParameters_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonConverterAttribute::__set__ConverterParameters_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConverterParameters_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Type* Newtonsoft::Json::JsonConverterAttribute::get_ConverterType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(),
                                                                             "get_ConverterType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(),
                                                                             "get_ConverterParameters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonConverterAttribute::set_ConverterParameters(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), "set_ConverterParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonConverterAttribute* Newtonsoft::Json::JsonConverterAttribute::New_ctor(::System::Type* converterType) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonConverterAttribute*>(converterType));
}
inline void Newtonsoft::Json::JsonConverterAttribute::_ctor(::System::Type* converterType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converterType);
}
inline ::Newtonsoft::Json::JsonConverterAttribute* Newtonsoft::Json::JsonConverterAttribute::New_ctor(::System::Type* converterType,
                                                                                                      ::ArrayW<::System::Object*, ::Array<::System::Object*>*> converterParameters) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonConverterAttribute*>(converterType, converterParameters));
}
inline void Newtonsoft::Json::JsonConverterAttribute::_ctor(::System::Type* converterType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> converterParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonConverterAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converterType, converterParameters);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConverterAttribute::JsonConverterAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
