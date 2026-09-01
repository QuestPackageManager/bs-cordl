#pragma once
// IWYU pragma private; include "System\Security\AccessControl\GenericAce.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_impl.hpp"
#include "System/Security/AccessControl/zzzz__AceType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/Security/AccessControl/zzzz__AuditFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericAce::*)(
    ::System::Security::AccessControl::AceType, ::System::Security::AccessControl::AceFlags)>(&::System::Security::AccessControl::GenericAce::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b1f740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Security::AccessControl::AceType>(), ::i2c::type_of<::System::Security::AccessControl::AceFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericAce::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::GenericAce::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b1f7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.get_AceFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AceFlags (::System::Security::AccessControl::GenericAce::*)()>(
    &::System::Security::AccessControl::GenericAce::get_AceFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1f8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_AceFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.get_AceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AceType (::System::Security::AccessControl::GenericAce::*)()>(
    &::System::Security::AccessControl::GenericAce::get_AceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1f8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_AceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.get_AuditFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AuditFlags (::System::Security::AccessControl::GenericAce::*)()>(
    &::System::Security::AccessControl::GenericAce::get_AuditFlags)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b1f658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_AuditFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.get_BinaryLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::GenericAce::*)()>(&::System::Security::AccessControl::GenericAce::get_BinaryLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { ::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.get_InheritanceFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::InheritanceFlags (::System::Security::AccessControl::GenericAce::*)()>(
    &::System::Security::AccessControl::GenericAce::get_InheritanceFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b1f8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_InheritanceFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.get_IsInherited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::GenericAce::*)()>(&::System::Security::AccessControl::GenericAce::get_IsInherited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1dd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_IsInherited", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.get_PropagationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::PropagationFlags (::System::Security::AccessControl::GenericAce::*)()>(
    &::System::Security::AccessControl::GenericAce::get_PropagationFlags)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1f8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_PropagationFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.CreateFromBinaryForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::GenericAce* (*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::AccessControl::GenericAce::CreateFromBinaryForm)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b1eb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                                                                           { "CreateFromBinaryForm", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::GenericAce::*)(::System::Object*)>(&::System::Security::AccessControl::GenericAce::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b1fb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.GetBinaryForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::GenericAce::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::AccessControl::GenericAce::GetBinaryForm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { ::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::GenericAce::*)()>(&::System::Security::AccessControl::GenericAce::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b1fc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "GetHashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::AccessControl::GenericAce*, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::GenericAce::op_Equality)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b1df54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                            { "op_Equality", {}, { ::i2c::type_of<::System::Security::AccessControl::GenericAce*>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::AccessControl::GenericAce*, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::GenericAce::op_Inequality)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b1db90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::System::Security::AccessControl::GenericAce*>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.IsObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::AccessControl::AceType)>(&::System::Security::AccessControl::GenericAce::IsObjectType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b1f8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "IsObjectType", {}, { ::i2c::type_of<::System::Security::AccessControl::AceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.ReadUShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::GenericAce::ReadUShort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b1cf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "ReadUShort", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.ReadInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::GenericAce::ReadInt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b1cfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "ReadInt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.WriteInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::GenericAce::WriteInt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b1d230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                                             { "WriteInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::GenericAce.WriteUShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint16_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::GenericAce::WriteUShort)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b1d1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                                             { "WriteUShort", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Security::AccessControl::AceFlags& System::Security::AccessControl::GenericAce::__cordl_internal_get_ace_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ace_flags;
}
constexpr ::System::Security::AccessControl::AceFlags const& System::Security::AccessControl::GenericAce::__cordl_internal_get_ace_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ace_flags;
}
constexpr void System::Security::AccessControl::GenericAce::__cordl_internal_set_ace_flags(::System::Security::AccessControl::AceFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ace_flags = value;
}
constexpr ::System::Security::AccessControl::AceType& System::Security::AccessControl::GenericAce::__cordl_internal_get_ace_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ace_type;
}
constexpr ::System::Security::AccessControl::AceType const& System::Security::AccessControl::GenericAce::__cordl_internal_get_ace_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ace_type;
}
constexpr void System::Security::AccessControl::GenericAce::__cordl_internal_set_ace_type(::System::Security::AccessControl::AceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ace_type = value;
}
inline void System::Security::AccessControl::GenericAce::_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Security::AccessControl::AceType>(), ::i2c::type_of<::System::Security::AccessControl::AceFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, flags);
}
inline void System::Security::AccessControl::GenericAce::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline ::System::Security::AccessControl::AceFlags System::Security::AccessControl::GenericAce::get_AceFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_AceFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceFlags>(this, ___internal_method);
}
inline ::System::Security::AccessControl::AceType System::Security::AccessControl::GenericAce::get_AceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_AceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceType>(this, ___internal_method);
}
inline ::System::Security::AccessControl::AuditFlags System::Security::AccessControl::GenericAce::get_AuditFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_AuditFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AuditFlags>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::GenericAce::get_BinaryLength() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::AccessControl::InheritanceFlags System::Security::AccessControl::GenericAce::get_InheritanceFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_InheritanceFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::InheritanceFlags>(this, ___internal_method);
}
inline bool System::Security::AccessControl::GenericAce::get_IsInherited() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_IsInherited", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::AccessControl::PropagationFlags System::Security::AccessControl::GenericAce::get_PropagationFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "get_PropagationFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::PropagationFlags>(this, ___internal_method);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::GenericAce::CreateFromBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                                                                         { "CreateFromBinaryForm", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*>(nullptr, ___internal_method, binaryForm, offset);
}
inline bool System::Security::AccessControl::GenericAce::Equals(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "Equals", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline void System::Security::AccessControl::GenericAce::GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline int32_t System::Security::AccessControl::GenericAce::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "GetHashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::AccessControl::GenericAce::op_Equality(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::System::Security::AccessControl::GenericAce*>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Security::AccessControl::GenericAce::op_Inequality(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::System::Security::AccessControl::GenericAce*>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Security::AccessControl::GenericAce::IsObjectType(::System::Security::AccessControl::AceType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "IsObjectType", {}, { ::i2c::type_of<::System::Security::AccessControl::AceType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline uint16_t System::Security::AccessControl::GenericAce::ReadUShort(::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "ReadUShort", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, buffer, offset);
}
inline int32_t System::Security::AccessControl::GenericAce::ReadInt(::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(), { "ReadInt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, offset);
}
inline void System::Security::AccessControl::GenericAce::WriteInt(int32_t val, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                                           { "WriteInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, buffer, offset);
}
inline void System::Security::AccessControl::GenericAce::WriteUShort(uint16_t val, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::GenericAce*>(),
                                                           { "WriteUShort", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, val, buffer, offset);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::GenericAce::New_ctor(::System::Security::AccessControl::AceType type,
                                                                                                            ::System::Security::AccessControl::AceFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::GenericAce*>(type, flags));
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::GenericAce::New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::GenericAce*>(binaryForm, offset));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::GenericAce::GenericAce() {}
