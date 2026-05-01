#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/IFeatureFlags.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlags_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::IFeatureFlags.GetConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>* (::BeatSaber::FeatureFlags::IFeatureFlags::*)()>(
    &::BeatSaber::FeatureFlags::IFeatureFlags::GetConfiguration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::IFeatureFlags*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::IFeatureFlags*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>*
BeatSaber::FeatureFlags::IFeatureFlags::GetConfiguration() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::IFeatureFlags*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>*, false>(
      this, ___internal_method);
}
