#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TProfilingSampler_1.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TProfilingSampler_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename TEnum>
inline void UnityEngine::Rendering::TProfilingSampler_1<TEnum>::setStaticF_samples(::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>*, "samples",
                                    ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>(
      std::forward<::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>*>(value));
}
template <typename TEnum>
inline ::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* UnityEngine::Rendering::TProfilingSampler_1<TEnum>::getStaticF_samples() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>*, "samples",
                                           ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>();
}
template <typename TEnum> inline void UnityEngine::Rendering::TProfilingSampler_1<TEnum>::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template <typename TEnum> inline ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>* UnityEngine::Rendering::TProfilingSampler_1<TEnum>::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>(name));
}
// Ctor Parameters []
template <typename TEnum> constexpr ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>::TProfilingSampler_1() {}
