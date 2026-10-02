#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutConfig.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataAccess_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfig_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutBaselineFunction_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataAccess_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureFunction_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfig.get_Undefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutConfig (*)()>(&::UnityEngine::UIElements::Layout::LayoutConfig::get_Undefined)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7192d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_Undefined", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutConfig::*)(
    ::UnityEngine::UIElements::Layout::LayoutDataAccess, ::UnityEngine::UIElements::Layout::LayoutHandle)>(&::UnityEngine::UIElements::Layout::LayoutConfig::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x7192d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfig.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutHandle (::UnityEngine::UIElements::Layout::LayoutConfig::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutConfig::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7192d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfig.get_PointScaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<float_t> (::UnityEngine::UIElements::Layout::LayoutConfig::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutConfig::get_PointScaleFactor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7192d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_PointScaleFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfig.get_Measure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutMeasureFunction* (::UnityEngine::UIElements::Layout::LayoutConfig::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutConfig::get_Measure)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x7192db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_Measure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfig.set_Measure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutConfig::*)(::UnityEngine::UIElements::Layout::LayoutMeasureFunction*)>(
    &::UnityEngine::UIElements::Layout::LayoutConfig::set_Measure)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7192e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(),
                                                                                           { "set_Measure", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfig.get_Baseline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutBaselineFunction* (::UnityEngine::UIElements::Layout::LayoutConfig::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutConfig::get_Baseline)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x7192eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_Baseline", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Layout::LayoutConfig UnityEngine::UIElements::Layout::LayoutConfig::get_Undefined() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_Undefined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutConfig>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutConfig::_ctor(::UnityEngine::UIElements::Layout::LayoutDataAccess access, ::UnityEngine::UIElements::Layout::LayoutHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutDataAccess>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, access, handle);
}
inline ::UnityEngine::UIElements::Layout::LayoutHandle UnityEngine::UIElements::Layout::LayoutConfig::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutHandle>(*this, ___internal_method);
}
inline ::by_ref<float_t> UnityEngine::UIElements::Layout::LayoutConfig::get_PointScaleFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_PointScaleFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<float_t>>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* UnityEngine::UIElements::Layout::LayoutConfig::get_Measure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_Measure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutConfig::set_Measure(::UnityEngine::UIElements::Layout::LayoutMeasureFunction* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(),
                                                                                         { "set_Measure", {}, { ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* UnityEngine::UIElements::Layout::LayoutConfig::get_Baseline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfig>(), { "get_Baseline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutBaselineFunction*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Access", ty: "::UnityEngine::UIElements::Layout::LayoutDataAccess", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Handle", ty:
// "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::Layout::LayoutConfig::LayoutConfig(::UnityEngine::UIElements::Layout::LayoutDataAccess m_Access,
                                                                        ::UnityEngine::UIElements::Layout::LayoutHandle m_Handle) noexcept {
  this->m_Access = m_Access;
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutConfig::LayoutConfig() {}
