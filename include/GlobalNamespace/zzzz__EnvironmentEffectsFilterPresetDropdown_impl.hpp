#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentEffectsFilterPresetDropdown.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_impl.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPresetDropdown_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown.GetNamedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::EnvironmentEffectsFilterPreset, ::StringW>*>* (
        ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)()>(&::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3c13380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::*)()>(
    &::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3c134a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::EnvironmentEffectsFilterPreset, ::StringW>*>*
GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::GetNamedValues() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::EnvironmentEffectsFilterPreset, ::StringW>*>*, false>(
      this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown::EnvironmentEffectsFilterPresetDropdown() {}
