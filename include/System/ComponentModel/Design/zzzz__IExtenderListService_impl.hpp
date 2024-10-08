#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IExtenderListService.hpp"
#include "System/ComponentModel/Design/zzzz__IExtenderListService_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::IExtenderListService.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> (
    ::System::ComponentModel::Design::IExtenderListService::*)()>(&::System::ComponentModel::Design::IExtenderListService::GetExtenderProviders)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IExtenderListService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IExtenderListService*>::get(), 0));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> System::ComponentModel::Design::IExtenderListService::GetExtenderProviders() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::IExtenderListService*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>, false>(this, ___internal_method);
}
