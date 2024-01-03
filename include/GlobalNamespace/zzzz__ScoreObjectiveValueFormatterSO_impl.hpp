#pragma once
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreObjectiveValueFormatterSO.FormatValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ScoreObjectiveValueFormatterSO::*)(int32_t)>(
    &::GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2352ecc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreObjectiveValueFormatterSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreObjectiveValueFormatterSO::*)()>(
    &::GlobalNamespace::ScoreObjectiveValueFormatterSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ScoreObjectiveValueFormatterSO* GlobalNamespace::ScoreObjectiveValueFormatterSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>());
}
inline void GlobalNamespace::ScoreObjectiveValueFormatterSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreObjectiveValueFormatterSO::ScoreObjectiveValueFormatterSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
