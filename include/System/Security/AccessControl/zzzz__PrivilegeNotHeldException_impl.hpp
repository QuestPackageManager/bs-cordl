#pragma once
// IWYU pragma private; include "System/Security/AccessControl/PrivilegeNotHeldException.hpp"
#include "System/zzzz__UnauthorizedAccessException_impl.hpp"
#include "System/Security/AccessControl/zzzz__PrivilegeNotHeldException_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::PrivilegeNotHeldException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::PrivilegeNotHeldException::*)()>(
    &::System::Security::AccessControl::PrivilegeNotHeldException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b1a43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::PrivilegeNotHeldException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::PrivilegeNotHeldException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::PrivilegeNotHeldException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::AccessControl::PrivilegeNotHeldException::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b1a498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::PrivilegeNotHeldException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::PrivilegeNotHeldException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::PrivilegeNotHeldException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::AccessControl::PrivilegeNotHeldException::GetObjectData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b1a528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::PrivilegeNotHeldException*>(),
                                                                                          { ::i2c::class_of<::System::Security::AccessControl::PrivilegeNotHeldException*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::AccessControl::PrivilegeNotHeldException::__cordl_internal_get__privilegeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privilegeName;
}
constexpr ::StringW const& System::Security::AccessControl::PrivilegeNotHeldException::__cordl_internal_get__privilegeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privilegeName;
}
constexpr void System::Security::AccessControl::PrivilegeNotHeldException::__cordl_internal_set__privilegeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____privilegeName = value;
}
inline void System::Security::AccessControl::PrivilegeNotHeldException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::PrivilegeNotHeldException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::AccessControl::PrivilegeNotHeldException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::PrivilegeNotHeldException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Security::AccessControl::PrivilegeNotHeldException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::PrivilegeNotHeldException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Security::AccessControl::PrivilegeNotHeldException* System::Security::AccessControl::PrivilegeNotHeldException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::PrivilegeNotHeldException*>());
}
inline ::System::Security::AccessControl::PrivilegeNotHeldException* System::Security::AccessControl::PrivilegeNotHeldException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::PrivilegeNotHeldException*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Security::AccessControl::PrivilegeNotHeldException::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Security::AccessControl::PrivilegeNotHeldException::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::PrivilegeNotHeldException::PrivilegeNotHeldException() {}
