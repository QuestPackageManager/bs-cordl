#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectToIdCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectToIdCache_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectToIdCache::*)()>(&::System::Runtime::Serialization::ObjectToIdCache::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6154634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectToIdCache::*)(::System::Object*, ::by_ref<bool>)>(
    &::System::Runtime::Serialization::ObjectToIdCache::GetId)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x615482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(),
                                                                                           { "GetId", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache.ReassignId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectToIdCache::*)(int32_t, ::System::Object*, ::System::Object*)>(
    &::System::Runtime::Serialization::ObjectToIdCache::ReassignId)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6154c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(),
                                                             { "ReassignId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache.FindElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectToIdCache::*)(::System::Object*, ::by_ref<bool>, ::by_ref<bool>)>(
    &::System::Runtime::Serialization::ObjectToIdCache::FindElement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x615496c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(),
                                                             { "FindElement", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectToIdCache::*)(int32_t)>(&::System::Runtime::Serialization::ObjectToIdCache::RemoveAt)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6154da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache.ComputeStartPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectToIdCache::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectToIdCache::ComputeStartPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6154fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "ComputeStartPosition", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache.Rehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectToIdCache::*)()>(&::System::Runtime::Serialization::ObjectToIdCache::Rehash)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6154a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "Rehash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache.GetPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Runtime::Serialization::ObjectToIdCache::GetPrime)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6154728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "GetPrime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectToIdCache.IsPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Runtime::Serialization::ObjectToIdCache::IsPrime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6154fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "IsPrime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_get_m_currentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentCount;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_get_m_currentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentCount;
}
constexpr void System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_set_m_currentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentCount = value;
}
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_get_m_ids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ids;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_get_m_ids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ids;
}
constexpr void System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_set_m_ids(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ids = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_get_m_objs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objs;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_get_m_objs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objs;
}
constexpr void System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_set_m_objs(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_objs = value;
}
constexpr ::ArrayW<bool>& System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_get_m_isWrapped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isWrapped;
}
constexpr ::ArrayW<bool> const& System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_get_m_isWrapped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isWrapped;
}
constexpr void System::Runtime::Serialization::ObjectToIdCache::__cordl_internal_set_m_isWrapped(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isWrapped = value;
}
inline void System::Runtime::Serialization::ObjectToIdCache::setStaticF_primes(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "primes", ::System::Runtime::Serialization::ObjectToIdCache*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Runtime::Serialization::ObjectToIdCache::getStaticF_primes() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "primes", ::System::Runtime::Serialization::ObjectToIdCache*>();
}
inline void System::Runtime::Serialization::ObjectToIdCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectToIdCache::GetId(::System::Object* obj, ::by_ref<bool> newId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(),
                                                                                         { "GetId", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj, newId);
}
inline int32_t System::Runtime::Serialization::ObjectToIdCache::ReassignId(int32_t oldObjId, ::System::Object* oldObj, ::System::Object* newObj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(),
                                                           { "ReassignId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, oldObjId, oldObj, newObj);
}
inline int32_t System::Runtime::Serialization::ObjectToIdCache::FindElement(::System::Object* obj, ::by_ref<bool> isEmpty, ::by_ref<bool> isWrapped) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(),
                                                           { "FindElement", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj, isEmpty, isWrapped);
}
inline void System::Runtime::Serialization::ObjectToIdCache::RemoveAt(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline int32_t System::Runtime::Serialization::ObjectToIdCache::ComputeStartPosition(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "ComputeStartPosition", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, o);
}
inline void System::Runtime::Serialization::ObjectToIdCache::Rehash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "Rehash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectToIdCache::GetPrime(int32_t min) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "GetPrime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, min);
}
inline bool System::Runtime::Serialization::ObjectToIdCache::IsPrime(int32_t candidate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectToIdCache*>(), { "IsPrime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, candidate);
}
inline ::System::Runtime::Serialization::ObjectToIdCache* System::Runtime::Serialization::ObjectToIdCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ObjectToIdCache*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectToIdCache::ObjectToIdCache() {}
