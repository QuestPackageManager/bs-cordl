#pragma once
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::IAsyncLocal.OnValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::IAsyncLocal::*)(::System::Object*, ::System::Object*, bool)>(
    &::System::Threading::IAsyncLocal::OnValueChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::IAsyncLocal*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::IAsyncLocal*>::get(), 0));
    return ___internal_method;
  }
};
inline void System::Threading::IAsyncLocal::OnValueChanged(::System::Object* previousValue, ::System::Object* currentValue, bool contextChanged) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::IAsyncLocal*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previousValue, currentValue, contextChanged);
}
