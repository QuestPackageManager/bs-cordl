#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GPUBufferAllocator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GPUBufferAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(uint32_t)>(&::UnityEngine::UIElements::UIR::GPUBufferAllocator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cf8a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::Alloc (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(uint32_t, bool)>(
    &::UnityEngine::UIElements::UIR::GPUBufferAllocator::Allocate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6cf8ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { "Allocate", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(::UnityEngine::UIElements::UIR::Alloc)>(
    &::UnityEngine::UIElements::UIR::GPUBufferAllocator::Free)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6cf8c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { "Free", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Alloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.get_isEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)()>(&::UnityEngine::UIElements::UIR::GPUBufferAllocator::get_isEmpty)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cf8c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { "get_isEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.HighLowCollide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)()>(&::UnityEngine::UIElements::UIR::GPUBufferAllocator::HighLowCollide)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6cf8bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { "HighLowCollide", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& UnityEngine::UIElements::UIR::GPUBufferAllocator::__cordl_internal_get_m_Low() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Low;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& UnityEngine::UIElements::UIR::GPUBufferAllocator::__cordl_internal_get_m_Low() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Low;
}
constexpr void UnityEngine::UIElements::UIR::GPUBufferAllocator::__cordl_internal_set_m_Low(::UnityEngine::UIElements::UIR::BestFitAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Low = value;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& UnityEngine::UIElements::UIR::GPUBufferAllocator::__cordl_internal_get_m_High() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_High;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& UnityEngine::UIElements::UIR::GPUBufferAllocator::__cordl_internal_get_m_High() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_High;
}
constexpr void UnityEngine::UIElements::UIR::GPUBufferAllocator::__cordl_internal_set_m_High(::UnityEngine::UIElements::UIR::BestFitAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_High = value;
}
inline void UnityEngine::UIElements::UIR::GPUBufferAllocator::_ctor(uint32_t maxSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxSize);
}
inline ::UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::GPUBufferAllocator::Allocate(uint32_t size, bool shortLived) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { "Allocate", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Alloc>(this, ___internal_method, size, shortLived);
}
inline void UnityEngine::UIElements::UIR::GPUBufferAllocator::Free(::UnityEngine::UIElements::UIR::Alloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { "Free", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Alloc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline bool UnityEngine::UIElements::UIR::GPUBufferAllocator::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { "get_isEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::GPUBufferAllocator::HighLowCollide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(), { "HighLowCollide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::GPUBufferAllocator* UnityEngine::UIElements::UIR::GPUBufferAllocator::New_ctor(uint32_t maxSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(maxSize));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GPUBufferAllocator::GPUBufferAllocator() {}
