#pragma once
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySO_def.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySubtaskSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressActivitySO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProgressActivitySO::*)()>(&::GlobalNamespace::ProgressActivitySO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgressActivitySO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*, ::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>& GlobalNamespace::ProgressActivitySO::__get_subtasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtasks;
}
constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*, ::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*> const& GlobalNamespace::ProgressActivitySO::__get_subtasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtasks;
}
constexpr void GlobalNamespace::ProgressActivitySO::__set_subtasks(::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*, ::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subtasks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ProgressActivitySO* GlobalNamespace::ProgressActivitySO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ProgressActivitySO*>());
}
inline void GlobalNamespace::ProgressActivitySO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgressActivitySO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressActivitySO::ProgressActivitySO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
