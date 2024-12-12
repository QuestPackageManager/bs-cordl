#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISafeSerializationData.hpp"
#include "System/Runtime/Serialization/zzzz__ISafeSerializationData_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline void System::Runtime::Serialization::ISafeSerializationData::CompleteDeserialization(::System::Object* deserialized) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ISafeSerializationData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deserialized);
}
