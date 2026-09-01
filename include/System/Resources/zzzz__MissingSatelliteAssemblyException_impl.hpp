#pragma once
// IWYU pragma private; include "System\Resources\MissingSatelliteAssemblyException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Resources/zzzz__MissingSatelliteAssemblyException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Resources::MissingSatelliteAssemblyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::MissingSatelliteAssemblyException::*)()>(&::System::Resources::MissingSatelliteAssemblyException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b73054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::MissingSatelliteAssemblyException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::MissingSatelliteAssemblyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::MissingSatelliteAssemblyException::*)(::StringW, ::StringW)>(
    &::System::Resources::MissingSatelliteAssemblyException::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b730b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Resources::MissingSatelliteAssemblyException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::MissingSatelliteAssemblyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::MissingSatelliteAssemblyException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Resources::MissingSatelliteAssemblyException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b730e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Resources::MissingSatelliteAssemblyException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Resources::MissingSatelliteAssemblyException::__cordl_internal_get__cultureName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureName;
}
constexpr ::StringW const& System::Resources::MissingSatelliteAssemblyException::__cordl_internal_get__cultureName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureName;
}
constexpr void System::Resources::MissingSatelliteAssemblyException::__cordl_internal_set__cultureName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cultureName = value;
}
inline void System::Resources::MissingSatelliteAssemblyException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::MissingSatelliteAssemblyException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::MissingSatelliteAssemblyException::_ctor(::StringW message, ::StringW cultureName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::MissingSatelliteAssemblyException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, cultureName);
}
inline void System::Resources::MissingSatelliteAssemblyException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Resources::MissingSatelliteAssemblyException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Resources::MissingSatelliteAssemblyException* System::Resources::MissingSatelliteAssemblyException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::MissingSatelliteAssemblyException*>());
}
inline ::System::Resources::MissingSatelliteAssemblyException* System::Resources::MissingSatelliteAssemblyException::New_ctor(::StringW message, ::StringW cultureName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::MissingSatelliteAssemblyException*>(message, cultureName));
}
inline ::System::Resources::MissingSatelliteAssemblyException* System::Resources::MissingSatelliteAssemblyException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::MissingSatelliteAssemblyException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Resources::MissingSatelliteAssemblyException::MissingSatelliteAssemblyException() {}
