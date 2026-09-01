#pragma once
// IWYU pragma private; include "Zenject\Internal\SingletonMarkRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__SingletonMarkRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.MarkNonSingleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(&::Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e9fe50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::SingletonMarkRegistry*>(), { "MarkNonSingleton", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.MarkSingleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(&::Zenject::Internal::SingletonMarkRegistry::MarkSingleton)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e9ff1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::SingletonMarkRegistry*>(), { "MarkSingleton", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.Unmark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(&::Zenject::Internal::SingletonMarkRegistry::Unmark)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6ea0014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::SingletonMarkRegistry*>(), { "Unmark", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)()>(&::Zenject::Internal::SingletonMarkRegistry::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ea008c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::SingletonMarkRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& Zenject::Internal::SingletonMarkRegistry::__cordl_internal_get__boundSingletons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundSingletons;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& Zenject::Internal::SingletonMarkRegistry::__cordl_internal_get__boundSingletons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundSingletons;
}
constexpr void Zenject::Internal::SingletonMarkRegistry::__cordl_internal_set__boundSingletons(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundSingletons = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& Zenject::Internal::SingletonMarkRegistry::__cordl_internal_get__boundNonSingletons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundNonSingletons;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& Zenject::Internal::SingletonMarkRegistry::__cordl_internal_get__boundNonSingletons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundNonSingletons;
}
constexpr void Zenject::Internal::SingletonMarkRegistry::__cordl_internal_set__boundNonSingletons(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundNonSingletons = value;
}
inline void Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::SingletonMarkRegistry*>(), { "MarkNonSingleton", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Zenject::Internal::SingletonMarkRegistry::MarkSingleton(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::SingletonMarkRegistry*>(), { "MarkSingleton", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Zenject::Internal::SingletonMarkRegistry::Unmark(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::SingletonMarkRegistry*>(), { "Unmark", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Zenject::Internal::SingletonMarkRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::SingletonMarkRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::Internal::SingletonMarkRegistry* Zenject::Internal::SingletonMarkRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::SingletonMarkRegistry*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::SingletonMarkRegistry::SingletonMarkRegistry() {}
