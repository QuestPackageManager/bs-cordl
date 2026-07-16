#pragma once
// IWYU pragma private; include "TMPro/MaterialReferenceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__MaterialReferenceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "TMPro/zzzz__TMP_ColorGradient_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::MaterialReferenceManager* (*)()>(&::TMPro::MaterialReferenceManager::get_instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6932208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::MaterialReferenceManager::AddFontAsset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x693245c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddFontAsset", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddFontAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MaterialReferenceManager::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::MaterialReferenceManager::AddFontAssetInternal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x693247c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddFontAssetInternal", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_SpriteAsset*)>(&::TMPro::MaterialReferenceManager::AddSpriteAsset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69325b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddSpriteAsset", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddSpriteAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MaterialReferenceManager::*)(::TMPro::TMP_SpriteAsset*)>(&::TMPro::MaterialReferenceManager::AddSpriteAssetInternal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x69325d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddSpriteAssetInternal", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::TMPro::TMP_SpriteAsset*)>(&::TMPro::MaterialReferenceManager::AddSpriteAsset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x693270c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddSpriteAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddSpriteAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MaterialReferenceManager::*)(int32_t, ::TMPro::TMP_SpriteAsset*)>(&::TMPro::MaterialReferenceManager::AddSpriteAssetInternal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x693273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddSpriteAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddFontMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Material*)>(&::TMPro::MaterialReferenceManager::AddFontMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6932850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddFontMaterial", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddFontMaterialInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MaterialReferenceManager::*)(int32_t, ::UnityEngine::Material*)>(&::TMPro::MaterialReferenceManager::AddFontMaterialInternal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6932880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddFontMaterialInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddColorGradientPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::TMPro::TMP_ColorGradient*)>(&::TMPro::MaterialReferenceManager::AddColorGradientPreset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69328fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddColorGradientPreset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_ColorGradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.AddColorGradientPreset_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MaterialReferenceManager::*)(int32_t, ::TMPro::TMP_ColorGradient*)>(
    &::TMPro::MaterialReferenceManager::AddColorGradientPreset_Internal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x693292c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                             { "AddColorGradientPreset_Internal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_ColorGradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::MaterialReferenceManager::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::MaterialReferenceManager::Contains)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69329f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "Contains", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::MaterialReferenceManager::*)(::TMPro::TMP_SpriteAsset*)>(&::TMPro::MaterialReferenceManager::Contains)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6932a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "Contains", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.TryGetFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::TMPro::TMP_FontAsset*>)>(&::TMPro::MaterialReferenceManager::TryGetFontAsset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6932b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "TryGetFontAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_FontAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.TryGetFontAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::MaterialReferenceManager::*)(int32_t, ::by_ref<::TMPro::TMP_FontAsset*>)>(
    &::TMPro::MaterialReferenceManager::TryGetFontAssetInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6932b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                             { "TryGetFontAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_FontAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.TryGetSpriteAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::TMPro::TMP_SpriteAsset*>)>(&::TMPro::MaterialReferenceManager::TryGetSpriteAsset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6932bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "TryGetSpriteAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_SpriteAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.TryGetSpriteAssetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::MaterialReferenceManager::*)(int32_t, ::by_ref<::TMPro::TMP_SpriteAsset*>)>(
    &::TMPro::MaterialReferenceManager::TryGetSpriteAssetInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6932be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                             { "TryGetSpriteAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_SpriteAsset*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.TryGetColorGradientPreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::TMPro::TMP_ColorGradient*>)>(&::TMPro::MaterialReferenceManager::TryGetColorGradientPreset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6932c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                             { "TryGetColorGradientPreset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_ColorGradient*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.TryGetColorGradientPresetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::MaterialReferenceManager::*)(int32_t, ::by_ref<::TMPro::TMP_ColorGradient*>)>(
    &::TMPro::MaterialReferenceManager::TryGetColorGradientPresetInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6932c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                             { "TryGetColorGradientPresetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_ColorGradient*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.TryGetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::Material*>)>(&::TMPro::MaterialReferenceManager::TryGetMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6932cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "TryGetMaterial", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager.TryGetMaterialInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::MaterialReferenceManager::*)(int32_t, ::by_ref<::UnityEngine::Material*>)>(
    &::TMPro::MaterialReferenceManager::TryGetMaterialInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6932d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                             { "TryGetMaterialInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MaterialReferenceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MaterialReferenceManager::*)()>(&::TMPro::MaterialReferenceManager::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6932280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>*& TMPro::MaterialReferenceManager::__cordl_internal_get_m_FontMaterialReferenceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontMaterialReferenceLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* const& TMPro::MaterialReferenceManager::__cordl_internal_get_m_FontMaterialReferenceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontMaterialReferenceLookup;
}
constexpr void TMPro::MaterialReferenceManager::__cordl_internal_set_m_FontMaterialReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontMaterialReferenceLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>*& TMPro::MaterialReferenceManager::__cordl_internal_get_m_FontAssetReferenceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontAssetReferenceLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* const& TMPro::MaterialReferenceManager::__cordl_internal_get_m_FontAssetReferenceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontAssetReferenceLookup;
}
constexpr void TMPro::MaterialReferenceManager::__cordl_internal_set_m_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontAssetReferenceLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_SpriteAsset>>*& TMPro::MaterialReferenceManager::__cordl_internal_get_m_SpriteAssetReferenceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteAssetReferenceLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_SpriteAsset>>* const& TMPro::MaterialReferenceManager::__cordl_internal_get_m_SpriteAssetReferenceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteAssetReferenceLookup;
}
constexpr void TMPro::MaterialReferenceManager::__cordl_internal_set_m_SpriteAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_SpriteAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteAssetReferenceLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_ColorGradient>>*& TMPro::MaterialReferenceManager::__cordl_internal_get_m_ColorGradientReferenceLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientReferenceLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_ColorGradient>>* const&
TMPro::MaterialReferenceManager::__cordl_internal_get_m_ColorGradientReferenceLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientReferenceLookup;
}
constexpr void
TMPro::MaterialReferenceManager::__cordl_internal_set_m_ColorGradientReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_ColorGradient>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorGradientReferenceLookup = value;
}
inline void TMPro::MaterialReferenceManager::setStaticF_s_Instance(::TMPro::MaterialReferenceManager* value) {
  ::cordl_internals::setStaticField<::TMPro::MaterialReferenceManager*, "s_Instance", ::TMPro::MaterialReferenceManager*>(std::forward<::TMPro::MaterialReferenceManager*>(value));
}
inline ::TMPro::MaterialReferenceManager* TMPro::MaterialReferenceManager::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::TMPro::MaterialReferenceManager*, "s_Instance", ::TMPro::MaterialReferenceManager*>();
}
inline ::TMPro::MaterialReferenceManager* TMPro::MaterialReferenceManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::MaterialReferenceManager*>(nullptr, ___internal_method);
}
inline void TMPro::MaterialReferenceManager::AddFontAsset(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddFontAsset", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fontAsset);
}
inline void TMPro::MaterialReferenceManager::AddFontAssetInternal(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddFontAssetInternal", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fontAsset);
}
inline void TMPro::MaterialReferenceManager::AddSpriteAsset(::TMPro::TMP_SpriteAsset* spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddSpriteAsset", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spriteAsset);
}
inline void TMPro::MaterialReferenceManager::AddSpriteAssetInternal(::TMPro::TMP_SpriteAsset* spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddSpriteAssetInternal", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spriteAsset);
}
inline void TMPro::MaterialReferenceManager::AddSpriteAsset(int32_t hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddSpriteAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashCode, spriteAsset);
}
inline void TMPro::MaterialReferenceManager::AddSpriteAssetInternal(int32_t hashCode, ::TMPro::TMP_SpriteAsset* spriteAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddSpriteAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCode, spriteAsset);
}
inline void TMPro::MaterialReferenceManager::AddFontMaterial(int32_t hashCode, ::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddFontMaterial", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashCode, material);
}
inline void TMPro::MaterialReferenceManager::AddFontMaterialInternal(int32_t hashCode, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddFontMaterialInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCode, material);
}
inline void TMPro::MaterialReferenceManager::AddColorGradientPreset(int32_t hashCode, ::TMPro::TMP_ColorGradient* spriteAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "AddColorGradientPreset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_ColorGradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashCode, spriteAsset);
}
inline void TMPro::MaterialReferenceManager::AddColorGradientPreset_Internal(int32_t hashCode, ::TMPro::TMP_ColorGradient* spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                           { "AddColorGradientPreset_Internal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_ColorGradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCode, spriteAsset);
}
inline bool TMPro::MaterialReferenceManager::Contains(::TMPro::TMP_FontAsset* font) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "Contains", {}, { ::i2c::type_of<::TMPro::TMP_FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, font);
}
inline bool TMPro::MaterialReferenceManager::Contains(::TMPro::TMP_SpriteAsset* sprite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "Contains", {}, { ::i2c::type_of<::TMPro::TMP_SpriteAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sprite);
}
inline bool TMPro::MaterialReferenceManager::TryGetFontAsset(int32_t hashCode, ::by_ref<::TMPro::TMP_FontAsset*> fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "TryGetFontAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_FontAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashCode, fontAsset);
}
inline bool TMPro::MaterialReferenceManager::TryGetFontAssetInternal(int32_t hashCode, ::by_ref<::TMPro::TMP_FontAsset*> fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                           { "TryGetFontAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_FontAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, fontAsset);
}
inline bool TMPro::MaterialReferenceManager::TryGetSpriteAsset(int32_t hashCode, ::by_ref<::TMPro::TMP_SpriteAsset*> spriteAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "TryGetSpriteAsset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_SpriteAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashCode, spriteAsset);
}
inline bool TMPro::MaterialReferenceManager::TryGetSpriteAssetInternal(int32_t hashCode, ::by_ref<::TMPro::TMP_SpriteAsset*> spriteAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                           { "TryGetSpriteAssetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_SpriteAsset*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, spriteAsset);
}
inline bool TMPro::MaterialReferenceManager::TryGetColorGradientPreset(int32_t hashCode, ::by_ref<::TMPro::TMP_ColorGradient*> gradientPreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                           { "TryGetColorGradientPreset", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_ColorGradient*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashCode, gradientPreset);
}
inline bool TMPro::MaterialReferenceManager::TryGetColorGradientPresetInternal(int32_t hashCode, ::by_ref<::TMPro::TMP_ColorGradient*> gradientPreset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                           { "TryGetColorGradientPresetInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::TMPro::TMP_ColorGradient*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, gradientPreset);
}
inline bool TMPro::MaterialReferenceManager::TryGetMaterial(int32_t hashCode, ::by_ref<::UnityEngine::Material*> material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { "TryGetMaterial", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashCode, material);
}
inline bool TMPro::MaterialReferenceManager::TryGetMaterialInternal(int32_t hashCode, ::by_ref<::UnityEngine::Material*> material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(),
                                                           { "TryGetMaterialInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, material);
}
inline void TMPro::MaterialReferenceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MaterialReferenceManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::MaterialReferenceManager* TMPro::MaterialReferenceManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::MaterialReferenceManager*>());
}
// Ctor Parameters []
constexpr ::TMPro::MaterialReferenceManager::MaterialReferenceManager() {}
