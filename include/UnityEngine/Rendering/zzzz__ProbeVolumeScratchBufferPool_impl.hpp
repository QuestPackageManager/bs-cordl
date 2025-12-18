#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeScratchBufferPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeScratchBufferPool_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingSet_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeScratchBufferPool_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65e1530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65e18fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::*)(
    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65e1978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::__cordl_internal_get_chunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::__cordl_internal_get_chunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkCount;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::__cordl_internal_set_chunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkCount = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>*&
UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::__cordl_internal_get_pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>* const&
UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::__cordl_internal_get_pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::__cordl_internal_set_pool(
    ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::_ctor(int32_t chunkCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunkCount);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::CompareTo(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::New_ctor(int32_t chunkCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>(chunkCount));
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>());
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>"
constexpr UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::operator ::System::IComparable_1<
    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*
UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::i___System__IComparable_1___UnityEngine__Rendering__ProbeVolumeScratchBufferPool_ScratchBufferPool__() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::ProbeVolumeScratchBufferPool_ScratchBufferPool() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65e19f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c._AllocateScratchBuffer_b__26_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::*)(
    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_AllocateScratchBuffer_b__26_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65e19f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get(), "<AllocateScratchBuffer>b__26_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c._ReleaseScratchBuffer_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::*)(
    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_ReleaseScratchBuffer_b__27_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65e1a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get(), "<ReleaseScratchBuffer>b__27_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::setStaticF___9(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get>(
      std::forward<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(value));
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::setStaticF___9__26_0(::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*, "<>9__26_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*, "<>9__26_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::setStaticF___9__27_0(::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*, "<>9__27_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*, "<>9__27_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get>();
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_AllocateScratchBuffer_b__26_0(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get(), "<AllocateScratchBuffer>b__26_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline bool UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_ReleaseScratchBuffer_b__27_0(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>::get(), "<ReleaseScratchBuffer>b__27_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::ProbeVolumeScratchBufferPool___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.get_chunkSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_chunkSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e0cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(),
                                                                               "get_chunkSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.set_chunkSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::set_chunkSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e0d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "set_chunkSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.get_maxChunkCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_maxChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e0d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(),
                                                                               "get_maxChunkCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.set_maxChunkCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::set_maxChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e0d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "set_maxChunkCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.get_allocatedMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_allocatedMemory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x65e0d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(),
                                                                               "get_allocatedMemory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(
    ::UnityEngine::Rendering::ProbeVolumeBakingSet*, ::UnityEngine::Rendering::ProbeVolumeSHBands)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x65e0d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.GetOrCreateScratchBufferLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout (
    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(int32_t)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::GetOrCreateScratchBufferLayout)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x65e0e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "GetOrCreateScratchBufferLayout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.CreateScratchBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* (
    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(int32_t, bool)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::CreateScratchBuffer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x65e1104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "CreateScratchBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.AllocateScratchBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(
    int32_t, ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>, ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>, bool)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::AllocateScratchBuffer)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x65e1188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "AllocateScratchBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.ReleaseScratchBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(
    ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::ReleaseScratchBuffer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x65e15bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "ReleaseScratchBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::Cleanup)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x65e174c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get__chunkSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunkSize_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get__chunkSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunkSize_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set__chunkSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chunkSize_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get__maxChunkCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxChunkCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get__maxChunkCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxChunkCount_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set__maxChunkCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxChunkCount_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_L0Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_L0Size;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_L0Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_L0Size;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_L0Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_L0Size = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_L1Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_L1Size;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_L1Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_L1Size;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_L1Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_L1Size = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_ValiditySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValiditySize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_ValiditySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValiditySize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_ValiditySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValiditySize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_ValidityLayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidityLayerCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_ValidityLayerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidityLayerCount;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_ValidityLayerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValidityLayerCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_L2Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_L2Size;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_L2Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_L2Size;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_L2Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_L2Size = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_ProbeOcclusionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeOcclusionSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_ProbeOcclusionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProbeOcclusionSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_ProbeOcclusionSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProbeOcclusionSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_SkyOcclusionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkyOcclusionSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_SkyOcclusionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkyOcclusionSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_SkyOcclusionSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SkyOcclusionSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_SkyShadingDirectionSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkyShadingDirectionSize;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_SkyShadingDirectionSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkyShadingDirectionSize;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_SkyShadingDirectionSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SkyShadingDirectionSize = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_CurrentlyAllocatedChunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentlyAllocatedChunkCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_CurrentlyAllocatedChunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentlyAllocatedChunkCount;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_CurrentlyAllocatedChunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentlyAllocatedChunkCount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*&
UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_Pools() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pools;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* const&
UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_Pools() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pools;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_Pools(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Pools)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>*&
UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_Layouts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layouts;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>* const&
UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_get_m_Layouts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Layouts;
}
constexpr void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::__cordl_internal_set_m_Layouts(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Layouts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::setStaticF_s_ChunkCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ChunkCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool::getStaticF_s_ChunkCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_ChunkCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get>();
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_chunkSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(),
                                                                             "get_chunkSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::set_chunkSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "set_chunkSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_maxChunkCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(),
                                                                             "get_maxChunkCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::set_maxChunkCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "set_maxChunkCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_allocatedMemory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(),
                                                                             "get_allocatedMemory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::_ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeBakingSet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeVolumeSHBands>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bakingSet, shBands);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout UnityEngine::Rendering::ProbeVolumeScratchBufferPool::GetOrCreateScratchBufferLayout(int32_t chunkCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "GetOrCreateScratchBufferLayout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, false>(this, ___internal_method, chunkCount);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* UnityEngine::Rendering::ProbeVolumeScratchBufferPool::CreateScratchBuffer(int32_t chunkCount,
                                                                                                                                                            bool allocateGraphicsBuffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "CreateScratchBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*, false>(this, ___internal_method, chunkCount, allocateGraphicsBuffers);
}
inline bool UnityEngine::Rendering::ProbeVolumeScratchBufferPool::AllocateScratchBuffer(int32_t chunkCount,
                                                                                        ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*> scratchBuffer,
                                                                                        ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout> layout,
                                                                                        bool allocateGraphicsBuffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "AllocateScratchBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, chunkCount, scratchBuffer, layout, allocateGraphicsBuffers);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::ReleaseScratchBuffer(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* scratchBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(), "ReleaseScratchBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scratchBuffer);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* UnityEngine::Rendering::ProbeVolumeScratchBufferPool::New_ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet,
                                                                                                                              ::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(bakingSet, shBands));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::ProbeVolumeScratchBufferPool() {}
