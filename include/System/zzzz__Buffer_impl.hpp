#pragma once
// IWYU pragma private; include "System/Buffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Buffer_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::System::Buffer.InternalBlockCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Array*, int32_t, ::System::Array*, int32_t, int32_t)>(&::System::Buffer::InternalBlockCopy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c72924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Buffer*>(),
            { "InternalBlockCopy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.IndexOfByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t, int32_t, int32_t)>(&::System::Buffer::IndexOfByte)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c72928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(),
                                                             { "IndexOfByte", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer._ByteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*)>(&::System::Buffer::_ByteLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c72a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "_ByteLength", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.ZeroMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int64_t)>(&::System::Buffer::ZeroMemory)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c72a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "ZeroMemory", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.Memcpy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Buffer::Memcpy)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c72a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Buffer*>(),
                            { "Memcpy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.InternalMemcpy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::Buffer::InternalMemcpy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c72ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "InternalMemcpy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.ByteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*)>(&::System::Buffer::ByteLength)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c72bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "ByteLength", {}, { ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.BlockCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, ::System::Array*, int32_t, int32_t)>(&::System::Buffer::BlockCopy)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c72c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Buffer*>(),
            { "BlockCopy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.MemoryCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, int64_t, int64_t)>(&::System::Buffer::MemoryCopy)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c72de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "MemoryCopy", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.memcpy4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::Buffer::memcpy4)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c72f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "memcpy4", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.memcpy2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::Buffer::memcpy2)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c72fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "memcpy2", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.memcpy1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::Buffer::memcpy1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c73024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "memcpy1", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.Memcpy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::Buffer::Memcpy)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c72aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "Memcpy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffer.Memmove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, uint32_t)>(&::System::Buffer::Memmove)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c72ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "Memmove", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline bool System::Buffer::InternalBlockCopy(::System::Array* src, int32_t srcOffsetBytes, ::System::Array* dst, int32_t dstOffsetBytes, int32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Buffer*>(),
          { "InternalBlockCopy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, src, srcOffsetBytes, dst, dstOffsetBytes, byteCount);
}
inline int32_t System::Buffer::IndexOfByte(uint8_t* src, uint8_t value, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(),
                                                           { "IndexOfByte", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, src, value, index, count);
}
inline int32_t System::Buffer::_ByteLength(::System::Array* array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "_ByteLength", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array);
}
inline void System::Buffer::ZeroMemory(uint8_t* src, int64_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "ZeroMemory", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, len);
}
inline void System::Buffer::Memcpy(uint8_t* pDest, int32_t destIndex, ::ArrayW<uint8_t> src, int32_t srcIndex, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Buffer*>(),
                          { "Memcpy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pDest, destIndex, src, srcIndex, len);
}
inline void System::Buffer::InternalMemcpy(uint8_t* dest, uint8_t* src, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "InternalMemcpy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, count);
}
inline int32_t System::Buffer::ByteLength(::System::Array* array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "ByteLength", {}, { ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array);
}
inline void System::Buffer::BlockCopy(::System::Array* src, int32_t srcOffset, ::System::Array* dst, int32_t dstOffset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Buffer*>(),
          { "BlockCopy", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
inline void System::Buffer::MemoryCopy(void* source, void* destination, int64_t destinationSizeInBytes, int64_t sourceBytesToCopy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "MemoryCopy", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, destinationSizeInBytes, sourceBytesToCopy);
}
inline void System::Buffer::memcpy4(uint8_t* dest, uint8_t* src, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "memcpy4", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, size);
}
inline void System::Buffer::memcpy2(uint8_t* dest, uint8_t* src, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "memcpy2", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, size);
}
inline void System::Buffer::memcpy1(uint8_t* dest, uint8_t* src, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "memcpy1", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, size);
}
inline void System::Buffer::Memcpy(uint8_t* dest, uint8_t* src, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "Memcpy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, len);
}
inline void System::Buffer::Memmove(uint8_t* dest, uint8_t* src, uint32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(), { "Memmove", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, len);
}
template <typename T> inline void System::Buffer::Memmove(::by_ref<T> destination, ::by_ref<T> source, uint64_t elementCount) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffer*>(),
                                                           { "Memmove", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, elementCount);
}
// Ctor Parameters []
constexpr ::System::Buffer::Buffer() {}
