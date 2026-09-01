#pragma once
// IWYU pragma private; include "Unity\Collections\CollectionHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__CollectionHelper_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__CollectionHelper_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
constexpr int64_t& Unity::Collections::CollectionHelper_LongDoubleUnion::__cordl_internal_get_longValue() {
  return this->___longValue;
}
constexpr int64_t const& Unity::Collections::CollectionHelper_LongDoubleUnion::__cordl_internal_get_longValue() const {
  return this->___longValue;
}
constexpr void Unity::Collections::CollectionHelper_LongDoubleUnion::__cordl_internal_set_longValue(int64_t value) {
  this->___longValue = value;
}
constexpr double_t& Unity::Collections::CollectionHelper_LongDoubleUnion::__cordl_internal_get_doubleValue() {
  return this->___doubleValue;
}
constexpr double_t const& Unity::Collections::CollectionHelper_LongDoubleUnion::__cordl_internal_get_doubleValue() const {
  return this->___doubleValue;
}
constexpr void Unity::Collections::CollectionHelper_LongDoubleUnion::__cordl_internal_set_doubleValue(double_t value) {
  this->___doubleValue = value;
}
// Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::CollectionHelper_LongDoubleUnion::CollectionHelper_LongDoubleUnion(int64_t longValue, double_t doubleValue) noexcept {
  this->longValue = longValue;
  this->doubleValue = doubleValue;
}
// Ctor Parameters []
constexpr ::Unity::Collections::CollectionHelper_LongDoubleUnion::CollectionHelper_LongDoubleUnion() {}
//  Writing Method size for method: ::Unity::Collections::CollectionHelper_DummyJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::CollectionHelper_DummyJob::*)()>(&::Unity::Collections::CollectionHelper_DummyJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64ac558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper_DummyJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::CollectionHelper_DummyJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper_DummyJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::CollectionHelper_DummyJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::CollectionHelper_DummyJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Unity::Collections::CollectionHelper_DummyJob::CollectionHelper_DummyJob() {}
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.CheckAllocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::CollectionHelper::CheckAllocator)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64abe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                                                                           { "CheckAllocator", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.Log2Floor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::CollectionHelper::Log2Floor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64abf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Log2Floor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.Log2Ceil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::CollectionHelper::Log2Ceil)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64abf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Log2Ceil", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.Align
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Unity::Collections::CollectionHelper::Align)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64abf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Align", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.Align
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&::Unity::Collections::CollectionHelper::Align)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64abfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Align", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.IsAligned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*, int32_t)>(&::Unity::Collections::CollectionHelper::IsAligned)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64abfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "IsAligned", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.IsAligned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, int32_t)>(&::Unity::Collections::CollectionHelper::IsAligned)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64abfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "IsAligned", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.IsPowerOfTwo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Unity::Collections::CollectionHelper::IsPowerOfTwo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64abff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "IsPowerOfTwo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(void*, int32_t)>(&::Unity::Collections::CollectionHelper::Hash)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64ac008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Hash", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.WriteLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::Unity::Collections::CollectionHelper::WriteLayout)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x64ac048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "WriteLayout", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.ShouldDeallocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::CollectionHelper::ShouldDeallocate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64abf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                                                                           { "ShouldDeallocate", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.AssumePositive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::CollectionHelper::AssumePositive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64ac2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "AssumePositive", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.CheckIntPositivePowerOfTwo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::CollectionHelper::CheckIntPositivePowerOfTwo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64ac2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckIntPositivePowerOfTwo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.CheckUlongPositivePowerOfTwo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::Unity::Collections::CollectionHelper::CheckUlongPositivePowerOfTwo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64ac33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckUlongPositivePowerOfTwo", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.CheckIndexInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Unity::Collections::CollectionHelper::CheckIndexInRange)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64ac3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckIndexInRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::CollectionHelper.CheckCapacityInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Unity::Collections::CollectionHelper::CheckCapacityInRange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x64ac46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckCapacityInRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::CollectionHelper::CheckAllocator(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                                                                         { "CheckAllocator", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allocator);
}
inline int32_t Unity::Collections::CollectionHelper::Log2Floor(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Log2Floor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Collections::CollectionHelper::Log2Ceil(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Log2Ceil", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t Unity::Collections::CollectionHelper::Align(int32_t size, int32_t alignmentPowerOfTwo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Align", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size, alignmentPowerOfTwo);
}
inline uint64_t Unity::Collections::CollectionHelper::Align(uint64_t size, uint64_t alignmentPowerOfTwo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Align", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, size, alignmentPowerOfTwo);
}
inline bool Unity::Collections::CollectionHelper::IsAligned(void* p, int32_t alignmentPowerOfTwo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "IsAligned", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p, alignmentPowerOfTwo);
}
inline bool Unity::Collections::CollectionHelper::IsAligned(uint64_t offset, int32_t alignmentPowerOfTwo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "IsAligned", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, offset, alignmentPowerOfTwo);
}
inline bool Unity::Collections::CollectionHelper::IsPowerOfTwo(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "IsPowerOfTwo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline uint32_t Unity::Collections::CollectionHelper::Hash(void* ptr, int32_t bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "Hash", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ptr, bytes);
}
inline void Unity::Collections::CollectionHelper::WriteLayout(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "WriteLayout", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline bool Unity::Collections::CollectionHelper::ShouldDeallocate(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                                                                         { "ShouldDeallocate", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allocator);
}
inline int32_t Unity::Collections::CollectionHelper::AssumePositive(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "AssumePositive", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::CollectionHelper::CheckIsUnmanaged() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckIsUnmanaged", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Collections::CollectionHelper::CheckIntPositivePowerOfTwo(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckIntPositivePowerOfTwo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::Collections::CollectionHelper::CheckUlongPositivePowerOfTwo(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckUlongPositivePowerOfTwo", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::Collections::CollectionHelper::CheckIndexInRange(int32_t index, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckIndexInRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, length);
}
inline void Unity::Collections::CollectionHelper::CheckCapacityInRange(int32_t capacity, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckCapacityInRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, capacity, length);
}
template <typename T, typename U>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::CollectionHelper::CreateNativeArray(int32_t length, ::by_ref<U> allocator, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                                           { "CreateNativeArray",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, length, allocator, options);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::CollectionHelper::CreateNativeArray(int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                                      ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                          { "CreateNativeArray",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, length, allocator, options);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::CollectionHelper::CreateNativeArray(::Unity::Collections::NativeArray_1<T> array,
                                                                                                      ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
          { "CreateNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, array, allocator);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::CollectionHelper::CreateNativeArray(::ArrayW<T> array, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                          { "CreateNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, array, allocator);
}
template <typename T, typename U> inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::CollectionHelper::CreateNativeArray(::ArrayW<T> array, ::by_ref<U> allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                                           { "CreateNativeArray", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<U>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, array, allocator);
}
template <typename T>
inline void Unity::Collections::CollectionHelper::DisposeNativeArray(::Unity::Collections::NativeArray_1<T> nativeArray, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
          { "DisposeNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeArray, allocator);
}
template <typename T> inline void Unity::Collections::CollectionHelper::Dispose(::Unity::Collections::NativeArray_1<T> nativeArray) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                                                                              { "Dispose", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeArray);
}
template <typename T> inline void Unity::Collections::CollectionHelper::CheckConvertArguments(int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CheckConvertArguments", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, length);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T>
Unity::Collections::CollectionHelper::ConvertExistingDataToNativeArray(void* dataPointer, int32_t length, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, bool setTempMemoryHandle) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                       { "ConvertExistingDataToNativeArray",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, dataPointer, length, allocator, setTempMemoryHandle);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::CollectionHelper::ConvertExistingNativeListToNativeArray(::by_ref<::Unity::Collections::NativeList_1<T>> nativeList, int32_t length,
                                                                                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "ConvertExistingNativeListToNativeArray",
                                                                                                     { ::i2c::class_of<T>() },
                                                                                                     { ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<T>>>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, nativeList, length, allocator);
}
template <typename TKey, typename TValue, typename U>
inline ::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> Unity::Collections::CollectionHelper::CreateNativeParallelMultiHashMap(int32_t length, ::by_ref<U> allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(), { "CreateNativeParallelMultiHashMap",
                                                                                                                         { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>(), ::i2c::class_of<U>() },
                                                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<U>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>>(nullptr, ___internal_method, length, allocator);
}
template <typename T> inline void Unity::Collections::CollectionHelper::CheckReflectionDataCorrect(::System::IntPtr reflectionData) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                                                                              { "CheckReflectionDataCorrect", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reflectionData);
}
template <typename T> inline void Unity::Collections::CollectionHelper::CheckReflectionDataCorrectInternal(::System::IntPtr reflectionData, ::by_ref<bool> burstCompiled) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::CollectionHelper*>(),
                                              { "CheckReflectionDataCorrectInternal", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reflectionData, burstCompiled);
}
// Ctor Parameters []
constexpr ::Unity::Collections::CollectionHelper::CollectionHelper() {}
