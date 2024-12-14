#pragma once
// IWYU pragma private; include "UnityEngine/IExposedPropertyTable.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::UnityEngine::IExposedPropertyTable.GetReferenceValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::IExposedPropertyTable::*)(::UnityEngine::PropertyName, ::ByRef<bool>)>(&::UnityEngine::IExposedPropertyTable::GetReferenceValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IExposedPropertyTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IExposedPropertyTable*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Object> UnityEngine::IExposedPropertyTable::GetReferenceValue(::UnityEngine::PropertyName id, ::ByRef<bool> idValid) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IExposedPropertyTable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method, id, idValid);
}
