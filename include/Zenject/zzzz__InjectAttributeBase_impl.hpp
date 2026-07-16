#pragma once
// IWYU pragma private; include "Zenject/InjectAttributeBase.hpp"
#include "Zenject/Internal/zzzz__PreserveAttribute_impl.hpp"
#include "Zenject/zzzz__InjectSources_impl.hpp"
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
//  Writing Method size for method: ::Zenject::InjectAttributeBase.get_Optional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::InjectAttributeBase::*)()>(&::Zenject::InjectAttributeBase::get_Optional)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "get_Optional", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectAttributeBase.set_Optional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectAttributeBase::*)(bool)>(&::Zenject::InjectAttributeBase::set_Optional)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "set_Optional", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectAttributeBase.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::InjectAttributeBase::*)()>(&::Zenject::InjectAttributeBase::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectAttributeBase.set_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectAttributeBase::*)(::System::Object*)>(&::Zenject::InjectAttributeBase::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "set_Id", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectAttributeBase.get_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectSources (::Zenject::InjectAttributeBase::*)()>(&::Zenject::InjectAttributeBase::get_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "get_Source", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectAttributeBase.set_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectAttributeBase::*)(::Zenject::InjectSources)>(&::Zenject::InjectAttributeBase::set_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "set_Source", {}, { ::i2c::type_of<::Zenject::InjectSources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectAttributeBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectAttributeBase::*)()>(&::Zenject::InjectAttributeBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3a1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::InjectAttributeBase::__cordl_internal_get__Optional_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Optional_k__BackingField;
}
constexpr bool const& Zenject::InjectAttributeBase::__cordl_internal_get__Optional_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Optional_k__BackingField;
}
constexpr void Zenject::InjectAttributeBase::__cordl_internal_set__Optional_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Optional_k__BackingField = value;
}
constexpr ::System::Object*& Zenject::InjectAttributeBase::__cordl_internal_get__Id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Id_k__BackingField;
}
constexpr ::System::Object* const& Zenject::InjectAttributeBase::__cordl_internal_get__Id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Id_k__BackingField;
}
constexpr void Zenject::InjectAttributeBase::__cordl_internal_set__Id_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Id_k__BackingField = value;
}
constexpr ::Zenject::InjectSources& Zenject::InjectAttributeBase::__cordl_internal_get__Source_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Source_k__BackingField;
}
constexpr ::Zenject::InjectSources const& Zenject::InjectAttributeBase::__cordl_internal_get__Source_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Source_k__BackingField;
}
constexpr void Zenject::InjectAttributeBase::__cordl_internal_set__Source_k__BackingField(::Zenject::InjectSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Source_k__BackingField = value;
}
inline bool Zenject::InjectAttributeBase::get_Optional() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "get_Optional", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::InjectAttributeBase::set_Optional(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "set_Optional", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Zenject::InjectAttributeBase::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Zenject::InjectAttributeBase::set_Id(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "set_Id", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::InjectSources Zenject::InjectAttributeBase::get_Source() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "get_Source", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectSources>(this, ___internal_method);
}
inline void Zenject::InjectAttributeBase::set_Source(::Zenject::InjectSources value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { "set_Source", {}, { ::i2c::type_of<::Zenject::InjectSources>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::InjectAttributeBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttributeBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectAttributeBase* Zenject::InjectAttributeBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InjectAttributeBase*>());
}
// Ctor Parameters []
constexpr ::Zenject::InjectAttributeBase::InjectAttributeBase() {}
