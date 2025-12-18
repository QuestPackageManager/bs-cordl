#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextUtilities_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.ToUpperFast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a494ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(), "ToUpperFast",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.GetHashCodeCaseInSensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::TextCore::Text::TextUtilities::GetHashCodeCaseInSensitive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a47f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(), "GetHashCodeCaseInSensitive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.GetTextFontWeightIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::TextCore::Text::TextFontWeight)>(
    &::UnityEngine::TextCore::Text::TextUtilities::GetTextFontWeightIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a4952c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(), "GetTextFontWeightIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextFontWeight>::get() })));
    return ___internal_method;
  }
};
inline char16_t UnityEngine::TextCore::Text::TextUtilities::ToUpperFast(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(), "ToUpperFast", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
inline int32_t UnityEngine::TextCore::Text::TextUtilities::GetHashCodeCaseInSensitive(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(), "GetHashCodeCaseInSensitive",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
inline int32_t UnityEngine::TextCore::Text::TextUtilities::GetTextFontWeightIndex(::UnityEngine::TextCore::Text::TextFontWeight fontWeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(), "GetTextFontWeightIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextFontWeight>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fontWeight);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextUtilities::TextUtilities() {}
