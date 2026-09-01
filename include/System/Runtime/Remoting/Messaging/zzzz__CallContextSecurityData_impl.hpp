#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\CallContextSecurityData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallContextSecurityData_def.hpp"
#include "System/Security/Principal/zzzz__IPrincipal_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContextSecurityData.get_HasInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::CallContextSecurityData::*)()>(
    &::System::Runtime::Remoting::Messaging::CallContextSecurityData::get_HasInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b3f9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContextSecurityData*>(), { "get_HasInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContextSecurityData.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::CallContextSecurityData::*)()>(
    &::System::Runtime::Remoting::Messaging::CallContextSecurityData::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b3f970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContextSecurityData*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContextSecurityData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::CallContextSecurityData::*)()>(
    &::System::Runtime::Remoting::Messaging::CallContextSecurityData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3fab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContextSecurityData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::IPrincipal*& System::Runtime::Remoting::Messaging::CallContextSecurityData::__cordl_internal_get__principal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____principal;
}
constexpr ::System::Security::Principal::IPrincipal* const& System::Runtime::Remoting::Messaging::CallContextSecurityData::__cordl_internal_get__principal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____principal;
}
constexpr void System::Runtime::Remoting::Messaging::CallContextSecurityData::__cordl_internal_set__principal(::System::Security::Principal::IPrincipal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____principal = value;
}
inline bool System::Runtime::Remoting::Messaging::CallContextSecurityData::get_HasInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContextSecurityData*>(), { "get_HasInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CallContextSecurityData::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContextSecurityData*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::CallContextSecurityData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CallContextSecurityData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::CallContextSecurityData* System::Runtime::Remoting::Messaging::CallContextSecurityData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::CallContextSecurityData*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Runtime::Remoting::Messaging::CallContextSecurityData::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Runtime::Remoting::Messaging::CallContextSecurityData::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData::CallContextSecurityData() {}
