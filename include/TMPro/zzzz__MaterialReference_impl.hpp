#pragma once
// IWYU pragma private; include "TMPro\MaterialReference.hpp"
#include "TMPro/zzzz__MaterialReference_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::TMPro::MaterialReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MaterialReference::*)(int32_t, ::TMPro::TMP_FontAsset*, ::TMPro::TMP_SpriteAsset*, ::UnityEngine::Material*, float_t)>(
    &::TMPro::MaterialReference::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69385ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReference>(), { ".ctor",
                                                                             {},
                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(),
                                                                               ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReference.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::TMPro::MaterialReference>, ::TMPro::TMP_FontAsset*)>(&::TMPro::MaterialReference::Contains)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6938628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReference>(), { "Contains", {}, { ::i2c::type_of<::ArrayW<::TMPro::MaterialReference>>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReference.AddMaterialReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Material*, ::TMPro::TMP_FontAsset*, ::by_ref<::ArrayW<::TMPro::MaterialReference>>,
                                                                   ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(&::TMPro::MaterialReference::AddMaterialReference)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6938728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReference>(),
                                         { "AddMaterialReference",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::by_ref<::ArrayW<::TMPro::MaterialReference>>>(),
                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReference.AddMaterialReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Material*, ::TMPro::TMP_SpriteAsset*, ::by_ref<::ArrayW<::TMPro::MaterialReference>>,
                                                                   ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(&::TMPro::MaterialReference::AddMaterialReference)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6938940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReference>(),
                                         { "AddMaterialReference",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<::by_ref<::ArrayW<::TMPro::MaterialReference>>>(),
                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
inline void TMPro::MaterialReference::_ctor(int32_t index, ::TMPro::TMP_FontAsset* fontAsset, ::TMPro::TMP_SpriteAsset* spriteAsset, ::UnityEngine::Material* material, float_t padding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReference>(), { ".ctor",
                                                                           {},
                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(),
                                                                             ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, fontAsset, spriteAsset, material, padding);
}
inline bool TMPro::MaterialReference::Contains(::ArrayW<::TMPro::MaterialReference> materialReferences, ::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReference>(), { "Contains", {}, { ::i2c::type_of<::ArrayW<::TMPro::MaterialReference>>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, materialReferences, fontAsset);
}
inline int32_t TMPro::MaterialReference::AddMaterialReference(::UnityEngine::Material* material, ::TMPro::TMP_FontAsset* fontAsset, ::by_ref<::ArrayW<::TMPro::MaterialReference>> materialReferences,
                                                              ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReference>(), { "AddMaterialReference",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(),
                                                                                                              ::i2c::type_of<::by_ref<::ArrayW<::TMPro::MaterialReference>>>(),
                                                                                                              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, fontAsset, materialReferences, materialReferenceIndexLookup);
}
inline int32_t TMPro::MaterialReference::AddMaterialReference(::UnityEngine::Material* material, ::TMPro::TMP_SpriteAsset* spriteAsset,
                                                              ::by_ref<::ArrayW<::TMPro::MaterialReference>> materialReferences,
                                                              ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReference>(), { "AddMaterialReference",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(),
                                                                                                              ::i2c::type_of<::by_ref<::ArrayW<::TMPro::MaterialReference>>>(),
                                                                                                              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, spriteAsset, materialReferences, materialReferenceIndexLookup);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "spriteAsset", ty: "::UnityW<::TMPro::TMP_SpriteAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "isDefaultMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isFallbackMaterial", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fallbackMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::MaterialReference::MaterialReference(int32_t index, ::UnityW<::TMPro::TMP_FontAsset> fontAsset, ::UnityW<::TMPro::TMP_SpriteAsset> spriteAsset,
                                                        ::UnityW<::UnityEngine::Material> material, bool isDefaultMaterial, bool isFallbackMaterial, ::UnityW<::UnityEngine::Material> fallbackMaterial,
                                                        float_t padding, int32_t referenceCount) noexcept {
  this->index = index;
  this->fontAsset = fontAsset;
  this->spriteAsset = spriteAsset;
  this->material = material;
  this->isDefaultMaterial = isDefaultMaterial;
  this->isFallbackMaterial = isFallbackMaterial;
  this->fallbackMaterial = fallbackMaterial;
  this->padding = padding;
  this->referenceCount = referenceCount;
}
// Ctor Parameters []
constexpr ::TMPro::MaterialReference::MaterialReference() {}
