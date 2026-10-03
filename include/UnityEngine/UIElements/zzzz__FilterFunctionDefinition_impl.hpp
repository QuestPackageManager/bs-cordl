#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterFunctionDefinition.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameterDeclaration_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingPass_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameterDeclaration_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingPass_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinition.get_filterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::FilterFunctionDefinition::*)()>(&::UnityEngine::UIElements::FilterFunctionDefinition::get_filterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { "get_filterName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinition.set_filterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunctionDefinition::*)(::StringW)>(
    &::UnityEngine::UIElements::FilterFunctionDefinition::set_filterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { "set_filterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinition.get_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> (::UnityEngine::UIElements::FilterFunctionDefinition::*)()>(
    &::UnityEngine::UIElements::FilterFunctionDefinition::get_parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { "get_parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinition.set_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunctionDefinition::*)(::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration>)>(
    &::UnityEngine::UIElements::FilterFunctionDefinition::set_parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(),
                                                             { "set_parameters", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinition.get_passes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::PostProcessingPass> (::UnityEngine::UIElements::FilterFunctionDefinition::*)()>(
    &::UnityEngine::UIElements::FilterFunctionDefinition::get_passes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { "get_passes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinition.set_passes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunctionDefinition::*)(::ArrayW<::UnityEngine::UIElements::PostProcessingPass>)>(
    &::UnityEngine::UIElements::FilterFunctionDefinition::set_passes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(),
                                                                                           { "set_passes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::PostProcessingPass>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunctionDefinition::*)()>(&::UnityEngine::UIElements::FilterFunctionDefinition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_get_m_FilterName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilterName;
}
constexpr ::StringW const& UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_get_m_FilterName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilterName;
}
constexpr void UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_set_m_FilterName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilterName = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration>& UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_get_m_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parameters;
}
constexpr ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> const& UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_get_m_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parameters;
}
constexpr void UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_set_m_Parameters(::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Parameters = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::PostProcessingPass>& UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_get_m_Passes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Passes;
}
constexpr ::ArrayW<::UnityEngine::UIElements::PostProcessingPass> const& UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_get_m_Passes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Passes;
}
constexpr void UnityEngine::UIElements::FilterFunctionDefinition::__cordl_internal_set_m_Passes(::ArrayW<::UnityEngine::UIElements::PostProcessingPass> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Passes = value;
}
inline ::StringW UnityEngine::UIElements::FilterFunctionDefinition::get_filterName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { "get_filterName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterFunctionDefinition::set_filterName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { "set_filterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> UnityEngine::UIElements::FilterFunctionDefinition::get_parameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { "get_parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterFunctionDefinition::set_parameters(::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(),
                                                           { "set_parameters", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::UIElements::PostProcessingPass> UnityEngine::UIElements::FilterFunctionDefinition::get_passes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { "get_passes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::PostProcessingPass>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterFunctionDefinition::set_passes(::ArrayW<::UnityEngine::UIElements::PostProcessingPass> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(),
                                                                                         { "set_passes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::PostProcessingPass>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::FilterFunctionDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::FilterFunctionDefinition* UnityEngine::UIElements::FilterFunctionDefinition::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FilterFunctionDefinition*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FilterFunctionDefinition::FilterFunctionDefinition() {}
