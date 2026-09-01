#pragma once
// IWYU pragma private; include "GlobalNamespace\BitMask256.hpp"
#include "GlobalNamespace/zzzz__BitMask256_def.hpp"
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitMask256.get_bitCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BitMask256::*)()>(&::GlobalNamespace::BitMask256::get_bitCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377baf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "get_bitCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.get_maxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (*)()>(&::GlobalNamespace::BitMask256::get_maxValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x377bb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "get_maxValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMask256::*)(uint64_t, uint64_t, uint64_t, uint64_t)>(&::GlobalNamespace::BitMask256::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x377bb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMask256::*)(uint64_t)>(&::GlobalNamespace::BitMask256::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x377bb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (::GlobalNamespace::BitMask256::*)(int32_t, uint64_t)>(&::GlobalNamespace::BitMask256::SetBits)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x377bb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::BitMask256::*)(int32_t, int32_t)>(&::GlobalNamespace::BitMask256::GetBits)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x377bbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (*)(::by_ref<::GlobalNamespace::BitMask256>, ::by_ref<::GlobalNamespace::BitMask256>)>(
    &::GlobalNamespace::BitMask256::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x377bd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (*)(::by_ref<::GlobalNamespace::BitMask256>, ::by_ref<::GlobalNamespace::BitMask256>)>(
    &::GlobalNamespace::BitMask256::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x377bd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (*)(::by_ref<::GlobalNamespace::BitMask256>, ::by_ref<::GlobalNamespace::BitMask256>)>(
    &::GlobalNamespace::BitMask256::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x377bd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                                { "op_ExclusiveOr", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (*)(::by_ref<::GlobalNamespace::BitMask256>, int32_t)>(&::GlobalNamespace::BitMask256::op_LeftShift)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x377bd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "op_LeftShift", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (*)(::by_ref<::GlobalNamespace::BitMask256>, int32_t)>(&::GlobalNamespace::BitMask256::op_RightShift)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x377be00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "op_RightShift", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::BitMask256>, ::by_ref<::GlobalNamespace::BitMask256>)>(&::GlobalNamespace::BitMask256::op_Equality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x377be70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::BitMask256>, ::by_ref<::GlobalNamespace::BitMask256>)>(&::GlobalNamespace::BitMask256::op_Inequality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x377bebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.op_Implicit___GlobalNamespace__BitMask256
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (*)(uint64_t)>(&::GlobalNamespace::BitMask256::op_Implicit___GlobalNamespace__BitMask256)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x377bf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMask256::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::BitMask256::Serialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x377bf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (::GlobalNamespace::BitMask256::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::BitMask256::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x377bf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask256 (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::BitMask256::Deserialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x377bfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BitMask256::*)()>(&::GlobalNamespace::BitMask256::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x377c034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { ::i2c::class_of<::GlobalNamespace::BitMask256>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitMask256::*)(::GlobalNamespace::BitMask256)>(&::GlobalNamespace::BitMask256::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x377c108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BitMask256>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitMask256::*)(::System::Object*)>(&::GlobalNamespace::BitMask256::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x377c154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { ::i2c::class_of<::GlobalNamespace::BitMask256>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask256.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BitMask256::*)()>(&::GlobalNamespace::BitMask256::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x377c200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { ::i2c::class_of<::GlobalNamespace::BitMask256>(), 2 }));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::BitMask256::get_bitCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "get_bitCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::get_maxValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "get_maxValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BitMask256::_ctor(uint64_t d0, uint64_t d1, uint64_t d2, uint64_t d3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, d0, d1, d2, d3);
}
inline void GlobalNamespace::BitMask256::_ctor(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::SetBits(int32_t offset, uint64_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(*this, ___internal_method, offset, bits);
}
inline uint64_t GlobalNamespace::BitMask256::GetBits(int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, offset, count);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::op_BitwiseOr(::by_ref<::GlobalNamespace::BitMask256> a, ::by_ref<::GlobalNamespace::BitMask256> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                              { "op_BitwiseOr", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::op_BitwiseAnd(::by_ref<::GlobalNamespace::BitMask256> a, ::by_ref<::GlobalNamespace::BitMask256> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                              { "op_BitwiseAnd", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::op_ExclusiveOr(::by_ref<::GlobalNamespace::BitMask256> a, ::by_ref<::GlobalNamespace::BitMask256> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                              { "op_ExclusiveOr", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::op_LeftShift(::by_ref<::GlobalNamespace::BitMask256> a, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "op_LeftShift", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(nullptr, ___internal_method, a, bits);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::op_RightShift(::by_ref<::GlobalNamespace::BitMask256> a, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "op_RightShift", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(nullptr, ___internal_method, a, bits);
}
inline bool GlobalNamespace::BitMask256::op_Equality(::by_ref<::GlobalNamespace::BitMask256> a, ::by_ref<::GlobalNamespace::BitMask256> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::BitMask256::op_Inequality(::by_ref<::GlobalNamespace::BitMask256> a, ::by_ref<::GlobalNamespace::BitMask256> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask256>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::op_Implicit___GlobalNamespace__BitMask256(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::BitMask256::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::BitMask256::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256>(nullptr, ___internal_method, reader);
}
inline ::StringW GlobalNamespace::BitMask256::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BitMask256>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::BitMask256::Equals(::GlobalNamespace::BitMask256 other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask256>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BitMask256>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::BitMask256::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BitMask256>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BitMask256::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BitMask256>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>"
constexpr GlobalNamespace::BitMask256::operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>*() {
  return static_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>"
constexpr ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>* GlobalNamespace::BitMask256::i___GlobalNamespace__IBitMask_1___GlobalNamespace__BitMask256_() {
  return static_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask256>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMask256>"
constexpr GlobalNamespace::BitMask256::operator ::System::IEquatable_1<::GlobalNamespace::BitMask256>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BitMask256>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BitMask256>"
constexpr ::System::IEquatable_1<::GlobalNamespace::BitMask256>* GlobalNamespace::BitMask256::i___System__IEquatable_1___GlobalNamespace__BitMask256_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BitMask256>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>"
constexpr GlobalNamespace::BitMask256::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>*
GlobalNamespace::BitMask256::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__BitMask256_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask256>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::BitMask256::operator ::LiteNetLib::Utils::INetImmutableSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::BitMask256::i___LiteNetLib__Utils__INetImmutableSerializable() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_d0", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_d1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_d2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_d3", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BitMask256::BitMask256(uint64_t _d0, uint64_t _d1, uint64_t _d2, uint64_t _d3) noexcept {
  this->_d0 = _d0;
  this->_d1 = _d1;
  this->_d2 = _d2;
  this->_d3 = _d3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitMask256::BitMask256() {}
