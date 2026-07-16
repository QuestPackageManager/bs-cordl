#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/Aliasing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__Aliasing_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Aliasing.ExpectAliased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*)>(&::Unity::Burst::CompilerServices::Aliasing::ExpectAliased)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a1de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(), { "ExpectAliased", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Aliasing.ExpectNotAliased
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*)>(&::Unity::Burst::CompilerServices::Aliasing::ExpectNotAliased)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a1de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(), { "ExpectNotAliased", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Burst::CompilerServices::Aliasing::ExpectAliased(void* a, void* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(), { "ExpectAliased", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
template <typename A, typename B> inline void Unity::Burst::CompilerServices::Aliasing::ExpectAliased(::by_ref<A> a, ::by_ref<B> b) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(),
                                                           { "ExpectAliased", { ::i2c::class_of<A>(), ::i2c::class_of<B>() }, { ::i2c::type_of<::by_ref<A>>(), ::i2c::type_of<::by_ref<B>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<A>(), ::i2c::class_of<B>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
template <typename B> inline void Unity::Burst::CompilerServices::Aliasing::ExpectAliased(void* a, ::by_ref<B> b) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(), { "ExpectAliased", { ::i2c::class_of<B>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<B>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<B>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
template <typename A> inline void Unity::Burst::CompilerServices::Aliasing::ExpectAliased(::by_ref<A> a, void* b) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(), { "ExpectAliased", { ::i2c::class_of<A>() }, { ::i2c::type_of<::by_ref<A>>(), ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<A>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline void Unity::Burst::CompilerServices::Aliasing::ExpectNotAliased(void* a, void* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(), { "ExpectNotAliased", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
template <typename A, typename B> inline void Unity::Burst::CompilerServices::Aliasing::ExpectNotAliased(::by_ref<A> a, ::by_ref<B> b) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(),
                                                           { "ExpectNotAliased", { ::i2c::class_of<A>(), ::i2c::class_of<B>() }, { ::i2c::type_of<::by_ref<A>>(), ::i2c::type_of<::by_ref<B>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<A>(), ::i2c::class_of<B>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
template <typename B> inline void Unity::Burst::CompilerServices::Aliasing::ExpectNotAliased(void* a, ::by_ref<B> b) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(),
                                                           { "ExpectNotAliased", { ::i2c::class_of<B>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<B>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<B>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
template <typename A> inline void Unity::Burst::CompilerServices::Aliasing::ExpectNotAliased(::by_ref<A> a, void* b) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Aliasing*>(),
                                                           { "ExpectNotAliased", { ::i2c::class_of<A>() }, { ::i2c::type_of<::by_ref<A>>(), ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<A>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::Aliasing::Aliasing() {}
