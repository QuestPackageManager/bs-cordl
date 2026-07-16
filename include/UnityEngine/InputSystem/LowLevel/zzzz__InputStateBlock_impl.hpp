#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBlock.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.GetSizeOfPrimitiveFormatInBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::GetSizeOfPrimitiveFormatInBits)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x65b29d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(),
                                                             { "GetSizeOfPrimitiveFormatInBits", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.GetPrimitiveFormatFromType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)(::System::Type*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::GetPrimitiveFormatFromType)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x65b2cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "GetPrimitiveFormatFromType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::get_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b3184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.set_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::set_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b318c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(),
                                                                                           { "set_format", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.get_byteOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateBlock::get_byteOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b3194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_byteOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.set_byteOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(uint32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::set_byteOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b319c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "set_byteOffset", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.get_bitOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateBlock::get_bitOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b31a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_bitOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.set_bitOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(uint32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::set_bitOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b31ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "set_bitOffset", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.get_sizeInBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateBlock::get_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b31b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_sizeInBits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.set_sizeInBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(uint32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::set_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b31bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "set_sizeInBits", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.get_alignedSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::get_alignedSizeInBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65b31c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_alignedSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.get_effectiveByteOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::get_effectiveByteOffset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65b3224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_effectiveByteOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.get_effectiveBitOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)()>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::get_effectiveBitOffset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65b3280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_effectiveBitOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.ReadInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(void*)>(&::UnityEngine::InputSystem::LowLevel::InputStateBlock::ReadInt)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x65b32dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "ReadInt", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.WriteInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(void*, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::WriteInt)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x65b35b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "WriteInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.ReadFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(void*)>(&::UnityEngine::InputSystem::LowLevel::InputStateBlock::ReadFloat)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x65b3898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "ReadFloat", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.WriteFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(void*, float_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::WriteFloat)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x65b3cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "WriteFloat", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.FloatToPrimitiveValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(float_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::FloatToPrimitiveValue)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x65b41ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "FloatToPrimitiveValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.ReadDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(void*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::ReadDouble)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x65b4750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "ReadDouble", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.WriteDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(void*, double_t)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::WriteDouble)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x65b4b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "WriteDouble", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(void*, ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::Write)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x65b50b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(),
                                                             { "Write", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBlock.CopyToFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBlock::*)(void*, void*)>(
    &::UnityEngine::InputSystem::LowLevel::InputStateBlock::CopyToFrom)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x65b5410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "CopyToFrom", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatInvalid(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatInvalid", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatInvalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatInvalid", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatBit(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatBit", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatBit() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatBit", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatSBit(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatSBit", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatSBit() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatSBit", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatInt(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatInt", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatInt() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatInt", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatUInt(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatUInt", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatUInt() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatUInt", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatShort(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatShort", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatShort() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatShort", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatUShort(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatUShort", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatUShort() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatUShort", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatByte(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatByte", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatByte() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatByte", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatSByte(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatSByte", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatSByte() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatSByte", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatLong(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatLong", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatLong() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatLong", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatULong(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatULong", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatULong() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatULong", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatFloat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatFloat", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatFloat() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatFloat", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatDouble(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatDouble", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatDouble() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatDouble", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatVector2(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector2", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatVector2() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector2", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatVector3(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector3", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatVector3() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector3", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatQuaternion(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatQuaternion", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatQuaternion() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatQuaternion", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatVector2Short(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector2Short", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatVector2Short() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector2Short", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatVector3Short(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector3Short", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatVector3Short() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector3Short", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatVector2Byte(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector2Byte", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatVector2Byte() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector2Byte", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatVector3Byte(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector3Byte", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatVector3Byte() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatVector3Byte", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::setStaticF_FormatPose(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatPose", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::getStaticF_FormatPose() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "FormatPose", ::UnityEngine::InputSystem::LowLevel::InputStateBlock>();
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateBlock::GetSizeOfPrimitiveFormatInBits(::UnityEngine::InputSystem::Utilities::FourCC type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(),
                                                           { "GetSizeOfPrimitiveFormatInBits", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::GetPrimitiveFormatFromType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "GetPrimitiveFormatFromType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method, type);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::InputStateBlock::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::set_format(::UnityEngine::InputSystem::Utilities::FourCC value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(),
                                                                                         { "set_format", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBlock::get_byteOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_byteOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::set_byteOffset(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "set_byteOffset", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBlock::get_bitOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_bitOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::set_bitOffset(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "set_bitOffset", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBlock::get_sizeInBits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_sizeInBits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::set_sizeInBits(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "set_sizeInBits", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBlock::get_alignedSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_alignedSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBlock::get_effectiveByteOffset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_effectiveByteOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBlock::get_effectiveBitOffset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "get_effectiveBitOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::InputStateBlock::ReadInt(void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "ReadInt", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::WriteInt(void* statePtr, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "WriteInt", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, statePtr, value);
}
inline float_t UnityEngine::InputSystem::LowLevel::InputStateBlock::ReadFloat(void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "ReadFloat", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::WriteFloat(void* statePtr, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "WriteFloat", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, statePtr, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::LowLevel::InputStateBlock::FloatToPrimitiveValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "FloatToPrimitiveValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::LowLevel::InputStateBlock::ReadDouble(void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "ReadDouble", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::WriteDouble(void* statePtr, double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "WriteDouble", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, statePtr, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::Write(void* statePtr, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(),
                                                           { "Write", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, statePtr, value);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBlock::CopyToFrom(void* toStatePtr, void* fromStatePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>(), { "CopyToFrom", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, toStatePtr, fromStatePtr);
}
// Ctor Parameters [CppParam { name: "_format_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ByteOffset", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bitOffset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock::InputStateBlock(::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField, uint32_t m_ByteOffset,
                                                                                 uint32_t _bitOffset_k__BackingField, uint32_t _sizeInBits_k__BackingField) noexcept {
  this->_format_k__BackingField = _format_k__BackingField;
  this->m_ByteOffset = m_ByteOffset;
  this->_bitOffset_k__BackingField = _bitOffset_k__BackingField;
  this->_sizeInBits_k__BackingField = _sizeInBits_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock::InputStateBlock() {}
