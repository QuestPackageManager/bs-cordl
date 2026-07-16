#pragma once
// IWYU pragma private; include "Unity/Collections/ConcurrentMask.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__ConcurrentMask_def.hpp"
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.AtomicOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>, int64_t)>(&::Unity::Collections::ConcurrentMask::AtomicOr)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64a6d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "AtomicOr", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.AtomicAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>, int64_t)>(&::Unity::Collections::ConcurrentMask::AtomicAnd)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64a6d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "AtomicAnd", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.longestConsecutiveOnes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Unity::Collections::ConcurrentMask::longestConsecutiveOnes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64a6de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                { "longestConsecutiveOnes", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.foundAtLeastThisManyConsecutiveOnes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Unity::Collections::ConcurrentMask::foundAtLeastThisManyConsecutiveOnes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64a6e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
            { "foundAtLeastThisManyConsecutiveOnes", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.foundAtLeastThisManyConsecutiveZeroes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Collections::ConcurrentMask::foundAtLeastThisManyConsecutiveZeroes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a6f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
            { "foundAtLeastThisManyConsecutiveZeroes", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.Succeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Unity::Collections::ConcurrentMask::Succeeded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a2d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "Succeeded", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.MakeMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t)>(&::Unity::Collections::ConcurrentMask::MakeMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64a6f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "MakeMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.TryAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int64_t>, int32_t, int32_t)>(&::Unity::Collections::ConcurrentMask::TryAllocate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64a6f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                             { "TryAllocate", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.TryFree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int64_t>, int32_t, int32_t)>(&::Unity::Collections::ConcurrentMask::TryFree)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64a6f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                             { "TryFree", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask.TryAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int64_t>, ::by_ref<int32_t>, int32_t)>(&::Unity::Collections::ConcurrentMask::TryAllocate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64a7020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                             { "TryAllocate", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ConcurrentMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::ConcurrentMask::*)()>(&::Unity::Collections::ConcurrentMask::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a70c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int64_t Unity::Collections::ConcurrentMask::AtomicOr(::by_ref<int64_t> destination, int64_t source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "AtomicOr", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, destination, source);
}
inline int64_t Unity::Collections::ConcurrentMask::AtomicAnd(::by_ref<int64_t> destination, int64_t source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "AtomicAnd", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, destination, source);
}
inline void Unity::Collections::ConcurrentMask::longestConsecutiveOnes(int64_t value, ::by_ref<int32_t> offset, ::by_ref<int32_t> count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                           { "longestConsecutiveOnes", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, offset, count);
}
inline bool Unity::Collections::ConcurrentMask::foundAtLeastThisManyConsecutiveOnes(int64_t value, int32_t minimum, ::by_ref<int32_t> offset, ::by_ref<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
          { "foundAtLeastThisManyConsecutiveOnes", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, minimum, offset, count);
}
inline bool Unity::Collections::ConcurrentMask::foundAtLeastThisManyConsecutiveZeroes(int64_t value, int32_t minimum, ::by_ref<int32_t> offset, ::by_ref<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
          { "foundAtLeastThisManyConsecutiveZeroes", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, minimum, offset, count);
}
inline bool Unity::Collections::ConcurrentMask::Succeeded(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "Succeeded", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, error);
}
inline int64_t Unity::Collections::ConcurrentMask::MakeMask(int32_t offset, int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "MakeMask", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, offset, bits);
}
inline int32_t Unity::Collections::ConcurrentMask::TryAllocate(::by_ref<int64_t> l, int32_t offset, int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                           { "TryAllocate", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, l, offset, bits);
}
inline int32_t Unity::Collections::ConcurrentMask::TryFree(::by_ref<int64_t> l, int32_t offset, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { "TryFree", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, l, offset, bits);
}
inline int32_t Unity::Collections::ConcurrentMask::TryAllocate(::by_ref<int64_t> l, ::by_ref<int32_t> offset, int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                           { "TryAllocate", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, l, offset, bits);
}
template <typename T> inline int32_t Unity::Collections::ConcurrentMask::TryAllocate(::by_ref<T> t, int32_t offset, int32_t bits) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                           { "TryAllocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t, offset, bits);
}
template <typename T> inline int32_t Unity::Collections::ConcurrentMask::TryFree(::by_ref<T> t, int32_t offset, int32_t bits) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                                           { "TryFree", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t, offset, bits);
}
template <typename T> inline int32_t Unity::Collections::ConcurrentMask::TryAllocate(::by_ref<T> t, ::by_ref<int32_t> offset, int32_t begin, int32_t end, int32_t bits) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                       { "TryAllocate",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t, offset, begin, end, bits);
}
template <typename T> inline int32_t Unity::Collections::ConcurrentMask::TryAllocate(::by_ref<T> t, ::by_ref<int32_t> offset, int32_t begin, int32_t bits) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                          { "TryAllocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t, offset, begin, bits);
}
template <typename T> inline int32_t Unity::Collections::ConcurrentMask::TryAllocate(::by_ref<T> t, ::by_ref<int32_t> offset, int32_t bits) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(),
                                              { "TryAllocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t, offset, bits);
}
inline void Unity::Collections::ConcurrentMask::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ConcurrentMask*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::ConcurrentMask* Unity::Collections::ConcurrentMask::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::ConcurrentMask*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::ConcurrentMask::ConcurrentMask() {}
