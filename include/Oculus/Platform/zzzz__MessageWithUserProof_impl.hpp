#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithUserProof.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserProof._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithUserProof::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithUserProof::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd824c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserProof*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserProof.GetUserProof
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserProof* (::Oculus::Platform::MessageWithUserProof::*)()>(
    &::Oculus::Platform::MessageWithUserProof::GetUserProof)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddd4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserProof*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithUserProof*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserProof.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserProof* (::Oculus::Platform::MessageWithUserProof::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithUserProof::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddd52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserProof*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithUserProof*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithUserProof::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserProof*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::UserProof* Oculus::Platform::MessageWithUserProof::GetUserProof() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUserProof*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserProof*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserProof* Oculus::Platform::MessageWithUserProof::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUserProof*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserProof*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithUserProof* Oculus::Platform::MessageWithUserProof::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithUserProof*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithUserProof::MessageWithUserProof() {}
