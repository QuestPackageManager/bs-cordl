#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreObjectiveValueFormatterSO.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreObjectiveValueFormatterSO.FormatValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ScoreObjectiveValueFormatterSO::*)(int32_t)>(
    &::GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26d6b68;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x26d6bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScoreObjectiveValueFormatterSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreObjectiveValueFormatterSO* GlobalNamespace::ScoreObjectiveValueFormatterSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScoreObjectiveValueFormatterSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreObjectiveValueFormatterSO::ScoreObjectiveValueFormatterSO() {}
