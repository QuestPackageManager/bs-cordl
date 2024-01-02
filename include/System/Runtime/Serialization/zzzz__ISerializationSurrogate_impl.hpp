#pragma once
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializationSurrogate.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ISerializationSurrogate::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::ISerializationSurrogate::GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISerializationSurrogate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISerializationSurrogate*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializationSurrogate.SetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::ISerializationSurrogate::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                  ::System::Runtime::Serialization::ISurrogateSelector*)>(&::System::Runtime::Serialization::ISerializationSurrogate::SetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISerializationSurrogate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISerializationSurrogate*>::get(), 1));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ISerializationSurrogate::GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                   ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISerializationSurrogate*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, info, context);
}
inline ::System::Object* System::Runtime::Serialization::ISerializationSurrogate::SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                ::System::Runtime::Serialization::StreamingContext context,
                                                                                                ::System::Runtime::Serialization::ISurrogateSelector* selector) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISerializationSurrogate*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, info, context, selector);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
