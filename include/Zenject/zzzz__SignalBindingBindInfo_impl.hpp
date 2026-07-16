#pragma once
// IWYU pragma private; include "Zenject/SignalBindingBindInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::SignalBindingBindInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBindingBindInfo::*)(::System::Type*)>(&::Zenject::SignalBindingBindInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBindingBindInfo.get_Identifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::SignalBindingBindInfo::*)()>(&::Zenject::SignalBindingBindInfo::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { "get_Identifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBindingBindInfo.set_Identifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBindingBindInfo::*)(::System::Object*)>(&::Zenject::SignalBindingBindInfo::set_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { "set_Identifier", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBindingBindInfo.get_SignalType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::SignalBindingBindInfo::*)()>(&::Zenject::SignalBindingBindInfo::get_SignalType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { "get_SignalType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalBindingBindInfo.set_SignalType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalBindingBindInfo::*)(::System::Type*)>(&::Zenject::SignalBindingBindInfo::set_SignalType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { "set_SignalType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::SignalBindingBindInfo::__cordl_internal_get__Identifier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Identifier_k__BackingField;
}
constexpr ::System::Object* const& Zenject::SignalBindingBindInfo::__cordl_internal_get__Identifier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Identifier_k__BackingField;
}
constexpr void Zenject::SignalBindingBindInfo::__cordl_internal_set__Identifier_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Identifier_k__BackingField = value;
}
constexpr ::System::Type*& Zenject::SignalBindingBindInfo::__cordl_internal_get__SignalType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SignalType_k__BackingField;
}
constexpr ::System::Type* const& Zenject::SignalBindingBindInfo::__cordl_internal_get__SignalType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SignalType_k__BackingField;
}
constexpr void Zenject::SignalBindingBindInfo::__cordl_internal_set__SignalType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SignalType_k__BackingField = value;
}
inline void Zenject::SignalBindingBindInfo::_ctor(::System::Type* signalType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalType);
}
inline ::System::Object* Zenject::SignalBindingBindInfo::get_Identifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { "get_Identifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Zenject::SignalBindingBindInfo::set_Identifier(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { "set_Identifier", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* Zenject::SignalBindingBindInfo::get_SignalType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { "get_SignalType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Zenject::SignalBindingBindInfo::set_SignalType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalBindingBindInfo*>(), { "set_SignalType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::SignalBindingBindInfo* Zenject::SignalBindingBindInfo::New_ctor(::System::Type* signalType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalBindingBindInfo*>(signalType));
}
// Ctor Parameters []
constexpr ::Zenject::SignalBindingBindInfo::SignalBindingBindInfo() {}
