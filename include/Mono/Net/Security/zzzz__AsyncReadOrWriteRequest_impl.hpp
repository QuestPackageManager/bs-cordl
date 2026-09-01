#pragma once
// IWYU pragma private; include "Mono\Net\Security\AsyncReadOrWriteRequest.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.get_UserBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::BufferOffsetSize* (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(
    &::Mono::Net::Security::AsyncReadOrWriteRequest::get_UserBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd84a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), { "get_UserBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.get_CurrentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(&::Mono::Net::Security::AsyncReadOrWriteRequest::get_CurrentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd84a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), { "get_CurrentSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.set_CurrentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::AsyncReadOrWriteRequest::*)(int32_t)>(&::Mono::Net::Security::AsyncReadOrWriteRequest::set_CurrentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd84b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), { "set_CurrentSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::AsyncReadOrWriteRequest::*)(::Mono::Net::Security::MobileAuthenticatedStream*, bool, ::ArrayW<uint8_t>, int32_t,
                                                                                                                int32_t)>(&::Mono::Net::Security::AsyncReadOrWriteRequest::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fd84b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(&::Mono::Net::Security::AsyncReadOrWriteRequest::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fd8558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), { ::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::Mono::Net::Security::BufferOffsetSize*& Mono::Net::Security::AsyncReadOrWriteRequest::__cordl_internal_get__UserBuffer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserBuffer_k__BackingField;
}
constexpr ::Mono::Net::Security::BufferOffsetSize* const& Mono::Net::Security::AsyncReadOrWriteRequest::__cordl_internal_get__UserBuffer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserBuffer_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncReadOrWriteRequest::__cordl_internal_set__UserBuffer_k__BackingField(::Mono::Net::Security::BufferOffsetSize* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UserBuffer_k__BackingField = value;
}
constexpr int32_t& Mono::Net::Security::AsyncReadOrWriteRequest::__cordl_internal_get__CurrentSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentSize_k__BackingField;
}
constexpr int32_t const& Mono::Net::Security::AsyncReadOrWriteRequest::__cordl_internal_get__CurrentSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentSize_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncReadOrWriteRequest::__cordl_internal_set__CurrentSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurrentSize_k__BackingField = value;
}
inline ::Mono::Net::Security::BufferOffsetSize* Mono::Net::Security::AsyncReadOrWriteRequest::get_UserBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), { "get_UserBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::BufferOffsetSize*>(this, ___internal_method);
}
inline int32_t Mono::Net::Security::AsyncReadOrWriteRequest::get_CurrentSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), { "get_CurrentSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Net::Security::AsyncReadOrWriteRequest::set_CurrentSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), { "set_CurrentSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Net::Security::AsyncReadOrWriteRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, sync, buffer, offset, size);
}
inline ::StringW Mono::Net::Security::AsyncReadOrWriteRequest::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::AsyncReadOrWriteRequest*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Net::Security::AsyncReadOrWriteRequest* Mono::Net::Security::AsyncReadOrWriteRequest::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync,
                                                                                                              ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::AsyncReadOrWriteRequest*>(parent, sync, buffer, offset, size));
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::AsyncReadOrWriteRequest::AsyncReadOrWriteRequest() {}
