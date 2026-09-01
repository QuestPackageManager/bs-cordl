#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PropertyPathInfo.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PropertyPathInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyPathInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyPathInfo::*)(::by_ref<::Unity::Properties::PropertyPath>, ::System::Type*)>(
    &::UnityEngine::UIElements::PropertyPathInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c44dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyPathInfo>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PropertyPathInfo::_ctor(::by_ref<::Unity::Properties::PropertyPath> propertyPath, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyPathInfo>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, propertyPath, type);
}
// Ctor Parameters [CppParam { name: "propertyPath", ty: "::Unity::Properties::PropertyPath", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::System::Type*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PropertyPathInfo::PropertyPathInfo(::Unity::Properties::PropertyPath propertyPath, ::System::Type* type) noexcept {
  this->propertyPath = propertyPath;
  this->type = type;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyPathInfo::PropertyPathInfo() {}
