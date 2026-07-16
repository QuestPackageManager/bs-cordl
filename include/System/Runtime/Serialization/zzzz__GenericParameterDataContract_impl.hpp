#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/GenericParameterDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__GenericParameterDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__GenericParameterDataContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x61500c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper::__cordl_internal_get_parameterPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameterPosition;
}
constexpr int32_t const& System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper::__cordl_internal_get_parameterPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameterPosition;
}
constexpr void System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper::__cordl_internal_set_parameterPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameterPosition = value;
}
inline void System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper*
System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper::GenericParameterDataContract_GenericParameterDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::GenericParameterDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::GenericParameterDataContract::*)(::System::Type*)>(
    &::System::Runtime::Serialization::GenericParameterDataContract::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6143230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericParameterDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::GenericParameterDataContract.get_IsBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::GenericParameterDataContract::*)()>(
    &::System::Runtime::Serialization::GenericParameterDataContract::get_IsBuiltInDataContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericParameterDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::GenericParameterDataContract*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper*&
System::Runtime::Serialization::GenericParameterDataContract::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper* const&
System::Runtime::Serialization::GenericParameterDataContract::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Runtime::Serialization::GenericParameterDataContract::__cordl_internal_set_helper(
    ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Runtime::Serialization::GenericParameterDataContract::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::GenericParameterDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline bool System::Runtime::Serialization::GenericParameterDataContract::get_IsBuiltInDataContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::GenericParameterDataContract*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::GenericParameterDataContract* System::Runtime::Serialization::GenericParameterDataContract::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::GenericParameterDataContract*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::GenericParameterDataContract::GenericParameterDataContract() {}
