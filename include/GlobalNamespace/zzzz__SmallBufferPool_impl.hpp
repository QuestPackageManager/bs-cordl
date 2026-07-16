#pragma once
// IWYU pragma private; include "GlobalNamespace/SmallBufferPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SmallBufferPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::SmallBufferPool::*)(int32_t)>(&::GlobalNamespace::SmallBufferPool::GetBuffer)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x332b1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333e9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { "ReleaseBuffer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(::by_ref<::ArrayW<uint8_t>>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x332b1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { "ReleaseBuffer", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBufferInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBufferInternal)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x333e9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { "ReleaseBufferInternal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)()>(&::GlobalNamespace::SmallBufferPool::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x333eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& GlobalNamespace::SmallBufferPool::__cordl_internal_get__cacheSmall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheSmall;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& GlobalNamespace::SmallBufferPool::__cordl_internal_get__cacheSmall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheSmall;
}
constexpr void GlobalNamespace::SmallBufferPool::__cordl_internal_set__cacheSmall(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cacheSmall = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& GlobalNamespace::SmallBufferPool::__cordl_internal_get__cacheMedium() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheMedium;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& GlobalNamespace::SmallBufferPool::__cordl_internal_get__cacheMedium() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheMedium;
}
constexpr void GlobalNamespace::SmallBufferPool::__cordl_internal_set__cacheMedium(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cacheMedium = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& GlobalNamespace::SmallBufferPool::__cordl_internal_get__cacheLarge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheLarge;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& GlobalNamespace::SmallBufferPool::__cordl_internal_get__cacheLarge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheLarge;
}
constexpr void GlobalNamespace::SmallBufferPool::__cordl_internal_set__cacheLarge(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cacheLarge = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& GlobalNamespace::SmallBufferPool::__cordl_internal_get__cacheMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheMax;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& GlobalNamespace::SmallBufferPool::__cordl_internal_get__cacheMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheMax;
}
constexpr void GlobalNamespace::SmallBufferPool::__cordl_internal_set__cacheMax(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cacheMax = value;
}
inline void GlobalNamespace::SmallBufferPool::setStaticF_instance(::GlobalNamespace::SmallBufferPool* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SmallBufferPool*, "instance", ::GlobalNamespace::SmallBufferPool*>(std::forward<::GlobalNamespace::SmallBufferPool*>(value));
}
inline ::GlobalNamespace::SmallBufferPool* GlobalNamespace::SmallBufferPool::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SmallBufferPool*, "instance", ::GlobalNamespace::SmallBufferPool*>();
}
inline ::ArrayW<uint8_t> GlobalNamespace::SmallBufferPool::GetBuffer(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, length);
}
inline void GlobalNamespace::SmallBufferPool::ReleaseBuffer(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { "ReleaseBuffer", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void GlobalNamespace::SmallBufferPool::ReleaseBuffer(::by_ref<::ArrayW<uint8_t>> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { "ReleaseBuffer", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void GlobalNamespace::SmallBufferPool::ReleaseBufferInternal(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { "ReleaseBufferInternal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void GlobalNamespace::SmallBufferPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmallBufferPool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SmallBufferPool* GlobalNamespace::SmallBufferPool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SmallBufferPool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmallBufferPool::SmallBufferPool() {}
