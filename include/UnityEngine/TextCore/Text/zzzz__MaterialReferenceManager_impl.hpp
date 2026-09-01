#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\MaterialReferenceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReferenceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::MaterialReferenceManager* (*)()>(&::UnityEngine::TextCore::Text::MaterialReferenceManager::get_instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bc8414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.AddFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::MaterialReferenceManager::AddFontAsset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6bc8668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                                                           { "AddFontAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.AddFontAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::AddFontAssetInternal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6bc8688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                                                           { "AddFontAssetInternal", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.AddSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::TextCore::Text::SpriteAsset*)>(&::UnityEngine::TextCore::Text::MaterialReferenceManager::AddSpriteAsset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6bc87c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "AddSpriteAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.AddSpriteAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)(int32_t, ::UnityEngine::TextCore::Text::SpriteAsset*)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::AddSpriteAssetInternal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6bc87f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "AddSpriteAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.AddFontMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Material*)>(&::UnityEngine::TextCore::Text::MaterialReferenceManager::AddFontMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6bc8904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                                                           { "AddFontMaterial", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.AddFontMaterialInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)(int32_t, ::UnityEngine::Material*)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::AddFontMaterialInternal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6bc8934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "AddFontMaterialInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.AddColorGradientPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::TextCore::Text::TextColorGradient*)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::AddColorGradientPreset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6bc89b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "AddColorGradientPreset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextColorGradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.AddColorGradientPreset_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)(int32_t, ::UnityEngine::TextCore::Text::TextColorGradient*)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::AddColorGradientPreset_Internal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6bc89e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                { "AddColorGradientPreset_Internal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextColorGradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.TryGetFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::TextCore::Text::FontAsset*>)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetFontAsset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6bc8aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "TryGetFontAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::FontAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.TryGetFontAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)(int32_t, ::by_ref<::UnityEngine::TextCore::Text::FontAsset*>)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetFontAssetInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bc8ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "TryGetFontAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::FontAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.TryGetSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::TextCore::Text::SpriteAsset*>)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetSpriteAsset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6bc8b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "TryGetSpriteAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::SpriteAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.TryGetSpriteAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)(int32_t, ::by_ref<::UnityEngine::TextCore::Text::SpriteAsset*>)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetSpriteAssetInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bc8b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                { "TryGetSpriteAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::SpriteAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.TryGetColorGradientPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::TextCore::Text::TextColorGradient*>)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetColorGradientPreset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6bc8be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                { "TryGetColorGradientPreset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextColorGradient*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.TryGetColorGradientPresetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)(int32_t, ::by_ref<::UnityEngine::TextCore::Text::TextColorGradient*>)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetColorGradientPresetInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bc8c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                         { "TryGetColorGradientPresetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextColorGradient*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.TryGetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::Material*>)>(&::UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6bc8c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "TryGetMaterial", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager.TryGetMaterialInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)(int32_t, ::by_ref<::UnityEngine::Material*>)>(
    &::UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetMaterialInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bc8cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                             { "TryGetMaterialInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::MaterialReferenceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::MaterialReferenceManager::*)()>(&::UnityEngine::TextCore::Text::MaterialReferenceManager::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6bc848c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>*&
UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_get_m_FontMaterialReferenceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontMaterialReferenceLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* const&
UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_get_m_FontMaterialReferenceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontMaterialReferenceLookup;
}
constexpr void UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_set_m_FontMaterialReferenceLookup(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontMaterialReferenceLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*&
UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_get_m_FontAssetReferenceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontAssetReferenceLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* const&
UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_get_m_FontAssetReferenceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontAssetReferenceLookup;
}
constexpr void UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_set_m_FontAssetReferenceLookup(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontAssetReferenceLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>*&
UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_get_m_SpriteAssetReferenceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteAssetReferenceLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* const&
UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_get_m_SpriteAssetReferenceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteAssetReferenceLookup;
}
constexpr void UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_set_m_SpriteAssetReferenceLookup(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteAssetReferenceLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>*&
UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_get_m_ColorGradientReferenceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientReferenceLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>* const&
UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_get_m_ColorGradientReferenceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientReferenceLookup;
}
constexpr void UnityEngine::TextCore::Text::MaterialReferenceManager::__cordl_internal_set_m_ColorGradientReferenceLookup(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorGradientReferenceLookup = value;
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::setStaticF_s_Instance(::UnityEngine::TextCore::Text::MaterialReferenceManager* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::MaterialReferenceManager*, "s_Instance", ::UnityEngine::TextCore::Text::MaterialReferenceManager*>(
      std::forward<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(value));
}
inline ::UnityEngine::TextCore::Text::MaterialReferenceManager* UnityEngine::TextCore::Text::MaterialReferenceManager::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::MaterialReferenceManager*, "s_Instance", ::UnityEngine::TextCore::Text::MaterialReferenceManager*>();
}
inline ::UnityEngine::TextCore::Text::MaterialReferenceManager* UnityEngine::TextCore::Text::MaterialReferenceManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::AddFontAsset(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                                                         { "AddFontAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fontAsset);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::AddFontAssetInternal(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                                                         { "AddFontAssetInternal", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fontAsset);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::AddSpriteAsset(int32_t hashCode, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "AddSpriteAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashCode, spriteAsset);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::AddSpriteAssetInternal(int32_t hashCode, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "AddSpriteAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCode, spriteAsset);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::AddFontMaterial(int32_t hashCode, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                                                         { "AddFontMaterial", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashCode, material);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::AddFontMaterialInternal(int32_t hashCode, ::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "AddFontMaterialInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCode, material);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::AddColorGradientPreset(int32_t hashCode, ::UnityEngine::TextCore::Text::TextColorGradient* spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "AddColorGradientPreset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextColorGradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashCode, spriteAsset);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::AddColorGradientPreset_Internal(int32_t hashCode, ::UnityEngine::TextCore::Text::TextColorGradient* spriteAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                              { "AddColorGradientPreset_Internal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextColorGradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCode, spriteAsset);
}
inline bool UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetFontAsset(int32_t hashCode, ::by_ref<::UnityEngine::TextCore::Text::FontAsset*> fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "TryGetFontAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::FontAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashCode, fontAsset);
}
inline bool UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetFontAssetInternal(int32_t hashCode, ::by_ref<::UnityEngine::TextCore::Text::FontAsset*> fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "TryGetFontAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::FontAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, fontAsset);
}
inline bool UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetSpriteAsset(int32_t hashCode, ::by_ref<::UnityEngine::TextCore::Text::SpriteAsset*> spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "TryGetSpriteAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::SpriteAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashCode, spriteAsset);
}
inline bool UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetSpriteAssetInternal(int32_t hashCode, ::by_ref<::UnityEngine::TextCore::Text::SpriteAsset*> spriteAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                              { "TryGetSpriteAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::SpriteAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, spriteAsset);
}
inline bool UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetColorGradientPreset(int32_t hashCode, ::by_ref<::UnityEngine::TextCore::Text::TextColorGradient*> gradientPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                              { "TryGetColorGradientPreset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextColorGradient*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashCode, gradientPreset);
}
inline bool UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetColorGradientPresetInternal(int32_t hashCode, ::by_ref<::UnityEngine::TextCore::Text::TextColorGradient*> gradientPreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                       { "TryGetColorGradientPresetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::TextCore::Text::TextColorGradient*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, gradientPreset);
}
inline bool UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetMaterial(int32_t hashCode, ::by_ref<::UnityEngine::Material*> material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "TryGetMaterial", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashCode, material);
}
inline bool UnityEngine::TextCore::Text::MaterialReferenceManager::TryGetMaterialInternal(int32_t hashCode, ::by_ref<::UnityEngine::Material*> material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(),
                                                           { "TryGetMaterialInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, material);
}
inline void UnityEngine::TextCore::Text::MaterialReferenceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::MaterialReferenceManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::MaterialReferenceManager* UnityEngine::TextCore::Text::MaterialReferenceManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::MaterialReferenceManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::MaterialReferenceManager::MaterialReferenceManager() {}
