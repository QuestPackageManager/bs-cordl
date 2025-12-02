#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueData_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockHeader_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPoolData_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueData.GetCurrentWriteBlockTLS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::UnsafeQueueBlockHeader* (::Unity::Collections::UnsafeQueueData::*)(int32_t)>(
    &::Unity::Collections::UnsafeQueueData::GetCurrentWriteBlockTLS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62ab3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueData>::get(), "GetCurrentWriteBlockTLS",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueData.SetCurrentWriteBlockTLS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::UnsafeQueueData::*)(int32_t, ::Unity::Collections::UnsafeQueueBlockHeader*)>(
    &::Unity::Collections::UnsafeQueueData::SetCurrentWriteBlockTLS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62ab3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueData>::get(), "SetCurrentWriteBlockTLS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueBlockHeader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UnsafeQueueData.DeallocateQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Collections::UnsafeQueueData*, ::Unity::Collections::UnsafeQueueBlockPoolData*, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
        &::Unity::Collections::UnsafeQueueData::DeallocateQueue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62ab3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueData>::get(), "DeallocateQueue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueBlockPoolData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::UnsafeQueueBlockHeader* Unity::Collections::UnsafeQueueData::GetCurrentWriteBlockTLS(int32_t threadIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueData>::get(), "GetCurrentWriteBlockTLS",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueueBlockHeader*, false>(this, ___internal_method, threadIndex);
}
inline void Unity::Collections::UnsafeQueueData::SetCurrentWriteBlockTLS(int32_t threadIndex, ::Unity::Collections::UnsafeQueueBlockHeader* currentWriteBlock) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueData>::get(), "SetCurrentWriteBlockTLS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueBlockHeader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, threadIndex, currentWriteBlock);
}
template <typename T>
inline ::Unity::Collections::UnsafeQueueBlockHeader* Unity::Collections::UnsafeQueueData::AllocateWriteBlockMT(::Unity::Collections::UnsafeQueueData* data,
                                                                                                               ::Unity::Collections::UnsafeQueueBlockPoolData* pool, int32_t threadIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueData>::get(), "AllocateWriteBlockMT",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueBlockPoolData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueueBlockHeader*, false>(nullptr, ___internal_method, data, pool, threadIndex);
}
template <typename T>
inline void Unity::Collections::UnsafeQueueData::AllocateQueue(::Unity::Collections::AllocatorManager_AllocatorHandle label, ::ByRef<::Unity::Collections::UnsafeQueueData*> outBuf) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueData>::get(), "AllocateQueue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::UnsafeQueueData*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, label, outBuf);
}
inline void Unity::Collections::UnsafeQueueData::DeallocateQueue(::Unity::Collections::UnsafeQueueData* data, ::Unity::Collections::UnsafeQueueBlockPoolData* pool,
                                                                 ::Unity::Collections::AllocatorManager_AllocatorHandle allocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UnsafeQueueData>::get(), "DeallocateQueue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::UnsafeQueueBlockPoolData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, pool, allocation);
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
