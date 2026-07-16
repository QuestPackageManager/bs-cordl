#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/TypeInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__TypeInformation_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::TypeInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::TypeInformation::*)(::StringW, ::StringW, bool)>(
    &::System::Runtime::Serialization::TypeInformation::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x615405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeInformation*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::TypeInformation.get_FullTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::TypeInformation::*)()>(&::System::Runtime::Serialization::TypeInformation::get_FullTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615c228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeInformation*>(), { "get_FullTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::TypeInformation.get_AssemblyString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::TypeInformation::*)()>(&::System::Runtime::Serialization::TypeInformation::get_AssemblyString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615c230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeInformation*>(), { "get_AssemblyString", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::TypeInformation::__cordl_internal_get_fullTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::TypeInformation::__cordl_internal_get_fullTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr void System::Runtime::Serialization::TypeInformation::__cordl_internal_set_fullTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullTypeName = value;
}
constexpr ::StringW& System::Runtime::Serialization::TypeInformation::__cordl_internal_get_assemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::TypeInformation::__cordl_internal_get_assemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr void System::Runtime::Serialization::TypeInformation::__cordl_internal_set_assemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblyString = value;
}
constexpr bool& System::Runtime::Serialization::TypeInformation::__cordl_internal_get_hasTypeForwardedFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypeForwardedFrom;
}
constexpr bool const& System::Runtime::Serialization::TypeInformation::__cordl_internal_get_hasTypeForwardedFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypeForwardedFrom;
}
constexpr void System::Runtime::Serialization::TypeInformation::__cordl_internal_set_hasTypeForwardedFrom(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasTypeForwardedFrom = value;
}
inline void System::Runtime::Serialization::TypeInformation::_ctor(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeInformation*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullTypeName, assemblyString, hasTypeForwardedFrom);
}
inline ::StringW System::Runtime::Serialization::TypeInformation::get_FullTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeInformation*>(), { "get_FullTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::TypeInformation::get_AssemblyString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::TypeInformation*>(), { "get_AssemblyString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::TypeInformation* System::Runtime::Serialization::TypeInformation::New_ctor(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::TypeInformation*>(fullTypeName, assemblyString, hasTypeForwardedFrom));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::TypeInformation::TypeInformation() {}
