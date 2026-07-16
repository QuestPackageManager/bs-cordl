#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationEventsCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventsCache_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventsCache_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEvents_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEventsCache___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationEventsCache___c::*)()>(
    &::System::Runtime::Serialization::SerializationEventsCache___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4ac34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEventsCache___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEventsCache___c._GetSerializationEventsForType_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationEvents* (::System::Runtime::Serialization::SerializationEventsCache___c::*)(::System::Type*)>(
    &::System::Runtime::Serialization::SerializationEventsCache___c::_GetSerializationEventsForType_b__1_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b4ac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEventsCache___c*>(),
                                                                                           { "<GetSerializationEventsForType>b__1_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SerializationEventsCache___c::setStaticF___9(::System::Runtime::Serialization::SerializationEventsCache___c* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::SerializationEventsCache___c*, "<>9", ::System::Runtime::Serialization::SerializationEventsCache___c*>(
      std::forward<::System::Runtime::Serialization::SerializationEventsCache___c*>(value));
}
inline ::System::Runtime::Serialization::SerializationEventsCache___c* System::Runtime::Serialization::SerializationEventsCache___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::SerializationEventsCache___c*, "<>9", ::System::Runtime::Serialization::SerializationEventsCache___c*>();
}
inline void System::Runtime::Serialization::SerializationEventsCache___c::setStaticF___9__1_0(::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "<>9__1_0",
                                    ::System::Runtime::Serialization::SerializationEventsCache___c*>(
      std::forward<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*>(value));
}
inline ::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* System::Runtime::Serialization::SerializationEventsCache___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "<>9__1_0",
                                           ::System::Runtime::Serialization::SerializationEventsCache___c*>();
}
inline void System::Runtime::Serialization::SerializationEventsCache___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEventsCache___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationEvents* System::Runtime::Serialization::SerializationEventsCache___c::_GetSerializationEventsForType_b__1_0(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEventsCache___c*>(),
                                                                                         { "<GetSerializationEventsForType>b__1_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEvents*>(this, ___internal_method, type);
}
inline ::System::Runtime::Serialization::SerializationEventsCache___c* System::Runtime::Serialization::SerializationEventsCache___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SerializationEventsCache___c*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationEventsCache___c::SerializationEventsCache___c() {}
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEventsCache.GetSerializationEventsForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationEvents* (*)(::System::Type*)>(
    &::System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b4aa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEventsCache*>(),
                                                                                           { "GetSerializationEventsForType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SerializationEventsCache::setStaticF_s_cache(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "s_cache",
                                    ::System::Runtime::Serialization::SerializationEventsCache*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*
System::Runtime::Serialization::SerializationEventsCache::getStaticF_s_cache() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "s_cache",
                                           ::System::Runtime::Serialization::SerializationEventsCache*>();
}
inline ::System::Runtime::Serialization::SerializationEvents* System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationEventsCache*>(),
                                                                                         { "GetSerializationEventsForType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEvents*>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationEventsCache::SerializationEventsCache() {}
