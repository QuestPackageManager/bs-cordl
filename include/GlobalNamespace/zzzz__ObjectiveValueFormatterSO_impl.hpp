#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectiveValueFormatterSO.FormatValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ObjectiveValueFormatterSO::*)(int32_t)>(
    &::GlobalNamespace::ObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x129456c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectiveValueFormatterSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectiveValueFormatterSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectiveValueFormatterSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectiveValueFormatterSO::*)()>(&::GlobalNamespace::ObjectiveValueFormatterSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1294134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectiveValueFormatterSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ObjectiveValueFormatterSO::FormatValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectiveValueFormatterSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ObjectiveValueFormatterSO* GlobalNamespace::ObjectiveValueFormatterSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ObjectiveValueFormatterSO*>());
}
inline void GlobalNamespace::ObjectiveValueFormatterSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectiveValueFormatterSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectiveValueFormatterSO::ObjectiveValueFormatterSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
