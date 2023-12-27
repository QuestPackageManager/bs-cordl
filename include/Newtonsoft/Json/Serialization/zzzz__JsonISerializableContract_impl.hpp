#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract.get_ISerializableCreator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* (
    ::Newtonsoft::Json::Serialization::JsonISerializableContract::*)()>(&::Newtonsoft::Json::Serialization::JsonISerializableContract::get_ISerializableCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266e178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(),
                                                 "get_ISerializableCreator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract.set_ISerializableCreator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonISerializableContract::*)(
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*)>(&::Newtonsoft::Json::Serialization::JsonISerializableContract::set_ISerializableCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266e180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), "set_ISerializableCreator", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonISerializableContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonISerializableContract::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x266e188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& Newtonsoft::Json::Serialization::JsonISerializableContract::__get__ISerializableCreator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ISerializableCreator_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const&
Newtonsoft::Json::Serialization::JsonISerializableContract::__get__ISerializableCreator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ISerializableCreator_k__BackingField;
}
constexpr void
Newtonsoft::Json::Serialization::JsonISerializableContract::__set__ISerializableCreator_k__BackingField(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ISerializableCreator_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* Newtonsoft::Json::Serialization::JsonISerializableContract::get_ISerializableCreator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), "get_ISerializableCreator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonISerializableContract::set_ISerializableCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), "set_ISerializableCreator", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::JsonISerializableContract* Newtonsoft::Json::Serialization::JsonISerializableContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(underlyingType));
}
inline void Newtonsoft::Json::Serialization::JsonISerializableContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, underlyingType);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonISerializableContract::JsonISerializableContract() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
