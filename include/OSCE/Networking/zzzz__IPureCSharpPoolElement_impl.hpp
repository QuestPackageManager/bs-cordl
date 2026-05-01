#pragma once
// IWYU pragma private; include "OSCE/Networking/IPureCSharpPoolElement.hpp"
#include "OSCE/Networking/zzzz__IPureCSharpPoolElement_def.hpp"
//  Writing Method size for method: ::OSCE::Networking::IPureCSharpPoolElement.get_CreatedByPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OSCE::Networking::IPureCSharpPoolElement::*)()>(
    &::OSCE::Networking::IPureCSharpPoolElement::get_CreatedByPool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Networking::IPureCSharpPoolElement.set_CreatedByPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Networking::IPureCSharpPoolElement::*)(bool)>(
    &::OSCE::Networking::IPureCSharpPoolElement::set_CreatedByPool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Networking::IPureCSharpPoolElement.ReturnedToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Networking::IPureCSharpPoolElement::*)()>(
    &::OSCE::Networking::IPureCSharpPoolElement::ReturnedToPool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(), 2));
    return ___internal_method;
  }
};
inline bool OSCE::Networking::IPureCSharpPoolElement::get_CreatedByPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OSCE::Networking::IPureCSharpPoolElement::set_CreatedByPool(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OSCE::Networking::IPureCSharpPoolElement::ReturnedToPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Networking::IPureCSharpPoolElement*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
