#pragma once
// IWYU pragma private; include "GlobalNamespace/DistanceObjectiveValueFormatterSO.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_impl.hpp"
#include "GlobalNamespace/zzzz__DistanceObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DistanceObjectiveValueFormatterSO.FormatValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::DistanceObjectiveValueFormatterSO::*)(int32_t)>(
    &::GlobalNamespace::DistanceObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26d668c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DistanceObjectiveValueFormatterSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DistanceObjectiveValueFormatterSO::*)()>(
    &::GlobalNamespace::DistanceObjectiveValueFormatterSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d670c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::DistanceObjectiveValueFormatterSO::FormatValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DistanceObjectiveValueFormatterSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DistanceObjectiveValueFormatterSO* GlobalNamespace::DistanceObjectiveValueFormatterSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DistanceObjectiveValueFormatterSO::DistanceObjectiveValueFormatterSO() {}
