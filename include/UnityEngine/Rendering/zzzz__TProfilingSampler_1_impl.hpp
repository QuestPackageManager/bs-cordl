#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TProfilingSampler_1.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TProfilingSampler_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename TEnum>
inline void UnityEngine::Rendering::TProfilingSampler_1<TEnum>::setStaticF_samples(::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>*, "samples",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>*>(value));
}
template <typename TEnum>
inline ::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* UnityEngine::Rendering::TProfilingSampler_1<TEnum>::getStaticF_samples() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>*, "samples",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>::get>();
}
template <typename TEnum> inline void UnityEngine::Rendering::TProfilingSampler_1<TEnum>::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
template <typename TEnum> inline ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>* UnityEngine::Rendering::TProfilingSampler_1<TEnum>::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>(name));
}
// Ctor Parameters []
template <typename TEnum> constexpr ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>::TProfilingSampler_1() {}
