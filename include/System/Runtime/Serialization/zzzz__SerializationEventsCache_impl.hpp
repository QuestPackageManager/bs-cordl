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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEventsCache___c::*)()>(
    &::System::Runtime::Serialization::SerializationEventsCache___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cf48a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEventsCache___c._GetSerializationEventsForType_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEvents* (
    ::System::Runtime::Serialization::SerializationEventsCache___c::*)(::System::Type*)>(&::System::Runtime::Serialization::SerializationEventsCache___c::_GetSerializationEventsForType_b__1_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3cf48a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache___c*>::get(), "<GetSerializationEventsForType>b__1_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SerializationEventsCache___c::setStaticF___9(::System::Runtime::Serialization::SerializationEventsCache___c* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::SerializationEventsCache___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache___c*>::get>(
      std::forward<::System::Runtime::Serialization::SerializationEventsCache___c*>(value));
}
inline ::System::Runtime::Serialization::SerializationEventsCache___c* System::Runtime::Serialization::SerializationEventsCache___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::SerializationEventsCache___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache___c*>::get>();
}
inline void System::Runtime::Serialization::SerializationEventsCache___c::setStaticF___9__1_0(::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache___c*>::get>(
      std::forward<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*>(value));
}
inline ::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* System::Runtime::Serialization::SerializationEventsCache___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache___c*>::get>();
}
inline void System::Runtime::Serialization::SerializationEventsCache___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationEvents* System::Runtime::Serialization::SerializationEventsCache___c::_GetSerializationEventsForType_b__1_0(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache___c*>::get(), "<GetSerializationEventsForType>b__1_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEvents*, false>(this, ___internal_method, type);
}
inline ::System::Runtime::Serialization::SerializationEventsCache___c* System::Runtime::Serialization::SerializationEventsCache___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::SerializationEventsCache___c*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationEventsCache___c::SerializationEventsCache___c() {}
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEventsCache.GetSerializationEventsForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEvents* (*)(::System::Type*)>(
    &::System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3cf4688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache*>::get(), "GetSerializationEventsForType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SerializationEventsCache::setStaticF_s_cache(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "s_cache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*
System::Runtime::Serialization::SerializationEventsCache::getStaticF_s_cache() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "s_cache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache*>::get>();
}
inline ::System::Runtime::Serialization::SerializationEvents* System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache*>::get(), "GetSerializationEventsForType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEvents*, false>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationEventsCache::SerializationEventsCache() {}
