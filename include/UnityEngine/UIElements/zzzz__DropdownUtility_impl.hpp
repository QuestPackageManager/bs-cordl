#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownUtility_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownUtility.CreateDropdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IGenericMenu* (*)()>(&::UnityEngine::UIElements::DropdownUtility::CreateDropdown)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6d91358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownUtility*>(), { "CreateDropdown", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DropdownUtility::setStaticF_MakeDropdownFunc(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*, "MakeDropdownFunc", ::UnityEngine::UIElements::DropdownUtility*>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* UnityEngine::UIElements::DropdownUtility::getStaticF_MakeDropdownFunc() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*, "MakeDropdownFunc", ::UnityEngine::UIElements::DropdownUtility*>();
}
inline ::UnityEngine::UIElements::IGenericMenu* UnityEngine::UIElements::DropdownUtility::CreateDropdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownUtility*>(), { "CreateDropdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IGenericMenu*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownUtility::DropdownUtility() {}
