#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\BerOctetString.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3689fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::*)()>(
    &::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x368a40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::*)()>(&::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x368a450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::*)()>(&::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x368a57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_get_octets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___octets;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_get_octets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___octets;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_set_octets(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___octets = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_get_chunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSize;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_get_chunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSize;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_set_chunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkSize = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerOctetString*& Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_get_currentChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentChunk;
}
constexpr ::Org::BouncyCastle::Asn1::DerOctetString* const& Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_get_currentChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentChunk;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_set_currentChunk(::Org::BouncyCastle::Asn1::DerOctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentChunk = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_get_nextChunkPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextChunkPos;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_get_nextChunkPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextChunkPos;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::__cordl_internal_set_nextChunkPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextChunkPos = value;
}
inline void Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::_ctor(::ArrayW<uint8_t> octets, int32_t chunkSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, octets, chunkSize);
}
inline ::System::Object* Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator* Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::New_ctor(::ArrayW<uint8_t> octets, int32_t chunkSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator*>(octets, chunkSize));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerOctetString_ChunkEnumerator::BerOctetString_ChunkEnumerator() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.FromSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::BerOctetString* (*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::BerOctetString::FromSequence)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3684cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "FromSequence", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.ToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>)>(&::Org::BouncyCastle::Asn1::BerOctetString::ToBytes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3689ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(),
                                                                                           { "ToBytes", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.ToOctetStringArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> (*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::BerOctetString::ToOctetStringArray)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3689ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "ToOctetStringArray", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3689d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3689e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>)>(
    &::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x368269c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3689e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>, int32_t)>(
    &::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3689eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t>, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>, int32_t)>(
    &::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3689f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(),
                            { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::BerOctetString::*)()>(
    &::Org::BouncyCastle::Asn1::BerOctetString::GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3689f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.GetObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::BerOctetString::*)()>(&::Org::BouncyCastle::Asn1::BerOctetString::GetObjects)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3689fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "GetObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(
    &::Org::BouncyCastle::Asn1::BerOctetString::Encode)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x3689ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), 6 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_get_chunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSize;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_get_chunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSize;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_set_chunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkSize = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>& Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_get_octs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___octs;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_get_octs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___octs;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_set_octs(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___octs = value;
}
inline void Org::BouncyCastle::Asn1::BerOctetString::setStaticF_DefaultChunkSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DefaultChunkSize", ::Org::BouncyCastle::Asn1::BerOctetString*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Asn1::BerOctetString::getStaticF_DefaultChunkSize() {
  return ::cordl_internals::getStaticField<int32_t, "DefaultChunkSize", ::Org::BouncyCastle::Asn1::BerOctetString*>();
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::FromSequence(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "FromSequence", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::BerOctetString*>(nullptr, ___internal_method, seq);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::BerOctetString::ToBytes(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "ToBytes", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, octs);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> Org::BouncyCastle::Asn1::BerOctetString::ToOctetStringArray(::System::Collections::IEnumerable* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "ToOctetStringArray", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>(nullptr, ___internal_method, e);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::System::Collections::IEnumerable* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t> str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, octs);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t> str, int32_t chunkSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str, chunkSize);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs, int32_t chunkSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, octs, chunkSize);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t> str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs, int32_t chunkSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str, octs, chunkSize);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::BerOctetString::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::BerOctetString::GetObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), { "GetObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetString*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::System::Collections::IEnumerable* e) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetString*>(e));
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t> str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetString*>(str));
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetString*>(octs));
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t> str, int32_t chunkSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetString*>(str, chunkSize));
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs, int32_t chunkSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetString*>(octs, chunkSize));
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t> str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*> octs,
                                                                                                    int32_t chunkSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetString*>(str, octs, chunkSize));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Org::BouncyCastle::Asn1::BerOctetString::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::BerOctetString::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerOctetString::BerOctetString() {}
