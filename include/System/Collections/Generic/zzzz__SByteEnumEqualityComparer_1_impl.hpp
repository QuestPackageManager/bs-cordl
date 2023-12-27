#pragma once
#include "System/Collections/Generic/zzzz__EnumEqualityComparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__SByteEnumEqualityComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::Collections::Generic::SByteEnumEqualityComparer_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
template <typename T> inline ::System::Collections::Generic::SByteEnumEqualityComparer_1<T>* System::Collections::Generic::SByteEnumEqualityComparer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>());
}
template <typename T> inline void System::Collections::Generic::SByteEnumEqualityComparer_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*
System::Collections::Generic::SByteEnumEqualityComparer_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* information, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>(information, context));
}
template <typename T>
inline void System::Collections::Generic::SByteEnumEqualityComparer_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* information,
                                                                                ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, information, context);
}
template <typename T> inline int32_t System::Collections::Generic::SByteEnumEqualityComparer_1<T>::GetHashCode(T obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SByteEnumEqualityComparer_1<T>*>::get(), "GetHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SByteEnumEqualityComparer_1<T>::SByteEnumEqualityComparer_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
