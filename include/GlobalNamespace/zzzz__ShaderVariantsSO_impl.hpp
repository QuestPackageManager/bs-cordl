#pragma once
// IWYU pragma private; include "GlobalNamespace\ShaderVariantsSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderVariantsSO_def.hpp"
#include "GlobalNamespace/zzzz__ShaderVariantsSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant.get_passType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PassType (::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::*)()>(
    &::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::get_passType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ee30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>(), { "get_passType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant.get_keywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::*)()>(
    &::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::get_keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>(), { "get_keywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::*)(::UnityEngine::Rendering::PassType, ::StringW)>(
    &::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f4ee40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::PassType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PassType& GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::__cordl_internal_get__passType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passType;
}
constexpr ::UnityEngine::Rendering::PassType const& GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::__cordl_internal_get__passType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passType;
}
constexpr void GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::__cordl_internal_set__passType(::UnityEngine::Rendering::PassType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____passType = value;
}
constexpr ::StringW& GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::__cordl_internal_get__keywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keywords;
}
constexpr ::StringW const& GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::__cordl_internal_get__keywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keywords;
}
constexpr void GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::__cordl_internal_set__keywords(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keywords = value;
}
inline ::UnityEngine::Rendering::PassType GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::get_passType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>(), { "get_passType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PassType>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::get_keywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>(), { "get_keywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::_ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::PassType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passType, keywords);
}
inline ::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant* GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::New_ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>(passType, keywords));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant::ShaderVariant_ShaderVariantsSO_Variant() {}
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO_ShaderVariant.get_variants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*> (::GlobalNamespace::ShaderVariantsSO_ShaderVariant::*)()>(
    &::GlobalNamespace::ShaderVariantsSO_ShaderVariant::get_variants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>(), { "get_variants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO_ShaderVariant.get_shader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::GlobalNamespace::ShaderVariantsSO_ShaderVariant::*)()>(
    &::GlobalNamespace::ShaderVariantsSO_ShaderVariant::get_shader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ee20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>(), { "get_shader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO_ShaderVariant._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderVariantsSO_ShaderVariant::*)(
    ::UnityEngine::Shader*, ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>)>(&::GlobalNamespace::ShaderVariantsSO_ShaderVariant::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ee28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>& GlobalNamespace::ShaderVariantsSO_ShaderVariant::__cordl_internal_get__variants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variants;
}
constexpr ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*> const& GlobalNamespace::ShaderVariantsSO_ShaderVariant::__cordl_internal_get__variants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variants;
}
constexpr void GlobalNamespace::ShaderVariantsSO_ShaderVariant::__cordl_internal_set__variants(::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variants = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::ShaderVariantsSO_ShaderVariant::__cordl_internal_get__shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::ShaderVariantsSO_ShaderVariant::__cordl_internal_get__shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shader;
}
constexpr void GlobalNamespace::ShaderVariantsSO_ShaderVariant::__cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shader = value;
}
inline ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*> GlobalNamespace::ShaderVariantsSO_ShaderVariant::get_variants() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>(), { "get_variants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::ShaderVariantsSO_ShaderVariant::get_shader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>(), { "get_shader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void GlobalNamespace::ShaderVariantsSO_ShaderVariant::_ctor(::UnityEngine::Shader* shader, ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*> variants) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader, variants);
}
inline ::GlobalNamespace::ShaderVariantsSO_ShaderVariant* GlobalNamespace::ShaderVariantsSO_ShaderVariant::New_ctor(::UnityEngine::Shader* shader,
                                                                                                                    ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*> variants) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>(shader, variants));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderVariantsSO_ShaderVariant::ShaderVariantsSO_ShaderVariant() {}
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO.get_shaderVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*> (::GlobalNamespace::ShaderVariantsSO::*)()>(
    &::GlobalNamespace::ShaderVariantsSO::get_shaderVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO*>(), { "get_shaderVariants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderVariantsSO::*)(::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>)>(
    &::GlobalNamespace::ShaderVariantsSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO*>(), { "Init", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderVariantsSO::*)()>(&::GlobalNamespace::ShaderVariantsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4ee10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>& GlobalNamespace::ShaderVariantsSO::__cordl_internal_get__shaderVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderVariants;
}
constexpr ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*> const& GlobalNamespace::ShaderVariantsSO::__cordl_internal_get__shaderVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderVariants;
}
constexpr void GlobalNamespace::ShaderVariantsSO::__cordl_internal_set__shaderVariants(::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shaderVariants = value;
}
inline ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*> GlobalNamespace::ShaderVariantsSO::get_shaderVariants() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO*>(), { "get_shaderVariants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>>(this, ___internal_method);
}
inline void GlobalNamespace::ShaderVariantsSO::Init(::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*> shaderVariants) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO*>(), { "Init", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaderVariants);
}
inline void GlobalNamespace::ShaderVariantsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderVariantsSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ShaderVariantsSO* GlobalNamespace::ShaderVariantsSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShaderVariantsSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderVariantsSO::ShaderVariantsSO() {}
