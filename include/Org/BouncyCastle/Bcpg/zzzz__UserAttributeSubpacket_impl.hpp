#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\UserAttributeSubpacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacketTag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacketTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::*)(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3693d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::*)(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3693d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket.get_SubpacketType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag (::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::*)()>(
    &::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::get_SubpacketType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3693d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::GetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3693d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::Encode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3693d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::*)(::System::Object*)>(&::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::Equals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3693e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::GetHashCode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3693f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag& Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag const& Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_set_type(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_get_longLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___longLength;
}
constexpr bool const& Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_get_longLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___longLength;
}
constexpr void Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_set_longLength(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___longLength = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Bcpg::UserAttributeSubpacket::__cordl_internal_set_data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Bcpg::UserAttributeSubpacket::_ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, data);
}
inline void Org::BouncyCastle::Bcpg::UserAttributeSubpacket::_ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type, bool forceLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, forceLongLength, data);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag Org::BouncyCastle::Bcpg::UserAttributeSubpacket::get_SubpacketType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::UserAttributeSubpacket::GetData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::UserAttributeSubpacket::Encode(::System::IO::Stream* os) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, os);
}
inline bool Org::BouncyCastle::Bcpg::UserAttributeSubpacket::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Bcpg::UserAttributeSubpacket::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* Org::BouncyCastle::Bcpg::UserAttributeSubpacket::New_ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(type, data));
}
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* Org::BouncyCastle::Bcpg::UserAttributeSubpacket::New_ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type, bool forceLongLength,
                                                                                                                    ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(type, forceLongLength, data));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket::UserAttributeSubpacket() {}
