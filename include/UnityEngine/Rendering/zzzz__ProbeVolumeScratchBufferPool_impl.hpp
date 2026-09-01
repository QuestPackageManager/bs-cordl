#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeVolumeScratchBufferPool.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6798698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6798a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::*)(
    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6798ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>(),
                                                             { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>() } })));
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
  this->___pool = value;
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::_ctor(int32_t chunkCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkCount);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::CompareTo(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>(),
                                                           { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::New_ctor(int32_t chunkCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>(chunkCount));
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::*)()>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6798b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c._AllocateScratchBuffer_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::*)(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_AllocateScratchBuffer_b__26_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6798b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(),
                                                { "<AllocateScratchBuffer>b__26_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c._ReleaseScratchBuffer_b__27_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::*)(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_ReleaseScratchBuffer_b__27_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6798bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(),
                                                { "<ReleaseScratchBuffer>b__27_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::setStaticF___9(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*, "<>9", ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(
      std::forward<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(value));
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*, "<>9", ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>();
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::setStaticF___9__26_0(::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*, "<>9__26_0",
                                    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*, "<>9__26_0",
                                           ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>();
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::setStaticF___9__27_0(::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*, "<>9__27_0",
                                    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>* UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>*, "<>9__27_0",
                                           ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>();
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_AllocateScratchBuffer_b__26_0(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(),
                                                           { "<AllocateScratchBuffer>b__26_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline bool UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::_ReleaseScratchBuffer_b__27_0(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>(),
                                                           { "<ReleaseScratchBuffer>b__27_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool_ScratchBufferPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c* UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool___c::ProbeVolumeScratchBufferPool___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.get_chunkSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)()>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_chunkSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6797e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "get_chunkSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.set_chunkSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::set_chunkSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6797e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "set_chunkSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.get_maxChunkCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_maxChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6797e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "get_maxChunkCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.set_maxChunkCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(int32_t)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::set_maxChunkCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6797e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "set_maxChunkCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.get_allocatedMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)()>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_allocatedMemory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6797e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "get_allocatedMemory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(
    ::UnityEngine::Rendering::ProbeVolumeBakingSet*, ::UnityEngine::Rendering::ProbeVolumeSHBands)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6797e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.GetOrCreateScratchBufferLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(
    int32_t)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::GetOrCreateScratchBufferLayout)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6797ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "GetOrCreateScratchBufferLayout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.CreateScratchBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* (
    ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(int32_t, bool)>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::CreateScratchBuffer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x679826c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(),
                                                                                           { "CreateScratchBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.AllocateScratchBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(
    int32_t, ::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>, ::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>, bool)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::AllocateScratchBuffer)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x67982f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(),
                                                { "AllocateScratchBuffer",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.ReleaseScratchBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*)>(
    &::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::ReleaseScratchBuffer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6798724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(),
                                                             { "ReleaseScratchBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::*)()>(&::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::Cleanup)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x67988b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "Cleanup", {}, {} })));
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
  this->___m_Pools = value;
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
  this->___m_Layouts = value;
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::setStaticF_s_ChunkCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ChunkCount", ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool::getStaticF_s_ChunkCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_ChunkCount", ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>();
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_chunkSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "get_chunkSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::set_chunkSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "set_chunkSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_maxChunkCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "get_maxChunkCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::set_maxChunkCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "set_maxChunkCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::ProbeVolumeScratchBufferPool::get_allocatedMemory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "get_allocatedMemory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::_ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeBakingSet*>(), ::i2c::type_of<::UnityEngine::Rendering::ProbeVolumeSHBands>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bakingSet, shBands);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout UnityEngine::Rendering::ProbeVolumeScratchBufferPool::GetOrCreateScratchBufferLayout(int32_t chunkCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "GetOrCreateScratchBufferLayout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>(this, ___internal_method, chunkCount);
}
inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* UnityEngine::Rendering::ProbeVolumeScratchBufferPool::CreateScratchBuffer(int32_t chunkCount,
                                                                                                                                                            bool allocateGraphicsBuffers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(),
                                                                                         { "CreateScratchBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>(this, ___internal_method, chunkCount, allocateGraphicsBuffers);
}
inline bool UnityEngine::Rendering::ProbeVolumeScratchBufferPool::AllocateScratchBuffer(int32_t chunkCount,
                                                                                        ::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*> scratchBuffer,
                                                                                        ::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout> layout,
                                                                                        bool allocateGraphicsBuffers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(),
                                              { "AllocateScratchBuffer",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, chunkCount, scratchBuffer, layout, allocateGraphicsBuffers);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::ReleaseScratchBuffer(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* scratchBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(),
                                                           { "ReleaseScratchBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scratchBuffer);
}
inline void UnityEngine::Rendering::ProbeVolumeScratchBufferPool::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* UnityEngine::Rendering::ProbeVolumeScratchBufferPool::New_ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet,
                                                                                                                              ::UnityEngine::Rendering::ProbeVolumeSHBands shBands) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*>(bakingSet, shBands));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool::ProbeVolumeScratchBufferPool() {}
