#pragma once
// IWYU pragma private; include "Zenject/Internal/IDecoratorProvider.hpp"
#include "Zenject/Internal/zzzz__IDecoratorProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::IDecoratorProvider.GetAllInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::IDecoratorProvider::*)(
    ::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::Internal::IDecoratorProvider::GetAllInstances)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::IDecoratorProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::IDecoratorProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline void Zenject::Internal::IDecoratorProvider::GetAllInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context,
                                                                   ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::IDecoratorProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, context, buffer);
}
