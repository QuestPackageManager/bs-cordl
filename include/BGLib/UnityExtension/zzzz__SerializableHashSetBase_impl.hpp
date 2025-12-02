#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableHashSetBase.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableHashSetBase_def.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableHashSetBase_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::SerializableHashSetBase_Storage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::SerializableHashSetBase_Storage::*)()>(
    &::BGLib::UnityExtension::SerializableHashSetBase_Storage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31fe5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableHashSetBase_Storage*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::SerializableHashSetBase_Storage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableHashSetBase_Storage*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::SerializableHashSetBase_Storage* BGLib::UnityExtension::SerializableHashSetBase_Storage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableHashSetBase_Storage*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SerializableHashSetBase_Storage::SerializableHashSetBase_Storage() {}
template <typename TValue> inline void BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::_ctor(::System::Collections::Generic::ISet_1<TValue>* set) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ISet_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, set);
}
template <typename TValue>
inline void BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename TValue> inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>* BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>());
}
template <typename TValue>
inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*
BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::New_ctor(::System::Collections::Generic::ISet_1<TValue>* set) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>(set));
}
template <typename TValue>
inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*
BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>(info, context));
}
// Ctor Parameters []
template <typename TValue> constexpr ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::SerializableHashSetBase_HashSet_1() {}
//  Writing Method size for method: ::BGLib::UnityExtension::SerializableHashSetBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::SerializableHashSetBase::*)()>(
    &::BGLib::UnityExtension::SerializableHashSetBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31fe5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableHashSetBase*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::SerializableHashSetBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableHashSetBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::SerializableHashSetBase* BGLib::UnityExtension::SerializableHashSetBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableHashSetBase*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SerializableHashSetBase::SerializableHashSetBase() {}
