#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMaskArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BitMaskArray_def.hpp"
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.get_bitCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BitMaskArray::*)()>(&::GlobalNamespace::BitMaskArray::get_bitCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3777a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "get_bitCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMaskArray::*)(int32_t)>(&::GlobalNamespace::BitMaskArray::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3777aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitMaskArray::*)(::GlobalNamespace::BitMaskArray*)>(&::GlobalNamespace::BitMaskArray::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3777b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BitMaskArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMaskArray* (::GlobalNamespace::BitMaskArray::*)(int32_t, uint64_t)>(&::GlobalNamespace::BitMaskArray::SetBits)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3777b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::BitMaskArray::*)(int32_t, int32_t)>(&::GlobalNamespace::BitMaskArray::GetBits)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3777c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BitMaskArray::*)()>(&::GlobalNamespace::BitMaskArray::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3777d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { ::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMaskArray::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::BitMaskArray::Serialize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3777e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskArray.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMaskArray::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::BitMaskArray::Deserialize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3777fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BitMaskArray::__cordl_internal_get__bitCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bitCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BitMaskArray::__cordl_internal_get__bitCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bitCount_k__BackingField;
}
constexpr void GlobalNamespace::BitMaskArray::__cordl_internal_set__bitCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bitCount_k__BackingField = value;
}
constexpr ::ArrayW<uint64_t>& GlobalNamespace::BitMaskArray::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<uint64_t> const& GlobalNamespace::BitMaskArray::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::BitMaskArray::__cordl_internal_set__data(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
inline int32_t GlobalNamespace::BitMaskArray::get_bitCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "get_bitCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BitMaskArray::_ctor(int32_t bitCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bitCount);
}
inline bool GlobalNamespace::BitMaskArray::Equals(::GlobalNamespace::BitMaskArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BitMaskArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::GlobalNamespace::BitMaskArray* GlobalNamespace::BitMaskArray::SetBits(int32_t offset, uint64_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMaskArray*>(this, ___internal_method, offset, bits);
}
inline uint64_t GlobalNamespace::BitMaskArray::GetBits(int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, offset, count);
}
inline ::StringW GlobalNamespace::BitMaskArray::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BitMaskArray::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::BitMaskArray::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskArray*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::BitMaskArray* GlobalNamespace::BitMaskArray::New_ctor(int32_t bitCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitMaskArray*>(bitCount));
}
/// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>"
constexpr GlobalNamespace::BitMaskArray::operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>*() noexcept {
  return static_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>"
constexpr ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>* GlobalNamespace::BitMaskArray::i___GlobalNamespace__IBitMask_1___GlobalNamespace__BitMaskArray__() noexcept {
  return static_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskArray*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>"
constexpr GlobalNamespace::BitMaskArray::operator ::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>*() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>* GlobalNamespace::BitMaskArray::i___System__IEquatable_1___GlobalNamespace__BitMaskArray__() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BitMaskArray*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::BitMaskArray::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::BitMaskArray::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitMaskArray::BitMaskArray() {}
