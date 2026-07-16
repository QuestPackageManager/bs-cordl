#pragma once
// IWYU pragma private; include "Unity/Collections/Bitwise.hpp"
#include "Unity/Collections/zzzz__Bitwise_def.hpp"
//  Writing Method size for method: ::Unity::Collections::Bitwise.AlignDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Unity::Collections::Bitwise::AlignDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a52c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "AlignDown", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.AlignUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Unity::Collections::Bitwise::AlignUp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a52d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "AlignUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.FromBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::Unity::Collections::Bitwise::FromBool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a52e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "FromBool", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.ExtractBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t, uint32_t)>(&::Unity::Collections::Bitwise::ExtractBits)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a52ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "ExtractBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.ReplaceBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t, uint32_t, uint32_t)>(&::Unity::Collections::Bitwise::ReplaceBits)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a52f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                { "ReplaceBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t, uint32_t, bool)>(&::Unity::Collections::Bitwise::SetBits)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a5310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "SetBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.ExtractBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t, uint64_t)>(&::Unity::Collections::Bitwise::ExtractBits)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a532c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "ExtractBits", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.ReplaceBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t, uint64_t, uint64_t)>(&::Unity::Collections::Bitwise::ReplaceBits)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64a5338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                { "ReplaceBits", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.SetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t, uint64_t, bool)>(&::Unity::Collections::Bitwise::SetBits)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64a5350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "SetBits", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.lzcnt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t)>(&::Unity::Collections::Bitwise::lzcnt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64a536c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "lzcnt", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.tzcnt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t)>(&::Unity::Collections::Bitwise::tzcnt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64a53a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "tzcnt", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.lzcnt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint16_t)>(&::Unity::Collections::Bitwise::lzcnt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64a53f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "lzcnt", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.tzcnt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint16_t)>(&::Unity::Collections::Bitwise::tzcnt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64a5430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "tzcnt", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.FindUlong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::FindUlong)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x64a547c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "FindUlong", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.FindUint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::FindUint)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x64a5624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "FindUint", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.FindUshort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::FindUshort)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x64a575c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "FindUshort", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.FindByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::FindByte)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x64a58f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "FindByte", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.FindUpto14bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::FindUpto14bits)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x64a5a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                { "FindUpto14bits", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.FindUpto6bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::FindUpto6bits)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x64a5bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                { "FindUpto6bits", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.FindWithBeginEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::FindWithBeginEnd)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x64a5cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                { "FindWithBeginEnd", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::Find)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a5df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "Find", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.TestNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::TestNone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64a5df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "TestNone", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.TestAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::TestAny)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64a5e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "TestAny", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.TestAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::TestAll)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64a5ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "TestAll", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.CountBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::CountBits)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x64a5f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "CountBits", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t*, int32_t)>(&::Unity::Collections::Bitwise::IsSet)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a603c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "IsSet", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Bitwise.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t*, int32_t, int32_t, int32_t)>(&::Unity::Collections::Bitwise::GetBits)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64a6050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                             { "GetBits", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::Bitwise::AlignDown(int32_t value, int32_t alignPow2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "AlignDown", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, alignPow2);
}
inline int32_t Unity::Collections::Bitwise::AlignUp(int32_t value, int32_t alignPow2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "AlignUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, alignPow2);
}
inline int32_t Unity::Collections::Bitwise::FromBool(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "FromBool", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline uint32_t Unity::Collections::Bitwise::ExtractBits(uint32_t input, int32_t pos, uint32_t mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "ExtractBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, pos, mask);
}
inline uint32_t Unity::Collections::Bitwise::ReplaceBits(uint32_t input, int32_t pos, uint32_t mask, uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "ReplaceBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, pos, mask, value);
}
inline uint32_t Unity::Collections::Bitwise::SetBits(uint32_t input, int32_t pos, uint32_t mask, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "SetBits", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, pos, mask, value);
}
inline uint64_t Unity::Collections::Bitwise::ExtractBits(uint64_t input, int32_t pos, uint64_t mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "ExtractBits", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, input, pos, mask);
}
inline uint64_t Unity::Collections::Bitwise::ReplaceBits(uint64_t input, int32_t pos, uint64_t mask, uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "ReplaceBits", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, input, pos, mask, value);
}
inline uint64_t Unity::Collections::Bitwise::SetBits(uint64_t input, int32_t pos, uint64_t mask, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "SetBits", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, input, pos, mask, value);
}
inline int32_t Unity::Collections::Bitwise::lzcnt(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "lzcnt", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Collections::Bitwise::tzcnt(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "tzcnt", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Collections::Bitwise::lzcnt(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "lzcnt", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Collections::Bitwise::tzcnt(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "tzcnt", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Collections::Bitwise::FindUlong(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "FindUlong", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, beginBit, endBit, numBits);
}
inline int32_t Unity::Collections::Bitwise::FindUint(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "FindUint", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, beginBit, endBit, numBits);
}
inline int32_t Unity::Collections::Bitwise::FindUshort(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "FindUshort", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, beginBit, endBit, numBits);
}
inline int32_t Unity::Collections::Bitwise::FindByte(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "FindByte", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, beginBit, endBit, numBits);
}
inline int32_t Unity::Collections::Bitwise::FindUpto14bits(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                              { "FindUpto14bits", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, beginBit, endBit, numBits);
}
inline int32_t Unity::Collections::Bitwise::FindUpto6bits(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "FindUpto6bits", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, beginBit, endBit, numBits);
}
inline int32_t Unity::Collections::Bitwise::FindWithBeginEnd(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                              { "FindWithBeginEnd", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, beginBit, endBit, numBits);
}
inline int32_t Unity::Collections::Bitwise::Find(uint64_t* ptr, int32_t pos, int32_t count, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "Find", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, pos, count, numBits);
}
inline bool Unity::Collections::Bitwise::TestNone(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "TestNone", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, length, pos, numBits);
}
inline bool Unity::Collections::Bitwise::TestAny(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "TestAny", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, length, pos, numBits);
}
inline bool Unity::Collections::Bitwise::TestAll(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "TestAll", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, length, pos, numBits);
}
inline int32_t Unity::Collections::Bitwise::CountBits(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "CountBits", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, length, pos, numBits);
}
inline bool Unity::Collections::Bitwise::IsSet(uint64_t* ptr, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(), { "IsSet", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, pos);
}
inline uint64_t Unity::Collections::Bitwise::GetBits(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Bitwise>(),
                                                           { "GetBits", {}, { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, ptr, length, pos, numBits);
}
// Ctor Parameters []
constexpr ::Unity::Collections::Bitwise::Bitwise() {}
