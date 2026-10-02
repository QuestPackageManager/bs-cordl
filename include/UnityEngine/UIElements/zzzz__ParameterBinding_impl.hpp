#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ParameterBinding.hpp"
#include "UnityEngine/UIElements/zzzz__ParameterBinding_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ParameterBinding.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ParameterBinding::*)()>(&::UnityEngine::UIElements::ParameterBinding::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ParameterBinding>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ParameterBinding.set_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ParameterBinding::*)(int32_t)>(&::UnityEngine::UIElements::ParameterBinding::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ParameterBinding>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ParameterBinding.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::ParameterBinding::*)()>(&::UnityEngine::UIElements::ParameterBinding::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ParameterBinding>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ParameterBinding.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ParameterBinding::*)(::StringW)>(&::UnityEngine::UIElements::ParameterBinding::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ParameterBinding>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::ParameterBinding::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ParameterBinding>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ParameterBinding::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ParameterBinding>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::ParameterBinding::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ParameterBinding>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ParameterBinding::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ParameterBinding>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::UIElements::ParameterBinding::ParameterBinding(int32_t m_Index, ::StringW m_Name) noexcept {
  this->m_Index = m_Index;
  this->m_Name = m_Name;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ParameterBinding::ParameterBinding() {}
