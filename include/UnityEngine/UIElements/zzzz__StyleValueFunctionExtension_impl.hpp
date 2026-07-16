#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueFunctionExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunctionExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueFunctionExtension.ToUssString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleValueFunction)>(&::UnityEngine::UIElements::StyleValueFunctionExtension::ToUssString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6c99cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueFunctionExtension*>(),
                                                                                           { "ToUssString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueFunction>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleValueFunctionExtension::ToUssString(::UnityEngine::UIElements::StyleValueFunction svf) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueFunctionExtension*>(),
                                                                                         { "ToUssString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, svf);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueFunctionExtension::StyleValueFunctionExtension() {}
