#pragma once
// IWYU pragma private; include "Mono\Security\Protocol\Ntlm\MessageBase.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::MessageBase::*)(int32_t)>(&::Mono::Security::Protocol::Ntlm::MessageBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9c44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Protocol::Ntlm::NtlmFlags (::Mono::Security::Protocol::Ntlm::MessageBase::*)()>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9c454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "get_Flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.set_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::MessageBase::*)(::Mono::Security::Protocol::Ntlm::NtlmFlags)>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "set_Flags", {}, { ::i2c::type_of<::Mono::Security::Protocol::Ntlm::NtlmFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Protocol::Ntlm::MessageBase::*)()>(&::Mono::Security::Protocol::Ntlm::MessageBase::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9c464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.PrepareMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::MessageBase::*)(int32_t)>(&::Mono::Security::Protocol::Ntlm::MessageBase::PrepareMessage)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a9c46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "PrepareMessage", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Protocol::Ntlm::MessageBase::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::MessageBase::Decode)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5a9c574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.CheckHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Protocol::Ntlm::MessageBase::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::MessageBase::CheckHeader)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a9c6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "CheckHeader", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::MessageBase::*)()>(&::Mono::Security::Protocol::Ntlm::MessageBase::GetBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Security::Protocol::Ntlm::MessageBase::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr int32_t const& Mono::Security::Protocol::Ntlm::MessageBase::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void Mono::Security::Protocol::Ntlm::MessageBase::__cordl_internal_set__type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags& Mono::Security::Protocol::Ntlm::MessageBase::__cordl_internal_get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags const& Mono::Security::Protocol::Ntlm::MessageBase::__cordl_internal_get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void Mono::Security::Protocol::Ntlm::MessageBase::__cordl_internal_set__flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
inline void Mono::Security::Protocol::Ntlm::MessageBase::setStaticF_header(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "header", ::Mono::Security::Protocol::Ntlm::MessageBase*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::MessageBase::getStaticF_header() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "header", ::Mono::Security::Protocol::Ntlm::MessageBase*>();
}
inline void Mono::Security::Protocol::Ntlm::MessageBase::_ctor(int32_t messageType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageType);
}
inline ::Mono::Security::Protocol::Ntlm::NtlmFlags Mono::Security::Protocol::Ntlm::MessageBase::get_Flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "get_Flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Protocol::Ntlm::NtlmFlags>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::MessageBase::set_Flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "set_Flags", {}, { ::i2c::type_of<::Mono::Security::Protocol::Ntlm::NtlmFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Mono::Security::Protocol::Ntlm::MessageBase::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::MessageBase::PrepareMessage(int32_t messageSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "PrepareMessage", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, messageSize);
}
inline void Mono::Security::Protocol::Ntlm::MessageBase::Decode(::ArrayW<uint8_t> message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline bool Mono::Security::Protocol::Ntlm::MessageBase::CheckHeader(::ArrayW<uint8_t> message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), { "CheckHeader", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message);
}
inline ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::MessageBase::GetBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Protocol::Ntlm::MessageBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::Protocol::Ntlm::MessageBase* Mono::Security::Protocol::Ntlm::MessageBase::New_ctor(int32_t messageType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Protocol::Ntlm::MessageBase*>(messageType));
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::MessageBase::MessageBase() {}
