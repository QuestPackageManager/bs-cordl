#pragma once
// IWYU pragma private; include "System/ComponentModel/ComponentCollection.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::ComponentCollection::*)(::StringW)>(
    &::System::ComponentModel::ComponentCollection::get_Item)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x4446c08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), 11));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::IComponent* System::ComponentModel::ComponentCollection::get_Item(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*, false>(this, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComponentCollection::ComponentCollection() {}
