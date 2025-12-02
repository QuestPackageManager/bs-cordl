#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BestFitAllocator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool.CreateBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::BestFitAllocator_Block* (*)()>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::CreateBlock)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6ac77d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*>::get(), "CreateBlock",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool.ResetBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UIR::BestFitAllocator_Block*)>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::ResetBlock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ac7884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*>::get(), "ResetBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::*)()>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6ac70a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::CreateBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*>::get(),
                                                                             "CreateBlock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::ResetBlock(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*>::get(), "ResetBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, block);
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool* UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool::BestFitAllocator_BlockPool() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator_Block.get_size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::UIR::BestFitAllocator_Block::*)()>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator_Block::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ac7378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get(),
                                                                               "get_size", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator_Block._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BestFitAllocator_Block::*)()>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator_Block::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ac7848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_set_start(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___start = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_end() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_end() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_set_end(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___end = value;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_set_prev(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_set_next(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_prevAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevAvailable;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_prevAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevAvailable;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_set_prevAvailable(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prevAvailable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_nextAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAvailable;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_nextAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAvailable;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_set_nextAvailable(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextAvailable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_allocated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocated;
}
constexpr bool const& UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_get_allocated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocated;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator_Block::__cordl_internal_set_allocated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allocated = value;
}
inline uint32_t UnityEngine::UIElements::UIR::BestFitAllocator_Block::get_size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get(),
                                                                             "get_size", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator_Block::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* UnityEngine::UIElements::UIR::BestFitAllocator_Block::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block::BestFitAllocator_Block() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BestFitAllocator::*)(uint32_t)>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ac7004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.get_totalSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::UIR::BestFitAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::get_totalSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac7194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(),
                                                                               "get_totalSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.get_highWatermark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::UIR::BestFitAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::get_highWatermark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac719c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(),
                                                                               "get_highWatermark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Alloc (::UnityEngine::UIElements::UIR::BestFitAllocator::*)(uint32_t)>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::Allocate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6ac71a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "Allocate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BestFitAllocator::*)(::UnityEngine::UIElements::UIR::Alloc)>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::Free)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6ac7474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.CoalesceBlockWithPrevious
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::BestFitAllocator_Block* (
    ::UnityEngine::UIElements::UIR::BestFitAllocator::*)(::UnityEngine::UIElements::UIR::BestFitAllocator_Block*)>(&::UnityEngine::UIElements::UIR::BestFitAllocator::CoalesceBlockWithPrevious)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6ac76b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "CoalesceBlockWithPrevious", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.BestFitFindAvailableBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::BestFitAllocator_Block* (
    ::UnityEngine::UIElements::UIR::BestFitAllocator::*)(uint32_t)>(&::UnityEngine::UIElements::UIR::BestFitAllocator::BestFitFindAvailableBlock)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ac7334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "BestFitFindAvailableBlock",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.SplitBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BestFitAllocator::*)(
    ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*, uint32_t)>(&::UnityEngine::UIElements::UIR::BestFitAllocator::SplitBlock)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6ac7384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "SplitBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get__totalSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalSize_k__BackingField;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get__totalSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalSize_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_set__totalSize_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalSize_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get_m_FirstBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstBlock;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get_m_FirstBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstBlock;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_set_m_FirstBlock(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get_m_FirstAvailableBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstAvailableBlock;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get_m_FirstAvailableBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstAvailableBlock;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_set_m_FirstAvailableBlock(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstAvailableBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get_m_BlockPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockPool;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool* const& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get_m_BlockPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockPool;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_set_m_BlockPool(::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlockPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get_m_HighWatermark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighWatermark;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_get_m_HighWatermark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighWatermark;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__cordl_internal_set_m_HighWatermark(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighWatermark = value;
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator::_ctor(uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline uint32_t UnityEngine::UIElements::UIR::BestFitAllocator::get_totalSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(),
                                                                             "get_totalSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::UIElements::UIR::BestFitAllocator::get_highWatermark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(),
                                                                             "get_highWatermark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::BestFitAllocator::Allocate(uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "Allocate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Alloc, false>(this, ___internal_method, size);
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator::Free(::UnityEngine::UIElements::UIR::Alloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alloc);
}
inline ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*
UnityEngine::UIElements::UIR::BestFitAllocator::CoalesceBlockWithPrevious(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "CoalesceBlockWithPrevious", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*, false>(this, ___internal_method, block);
}
inline ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* UnityEngine::UIElements::UIR::BestFitAllocator::BestFitFindAvailableBlock(uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "BestFitFindAvailableBlock",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*, false>(this, ___internal_method, size);
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator::SplitBlock(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* block, uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "SplitBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block, size);
}
inline ::UnityEngine::UIElements::UIR::BestFitAllocator* UnityEngine::UIElements::UIR::BestFitAllocator::New_ctor(uint32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::BestFitAllocator*>(size));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator::BestFitAllocator() {}
