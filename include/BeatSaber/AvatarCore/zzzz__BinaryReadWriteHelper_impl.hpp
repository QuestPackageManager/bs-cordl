#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\BinaryReadWriteHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__BinaryReadWriteHelper_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::BinaryReadWriteHelper.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::UnityEngine::Color)>(&::BeatSaber::AvatarCore::BinaryReadWriteHelper::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x326eccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BinaryReadWriteHelper*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::BinaryReadWriteHelper.ReadColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::System::IO::BinaryReader*)>(&::BeatSaber::AvatarCore::BinaryReadWriteHelper::ReadColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x326ed54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BinaryReadWriteHelper*>(), { "ReadColor", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::BinaryReadWriteHelper::Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BinaryReadWriteHelper*>(),
                                                                                         { "Write", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binaryWriter, color);
}
inline ::UnityEngine::Color BeatSaber::AvatarCore::BinaryReadWriteHelper::ReadColor(::System::IO::BinaryReader* binaryReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::BinaryReadWriteHelper*>(), { "ReadColor", {}, { ::i2c::type_of<::System::IO::BinaryReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, binaryReader);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::BinaryReadWriteHelper::BinaryReadWriteHelper() {}
