#pragma once
// IWYU pragma private; include "Unity\Burst\Unsafe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__Unsafe_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Burst::Unsafe.CopyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, uint32_t)>(&::Unity::Burst::Unsafe::CopyBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6493808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "CopyBlock", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Unsafe.CopyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, ::by_ref<uint8_t>, uint32_t)>(&::Unity::Burst::Unsafe::CopyBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6493810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(),
                                                             { "CopyBlock", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Unsafe.CopyBlockUnaligned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, uint32_t)>(&::Unity::Burst::Unsafe::CopyBlockUnaligned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6493818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "CopyBlockUnaligned", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Unsafe.CopyBlockUnaligned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, ::by_ref<uint8_t>, uint32_t)>(&::Unity::Burst::Unsafe::CopyBlockUnaligned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6493820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(),
                                                             { "CopyBlockUnaligned", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Unsafe.InitBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint8_t, uint32_t)>(&::Unity::Burst::Unsafe::InitBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6493828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "InitBlock", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Unsafe.InitBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, uint8_t, uint32_t)>(&::Unity::Burst::Unsafe::InitBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6493830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "InitBlock", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Unsafe.InitBlockUnaligned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint8_t, uint32_t)>(&::Unity::Burst::Unsafe::InitBlockUnaligned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6493838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "InitBlockUnaligned", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Unsafe.InitBlockUnaligned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, uint8_t, uint32_t)>(&::Unity::Burst::Unsafe::InitBlockUnaligned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6493840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "InitBlockUnaligned", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
template <typename T> inline T Unity::Burst::Unsafe::Read(void* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Read", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source);
}
template <typename T> inline T Unity::Burst::Unsafe::ReadUnaligned(void* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "ReadUnaligned", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source);
}
template <typename T> inline T Unity::Burst::Unsafe::ReadUnaligned(::by_ref<uint8_t> source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "ReadUnaligned", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source);
}
template <typename T> inline void Unity::Burst::Unsafe::Write(void* destination, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, value);
}
template <typename T> inline void Unity::Burst::Unsafe::WriteUnaligned(void* destination, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "WriteUnaligned", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, value);
}
template <typename T> inline void Unity::Burst::Unsafe::WriteUnaligned(::by_ref<uint8_t> destination, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "WriteUnaligned", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, value);
}
template <typename T> inline void Unity::Burst::Unsafe::Copy(void* destination, ::by_ref<T> source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Copy", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source);
}
template <typename T> inline void Unity::Burst::Unsafe::Copy(::by_ref<T> destination, void* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Copy", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source);
}
template <typename T> inline void* Unity::Burst::Unsafe::AsPointer(::by_ref<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "AsPointer", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, value);
}
template <typename T> inline int32_t Unity::Burst::Unsafe::SizeOf() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "SizeOf", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Unity::Burst::Unsafe::CopyBlock(void* destination, void* source, uint32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "CopyBlock", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, byteCount);
}
inline void Unity::Burst::Unsafe::CopyBlock(::by_ref<uint8_t> destination, ::by_ref<uint8_t> source, uint32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "CopyBlock", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, byteCount);
}
inline void Unity::Burst::Unsafe::CopyBlockUnaligned(void* destination, void* source, uint32_t byteCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "CopyBlockUnaligned", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, byteCount);
}
inline void Unity::Burst::Unsafe::CopyBlockUnaligned(::by_ref<uint8_t> destination, ::by_ref<uint8_t> source, uint32_t byteCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(),
                                                           { "CopyBlockUnaligned", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, source, byteCount);
}
inline void Unity::Burst::Unsafe::InitBlock(void* startAddress, uint8_t value, uint32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "InitBlock", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startAddress, value, byteCount);
}
inline void Unity::Burst::Unsafe::InitBlock(::by_ref<uint8_t> startAddress, uint8_t value, uint32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "InitBlock", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startAddress, value, byteCount);
}
inline void Unity::Burst::Unsafe::InitBlockUnaligned(void* startAddress, uint8_t value, uint32_t byteCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "InitBlockUnaligned", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startAddress, value, byteCount);
}
inline void Unity::Burst::Unsafe::InitBlockUnaligned(::by_ref<uint8_t> startAddress, uint8_t value, uint32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "InitBlockUnaligned", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startAddress, value, byteCount);
}
template <typename T> inline T Unity::Burst::Unsafe::As(::System::Object* o) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "As", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, o);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::AsRef(void* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "AsRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::AsRef(::by_ref<T> source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "AsRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source);
}
template <typename TFrom, typename TTo> inline ::by_ref<TTo> Unity::Burst::Unsafe::As(::by_ref<TFrom> source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "As", { ::i2c::class_of<TFrom>(), ::i2c::class_of<TTo>() }, { ::i2c::type_of<::by_ref<TFrom>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFrom>(), ::i2c::class_of<TTo>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<TTo>>(nullptr, ___internal_method, source);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::Unbox(::System::Object* box) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Unbox", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, box);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::Add(::by_ref<T> source, int32_t elementOffset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline void* Unity::Burst::Unsafe::Add(void* source, int32_t elementOffset) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::Add(::by_ref<T> source, ::System::IntPtr elementOffset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Add", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::AddByteOffset(::by_ref<T> source, ::System::IntPtr byteOffset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "AddByteOffset", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, byteOffset);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::Subtract(::by_ref<T> source, int32_t elementOffset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Subtract", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline void* Unity::Burst::Unsafe::Subtract(void* source, int32_t elementOffset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Subtract", { ::i2c::class_of<T>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::Subtract(::by_ref<T> source, ::System::IntPtr elementOffset) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "Subtract", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, elementOffset);
}
template <typename T> inline ::by_ref<T> Unity::Burst::Unsafe::SubtractByteOffset(::by_ref<T> source, ::System::IntPtr byteOffset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "SubtractByteOffset", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source, byteOffset);
}
template <typename T> inline ::System::IntPtr Unity::Burst::Unsafe::ByteOffset(::by_ref<T> origin, ::by_ref<T> target) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "ByteOffset", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, origin, target);
}
template <typename T> inline bool Unity::Burst::Unsafe::AreSame(::by_ref<T> left, ::by_ref<T> right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "AreSame", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline bool Unity::Burst::Unsafe::IsAddressGreaterThan(::by_ref<T> left, ::by_ref<T> right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "IsAddressGreaterThan", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline bool Unity::Burst::Unsafe::IsAddressLessThan(::by_ref<T> left, ::by_ref<T> right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::Unsafe*>(), { "IsAddressLessThan", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters []
constexpr ::Unity::Burst::Unsafe::Unsafe() {}
