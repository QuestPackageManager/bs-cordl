#pragma once
// IWYU pragma private; include "GlobalNamespace\Noise3DTexturesGenerator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Noise3DTexturesGenerator_def.hpp"
#include "GlobalNamespace/zzzz__Noise3DTexturesGenerator_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
// Ctor Parameters [CppParam { name: "texturePropertyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple::Noise3DTexturesGenerator_MaterialPropertyNameCouple(::StringW texturePropertyName,
                                                                                                                                      ::UnityW<::UnityEngine::Material> material) noexcept {
  this->texturePropertyName = texturePropertyName;
  this->material = material;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple::Noise3DTexturesGenerator_MaterialPropertyNameCouple() {}
// Ctor Parameters [CppParam { name: "globalPropertyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialPropertyNameCouples", ty:
// "::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple::Noise3DTexturesGenerator_MaterialTextureParamsCouple(
    ::StringW globalPropertyName, ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple> materialPropertyNameCouples) noexcept {
  this->globalPropertyName = globalPropertyName;
  this->materialPropertyNameCouples = materialPropertyNameCouples;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple::Noise3DTexturesGenerator_MaterialTextureParamsCouple() {}
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Noise3DTexturesGenerator::*)()>(&::GlobalNamespace::Noise3DTexturesGenerator::Awake)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5f4b34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Noise3DTexturesGenerator*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator.CreateNoisePixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (*)(int32_t, int32_t, int32_t, float_t, int32_t, float_t)>(
    &::GlobalNamespace::Noise3DTexturesGenerator::CreateNoisePixels)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5f4b568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Noise3DTexturesGenerator*>(),
                            { "CreateNoisePixels",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Noise3DTexturesGenerator::*)()>(&::GlobalNamespace::Noise3DTexturesGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4b8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Noise3DTexturesGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple>& GlobalNamespace::Noise3DTexturesGenerator::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple> const& GlobalNamespace::Noise3DTexturesGenerator::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::Noise3DTexturesGenerator::__cordl_internal_set__data(::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
inline void GlobalNamespace::Noise3DTexturesGenerator::setStaticF__texture(::UnityW<::UnityEngine::Texture3D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "_texture", ::GlobalNamespace::Noise3DTexturesGenerator*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> GlobalNamespace::Noise3DTexturesGenerator::getStaticF__texture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "_texture", ::GlobalNamespace::Noise3DTexturesGenerator*>();
}
inline void GlobalNamespace::Noise3DTexturesGenerator::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Noise3DTexturesGenerator*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color32> GlobalNamespace::Noise3DTexturesGenerator::CreateNoisePixels(int32_t width, int32_t height, int32_t depth, float_t scale, int32_t repeat, float_t contrast) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Noise3DTexturesGenerator*>(),
                          { "CreateNoisePixels",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(nullptr, ___internal_method, width, height, depth, scale, repeat, contrast);
}
inline void GlobalNamespace::Noise3DTexturesGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Noise3DTexturesGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Noise3DTexturesGenerator* GlobalNamespace::Noise3DTexturesGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Noise3DTexturesGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Noise3DTexturesGenerator::Noise3DTexturesGenerator() {}
