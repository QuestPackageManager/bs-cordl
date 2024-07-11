#pragma once
// IWYU pragma private; include "System/Xml/Schema/NamespaceListV1Compat.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_impl.hpp"
#include "System/Xml/Schema/zzzz__NamespaceListV1Compat_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListV1Compat._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceListV1Compat::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::NamespaceListV1Compat::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2df2938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListV1Compat*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListV1Compat.Allows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::NamespaceListV1Compat::*)(::StringW)>(
    &::System::Xml::Schema::NamespaceListV1Compat::Allows)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2df293c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListV1Compat*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListV1Compat*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::NamespaceListV1Compat* System::Xml::Schema::NamespaceListV1Compat::New_ctor(::StringW namespaces, ::StringW targetNamespace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::NamespaceListV1Compat*>(namespaces, targetNamespace));
}
inline void System::Xml::Schema::NamespaceListV1Compat::_ctor(::StringW namespaces, ::StringW targetNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListV1Compat*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, namespaces, targetNamespace);
}
inline bool System::Xml::Schema::NamespaceListV1Compat::Allows(::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListV1Compat*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ns);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NamespaceListV1Compat::NamespaceListV1Compat() {}
