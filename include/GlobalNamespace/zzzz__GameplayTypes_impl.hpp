#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayTypes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayTypes_def.hpp"
#include "GlobalNamespace/zzzz__GameplayType_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
inline void GlobalNamespace::GameplayTypes::setStaticF_kAllGameplayTypes(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::GameplayType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::GameplayType>*, "kAllGameplayTypes", ::GlobalNamespace::GameplayTypes*>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::GameplayType>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::GameplayType>* GlobalNamespace::GameplayTypes::getStaticF_kAllGameplayTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::GameplayType>*, "kAllGameplayTypes", ::GlobalNamespace::GameplayTypes*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayTypes::GameplayTypes() {}
