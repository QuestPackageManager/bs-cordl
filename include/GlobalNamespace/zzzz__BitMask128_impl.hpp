#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMask128.hpp"
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "GlobalNamespace/zzzz__IBitMask_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitMask128.get_bitCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BitMask128::*)()>(&::GlobalNamespace::BitMask128::get_bitCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3776f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "get_bitCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.get_maxValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (*)()>(&::GlobalNamespace::BitMask128::get_maxValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3776f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "get_maxValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMask128::*)(uint64_t, uint64_t)>(&::GlobalNamespace::BitMask128::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3776f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMask128::*)(uint64_t)>(&::GlobalNamespace::BitMask128::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3776f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (::GlobalNamespace::BitMask128::*)(int32_t, uint64_t)>(&::GlobalNamespace::BitMask128::SetBits)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3776f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::BitMask128::*)(int32_t, int32_t)>(&::GlobalNamespace::BitMask128::GetBits)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3776fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (*)(::by_ref<::GlobalNamespace::BitMask128>, ::by_ref<::GlobalNamespace::BitMask128>)>(
    &::GlobalNamespace::BitMask128::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3777060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (*)(::by_ref<::GlobalNamespace::BitMask128>, ::by_ref<::GlobalNamespace::BitMask128>)>(
    &::GlobalNamespace::BitMask128::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3777078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (*)(::by_ref<::GlobalNamespace::BitMask128>, ::by_ref<::GlobalNamespace::BitMask128>)>(
    &::GlobalNamespace::BitMask128::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3777090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                                { "op_ExclusiveOr", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.op_LeftShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (*)(::by_ref<::GlobalNamespace::BitMask128>, int32_t)>(&::GlobalNamespace::BitMask128::op_LeftShift)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x37770a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "op_LeftShift", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.op_RightShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (*)(::by_ref<::GlobalNamespace::BitMask128>, int32_t)>(&::GlobalNamespace::BitMask128::op_RightShift)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x37770dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "op_RightShift", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::BitMask128>, ::by_ref<::GlobalNamespace::BitMask128>)>(&::GlobalNamespace::BitMask128::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3777110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::BitMask128>, ::by_ref<::GlobalNamespace::BitMask128>)>(&::GlobalNamespace::BitMask128::op_Inequality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x377713c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.op_Implicit___GlobalNamespace__BitMask128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (*)(uint64_t)>(&::GlobalNamespace::BitMask128::op_Implicit___GlobalNamespace__BitMask128)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3777168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitMask128::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::BitMask128::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3777174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (::GlobalNamespace::BitMask128::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::BitMask128::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37771b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitMask128 (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::BitMask128::Deserialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x37771bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BitMask128::*)()>(&::GlobalNamespace::BitMask128::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3777214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { ::i2c::class_of<::GlobalNamespace::BitMask128>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitMask128::*)(::GlobalNamespace::BitMask128)>(&::GlobalNamespace::BitMask128::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x37772a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BitMask128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BitMask128::*)(::System::Object*)>(&::GlobalNamespace::BitMask128::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x37772c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { ::i2c::class_of<::GlobalNamespace::BitMask128>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMask128.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BitMask128::*)()>(&::GlobalNamespace::BitMask128::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3777350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { ::i2c::class_of<::GlobalNamespace::BitMask128>(), 2 }));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::BitMask128::get_bitCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "get_bitCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::get_maxValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "get_maxValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BitMask128::_ctor(uint64_t d0, uint64_t d1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, d0, d1);
}
inline void GlobalNamespace::BitMask128::_ctor(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::SetBits(int32_t offset, uint64_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "SetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(*this, ___internal_method, offset, bits);
}
inline uint64_t GlobalNamespace::BitMask128::GetBits(int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "GetBits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, offset, count);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::op_BitwiseOr(::by_ref<::GlobalNamespace::BitMask128> a, ::by_ref<::GlobalNamespace::BitMask128> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                              { "op_BitwiseOr", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::op_BitwiseAnd(::by_ref<::GlobalNamespace::BitMask128> a, ::by_ref<::GlobalNamespace::BitMask128> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                              { "op_BitwiseAnd", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::op_ExclusiveOr(::by_ref<::GlobalNamespace::BitMask128> a, ::by_ref<::GlobalNamespace::BitMask128> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                              { "op_ExclusiveOr", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::op_LeftShift(::by_ref<::GlobalNamespace::BitMask128> a, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "op_LeftShift", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(nullptr, ___internal_method, a, bits);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::op_RightShift(::by_ref<::GlobalNamespace::BitMask128> a, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "op_RightShift", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(nullptr, ___internal_method, a, bits);
}
inline bool GlobalNamespace::BitMask128::op_Equality(::by_ref<::GlobalNamespace::BitMask128> a, ::by_ref<::GlobalNamespace::BitMask128> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::BitMask128::op_Inequality(::by_ref<::GlobalNamespace::BitMask128> a, ::by_ref<::GlobalNamespace::BitMask128> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BitMask128>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::op_Implicit___GlobalNamespace__BitMask128(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::BitMask128::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::BitMask128::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128>(nullptr, ___internal_method, reader);
}
inline ::StringW GlobalNamespace::BitMask128::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BitMask128>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::BitMask128::Equals(::GlobalNamespace::BitMask128 other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMask128>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::BitMask128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::BitMask128::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BitMask128>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BitMask128::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BitMask128>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>"
constexpr GlobalNamespace::BitMask128::operator ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>*() {
  return static_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>"
constexpr ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>* GlobalNamespace::BitMask128::i___GlobalNamespace__IBitMask_1___GlobalNamespace__BitMask128_() {
  return static_cast<::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BitMask128>"
constexpr GlobalNamespace::BitMask128::operator ::System::IEquatable_1<::GlobalNamespace::BitMask128>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BitMask128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BitMask128>"
constexpr ::System::IEquatable_1<::GlobalNamespace::BitMask128>* GlobalNamespace::BitMask128::i___System__IEquatable_1___GlobalNamespace__BitMask128_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::BitMask128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>"
constexpr GlobalNamespace::BitMask128::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>*
GlobalNamespace::BitMask128::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__BitMask128_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::BitMask128::operator ::LiteNetLib::Utils::INetImmutableSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::BitMask128::i___LiteNetLib__Utils__INetImmutableSerializable() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_d0", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_d1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BitMask128::BitMask128(uint64_t _d0, uint64_t _d1) noexcept {
  this->_d0 = _d0;
  this->_d1 = _d1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitMask128::BitMask128() {}
