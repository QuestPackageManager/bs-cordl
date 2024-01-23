#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__Language_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelFailedTextOverride)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class LevelFailedText;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride__LanguageOverride;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride____c__DisplayClass6_0;
}
namespace Polyglot {
struct Language;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFailedTextOverride;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride__LanguageOverride;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFailedTextOverride);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0);
// Type: ::LanguageOverride
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15554))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4002))
// CS Name: ::LevelFailedTextOverride::LanguageOverride*
class CORDL_TYPE __LevelFailedTextOverride__LanguageOverride : public ::System::Object {
public:
  // Declarations
  /// @brief Field _language, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__language, put = __cordl_internal_set__language))::Polyglot::Language _language;

  /// @brief Field _overrideText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideText, put = __cordl_internal_set__overrideText))::StringW _overrideText;

  __declspec(property(get = get_language))::Polyglot::Language language;

  __declspec(property(get = get_overrideText))::StringW overrideText;

  constexpr ::Polyglot::Language& __cordl_internal_get__language();

  constexpr ::Polyglot::Language const& __cordl_internal_get__language() const;

  constexpr void __cordl_internal_set__language(::Polyglot::Language value);

  constexpr ::StringW& __cordl_internal_get__overrideText();

  constexpr ::StringW const& __cordl_internal_get__overrideText() const;

  constexpr void __cordl_internal_set__overrideText(::StringW value);

  /// @brief Method get_language, addr 0x2220ff0, size 0x8, virtual false, abstract: false, final false
  inline ::Polyglot::Language get_language();

  /// @brief Method get_overrideText, addr 0x2220ff8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_overrideText();

  static inline ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride* New_ctor();

  /// @brief Method .ctor, addr 0x2221000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFailedTextOverride__LanguageOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelFailedTextOverride__LanguageOverride(__LevelFailedTextOverride__LanguageOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFailedTextOverride__LanguageOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelFailedTextOverride__LanguageOverride(__LevelFailedTextOverride__LanguageOverride const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFailedTextOverride__LanguageOverride();

public:
  /// @brief Field _language, offset: 0x10, size: 0x4, def value: None
  ::Polyglot::Language ____language;

  /// @brief Field _overrideText, offset: 0x18, size: 0x8, def value: None
  ::StringW ____overrideText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride, ____language) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride, ____overrideText) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15554))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4003))
// CS Name: ::LevelFailedTextOverride::<>c__DisplayClass6_0*
class CORDL_TYPE __LevelFailedTextOverride____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field selectedLanguage, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_selectedLanguage, put = __cordl_internal_set_selectedLanguage))::Polyglot::Language selectedLanguage;

  constexpr ::Polyglot::Language& __cordl_internal_get_selectedLanguage();

  constexpr ::Polyglot::Language const& __cordl_internal_get_selectedLanguage() const;

  constexpr void __cordl_internal_set_selectedLanguage(::Polyglot::Language value);

  static inline ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor, addr 0x2220fe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__0, addr 0x2221008, size 0x24, virtual false, abstract: false, final false
  inline bool _Start_b__0(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride* data);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFailedTextOverride____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelFailedTextOverride____c__DisplayClass6_0(__LevelFailedTextOverride____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFailedTextOverride____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelFailedTextOverride____c__DisplayClass6_0(__LevelFailedTextOverride____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFailedTextOverride____c__DisplayClass6_0();

public:
  /// @brief Field selectedLanguage, offset: 0x10, size: 0x4, def value: None
  ::Polyglot::Language ___selectedLanguage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0, ___selectedLanguage) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelFailedTextOverride
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4004))
// CS Name: ::LevelFailedTextOverride*
class CORDL_TYPE LevelFailedTextOverride : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0;

  using LanguageOverride = ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride;

  /// @brief Field _perLanguageOverrides, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__perLanguageOverrides,
                      put = __cordl_internal_set__perLanguageOverrides))::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*,
                                                                                 ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> _perLanguageOverrides;

  /// @brief Field _beatmapLevelPacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPacks,
                      put = __cordl_internal_set__beatmapLevelPacks))::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>,
                                                                              ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> _beatmapLevelPacks;

  /// @brief Field _beatmapLevels, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get__beatmapLevels,
               put = __cordl_internal_set__beatmapLevels))::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>>*> _beatmapLevels;

  /// @brief Field _levelFailedTextEffect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFailedTextEffect, put = __cordl_internal_set__levelFailedTextEffect))::UnityW<::GlobalNamespace::LevelFailedText> _levelFailedTextEffect;

  /// @brief Field _difficultyBeatmap, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmap, put = __cordl_internal_set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  constexpr ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*>&
  __cordl_internal_get__perLanguageOverrides();

  constexpr ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> const&
  __cordl_internal_get__perLanguageOverrides() const;

  constexpr void __cordl_internal_set__perLanguageOverrides(
      ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*>& __cordl_internal_get__beatmapLevelPacks();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> const& __cordl_internal_get__beatmapLevelPacks() const;

  constexpr void __cordl_internal_set__beatmapLevelPacks(::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>>*>& __cordl_internal_get__beatmapLevels();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>>*> const& __cordl_internal_get__beatmapLevels() const;

  constexpr void __cordl_internal_set__beatmapLevels(::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>>*> value);

  constexpr ::UnityW<::GlobalNamespace::LevelFailedText>& __cordl_internal_get__levelFailedTextEffect();

  constexpr ::UnityW<::GlobalNamespace::LevelFailedText> const& __cordl_internal_get__levelFailedTextEffect() const;

  constexpr void __cordl_internal_set__levelFailedTextEffect(::UnityW<::GlobalNamespace::LevelFailedText> value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __cordl_internal_get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __cordl_internal_get__difficultyBeatmap() const;

  constexpr void __cordl_internal_set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  /// @brief Method Start, addr 0x2220958, size 0x688, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::LevelFailedTextOverride* New_ctor();

  /// @brief Method .ctor, addr 0x2220fe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFailedTextOverride(LevelFailedTextOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFailedTextOverride(LevelFailedTextOverride const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFailedTextOverride();

public:
  /// @brief Field _perLanguageOverrides, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> ____perLanguageOverrides;

  /// @brief Field _beatmapLevelPacks, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>>*> ____beatmapLevelPacks;

  /// @brief Field _beatmapLevels, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::PreviewBeatmapLevelSO>>*> ____beatmapLevels;

  /// @brief Field _levelFailedTextEffect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelFailedText> ____levelFailedTextEffect;

  /// @brief Field _difficultyBeatmap, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedTextOverride, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____perLanguageOverrides) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____beatmapLevelPacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____beatmapLevels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____levelFailedTextEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____difficultyBeatmap) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedTextOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedTextOverride*, "", "LevelFailedTextOverride");
NEED_NO_BOX(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, "", "LevelFailedTextOverride/LanguageOverride");
NEED_NO_BOX(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0*, "", "LevelFailedTextOverride/<>c__DisplayClass6_0");
