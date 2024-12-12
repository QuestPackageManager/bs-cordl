#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IFormatter.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline void System::Runtime::Serialization::IFormatter::Serialize(::System::IO::Stream* serializationStream, ::System::Object* graph) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::IFormatter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationStream, graph);
}
inline void System::Runtime::Serialization::IFormatter::set_SurrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::IFormatter*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
