#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\EventInterestReflectionUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestReflectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestReflectionUtils_def.hpp"
// Ctor Parameters [CppParam { name: "DefaultActionCategories", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DefaultActionAtTargetCategories", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "HandleEventTrickleDownCategories", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "HandleEventBubbleUpCategories", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests::EventInterestReflectionUtils_DefaultEventInterests(int32_t DefaultActionCategories,
                                                                                                                                            int32_t DefaultActionAtTargetCategories,
                                                                                                                                            int32_t HandleEventTrickleDownCategories,
                                                                                                                                            int32_t HandleEventBubbleUpCategories) noexcept {
  this->DefaultActionCategories = DefaultActionCategories;
  this->DefaultActionAtTargetCategories = DefaultActionAtTargetCategories;
  this->HandleEventTrickleDownCategories = HandleEventTrickleDownCategories;
  this->HandleEventBubbleUpCategories = HandleEventBubbleUpCategories;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests::EventInterestReflectionUtils_DefaultEventInterests() {}
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestReflectionUtils.GetDefaultEventInterests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::UIElements::EventInterestReflectionUtils::GetDefaultEventInterests)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x6cca6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestReflectionUtils*>(),
                                                             { "GetDefaultEventInterests",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestReflectionUtils.ComputeDefaultEventInterests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*, ::StringW)>(&::UnityEngine::UIElements::EventInterestReflectionUtils::ComputeDefaultEventInterests)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6cca9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestReflectionUtils*>(),
                                                             { "ComputeDefaultEventInterests", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestReflectionUtils.GetEventCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCategory (*)(::System::Type*)>(&::UnityEngine::UIElements::EventInterestReflectionUtils::GetEventCategory)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6ccabd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestReflectionUtils*>(), { "GetEventCategory", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EventInterestReflectionUtils::setStaticF_s_DefaultEventInterests(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>*,
                                    "s_DefaultEventInterests", ::UnityEngine::UIElements::EventInterestReflectionUtils*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>*
UnityEngine::UIElements::EventInterestReflectionUtils::getStaticF_s_DefaultEventInterests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventInterestReflectionUtils_DefaultEventInterests>*,
                                           "s_DefaultEventInterests", ::UnityEngine::UIElements::EventInterestReflectionUtils*>();
}
inline void
UnityEngine::UIElements::EventInterestReflectionUtils::setStaticF_s_EventCategories(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>*, "s_EventCategories",
                                    ::UnityEngine::UIElements::EventInterestReflectionUtils*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>* UnityEngine::UIElements::EventInterestReflectionUtils::getStaticF_s_EventCategories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::UIElements::EventCategory>*, "s_EventCategories",
                                           ::UnityEngine::UIElements::EventInterestReflectionUtils*>();
}
inline void UnityEngine::UIElements::EventInterestReflectionUtils::GetDefaultEventInterests(::System::Type* elementType, ::by_ref<int32_t> defaultActionCategories,
                                                                                            ::by_ref<int32_t> defaultActionAtTargetCategories, ::by_ref<int32_t> handleEventTrickleDownCategories,
                                                                                            ::by_ref<int32_t> handleEventBubbleUpCategories) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestReflectionUtils*>(),
                                                           { "GetDefaultEventInterests",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, elementType, defaultActionCategories, defaultActionAtTargetCategories, handleEventTrickleDownCategories,
                                                   handleEventBubbleUpCategories);
}
inline int32_t UnityEngine::UIElements::EventInterestReflectionUtils::ComputeDefaultEventInterests(::System::Type* elementType, ::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestReflectionUtils*>(),
                                                                                         { "ComputeDefaultEventInterests", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, elementType, methodName);
}
inline ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventInterestReflectionUtils::GetEventCategory(::System::Type* eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestReflectionUtils*>(), { "GetEventCategory", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCategory>(nullptr, ___internal_method, eventType);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventInterestReflectionUtils::EventInterestReflectionUtils() {}
