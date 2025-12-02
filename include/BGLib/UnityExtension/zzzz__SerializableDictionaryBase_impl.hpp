#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionaryBase.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_def.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::SerializableDictionaryBase_Storage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::SerializableDictionaryBase_Storage::*)()>(
    &::BGLib::UnityExtension::SerializableDictionaryBase_Storage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31fe5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionaryBase_Storage*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::SerializableDictionaryBase_Storage::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionaryBase_Storage*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::SerializableDictionaryBase_Storage* BGLib::UnityExtension::SerializableDictionaryBase_Storage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionaryBase_Storage*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SerializableDictionaryBase_Storage::SerializableDictionaryBase_Storage() {}
template <typename TKey, typename TValue> inline void BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dict);
}
template <typename TKey, typename TValue>
inline void BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename TKey, typename TValue>
inline ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>* BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*
BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*>(dict));
}
template <typename TKey, typename TValue>
inline ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*
BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*>(info, context));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>::SerializableDictionaryBase_Dictionary_2() {}
//  Writing Method size for method: ::BGLib::UnityExtension::SerializableDictionaryBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::SerializableDictionaryBase::*)()>(
    &::BGLib::UnityExtension::SerializableDictionaryBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31fe5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionaryBase*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::SerializableDictionaryBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionaryBase*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::SerializableDictionaryBase* BGLib::UnityExtension::SerializableDictionaryBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionaryBase*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SerializableDictionaryBase::SerializableDictionaryBase() {}
