#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventInterestReflectionUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestReflectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestReflectionUtils_def.hpp"
// Ctor Parameters [CppParam { name: "DefaultActionCategories", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DefaultActionAtTargetCategories", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests::EventInterestReflectionUtils_DefaultEventInterests(int32_t DefaultActionCategories,
                                                                                                                                            int32_t DefaultActionAtTargetCategories) noexcept {
  this->DefaultActionCategories = DefaultActionCategories;
  this->DefaultActionAtTargetCategories = DefaultActionAtTargetCategories;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests::EventInterestReflectionUtils_DefaultEventInterests() {}
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestReflectionUtils.GetDefaultEventInterests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::UnityEngine::UIElements::EventInterestReflectionUtils::GetDefaultEventInterests)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x499ba50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get(),
                                                                               "GetDefaultEventInterests", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestReflectionUtils.ComputeDefaultEventInterests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type*, ::StringW)>(
    &::UnityEngine::UIElements::EventInterestReflectionUtils::ComputeDefaultEventInterests)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x499bc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get(), "ComputeDefaultEventInterests",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestReflectionUtils.GetEventCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCategory (*)(::System::Type*)>(
    &::UnityEngine::UIElements::EventInterestReflectionUtils::GetEventCategory)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x499be80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get(), "GetEventCategory",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EventInterestReflectionUtils::setStaticF_s_DefaultEventInterests(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>*,
                                    "s_DefaultEventInterests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>*
UnityEngine::UIElements::EventInterestReflectionUtils::getStaticF_s_DefaultEventInterests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>*,
                                           "s_DefaultEventInterests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get>();
}
inline void
UnityEngine::UIElements::EventInterestReflectionUtils::setStaticF_s_EventCategories(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>*, "s_EventCategories",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>* UnityEngine::UIElements::EventInterestReflectionUtils::getStaticF_s_EventCategories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>*, "s_EventCategories",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get>();
}
inline void UnityEngine::UIElements::EventInterestReflectionUtils::GetDefaultEventInterests(::System::Type* elementType, ::ByRef<int32_t> defaultActionCategories,
                                                                                            ::ByRef<int32_t> defaultActionAtTargetCategories) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get(), "GetDefaultEventInterests", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, elementType, defaultActionCategories, defaultActionAtTargetCategories);
}
inline int32_t UnityEngine::UIElements::EventInterestReflectionUtils::ComputeDefaultEventInterests(::System::Type* elementType, ::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get(), "ComputeDefaultEventInterests", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, elementType, methodName);
}
inline ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventInterestReflectionUtils::GetEventCategory(::System::Type* eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventInterestReflectionUtils*>::get(), "GetEventCategory",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCategory, false>(nullptr, ___internal_method, eventType);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventInterestReflectionUtils::EventInterestReflectionUtils() {}
