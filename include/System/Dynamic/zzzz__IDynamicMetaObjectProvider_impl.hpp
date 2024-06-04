#pragma once
// IWYU pragma private; include "System/Dynamic/IDynamicMetaObjectProvider.hpp"
#include "System/Dynamic/zzzz__IDynamicMetaObjectProvider_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Dynamic::IDynamicMetaObjectProvider.GetMetaObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::IDynamicMetaObjectProvider::*)(::System::Linq::Expressions::Expression*)>(&::System::Dynamic::IDynamicMetaObjectProvider::GetMetaObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::IDynamicMetaObjectProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::IDynamicMetaObjectProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::IDynamicMetaObjectProvider::GetMetaObject(::System::Linq::Expressions::Expression* parameter) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::IDynamicMetaObjectProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, parameter);
}
