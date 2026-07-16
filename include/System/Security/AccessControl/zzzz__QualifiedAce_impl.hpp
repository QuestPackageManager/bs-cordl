#pragma once
// IWYU pragma private; include "System/Security/AccessControl/QualifiedAce.hpp"
#include "System/Security/AccessControl/zzzz__KnownAce_impl.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::QualifiedAce::*)(
    ::System::Security::AccessControl::AceType, ::System::Security::AccessControl::AceFlags, ::ArrayW<uint8_t>)>(&::System::Security::AccessControl::QualifiedAce::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b1aa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Security::AccessControl::AceType>(), ::i2c::type_of<::System::Security::AccessControl::AceFlags>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::QualifiedAce::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::AccessControl::QualifiedAce::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1ac64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.get_AceQualifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AceQualifier (::System::Security::AccessControl::QualifiedAce::*)()>(
    &::System::Security::AccessControl::QualifiedAce::get_AceQualifier)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b1ba54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "get_AceQualifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.get_IsCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::QualifiedAce::*)()>(&::System::Security::AccessControl::QualifiedAce::get_IsCallback)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b1c2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "get_IsCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.get_OpaqueLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::QualifiedAce::*)()>(&::System::Security::AccessControl::QualifiedAce::get_OpaqueLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b1adec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "get_OpaqueLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.GetOpaque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::AccessControl::QualifiedAce::*)()>(&::System::Security::AccessControl::QualifiedAce::GetOpaque)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b1afb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "GetOpaque", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::QualifiedAce.SetOpaque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::QualifiedAce::*)(::ArrayW<uint8_t>)>(&::System::Security::AccessControl::QualifiedAce::SetOpaque)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b1ad18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "SetOpaque", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::AccessControl::QualifiedAce::__cordl_internal_get_opaque() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaque;
}
constexpr ::ArrayW<uint8_t> const& System::Security::AccessControl::QualifiedAce::__cordl_internal_get_opaque() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaque;
}
constexpr void System::Security::AccessControl::QualifiedAce::__cordl_internal_set_opaque(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opaque = value;
}
inline void System::Security::AccessControl::QualifiedAce::_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags, ::ArrayW<uint8_t> opaque) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Security::AccessControl::AceType>(), ::i2c::type_of<::System::Security::AccessControl::AceFlags>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, flags, opaque);
}
inline void System::Security::AccessControl::QualifiedAce::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline ::System::Security::AccessControl::AceQualifier System::Security::AccessControl::QualifiedAce::get_AceQualifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "get_AceQualifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceQualifier>(this, ___internal_method);
}
inline bool System::Security::AccessControl::QualifiedAce::get_IsCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "get_IsCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::QualifiedAce::get_OpaqueLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "get_OpaqueLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::AccessControl::QualifiedAce::GetOpaque() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "GetOpaque", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::AccessControl::QualifiedAce::SetOpaque(::ArrayW<uint8_t> opaque) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::QualifiedAce*>(), { "SetOpaque", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opaque);
}
inline ::System::Security::AccessControl::QualifiedAce* System::Security::AccessControl::QualifiedAce::New_ctor(::System::Security::AccessControl::AceType type,
                                                                                                                ::System::Security::AccessControl::AceFlags flags, ::ArrayW<uint8_t> opaque) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::QualifiedAce*>(type, flags, opaque));
}
inline ::System::Security::AccessControl::QualifiedAce* System::Security::AccessControl::QualifiedAce::New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::QualifiedAce*>(binaryForm, offset));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::QualifiedAce::QualifiedAce() {}
