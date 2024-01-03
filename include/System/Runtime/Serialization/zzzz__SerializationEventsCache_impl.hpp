#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventsCache_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventsCache_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEvents_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::__SerializationEventsCache____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::__SerializationEventsCache____c::*)()>(
    &::System::Runtime::Serialization::__SerializationEventsCache____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b58e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__SerializationEventsCache____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::__SerializationEventsCache____c._GetSerializationEventsForType_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::SerializationEvents* (::System::Runtime::Serialization::__SerializationEventsCache____c::*)(::System::Type*)>(
        &::System::Runtime::Serialization::__SerializationEventsCache____c::_GetSerializationEventsForType_b__1_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24b58f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__SerializationEventsCache____c*>::get(), "<GetSerializationEventsForType>b__1_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::__SerializationEventsCache____c::setStaticF___9(::System::Runtime::Serialization::__SerializationEventsCache____c* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::__SerializationEventsCache____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__SerializationEventsCache____c*>::get>(
      std::forward<::System::Runtime::Serialization::__SerializationEventsCache____c*>(value));
}
inline ::System::Runtime::Serialization::__SerializationEventsCache____c* System::Runtime::Serialization::__SerializationEventsCache____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::__SerializationEventsCache____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__SerializationEventsCache____c*>::get>();
}
inline void System::Runtime::Serialization::__SerializationEventsCache____c::setStaticF___9__1_0(::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__SerializationEventsCache____c*>::get>(
      std::forward<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*>(value));
}
inline ::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* System::Runtime::Serialization::__SerializationEventsCache____c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__SerializationEventsCache____c*>::get>();
}
inline ::System::Runtime::Serialization::__SerializationEventsCache____c* System::Runtime::Serialization::__SerializationEventsCache____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::__SerializationEventsCache____c*>());
}
inline void System::Runtime::Serialization::__SerializationEventsCache____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__SerializationEventsCache____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationEvents* System::Runtime::Serialization::__SerializationEventsCache____c::_GetSerializationEventsForType_b__1_0(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__SerializationEventsCache____c*>::get(), "<GetSerializationEventsForType>b__1_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEvents*, false>(this, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::__SerializationEventsCache____c::__SerializationEventsCache____c() {}
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEventsCache.GetSerializationEventsForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEvents* (*)(::System::Type*)>(
    &::System::Runtime::Serialization::SerializationEventsCache::GetSerializationEventsForType)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x24b56c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEventsCache*>::get(), "GetSerializationEventsForType",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
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
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEvents*, false>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationEventsCache::SerializationEventsCache() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
