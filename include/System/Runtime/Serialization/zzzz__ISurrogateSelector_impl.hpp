#pragma once
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ISurrogateSelector.GetSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (
    ::System::Runtime::Serialization::ISurrogateSelector::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext, ByRef<::System::Runtime::Serialization::ISurrogateSelector*>)>(
    &::System::Runtime::Serialization::ISurrogateSelector::GetSurrogate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISurrogateSelector*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::ISerializationSurrogate*
System::Runtime::Serialization::ISurrogateSelector::GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                 ByRef<::System::Runtime::Serialization::ISurrogateSelector*> selector) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISurrogateSelector*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*, false>(this, ___internal_method, type, context, selector);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
