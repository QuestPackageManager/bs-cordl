#pragma once
// IWYU pragma private; include "System\Security\AccessControl\ObjectAce.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAceFlags_impl.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAceFlags_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(
    ::System::Security::AccessControl::AceFlags, ::System::Security::AccessControl::AceQualifier, int32_t, ::System::Security::Principal::SecurityIdentifier*,
    ::System::Security::AccessControl::ObjectAceFlags, ::System::Guid, ::System::Guid, bool, ::ArrayW<uint8_t>)>(&::System::Security::AccessControl::ObjectAce::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b1e64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::System::Security::AccessControl::AceFlags>(), ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<::System::Security::AccessControl::ObjectAceFlags>(),
                                ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::ObjectAce::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5b1f914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_BinaryLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_BinaryLength)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b20594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { ::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_InheritedObjectAceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_InheritedObjectAceType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b205e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_InheritedObjectAceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_InheritedObjectAceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid)>(
    &::System::Security::AccessControl::ObjectAce::set_InheritedObjectAceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b205f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "set_InheritedObjectAceType", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_InheritedObjectAceTypePresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_InheritedObjectAceTypePresent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b204ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_InheritedObjectAceTypePresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::ObjectAceFlags (::System::Security::AccessControl::ObjectAce::*)()>(
    &::System::Security::AccessControl::ObjectAce::get_ObjectAceFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b205f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_ObjectAceFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_ObjectAceFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Security::AccessControl::ObjectAceFlags)>(
    &::System::Security::AccessControl::ObjectAce::set_ObjectAceFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(),
                                                                                           { "set_ObjectAceFlags", {}, { ::i2c::type_of<::System::Security::AccessControl::ObjectAceFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_ObjectAceType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b20608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_ObjectAceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_ObjectAceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid)>(&::System::Security::AccessControl::ObjectAce::set_ObjectAceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "set_ObjectAceType", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceTypePresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::AccessControl::ObjectAce::*)()>(&::System::Security::AccessControl::ObjectAce::get_ObjectAceTypePresent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b204e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_ObjectAceTypePresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.GetBinaryForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::AccessControl::ObjectAce::GetBinaryForm)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b2061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { ::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.ConvertType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AceType (*)(::System::Security::AccessControl::AceQualifier, bool)>(
    &::System::Security::AccessControl::ObjectAce::ConvertType)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b203d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(),
                                                             { "ConvertType", {}, { ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.WriteGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::AccessControl::ObjectAce::WriteGuid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b20788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(),
                                                             { "WriteGuid", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.ReadGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::AccessControl::ObjectAce::ReadGuid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b204f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "ReadGuid", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Guid& System::Security::AccessControl::ObjectAce::__cordl_internal_get_object_ace_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_ace_type;
}
constexpr ::System::Guid const& System::Security::AccessControl::ObjectAce::__cordl_internal_get_object_ace_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_ace_type;
}
constexpr void System::Security::AccessControl::ObjectAce::__cordl_internal_set_object_ace_type(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___object_ace_type = value;
}
constexpr ::System::Guid& System::Security::AccessControl::ObjectAce::__cordl_internal_get_inherited_object_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inherited_object_type;
}
constexpr ::System::Guid const& System::Security::AccessControl::ObjectAce::__cordl_internal_get_inherited_object_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inherited_object_type;
}
constexpr void System::Security::AccessControl::ObjectAce::__cordl_internal_set_inherited_object_type(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inherited_object_type = value;
}
constexpr ::System::Security::AccessControl::ObjectAceFlags& System::Security::AccessControl::ObjectAce::__cordl_internal_get_object_ace_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_ace_flags;
}
constexpr ::System::Security::AccessControl::ObjectAceFlags const& System::Security::AccessControl::ObjectAce::__cordl_internal_get_object_ace_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_ace_flags;
}
constexpr void System::Security::AccessControl::ObjectAce::__cordl_internal_set_object_ace_flags(::System::Security::AccessControl::ObjectAceFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___object_ace_flags = value;
}
inline void System::Security::AccessControl::ObjectAce::_ctor(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                                                              ::System::Security::Principal::SecurityIdentifier* sid, ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type,
                                                              ::System::Guid inheritedType, bool isCallback, ::ArrayW<uint8_t> opaque) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Security::AccessControl::AceFlags>(), ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<::System::Security::AccessControl::ObjectAceFlags>(),
                                           ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aceFlags, qualifier, accessMask, sid, flags, type, inheritedType, isCallback, opaque);
}
inline void System::Security::AccessControl::ObjectAce::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline int32_t System::Security::AccessControl::ObjectAce::get_BinaryLength() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Guid System::Security::AccessControl::ObjectAce::get_InheritedObjectAceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_InheritedObjectAceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectAce::set_InheritedObjectAceType(::System::Guid value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "set_InheritedObjectAceType", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Security::AccessControl::ObjectAce::get_InheritedObjectAceTypePresent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_InheritedObjectAceTypePresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::AccessControl::ObjectAceFlags System::Security::AccessControl::ObjectAce::get_ObjectAceFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_ObjectAceFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::ObjectAceFlags>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectAce::set_ObjectAceFlags(::System::Security::AccessControl::ObjectAceFlags value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(),
                                                                                         { "set_ObjectAceFlags", {}, { ::i2c::type_of<::System::Security::AccessControl::ObjectAceFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid System::Security::AccessControl::ObjectAce::get_ObjectAceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_ObjectAceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectAce::set_ObjectAceType(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "set_ObjectAceType", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Security::AccessControl::ObjectAce::get_ObjectAceTypePresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "get_ObjectAceTypePresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectAce::GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline ::System::Security::AccessControl::AceType System::Security::AccessControl::ObjectAce::ConvertType(::System::Security::AccessControl::AceQualifier qualifier, bool isCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(),
                                                           { "ConvertType", {}, { ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceType>(nullptr, ___internal_method, qualifier, isCallback);
}
inline void System::Security::AccessControl::ObjectAce::WriteGuid(::System::Guid val, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(),
                                                           { "WriteGuid", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val, buffer, offset);
}
inline ::System::Guid System::Security::AccessControl::ObjectAce::ReadGuid(::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::ObjectAce*>(), { "ReadGuid", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method, buffer, offset);
}
inline ::System::Security::AccessControl::ObjectAce* System::Security::AccessControl::ObjectAce::New_ctor(::System::Security::AccessControl::AceFlags aceFlags,
                                                                                                          ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                                                                                                          ::System::Security::Principal::SecurityIdentifier* sid,
                                                                                                          ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type,
                                                                                                          ::System::Guid inheritedType, bool isCallback, ::ArrayW<uint8_t> opaque) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::ObjectAce*>(aceFlags, qualifier, accessMask, sid, flags, type, inheritedType, isCallback, opaque));
}
inline ::System::Security::AccessControl::ObjectAce* System::Security::AccessControl::ObjectAce::New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::ObjectAce*>(binaryForm, offset));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::ObjectAce::ObjectAce() {}
