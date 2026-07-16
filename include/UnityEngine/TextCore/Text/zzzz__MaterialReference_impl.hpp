#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MaterialReference.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MaterialReference::*)(
    int32_t, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Text::SpriteAsset*, ::UnityEngine::Material*, float_t)>(&::UnityEngine::TextCore::Text::MaterialReference::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6bc4aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReference>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                    ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReference.AddMaterialReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (*)(::UnityEngine::Material*, ::UnityEngine::TextCore::Text::FontAsset*, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>>,
                            ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(&::UnityEngine::TextCore::Text::MaterialReference::AddMaterialReference)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6bc4ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReference>(),
                                                                                           { "AddMaterialReference",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>>>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReference.AddMaterialReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (*)(::UnityEngine::Material*, ::UnityEngine::TextCore::Text::SpriteAsset*, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>>,
                            ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(&::UnityEngine::TextCore::Text::MaterialReference::AddMaterialReference)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6bc4ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReference>(),
                                                             { "AddMaterialReference",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                                 ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::MaterialReference::_ctor(int32_t index, ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset,
                                                                  ::UnityEngine::Material* material, float_t padding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReference>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                  ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, fontAsset, spriteAsset, material, padding);
}
inline int32_t UnityEngine::TextCore::Text::MaterialReference::AddMaterialReference(::UnityEngine::Material* material, ::UnityEngine::TextCore::Text::FontAsset* fontAsset,
                                                                                    ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>> materialReferences,
                                                                                    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReference>(),
                                                                                         { "AddMaterialReference",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(),
                                                                                             ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>>>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, fontAsset, materialReferences, materialReferenceIndexLookup);
}
inline int32_t UnityEngine::TextCore::Text::MaterialReference::AddMaterialReference(::UnityEngine::Material* material, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset,
                                                                                    ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>> materialReferences,
                                                                                    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReference>(),
                                                                                         { "AddMaterialReference",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>(),
                                                                                             ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>>>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, spriteAsset, materialReferences, materialReferenceIndexLookup);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "spriteAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty:
// "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "isFallbackMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "fallbackMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "referenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::MaterialReference::MaterialReference(int32_t index, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset,
                                                                              ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> spriteAsset, ::UnityW<::UnityEngine::Material> material,
                                                                              bool isFallbackMaterial, ::UnityW<::UnityEngine::Material> fallbackMaterial, float_t padding,
                                                                              int32_t referenceCount) noexcept {
  this->index = index;
  this->fontAsset = fontAsset;
  this->spriteAsset = spriteAsset;
  this->material = material;
  this->isFallbackMaterial = isFallbackMaterial;
  this->fallbackMaterial = fallbackMaterial;
  this->padding = padding;
  this->referenceCount = referenceCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::MaterialReference::MaterialReference() {}
