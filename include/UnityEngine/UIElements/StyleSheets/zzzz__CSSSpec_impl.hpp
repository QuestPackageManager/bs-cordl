#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/CSSSpec.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__CSSSpec_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::CSSSpec.GetSelectorSpecificity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::UIElements::StyleSheets::CSSSpec::GetSelectorSpecificity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x71c22d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::CSSSpec*>(), { "GetSelectorSpecificity", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::CSSSpec.GetSelectorSpecificity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>)>(&::UnityEngine::UIElements::StyleSheets::CSSSpec::GetSelectorSpecificity)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x71c2820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::CSSSpec*>(),
                                                             { "GetSelectorSpecificity", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::CSSSpec.ParseSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>>)>(
    &::UnityEngine::UIElements::StyleSheets::CSSSpec::ParseSelector)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x71c236c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::CSSSpec*>(),
                                                { "ParseSelector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::CSSSpec::setStaticF_rgx(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "rgx", ::UnityEngine::UIElements::StyleSheets::CSSSpec*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* UnityEngine::UIElements::StyleSheets::CSSSpec::getStaticF_rgx() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "rgx", ::UnityEngine::UIElements::StyleSheets::CSSSpec*>();
}
inline int32_t UnityEngine::UIElements::StyleSheets::CSSSpec::GetSelectorSpecificity(::StringW selector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::CSSSpec*>(), { "GetSelectorSpecificity", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, selector);
}
inline int32_t UnityEngine::UIElements::StyleSheets::CSSSpec::GetSelectorSpecificity(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> parts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::CSSSpec*>(),
                                                           { "GetSelectorSpecificity", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, parts);
}
inline bool UnityEngine::UIElements::StyleSheets::CSSSpec::ParseSelector(::StringW selector, ::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>> parts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::CSSSpec*>(),
                                              { "ParseSelector", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, selector, parts);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::CSSSpec::CSSSpec() {}
