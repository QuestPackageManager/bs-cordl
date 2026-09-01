#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeParallelHashMapDataEnumerator.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapDataEnumerator_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__KeyValue_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapData_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::*)(
    ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64cef74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64cef8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64cefd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue> Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::GetCurrent() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator>(),
                                                                                              { "GetCurrent", { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>(*this, ___internal_method);
}
template <typename TKey> inline TKey Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::GetCurrentKey() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator>(), { "GetCurrentKey", { ::i2c::class_of<TKey>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>() })));
  return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextIndex", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::UnsafeParallelHashMapDataEnumerator(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* m_Buffer,
                                                                                                                           int32_t m_Index, int32_t m_BucketIndex, int32_t m_NextIndex) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_Index = m_Index;
  this->m_BucketIndex = m_BucketIndex;
  this->m_NextIndex = m_NextIndex;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator::UnsafeParallelHashMapDataEnumerator() {}
