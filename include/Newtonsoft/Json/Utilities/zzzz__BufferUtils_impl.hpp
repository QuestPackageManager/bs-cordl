#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\BufferUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__BufferUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::BufferUtils.RentBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*, int32_t)>(&::Newtonsoft::Json::Utilities::BufferUtils::RentBuffer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d29be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BufferUtils*>(),
                                                             { "RentBuffer", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::BufferUtils.ReturnBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*, ::ArrayW<char16_t>)>(&::Newtonsoft::Json::Utilities::BufferUtils::ReturnBuffer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d29cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BufferUtils*>(),
                                                             { "ReturnBuffer", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::BufferUtils.EnsureBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*, int32_t, ::ArrayW<char16_t>)>(
    &::Newtonsoft::Json::Utilities::BufferUtils::EnsureBufferSize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d29d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BufferUtils*>(),
                            { "EnsureBufferSize", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<char16_t> Newtonsoft::Json::Utilities::BufferUtils::RentBuffer(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, int32_t minSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BufferUtils*>(),
                                                           { "RentBuffer", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, bufferPool, minSize);
}
inline void Newtonsoft::Json::Utilities::BufferUtils::ReturnBuffer(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, ::ArrayW<char16_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BufferUtils*>(),
                                                           { "ReturnBuffer", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bufferPool, buffer);
}
inline ::ArrayW<char16_t> Newtonsoft::Json::Utilities::BufferUtils::EnsureBufferSize(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, int32_t size, ::ArrayW<char16_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::BufferUtils*>(),
                          { "EnsureBufferSize", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, bufferPool, size, buffer);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::BufferUtils::BufferUtils() {}
