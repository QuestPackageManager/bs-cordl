#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonPrimitiveContract.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPrimitiveContract.get_TypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (::Newtonsoft::Json::Serialization::JsonPrimitiveContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonPrimitiveContract::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee9ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get(),
                                                                               "get_TypeCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPrimitiveContract.set_TypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonPrimitiveContract::*)(::Newtonsoft::Json::Utilities::PrimitiveTypeCode)>(
    &::Newtonsoft::Json::Serialization::JsonPrimitiveContract::set_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee9cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get(), "set_TypeCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPrimitiveContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonPrimitiveContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonPrimitiveContract::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3ee29cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode& Newtonsoft::Json::Serialization::JsonPrimitiveContract::__cordl_internal_get__TypeCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeCode_k__BackingField;
}
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const& Newtonsoft::Json::Serialization::JsonPrimitiveContract::__cordl_internal_get__TypeCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeCode_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonPrimitiveContract::__cordl_internal_set__TypeCode_k__BackingField(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TypeCode_k__BackingField = value;
}
inline void Newtonsoft::Json::Serialization::JsonPrimitiveContract::setStaticF_ReadTypeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>*, "ReadTypeMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>* Newtonsoft::Json::Serialization::JsonPrimitiveContract::getStaticF_ReadTypeMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>*, "ReadTypeMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get>();
}
inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode Newtonsoft::Json::Serialization::JsonPrimitiveContract::get_TypeCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get(),
                                                                             "get_TypeCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::PrimitiveTypeCode, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonPrimitiveContract::set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get(), "set_TypeCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::JsonPrimitiveContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, underlyingType);
}
inline ::Newtonsoft::Json::Serialization::JsonPrimitiveContract* Newtonsoft::Json::Serialization::JsonPrimitiveContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>(underlyingType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::JsonPrimitiveContract() {}
