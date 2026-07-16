#pragma once
// IWYU pragma private; include "Zenject/ValidationMarker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ValidationMarker_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::ValidationMarker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ValidationMarker::*)(::System::Type*, bool)>(&::Zenject::ValidationMarker::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e9c7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ValidationMarker::*)(::System::Type*)>(&::Zenject::ValidationMarker::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e81fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker.get_InstantiateFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ValidationMarker::*)()>(&::Zenject::ValidationMarker::get_InstantiateFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9c7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { "get_InstantiateFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker.set_InstantiateFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ValidationMarker::*)(bool)>(&::Zenject::ValidationMarker::set_InstantiateFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9c7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { "set_InstantiateFailed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker.get_MarkedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::ValidationMarker::*)()>(&::Zenject::ValidationMarker::get_MarkedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9c7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { "get_MarkedType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker.set_MarkedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ValidationMarker::*)(::System::Type*)>(&::Zenject::ValidationMarker::set_MarkedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9c7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { "set_MarkedType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::ValidationMarker::__cordl_internal_get__InstantiateFailed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstantiateFailed_k__BackingField;
}
constexpr bool const& Zenject::ValidationMarker::__cordl_internal_get__InstantiateFailed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstantiateFailed_k__BackingField;
}
constexpr void Zenject::ValidationMarker::__cordl_internal_set__InstantiateFailed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InstantiateFailed_k__BackingField = value;
}
constexpr ::System::Type*& Zenject::ValidationMarker::__cordl_internal_get__MarkedType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MarkedType_k__BackingField;
}
constexpr ::System::Type* const& Zenject::ValidationMarker::__cordl_internal_get__MarkedType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MarkedType_k__BackingField;
}
constexpr void Zenject::ValidationMarker::__cordl_internal_set__MarkedType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MarkedType_k__BackingField = value;
}
inline void Zenject::ValidationMarker::_ctor(::System::Type* markedType, bool instantiateFailed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markedType, instantiateFailed);
}
inline void Zenject::ValidationMarker::_ctor(::System::Type* markedType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markedType);
}
inline bool Zenject::ValidationMarker::get_InstantiateFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { "get_InstantiateFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::ValidationMarker::set_InstantiateFailed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { "set_InstantiateFailed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* Zenject::ValidationMarker::get_MarkedType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { "get_MarkedType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Zenject::ValidationMarker::set_MarkedType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ValidationMarker*>(), { "set_MarkedType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::ValidationMarker* Zenject::ValidationMarker::New_ctor(::System::Type* markedType, bool instantiateFailed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ValidationMarker*>(markedType, instantiateFailed));
}
inline ::Zenject::ValidationMarker* Zenject::ValidationMarker::New_ctor(::System::Type* markedType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ValidationMarker*>(markedType));
}
// Ctor Parameters []
constexpr ::Zenject::ValidationMarker::ValidationMarker() {}
