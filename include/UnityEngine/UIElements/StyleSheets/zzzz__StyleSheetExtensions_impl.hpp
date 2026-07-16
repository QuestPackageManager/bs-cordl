#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions.ReadAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::ReadAsString)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x6d0fd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*>(),
                                                { "ReadAsString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions.IsVarFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::IsVarFunction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d132bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*>(),
                                                                                           { "IsVarFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::ReadAsString(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*>(),
                                              { "ReadAsString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sheet, handle);
}
inline bool UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::IsVarFunction(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*>(),
                                                                                         { "IsVarFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::StyleSheetExtensions() {}
