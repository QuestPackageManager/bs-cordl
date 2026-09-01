#pragma once
// IWYU pragma private; include "System\Security\Principal\SecurityIdentifier.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_impl.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(::StringW)>(&::System::Security::Principal::SecurityIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b13d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::Principal::SecurityIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b141fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.CreateFromBinaryForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(::System::IntPtr, int32_t)>(
    &::System::Security::Principal::SecurityIdentifier::CreateFromBinaryForm)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b142b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                           { "CreateFromBinaryForm", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.get_BinaryLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Principal::SecurityIdentifier::*)()>(&::System::Security::Principal::SecurityIdentifier::get_BinaryLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b14400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "get_BinaryLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::SecurityIdentifier::*)()>(&::System::Security::Principal::SecurityIdentifier::get_Value)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5b14418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetSidAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Security::Principal::SecurityIdentifier::*)()>(&::System::Security::Principal::SecurityIdentifier::GetSidAuthority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b1460c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "GetSidAuthority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetSidSubAuthorityCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Security::Principal::SecurityIdentifier::*)()>(&::System::Security::Principal::SecurityIdentifier::GetSidSubAuthorityCount)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b14708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "GetSidSubAuthorityCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetSidSubAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Security::Principal::SecurityIdentifier::*)(uint8_t)>(
    &::System::Security::Principal::SecurityIdentifier::GetSidSubAuthority)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b1468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "GetSidSubAuthority", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Principal::SecurityIdentifier::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::Principal::SecurityIdentifier::CompareTo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b14734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Principal::SecurityIdentifier::*)(::System::Object*)>(&::System::Security::Principal::SecurityIdentifier::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b148d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Principal::SecurityIdentifier::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::Principal::SecurityIdentifier::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b14948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetBinaryForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::Principal::SecurityIdentifier::GetBinaryForm)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b149f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                           { "GetBinaryForm", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Principal::SecurityIdentifier::*)()>(&::System::Security::Principal::SecurityIdentifier::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b14ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::SecurityIdentifier::*)()>(&::System::Security::Principal::SecurityIdentifier::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b14ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.Translate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::IdentityReference* (::System::Security::Principal::SecurityIdentifier::*)(::System::Type*)>(
    &::System::Security::Principal::SecurityIdentifier::Translate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5b14ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::Principal::SecurityIdentifier::op_Equality)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b14874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                            { "op_Equality", {}, { ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.ParseSddlForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Security::Principal::SecurityIdentifier::ParseSddlForm)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x5b13db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "ParseSddlForm", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.TryParseAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<uint64_t>)>(&::System::Security::Principal::SecurityIdentifier::TryParseAuthority)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b14e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                           { "TryParseAuthority", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.TryParseSubAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<uint32_t>)>(&::System::Security::Principal::SecurityIdentifier::TryParseSubAuthority)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b14f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                           { "TryParseSubAuthority", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Principal::SecurityIdentifier::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Principal::SecurityIdentifier::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Security::Principal::SecurityIdentifier::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
inline void System::Security::Principal::SecurityIdentifier::setStaticF_MaxBinaryLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxBinaryLength", ::System::Security::Principal::SecurityIdentifier*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::Principal::SecurityIdentifier::getStaticF_MaxBinaryLength() {
  return ::cordl_internals::getStaticField<int32_t, "MaxBinaryLength", ::System::Security::Principal::SecurityIdentifier*>();
}
inline void System::Security::Principal::SecurityIdentifier::setStaticF_MinBinaryLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MinBinaryLength", ::System::Security::Principal::SecurityIdentifier*>(std::forward<int32_t>(value));
}
inline int32_t System::Security::Principal::SecurityIdentifier::getStaticF_MinBinaryLength() {
  return ::cordl_internals::getStaticField<int32_t, "MinBinaryLength", ::System::Security::Principal::SecurityIdentifier*>();
}
inline void System::Security::Principal::SecurityIdentifier::_ctor(::StringW sddlForm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sddlForm);
}
inline void System::Security::Principal::SecurityIdentifier::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline void System::Security::Principal::SecurityIdentifier::CreateFromBinaryForm(::System::IntPtr binaryForm, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                         { "CreateFromBinaryForm", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, length);
}
inline int32_t System::Security::Principal::SecurityIdentifier::get_BinaryLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "get_BinaryLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::SecurityIdentifier::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint64_t System::Security::Principal::SecurityIdentifier::GetSidAuthority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "GetSidAuthority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline uint8_t System::Security::Principal::SecurityIdentifier::GetSidSubAuthorityCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "GetSidSubAuthorityCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline uint32_t System::Security::Principal::SecurityIdentifier::GetSidSubAuthority(uint8_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "GetSidSubAuthority", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, index);
}
inline int32_t System::Security::Principal::SecurityIdentifier::CompareTo(::System::Security::Principal::SecurityIdentifier* sid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sid);
}
inline bool System::Security::Principal::SecurityIdentifier::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline bool System::Security::Principal::SecurityIdentifier::Equals(::System::Security::Principal::SecurityIdentifier* sid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sid);
}
inline void System::Security::Principal::SecurityIdentifier::GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                         { "GetBinaryForm", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline int32_t System::Security::Principal::SecurityIdentifier::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::SecurityIdentifier::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Principal::IdentityReference* System::Security::Principal::SecurityIdentifier::Translate(::System::Type* targetType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::IdentityReference*>(this, ___internal_method, targetType);
}
inline bool System::Security::Principal::SecurityIdentifier::op_Equality(::System::Security::Principal::SecurityIdentifier* left, ::System::Security::Principal::SecurityIdentifier* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                          { "op_Equality", {}, { ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<uint8_t> System::Security::Principal::SecurityIdentifier::ParseSddlForm(::StringW sddlForm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(), { "ParseSddlForm", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, sddlForm);
}
inline bool System::Security::Principal::SecurityIdentifier::TryParseAuthority(::StringW s, ::by_ref<uint64_t> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                         { "TryParseAuthority", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, result);
}
inline bool System::Security::Principal::SecurityIdentifier::TryParseSubAuthority(::StringW s, ::by_ref<uint32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::SecurityIdentifier*>(),
                                                                                         { "TryParseSubAuthority", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, result);
}
inline ::System::Security::Principal::SecurityIdentifier* System::Security::Principal::SecurityIdentifier::New_ctor(::StringW sddlForm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::SecurityIdentifier*>(sddlForm));
}
inline ::System::Security::Principal::SecurityIdentifier* System::Security::Principal::SecurityIdentifier::New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::SecurityIdentifier*>(binaryForm, offset));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>"
constexpr System::Security::Principal::SecurityIdentifier::operator ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*() noexcept {
  return static_cast<::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>"
constexpr ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*
System::Security::Principal::SecurityIdentifier::i___System__IComparable_1___System__Security__Principal__SecurityIdentifier__() noexcept {
  return static_cast<::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Principal::SecurityIdentifier::SecurityIdentifier() {}
