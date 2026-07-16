#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipPCMSourceNative.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__VoipPCMSourceNative_def.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.GetPCM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Platform::VoipPCMSourceNative::*)(::ArrayW<float_t>, int32_t)>(&::Oculus::Platform::VoipPCMSourceNative::GetPCM)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5deaff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { "GetPCM", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.SetSenderID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)(uint64_t)>(&::Oculus::Platform::VoipPCMSourceNative::SetSenderID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5deb070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { "SetSenderID", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.PeekSizeElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::PeekSizeElements)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5deb078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { "PeekSizeElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5deb0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipPCMSourceNative._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipPCMSourceNative::*)()>(&::Oculus::Platform::VoipPCMSourceNative::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dea570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::VoipPCMSourceNative::__cordl_internal_get_senderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderID;
}
constexpr uint64_t const& Oculus::Platform::VoipPCMSourceNative::__cordl_internal_get_senderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderID;
}
constexpr void Oculus::Platform::VoipPCMSourceNative::__cordl_internal_set_senderID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___senderID = value;
}
inline int32_t Oculus::Platform::VoipPCMSourceNative::GetPCM(::ArrayW<float_t> dest, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { "GetPCM", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dest, length);
}
inline void Oculus::Platform::VoipPCMSourceNative::SetSenderID(uint64_t senderID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { "SetSenderID", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, senderID);
}
inline int32_t Oculus::Platform::VoipPCMSourceNative::PeekSizeElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { "PeekSizeElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Platform::VoipPCMSourceNative::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::VoipPCMSourceNative::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipPCMSourceNative*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipPCMSourceNative* Oculus::Platform::VoipPCMSourceNative::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::VoipPCMSourceNative*>());
}
/// @brief Convert operator to "::Oculus::Platform::IVoipPCMSource"
constexpr Oculus::Platform::VoipPCMSourceNative::operator ::Oculus::Platform::IVoipPCMSource*() noexcept {
  return static_cast<::Oculus::Platform::IVoipPCMSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Platform::IVoipPCMSource"
constexpr ::Oculus::Platform::IVoipPCMSource* Oculus::Platform::VoipPCMSourceNative::i___Oculus__Platform__IVoipPCMSource() noexcept {
  return static_cast<::Oculus::Platform::IVoipPCMSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipPCMSourceNative::VoipPCMSourceNative() {}
