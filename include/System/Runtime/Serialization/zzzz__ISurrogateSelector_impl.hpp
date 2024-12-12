#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISurrogateSelector.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
inline ::System::Runtime::Serialization::ISerializationSurrogate*
System::Runtime::Serialization::ISurrogateSelector::GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                 ::ByRef<::System::Runtime::Serialization::ISurrogateSelector*> selector) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISurrogateSelector*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*, false>(this, ___internal_method, type, context, selector);
}
