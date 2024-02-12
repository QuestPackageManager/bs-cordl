#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GfxUpdateBufferRange_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GPUBufferAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Utility_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr bool& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>*& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_gpuData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuData;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>*> const&
UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_gpuData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuData;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_gpuData(::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gpuData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T>& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_cpuData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuData;
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T> const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_cpuData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuData;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_cpuData(::Unity::Collections::NativeArray_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cpuData = value;
}
template <typename T>
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_updateRanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateRanges;
}
template <typename T>
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> const&
UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_updateRanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateRanges;
}
template <typename T>
constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_updateRanges(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateRanges = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::UIR::GPUBufferAllocator*& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocator;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GPUBufferAllocator*> const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocator;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_allocator(::UnityEngine::UIElements::UIR::GPUBufferAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr uint32_t& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangePoolSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangePoolSize;
}
template <typename T> constexpr uint32_t const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangePoolSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangePoolSize;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_m_UpdateRangePoolSize(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateRangePoolSize = value;
}
template <typename T> constexpr uint32_t& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_ElemStride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElemStride;
}
template <typename T> constexpr uint32_t const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_ElemStride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElemStride;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_m_ElemStride(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElemStride = value;
}
template <typename T> constexpr uint32_t& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangeMin;
}
template <typename T> constexpr uint32_t const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangeMin;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_m_UpdateRangeMin(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateRangeMin = value;
}
template <typename T> constexpr uint32_t& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangeMax;
}
template <typename T> constexpr uint32_t const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangeMax;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_m_UpdateRangeMax(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateRangeMax = value;
}
template <typename T> constexpr uint32_t& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangesEnqueued() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangesEnqueued;
}
template <typename T> constexpr uint32_t const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangesEnqueued() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangesEnqueued;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_m_UpdateRangesEnqueued(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateRangesEnqueued = value;
}
template <typename T> constexpr uint32_t& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangesBatchStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangesBatchStart;
}
template <typename T> constexpr uint32_t const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangesBatchStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangesBatchStart;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_m_UpdateRangesBatchStart(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateRangesBatchStart = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangesSaturated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangesSaturated;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_get_m_UpdateRangesSaturated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRangesSaturated;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__cordl_internal_set_m_UpdateRangesSaturated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateRangesSaturated = value;
}
template <typename T>
inline ::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>* UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::New_ctor(::UnityEngine::UIElements::UIR::__Utility__GPUBufferType bufferType,
                                                                                                                          uint32_t totalCount, uint32_t maxQueuedFrameCount,
                                                                                                                          uint32_t updateRangePoolSize, bool mockBuffer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>(bufferType, totalCount, maxQueuedFrameCount, updateRangePoolSize, mockBuffer));
}
template <typename T>
inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::_ctor(::UnityEngine::UIElements::UIR::__Utility__GPUBufferType bufferType, uint32_t totalCount, uint32_t maxQueuedFrameCount,
                                                                      uint32_t updateRangePoolSize, bool mockBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Utility__GPUBufferType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferType, totalCount, maxQueuedFrameCount, updateRangePoolSize, mockBuffer);
}
template <typename T> inline bool UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(),
                                                                             "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T> inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::RegisterUpdate(uint32_t start, uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(), "RegisterUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, size);
}
template <typename T> inline bool UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::HasMappedBufferRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(),
                                                                             "HasMappedBufferRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::SendUpdates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(),
                                                                             "SendUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::SendFullRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(),
                                                                             "SendFullRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::SendPartialRanges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(),
                                                                             "SendPartialRanges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::ResetUpdateState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>*>::get(),
                                                                             "ResetUpdateState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::__Page__DataSet_1<T>::__Page__DataSet_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Page._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Page::*)(uint32_t, uint32_t, uint32_t, bool)>(
    &::UnityEngine::UIElements::UIR::Page::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2def298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Page.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::Page::*)()>(&::UnityEngine::UIElements::UIR::Page::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2df3790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), "get_disposed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Page.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Page::*)(bool)>(&::UnityEngine::UIElements::UIR::Page::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2df3798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), "set_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Page.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Page::*)()>(&::UnityEngine::UIElements::UIR::Page::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2df2e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Page.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Page::*)(bool)>(&::UnityEngine::UIElements::UIR::Page::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2df37a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Page.get_isEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::Page::*)()>(&::UnityEngine::UIElements::UIR::Page::get_isEmpty)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2def3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), "get_isEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::Page::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::Page::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::UIElements::UIR::Page::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::Page::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::Page::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::__Page__DataSet_1<::UnityEngine::UIElements::Vertex>*& UnityEngine::UIElements::UIR::Page::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__Page__DataSet_1<::UnityEngine::UIElements::Vertex>*> const&
UnityEngine::UIElements::UIR::Page::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::UIElements::UIR::Page::__cordl_internal_set_vertices(::UnityEngine::UIElements::UIR::__Page__DataSet_1<::UnityEngine::UIElements::Vertex>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::__Page__DataSet_1<uint16_t>*& UnityEngine::UIElements::UIR::Page::__cordl_internal_get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__Page__DataSet_1<uint16_t>*> const& UnityEngine::UIElements::UIR::Page::__cordl_internal_get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::UIElements::UIR::Page::__cordl_internal_set_indices(::UnityEngine::UIElements::UIR::__Page__DataSet_1<uint16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::Page*& UnityEngine::UIElements::UIR::Page::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> const& UnityEngine::UIElements::UIR::Page::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void UnityEngine::UIElements::UIR::Page::__cordl_internal_set_next(::UnityEngine::UIElements::UIR::Page* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::UIR::Page::__cordl_internal_get_framesEmpty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framesEmpty;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Page::__cordl_internal_get_framesEmpty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___framesEmpty;
}
constexpr void UnityEngine::UIElements::UIR::Page::__cordl_internal_set_framesEmpty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___framesEmpty = value;
}
inline ::UnityEngine::UIElements::UIR::Page* UnityEngine::UIElements::UIR::Page::New_ctor(uint32_t vertexMaxCount, uint32_t indexMaxCount, uint32_t maxQueuedFrameCount, bool mockPage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::Page*>(vertexMaxCount, indexMaxCount, maxQueuedFrameCount, mockPage));
}
inline void UnityEngine::UIElements::UIR::Page::_ctor(uint32_t vertexMaxCount, uint32_t indexMaxCount, uint32_t maxQueuedFrameCount, bool mockPage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertexMaxCount, indexMaxCount, maxQueuedFrameCount, mockPage);
}
inline bool UnityEngine::UIElements::UIR::Page::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), "get_disposed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Page::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::Page::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Page::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline bool UnityEngine::UIElements::UIR::Page::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Page*>::get(), "get_isEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Page::Page() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
