#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstLike.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::_ctor(void* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
template <typename T> inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::get_Data() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T>
template <typename TContext>
inline ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T> Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::GetOrCreate(uint32_t alignment) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>>(),
                                                                                              { "GetOrCreate", { ::i2c::class_of<TContext>() }, { ::i2c::type_of<uint32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContext>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>>(nullptr, ___internal_method, alignment);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "void*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::BurstLike_SharedStatic_1(void* _buffer) noexcept {
  this->_buffer = _buffer;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic_1<T>::BurstLike_SharedStatic_1() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic.GetOrCreateSharedStaticInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int64_t, int64_t, uint32_t, uint32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::GetOrCreateSharedStaticInternal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a5a524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic*>(),
                                         { "GetOrCreateSharedStaticInternal", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void* Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::GetOrCreateSharedStaticInternal(int64_t getHashCode64, int64_t getSubHashCode64, uint32_t sizeOf, uint32_t alignment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic*>(),
                                       { "GetOrCreateSharedStaticInternal", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, getHashCode64, getSubHashCode64, sizeOf, alignment);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic::BurstLike_SharedStatic() {}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike::BurstLike() {}
