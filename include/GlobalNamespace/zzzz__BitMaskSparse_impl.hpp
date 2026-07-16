#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMaskSparse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BitMaskSparse_def.hpp"
#include "GlobalNamespace/zzzz__BitMaskSparse_def.hpp"
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMaskSparse___c::*)()>(&::GlobalNamespace::BitMaskSparse___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37783c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse___c._ToString_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BitMaskSparse___c::*)(uint32_t)>(&::GlobalNamespace::BitMaskSparse___c::_ToString_b__8_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37783cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse___c*>(), { "<ToString>b__8_0", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitMaskSparse___c::setStaticF___9(::GlobalNamespace::BitMaskSparse___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BitMaskSparse___c*, "<>9", ::GlobalNamespace::BitMaskSparse___c*>(std::forward<::GlobalNamespace::BitMaskSparse___c*>(value));
}
inline ::GlobalNamespace::BitMaskSparse___c* GlobalNamespace::BitMaskSparse___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BitMaskSparse___c*, "<>9", ::GlobalNamespace::BitMaskSparse___c*>();
}
inline void GlobalNamespace::BitMaskSparse___c::setStaticF___9__8_0(::System::Func_2<uint32_t, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<uint32_t, ::StringW>*, "<>9__8_0", ::GlobalNamespace::BitMaskSparse___c*>(std::forward<::System::Func_2<uint32_t, ::StringW>*>(value));
}
inline ::System::Func_2<uint32_t, ::StringW>* GlobalNamespace::BitMaskSparse___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<uint32_t, ::StringW>*, "<>9__8_0", ::GlobalNamespace::BitMaskSparse___c*>();
}
inline void GlobalNamespace::BitMaskSparse___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BitMaskSparse___c::_ToString_b__8_0(uint32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse___c*>(), { "<ToString>b__8_0", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline ::GlobalNamespace::BitMaskSparse___c* GlobalNamespace::BitMaskSparse___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitMaskSparse___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitMaskSparse___c::BitMaskSparse___c() {}
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse.get_bitCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BitMaskSparse::*)()>(&::GlobalNamespace::BitMaskSparse::get_bitCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3778088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "get_bitCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMaskSparse::*)(int32_t)>(&::GlobalNamespace::BitMaskSparse::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x37767d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitMaskSparse::*)(::GlobalNamespace::BitMaskSparse*)>(&::GlobalNamespace::BitMaskSparse::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3778090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BitMaskSparse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMaskSparse* (::GlobalNamespace::BitMaskSparse::*)(int32_t, uint64_t)>(&::GlobalNamespace::BitMaskSparse::SetBits)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x377810c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::BitMaskSparse::*)(int32_t, int32_t)>(&::GlobalNamespace::BitMaskSparse::GetBits)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x37781ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BitMaskSparse::*)()>(&::GlobalNamespace::BitMaskSparse::ToString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3778244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { ::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMaskSparse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::BitMaskSparse::Serialize)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3776b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskSparse.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMaskSparse::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::BitMaskSparse::Deserialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3776d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BitMaskSparse::__cordl_internal_get__bitCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bitCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BitMaskSparse::__cordl_internal_get__bitCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bitCount_k__BackingField;
}
constexpr void GlobalNamespace::BitMaskSparse::__cordl_internal_set__bitCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bitCount_k__BackingField = value;
}
constexpr ::System::Collections::Generic::SortedSet_1<uint32_t>*& GlobalNamespace::BitMaskSparse::__cordl_internal_get__sparseSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparseSet;
}
constexpr ::System::Collections::Generic::SortedSet_1<uint32_t>* const& GlobalNamespace::BitMaskSparse::__cordl_internal_get__sparseSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparseSet;
}
constexpr void GlobalNamespace::BitMaskSparse::__cordl_internal_set__sparseSet(::System::Collections::Generic::SortedSet_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparseSet = value;
}
inline int32_t GlobalNamespace::BitMaskSparse::get_bitCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "get_bitCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BitMaskSparse::_ctor(int32_t bitCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bitCount);
}
inline bool GlobalNamespace::BitMaskSparse::Equals(::GlobalNamespace::BitMaskSparse* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BitMaskSparse*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::GlobalNamespace::BitMaskSparse* GlobalNamespace::BitMaskSparse::SetBits(int32_t offset, uint64_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMaskSparse*>(this, ___internal_method, offset, bits);
}
inline uint64_t GlobalNamespace::BitMaskSparse::GetBits(int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, offset, count);
}
inline ::StringW GlobalNamespace::BitMaskSparse::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BitMaskSparse::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::BitMaskSparse::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskSparse*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::BitMaskSparse* GlobalNamespace::BitMaskSparse::New_ctor(int32_t bitCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitMaskSparse*>(bitCount));
}
/// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>"
constexpr GlobalNamespace::BitMaskSparse::operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>*() noexcept {
  return static_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>"
constexpr ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>* GlobalNamespace::BitMaskSparse::i___GlobalNamespace__IBitMask_1___GlobalNamespace__BitMaskSparse__() noexcept {
  return static_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>"
constexpr GlobalNamespace::BitMaskSparse::operator ::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>*() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>* GlobalNamespace::BitMaskSparse::i___System__IEquatable_1___GlobalNamespace__BitMaskSparse__() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BitMaskSparse*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::BitMaskSparse::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::BitMaskSparse::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitMaskSparse::BitMaskSparse() {}
