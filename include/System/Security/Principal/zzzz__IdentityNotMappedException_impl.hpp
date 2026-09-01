#pragma once
// IWYU pragma private; include "System\Security\Principal\IdentityNotMappedException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Security/Principal/zzzz__IdentityNotMappedException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::IdentityNotMappedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::IdentityNotMappedException::*)()>(&::System::Security::Principal::IdentityNotMappedException::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b13780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityNotMappedException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityNotMappedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::IdentityNotMappedException::*)(::StringW)>(
    &::System::Security::Principal::IdentityNotMappedException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b137d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityNotMappedException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityNotMappedException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::IdentityNotMappedException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Principal::IdentityNotMappedException::GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b137d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityNotMappedException*>(),
                                                                                          { ::i2c::class_of<::System::Security::Principal::IdentityNotMappedException*>(), 10 }));
    return ___internal_method;
  }
};
inline void System::Security::Principal::IdentityNotMappedException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityNotMappedException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Principal::IdentityNotMappedException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityNotMappedException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Security::Principal::IdentityNotMappedException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                   ::System::Runtime::Serialization::StreamingContext streamingContext) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::IdentityNotMappedException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Security::Principal::IdentityNotMappedException* System::Security::Principal::IdentityNotMappedException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::IdentityNotMappedException*>());
}
inline ::System::Security::Principal::IdentityNotMappedException* System::Security::Principal::IdentityNotMappedException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::IdentityNotMappedException*>(message));
}
// Ctor Parameters []
constexpr ::System::Security::Principal::IdentityNotMappedException::IdentityNotMappedException() {}
