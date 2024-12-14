#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/IAttributes.hpp"
#include "Unity/Properties/Internal/zzzz__IAttributes_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::IAttributes.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::Internal::IAttributes::*)(::System::Attribute*)>(
    &::Unity::Properties::Internal::IAttributes::AddAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IAttributes*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IAttributes*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::Internal::IAttributes.AddAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::Internal::IAttributes::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*)>(&::Unity::Properties::Internal::IAttributes::AddAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IAttributes*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IAttributes*>::get(), 1));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::IAttributes::AddAttribute(::System::Attribute* attribute) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IAttributes*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void Unity::Properties::Internal::IAttributes::AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* attributes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IAttributes*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
