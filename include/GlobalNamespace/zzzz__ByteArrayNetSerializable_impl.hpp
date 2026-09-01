#pragma once
// IWYU pragma private; include "GlobalNamespace\ByteArrayNetSerializable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ByteArrayNetSerializable::*)()>(&::GlobalNamespace::ByteArrayNetSerializable::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332cd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::ByteArrayNetSerializable::*)()>(&::GlobalNamespace::ByteArrayNetSerializable::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332cd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "get_data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.set_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::ByteArrayNetSerializable::set_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332cea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "set_data", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::StringW, int32_t, int32_t, bool)>(&::GlobalNamespace::ByteArrayNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x332ced0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::StringW, int32_t, bool)>(&::GlobalNamespace::ByteArrayNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x332cee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::ByteArrayNetSerializable::SetData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x332ceac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "SetData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::ByteArrayNetSerializable::SetData)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x332cef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(),
                                                             { "SetData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::ByteArrayNetSerializable::*)(bool)>(&::GlobalNamespace::ByteArrayNetSerializable::GetData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x332cda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "GetData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ByteArrayNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x332d21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ByteArrayNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x332d300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)()>(&::GlobalNamespace::ByteArrayNetSerializable::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x332d0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(int32_t)>(&::GlobalNamespace::ByteArrayNetSerializable::Resize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x332d160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.op_Implicit___ArrayW_uint8_t_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::GlobalNamespace::ByteArrayNetSerializable*)>(
    &::GlobalNamespace::ByteArrayNetSerializable::op_Implicit___ArrayW_uint8_t_)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x332d7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ByteArrayNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::ByteArrayNetSerializable::CopyTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x332d200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ByteArrayNetSerializable.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ByteArrayNetSerializable::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::ByteArrayNetSerializable::CopyTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x332d808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(),
                                                                                           { "CopyTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_set__data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
constexpr int32_t& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr int32_t const& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_set__length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr ::StringW& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr bool& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__allowEmpty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowEmpty;
}
constexpr bool const& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__allowEmpty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowEmpty;
}
constexpr void GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_set__allowEmpty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowEmpty = value;
}
constexpr int32_t& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__minLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minLength;
}
constexpr int32_t const& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__minLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minLength;
}
constexpr void GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_set__minLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minLength = value;
}
constexpr int32_t& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__maxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
constexpr int32_t const& GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_get__maxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
constexpr void GlobalNamespace::ByteArrayNetSerializable::__cordl_internal_set__maxLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxLength = value;
}
inline int32_t GlobalNamespace::ByteArrayNetSerializable::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::ByteArrayNetSerializable::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void GlobalNamespace::ByteArrayNetSerializable::set_data(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "set_data", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ByteArrayNetSerializable::_ctor(::StringW name, int32_t minLength, int32_t maxLength, bool allowEmpty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, minLength, maxLength, allowEmpty);
}
inline void GlobalNamespace::ByteArrayNetSerializable::_ctor(::StringW name, int32_t size, bool allowEmpty) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, size, allowEmpty);
}
inline void GlobalNamespace::ByteArrayNetSerializable::SetData(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "SetData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ByteArrayNetSerializable::SetData(::ArrayW<uint8_t> value, int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(),
                                                           { "SetData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, offset, length);
}
inline ::ArrayW<uint8_t> GlobalNamespace::ByteArrayNetSerializable::GetData(bool emptyAsNull) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "GetData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, emptyAsNull);
}
inline void GlobalNamespace::ByteArrayNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ByteArrayNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::ByteArrayNetSerializable::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ByteArrayNetSerializable::Resize(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline ::ArrayW<uint8_t> GlobalNamespace::ByteArrayNetSerializable::op_Implicit___ArrayW_uint8_t_(::GlobalNamespace::ByteArrayNetSerializable* byteArrayNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ByteArrayNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, byteArrayNetSerializable);
}
inline void GlobalNamespace::ByteArrayNetSerializable::CopyTo(::ArrayW<uint8_t> destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void GlobalNamespace::ByteArrayNetSerializable::CopyTo(::ArrayW<uint8_t> destination, ::by_ref<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ByteArrayNetSerializable*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, length);
}
inline ::GlobalNamespace::ByteArrayNetSerializable* GlobalNamespace::ByteArrayNetSerializable::New_ctor(::StringW name, int32_t minLength, int32_t maxLength, bool allowEmpty) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ByteArrayNetSerializable*>(name, minLength, maxLength, allowEmpty));
}
inline ::GlobalNamespace::ByteArrayNetSerializable* GlobalNamespace::ByteArrayNetSerializable::New_ctor(::StringW name, int32_t size, bool allowEmpty) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ByteArrayNetSerializable*>(name, size, allowEmpty));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ByteArrayNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ByteArrayNetSerializable::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ByteArrayNetSerializable::ByteArrayNetSerializable() {}
