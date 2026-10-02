#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SelectorUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SelectorUtility_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::SelectorUtility.ExtractSelectorsAndSpecificityFromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelector*>>, ::by_ref<int32_t>, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::SelectorUtility::ExtractSelectorsAndSpecificityFromString)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x71132a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SelectorUtility*>(),
                                                             { "ExtractSelectorsAndSpecificityFromString",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelector*>>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::SelectorUtility::ExtractSelectorsAndSpecificityFromString(::StringW complexSelectorStr, ::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelector*>> selectors,
                                                                                               ::by_ref<int32_t> specificity, ::by_ref<::StringW> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SelectorUtility*>(),
                                                           { "ExtractSelectorsAndSpecificityFromString",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelector*>>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, complexSelectorStr, selectors, specificity, error);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SelectorUtility::SelectorUtility() {}
