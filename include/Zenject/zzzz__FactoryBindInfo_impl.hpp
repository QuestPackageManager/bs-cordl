#pragma once
// IWYU pragma private; include "Zenject\FactoryBindInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::FactoryBindInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FactoryBindInfo::*)(::System::Type*)>(&::Zenject::FactoryBindInfo::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e6055c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryBindInfo.get_FactoryType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::FactoryBindInfo::*)()>(&::Zenject::FactoryBindInfo::get_FactoryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e605e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "get_FactoryType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryBindInfo.set_FactoryType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FactoryBindInfo::*)(::System::Type*)>(&::Zenject::FactoryBindInfo::set_FactoryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e605e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "set_FactoryType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryBindInfo.get_ProviderFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* (::Zenject::FactoryBindInfo::*)()>(
    &::Zenject::FactoryBindInfo::get_ProviderFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e605f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "get_ProviderFunc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryBindInfo.set_ProviderFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FactoryBindInfo::*)(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*)>(
    &::Zenject::FactoryBindInfo::set_ProviderFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e605f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "set_ProviderFunc", {}, { ::i2c::type_of<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryBindInfo.get_Arguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* (::Zenject::FactoryBindInfo::*)()>(
    &::Zenject::FactoryBindInfo::get_Arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e60600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "get_Arguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FactoryBindInfo.set_Arguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FactoryBindInfo::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::FactoryBindInfo::set_Arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e60608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "set_Arguments", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::FactoryBindInfo::__cordl_internal_get__FactoryType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FactoryType_k__BackingField;
}
constexpr ::System::Type* const& Zenject::FactoryBindInfo::__cordl_internal_get__FactoryType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FactoryType_k__BackingField;
}
constexpr void Zenject::FactoryBindInfo::__cordl_internal_set__FactoryType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FactoryType_k__BackingField = value;
}
constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*& Zenject::FactoryBindInfo::__cordl_internal_get__ProviderFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProviderFunc_k__BackingField;
}
constexpr ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* const& Zenject::FactoryBindInfo::__cordl_internal_get__ProviderFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProviderFunc_k__BackingField;
}
constexpr void Zenject::FactoryBindInfo::__cordl_internal_set__ProviderFunc_k__BackingField(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProviderFunc_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::FactoryBindInfo::__cordl_internal_get__Arguments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Arguments_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& Zenject::FactoryBindInfo::__cordl_internal_get__Arguments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Arguments_k__BackingField;
}
constexpr void Zenject::FactoryBindInfo::__cordl_internal_set__Arguments_k__BackingField(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Arguments_k__BackingField = value;
}
inline void Zenject::FactoryBindInfo::_ctor(::System::Type* factoryType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factoryType);
}
inline ::System::Type* Zenject::FactoryBindInfo::get_FactoryType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "get_FactoryType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Zenject::FactoryBindInfo::set_FactoryType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "set_FactoryType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* Zenject::FactoryBindInfo::get_ProviderFunc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "get_ProviderFunc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*>(this, ___internal_method);
}
inline void Zenject::FactoryBindInfo::set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "set_ProviderFunc", {}, { ::i2c::type_of<::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::FactoryBindInfo::get_Arguments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "get_Arguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(this, ___internal_method);
}
inline void Zenject::FactoryBindInfo::set_Arguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryBindInfo*>(), { "set_Arguments", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::FactoryBindInfo* Zenject::FactoryBindInfo::New_ctor(::System::Type* factoryType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryBindInfo*>(factoryType));
}
// Ctor Parameters []
constexpr ::Zenject::FactoryBindInfo::FactoryBindInfo() {}
