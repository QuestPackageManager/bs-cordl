#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/MemoryHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion.get_isEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::*)()>(
    &::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::get_isEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64ff7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(), { "get_isEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::*)(uint32_t, uint32_t)>(
    &::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64ff7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::*)(uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64ff7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion.Overlap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion (::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::*)(
    ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::Overlap)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64ff804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(),
                                                                                           { "Overlap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::get_isEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(), { "get_isEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::_ctor(uint32_t bitOffset, uint32_t sizeInBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitOffset, sizeInBits);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::_ctor(uint32_t byteOffset, uint32_t bitOffset, uint32_t sizeInBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, byteOffset, bitOffset, sizeInBits);
}
inline ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion
UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::Overlap(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(),
                                                                                         { "Overlap", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "bitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeInBits", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::MemoryHelpers_BitRegion(uint32_t bitOffset, uint32_t sizeInBits) noexcept {
  this->bitOffset = bitOffset;
  this->sizeInBits = sizeInBits;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion::MemoryHelpers_BitRegion() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*, void*, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion)>(
    &::UnityEngine::InputSystem::Utilities::MemoryHelpers::Compare)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64fef04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                         { "Compare", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.ComputeFollowingByteOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::ComputeFollowingByteOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64ff0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                                                           { "ComputeFollowingByteOffset", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.WriteSingleBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint32_t, bool)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteSingleBit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x64ff100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                                                           { "WriteSingleBit", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.ReadSingleBit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadSingleBit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64fef48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(), { "ReadSingleBit", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.MemCpyBitRegion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::MemCpyBitRegion)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x64ff130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                             { "MemCpyBitRegion", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.MemCmpBitRegion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*, void*, uint32_t, uint32_t, void*)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::MemCmpBitRegion)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x64fef64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                            { "MemCmpBitRegion", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.MemSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int32_t, uint8_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::MemSet)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64ff24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                                                           { "MemSet", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.MemCpyMasked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, int32_t, void*)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::MemCpyMasked)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64ff29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                             { "MemCpyMasked", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.ReadMultipleBitsAsUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(void*, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadMultipleBitsAsUInt)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x64f7b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                             { "ReadMultipleBitsAsUInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.WriteUIntAsMultipleBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint32_t, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteUIntAsMultipleBits)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x64ff320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                { "WriteUIntAsMultipleBits", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.ReadTwosComplementMultipleBitsAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadTwosComplementMultipleBitsAsInt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f5a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                             { "ReadTwosComplementMultipleBitsAsInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.WriteIntAsTwosComplementMultipleBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint32_t, uint32_t, int32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteIntAsTwosComplementMultipleBits)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f5bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                            { "WriteIntAsTwosComplementMultipleBits", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.ReadExcessKMultipleBitsAsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadExcessKMultipleBitsAsInt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64ff4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                             { "ReadExcessKMultipleBitsAsInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.WriteIntAsExcessKMultipleBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint32_t, uint32_t, int32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteIntAsExcessKMultipleBits)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64ff4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                         { "WriteIntAsExcessKMultipleBits", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.ReadMultipleBitsAsNormalizedUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(void*, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadMultipleBitsAsNormalizedUInt)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64ff4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                             { "ReadMultipleBitsAsNormalizedUInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.WriteNormalizedUIntAsMultipleBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint32_t, uint32_t, float_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteNormalizedUIntAsMultipleBits)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64ff544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                         { "WriteNormalizedUIntAsMultipleBits", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.SetBitsInBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::SetBitsInBuffer)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x64ff594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                            { "SetBitsInBuffer", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::MemoryHelpers.AlignNatural
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::InputSystem::Utilities::MemoryHelpers::AlignNatural)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64ff75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                                                           { "AlignNatural", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::Utilities::MemoryHelpers::Compare(void* ptr1, void* ptr2, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion region) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                       { "Compare", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr1, ptr2, region);
}
inline uint32_t UnityEngine::InputSystem::Utilities::MemoryHelpers::ComputeFollowingByteOffset(uint32_t byteOffset, uint32_t sizeInBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                                                         { "ComputeFollowingByteOffset", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, byteOffset, sizeInBits);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteSingleBit(void* ptr, uint32_t bitOffset, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                                                         { "WriteSingleBit", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, bitOffset, value);
}
inline bool UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadSingleBit(void* ptr, uint32_t bitOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(), { "ReadSingleBit", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, bitOffset);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::MemCpyBitRegion(void* destination, void* source, uint32_t bitOffset, uint32_t bitCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                           { "MemCpyBitRegion", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, bitOffset, bitCount);
}
inline bool UnityEngine::InputSystem::Utilities::MemoryHelpers::MemCmpBitRegion(void* ptr1, void* ptr2, uint32_t bitOffset, uint32_t bitCount, void* mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                          { "MemCmpBitRegion", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr1, ptr2, bitOffset, bitCount, mask);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::MemSet(void* destination, int32_t numBytes, uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                                                         { "MemSet", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, numBytes, value);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::MemCpyMasked(void* destination, void* source, int32_t numBytes, void* mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                           { "MemCpyMasked", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, numBytes, mask);
}
inline uint32_t UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadMultipleBitsAsUInt(void* ptr, uint32_t bitOffset, uint32_t bitCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                           { "ReadMultipleBitsAsUInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ptr, bitOffset, bitCount);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteUIntAsMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                              { "WriteUIntAsMultipleBits", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, bitOffset, bitCount, value);
}
inline int32_t UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadTwosComplementMultipleBitsAsInt(void* ptr, uint32_t bitOffset, uint32_t bitCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                           { "ReadTwosComplementMultipleBitsAsInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, bitOffset, bitCount);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteIntAsTwosComplementMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                          { "WriteIntAsTwosComplementMultipleBits", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, bitOffset, bitCount, value);
}
inline int32_t UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadExcessKMultipleBitsAsInt(void* ptr, uint32_t bitOffset, uint32_t bitCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                           { "ReadExcessKMultipleBitsAsInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, bitOffset, bitCount);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteIntAsExcessKMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                       { "WriteIntAsExcessKMultipleBits", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, bitOffset, bitCount, value);
}
inline float_t UnityEngine::InputSystem::Utilities::MemoryHelpers::ReadMultipleBitsAsNormalizedUInt(void* ptr, uint32_t bitOffset, uint32_t bitCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                           { "ReadMultipleBitsAsNormalizedUInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ptr, bitOffset, bitCount);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::WriteNormalizedUIntAsMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                       { "WriteNormalizedUIntAsMultipleBits", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, bitOffset, bitCount, value);
}
inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::SetBitsInBuffer(void* buffer, int32_t byteOffset, int32_t bitOffset, int32_t sizeInBits, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                          { "SetBitsInBuffer", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, byteOffset, bitOffset, sizeInBits, value);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::MemoryHelpers::Swap(::by_ref<TValue> a, ::by_ref<TValue> b) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(),
                                                           { "Swap", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::by_ref<TValue>>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline uint32_t UnityEngine::InputSystem::Utilities::MemoryHelpers::AlignNatural(uint32_t offset, uint32_t sizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::MemoryHelpers*>(), { "AlignNatural", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, offset, sizeInBytes);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::MemoryHelpers::MemoryHelpers() {}
