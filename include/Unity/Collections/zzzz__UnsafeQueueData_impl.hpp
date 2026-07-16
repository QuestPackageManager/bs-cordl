#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueData_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockHeader_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPoolData_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueData.GetCurrentWriteBlockTLS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::UnsafeQueueBlockHeader* (::Unity::Collections::UnsafeQueueData::*)(int32_t)>(
    &::Unity::Collections::UnsafeQueueData::GetCurrentWriteBlockTLS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c3da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueData>(), { "GetCurrentWriteBlockTLS", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueData.SetCurrentWriteBlockTLS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::UnsafeQueueData::*)(int32_t, ::Unity::Collections::UnsafeQueueBlockHeader*)>(
    &::Unity::Collections::UnsafeQueueData::SetCurrentWriteBlockTLS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c3db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueData>(),
                                                             { "SetCurrentWriteBlockTLS", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::UnsafeQueueBlockHeader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueData.DeallocateQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::UnsafeQueueData*, ::Unity::Collections::UnsafeQueueBlockPoolData*,
                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::UnsafeQueueData::DeallocateQueue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x64c3dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueData>(),
                                                             { "DeallocateQueue",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::UnsafeQueueData*>(), ::i2c::type_of<::Unity::Collections::UnsafeQueueBlockPoolData*>(),
                                                                 ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::UnsafeQueueBlockHeader* Unity::Collections::UnsafeQueueData::GetCurrentWriteBlockTLS(int32_t threadIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueData>(), { "GetCurrentWriteBlockTLS", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueueBlockHeader*>(*this, ___internal_method, threadIndex);
}
inline void Unity::Collections::UnsafeQueueData::SetCurrentWriteBlockTLS(int32_t threadIndex, ::Unity::Collections::UnsafeQueueBlockHeader* currentWriteBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueData>(),
                                                           { "SetCurrentWriteBlockTLS", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::UnsafeQueueBlockHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, threadIndex, currentWriteBlock);
}
template <typename T>
inline ::Unity::Collections::UnsafeQueueBlockHeader* Unity::Collections::UnsafeQueueData::AllocateWriteBlockMT(::Unity::Collections::UnsafeQueueData* data,
                                                                                                               ::Unity::Collections::UnsafeQueueBlockPoolData* pool, int32_t threadIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueData>(),
                          { "AllocateWriteBlockMT",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::Unity::Collections::UnsafeQueueData*>(), ::i2c::type_of<::Unity::Collections::UnsafeQueueBlockPoolData*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueueBlockHeader*>(nullptr, ___internal_method, data, pool, threadIndex);
}
template <typename T>
inline void Unity::Collections::UnsafeQueueData::AllocateQueue(::Unity::Collections::AllocatorManager_AllocatorHandle label, ::by_ref<::Unity::Collections::UnsafeQueueData*> outBuf) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueData>(),
                                              { "AllocateQueue",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::by_ref<::Unity::Collections::UnsafeQueueData*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, label, outBuf);
}
inline void Unity::Collections::UnsafeQueueData::DeallocateQueue(::Unity::Collections::UnsafeQueueData* data, ::Unity::Collections::UnsafeQueueBlockPoolData* pool,
                                                                 ::Unity::Collections::AllocatorManager_AllocatorHandle allocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueueData>(),
                                                           { "DeallocateQueue",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::UnsafeQueueData*>(), ::i2c::type_of<::Unity::Collections::UnsafeQueueBlockPoolData*>(),
                                                               ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, pool, allocation);
}
// Ctor Parameters [CppParam { name: "m_FirstBlock", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LastBlock", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_MaxItems", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentRead", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "m_CurrentWriteBlockTLS", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::UnsafeQueueData::UnsafeQueueData(::System::IntPtr m_FirstBlock, ::System::IntPtr m_LastBlock, int32_t m_MaxItems, int32_t m_CurrentRead,
                                                                 uint8_t* m_CurrentWriteBlockTLS) noexcept {
  this->m_FirstBlock = m_FirstBlock;
  this->m_LastBlock = m_LastBlock;
  this->m_MaxItems = m_MaxItems;
  this->m_CurrentRead = m_CurrentRead;
  this->m_CurrentWriteBlockTLS = m_CurrentWriteBlockTLS;
}
// Ctor Parameters []
constexpr ::Unity::Collections::UnsafeQueueData::UnsafeQueueData() {}
