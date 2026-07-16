#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MaterialQualityUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MaterialQualityUtilities_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__MaterialQuality_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::MaterialQualityUtilities.GetHighestQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::MaterialQuality (*)(::UnityEngine::Rendering::MaterialQuality)>(
    &::UnityEngine::Rendering::MaterialQualityUtilities::GetHighestQuality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67c1838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                                                                                           { "GetHighestQuality", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MaterialQualityUtilities.GetClosestQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::MaterialQuality (*)(::UnityEngine::Rendering::MaterialQuality, ::UnityEngine::Rendering::MaterialQuality)>(
    &::UnityEngine::Rendering::MaterialQualityUtilities::GetClosestQuality)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x67c18c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                                         { "GetClosestQuality", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>(), ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MaterialQualityUtilities.SetGlobalShaderKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::MaterialQuality)>(&::UnityEngine::Rendering::MaterialQualityUtilities::SetGlobalShaderKeywords)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67c1a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                                                                                           { "SetGlobalShaderKeywords", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MaterialQualityUtilities.SetGlobalShaderKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::MaterialQuality, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::MaterialQualityUtilities::SetGlobalShaderKeywords)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x67c1b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                            { "SetGlobalShaderKeywords", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MaterialQualityUtilities.ToFirstIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::MaterialQuality)>(&::UnityEngine::Rendering::MaterialQualityUtilities::ToFirstIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67c1a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                                                                                           { "ToFirstIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MaterialQualityUtilities.FromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::MaterialQuality (*)(int32_t)>(&::UnityEngine::Rendering::MaterialQualityUtilities::FromIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c1a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(), { "FromIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::MaterialQualityUtilities::setStaticF_KeywordNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "KeywordNames", ::UnityEngine::Rendering::MaterialQualityUtilities*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::MaterialQualityUtilities::getStaticF_KeywordNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "KeywordNames", ::UnityEngine::Rendering::MaterialQualityUtilities*>();
}
inline void UnityEngine::Rendering::MaterialQualityUtilities::setStaticF_EnumNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "EnumNames", ::UnityEngine::Rendering::MaterialQualityUtilities*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::MaterialQualityUtilities::getStaticF_EnumNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "EnumNames", ::UnityEngine::Rendering::MaterialQualityUtilities*>();
}
inline void UnityEngine::Rendering::MaterialQualityUtilities::setStaticF_Keywords(::ArrayW<::UnityEngine::Rendering::ShaderKeyword> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::ShaderKeyword>, "Keywords", ::UnityEngine::Rendering::MaterialQualityUtilities*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::ShaderKeyword>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::ShaderKeyword> UnityEngine::Rendering::MaterialQualityUtilities::getStaticF_Keywords() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::ShaderKeyword>, "Keywords", ::UnityEngine::Rendering::MaterialQualityUtilities*>();
}
inline ::UnityEngine::Rendering::MaterialQuality UnityEngine::Rendering::MaterialQualityUtilities::GetHighestQuality(::UnityEngine::Rendering::MaterialQuality levels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                                                                                         { "GetHighestQuality", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MaterialQuality>(nullptr, ___internal_method, levels);
}
inline ::UnityEngine::Rendering::MaterialQuality UnityEngine::Rendering::MaterialQualityUtilities::GetClosestQuality(::UnityEngine::Rendering::MaterialQuality availableLevels,
                                                                                                                     ::UnityEngine::Rendering::MaterialQuality requestedLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                                       { "GetClosestQuality", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>(), ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MaterialQuality>(nullptr, ___internal_method, availableLevels, requestedLevel);
}
inline void UnityEngine::Rendering::MaterialQualityUtilities::SetGlobalShaderKeywords(::UnityEngine::Rendering::MaterialQuality level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                                                                                         { "SetGlobalShaderKeywords", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level);
}
inline void UnityEngine::Rendering::MaterialQualityUtilities::SetGlobalShaderKeywords(::UnityEngine::Rendering::MaterialQuality level, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                          { "SetGlobalShaderKeywords", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, cmd);
}
inline int32_t UnityEngine::Rendering::MaterialQualityUtilities::ToFirstIndex(::UnityEngine::Rendering::MaterialQuality level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(),
                                                                                         { "ToFirstIndex", {}, { ::i2c::type_of<::UnityEngine::Rendering::MaterialQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, level);
}
inline ::UnityEngine::Rendering::MaterialQuality UnityEngine::Rendering::MaterialQualityUtilities::FromIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MaterialQualityUtilities*>(), { "FromIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MaterialQuality>(nullptr, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MaterialQualityUtilities::MaterialQualityUtilities() {}
