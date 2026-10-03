#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterFunctionDefinitionUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionDefinitionUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterPassContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingMargins_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinitionUtils.GetBuiltinFilterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::UIElements::FilterFunctionType)>(&::UnityEngine::UIElements::FilterFunctionDefinitionUtils::GetBuiltinFilterName)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x72362b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                                                           { "GetBuiltinFilterName", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinitionUtils.GetBuiltinDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> (*)(::UnityEngine::UIElements::FilterFunctionType)>(
    &::UnityEngine::UIElements::FilterFunctionDefinitionUtils::GetBuiltinDefinition)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x7236438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                                                           { "GetBuiltinDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinitionUtils.CreateBlurFilterFunctionDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> (*)()>(
    &::UnityEngine::UIElements::FilterFunctionDefinitionUtils::CreateBlurFilterFunctionDefinition)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x72367dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(), { "CreateBlurFilterFunctionDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinitionUtils.CreateColorEffectFilterFunctionDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> (*)(::UnityEngine::UIElements::FilterFunctionType)>(
    &::UnityEngine::UIElements::FilterFunctionDefinitionUtils::CreateColorEffectFilterFunctionDefinition)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x7236b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                             { "CreateColorEffectFilterFunctionDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinitionUtils.ComputeHorizontalBlurMargins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingMargins (*)(::UnityEngine::UIElements::FilterFunction)>(
    &::UnityEngine::UIElements::FilterFunctionDefinitionUtils::ComputeHorizontalBlurMargins)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x7236e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                                                           { "ComputeHorizontalBlurMargins", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinitionUtils.ComputeVerticalBlurMargins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingMargins (*)(::UnityEngine::UIElements::FilterFunction)>(
    &::UnityEngine::UIElements::FilterFunctionDefinitionUtils::ComputeVerticalBlurMargins)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x7236f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                                                           { "ComputeVerticalBlurMargins", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinitionUtils.ApplyBlurSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::UIElements::FilterPassContext)>(
    &::UnityEngine::UIElements::FilterFunctionDefinitionUtils::ApplyBlurSettings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x7237024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                         { "ApplyBlurSettings", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::UIElements::FilterPassContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunctionDefinitionUtils.ApplySettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::UIElements::FilterPassContext)>(
    &::UnityEngine::UIElements::FilterFunctionDefinitionUtils::ApplySettings)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x72370ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                { "ApplySettings", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::UIElements::FilterPassContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::setStaticF_s_BlurDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_BlurDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(
      std::forward<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::getStaticF_s_BlurDef() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_BlurDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>();
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::setStaticF_s_TintDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_TintDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(
      std::forward<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::getStaticF_s_TintDef() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_TintDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>();
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::setStaticF_s_OpacityDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_OpacityDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(
      std::forward<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::getStaticF_s_OpacityDef() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_OpacityDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>();
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::setStaticF_s_InvertDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_InvertDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(
      std::forward<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::getStaticF_s_InvertDef() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_InvertDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>();
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::setStaticF_s_GrayscaleDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_GrayscaleDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(
      std::forward<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::getStaticF_s_GrayscaleDef() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_GrayscaleDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>();
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::setStaticF_s_SepiaDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_SepiaDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(
      std::forward<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::getStaticF_s_SepiaDef() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_SepiaDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>();
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::setStaticF_s_ContrastDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_ContrastDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(
      std::forward<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::getStaticF_s_ContrastDef() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_ContrastDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>();
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::setStaticF_s_HueRotateDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_HueRotateDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(
      std::forward<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::getStaticF_s_HueRotateDef() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>, "s_HueRotateDef", ::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>();
}
inline ::StringW UnityEngine::UIElements::FilterFunctionDefinitionUtils::GetBuiltinFilterName(::UnityEngine::UIElements::FilterFunctionType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                                                         { "GetBuiltinFilterName", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::GetBuiltinDefinition(::UnityEngine::UIElements::FilterFunctionType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                                                         { "GetBuiltinDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunctionDefinitionUtils::CreateBlurFilterFunctionDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(), { "CreateBlurFilterFunctionDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>
UnityEngine::UIElements::FilterFunctionDefinitionUtils::CreateColorEffectFilterFunctionDefinition(::UnityEngine::UIElements::FilterFunctionType filterType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                           { "CreateColorEffectFilterFunctionDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(nullptr, ___internal_method, filterType);
}
inline ::UnityEngine::UIElements::PostProcessingMargins UnityEngine::UIElements::FilterFunctionDefinitionUtils::ComputeHorizontalBlurMargins(::UnityEngine::UIElements::FilterFunction func) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                                                         { "ComputeHorizontalBlurMargins", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingMargins>(nullptr, ___internal_method, func);
}
inline ::UnityEngine::UIElements::PostProcessingMargins UnityEngine::UIElements::FilterFunctionDefinitionUtils::ComputeVerticalBlurMargins(::UnityEngine::UIElements::FilterFunction func) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                                                                         { "ComputeVerticalBlurMargins", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingMargins>(nullptr, ___internal_method, func);
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::ApplyBlurSettings(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::UIElements::FilterPassContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                       { "ApplyBlurSettings", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::UIElements::FilterPassContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mpb, context);
}
inline void UnityEngine::UIElements::FilterFunctionDefinitionUtils::ApplySettings(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::UIElements::FilterPassContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunctionDefinitionUtils*>(),
                                              { "ApplySettings", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::UIElements::FilterPassContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mpb, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FilterFunctionDefinitionUtils::FilterFunctionDefinitionUtils() {}
