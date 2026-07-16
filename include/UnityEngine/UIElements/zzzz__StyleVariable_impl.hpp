#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariable.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariable_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleVariable::*)(
    ::StringW, ::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>)>(&::UnityEngine::UIElements::StyleVariable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c9a01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleVariable>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleVariable::*)()>(&::UnityEngine::UIElements::StyleVariable::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c9a028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleVariable>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleVariable>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleVariable::_ctor(::StringW name, ::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleVariable>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleValueHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, sheet, handles);
}
inline int32_t UnityEngine::UIElements::StyleVariable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleVariable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleVariable::StyleVariable(::StringW name, ::UnityW<::UnityEngine::UIElements::StyleSheet> sheet,
                                                                  ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles) noexcept {
  this->name = name;
  this->sheet = sheet;
  this->handles = handles;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleVariable::StyleVariable() {}
