#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelFailedTextOverride)
namespace BGLib::Polyglot {
struct Language;
}
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class LevelFailedText;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride__LanguageOverride;
}
namespace GlobalNamespace {
struct __LevelFailedTextOverride___Start_d__6;
}
namespace GlobalNamespace {
class __LevelFailedTextOverride____c__DisplayClass6_0;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
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
namespace GlobalNamespace {
struct __LevelFailedTextOverride___Start_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFailedTextOverride);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0);
MARK_VAL_T(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6);
// Type: ::LanguageOverride
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15672))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16369))
// CS Name: ::LevelFailedTextOverride::LanguageOverride*
class CORDL_TYPE __LevelFailedTextOverride__LanguageOverride : public ::System::Object {
public:
  // Declarations
  /// @brief Field _language, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__language, put = __cordl_internal_set__language))::BGLib::Polyglot::Language _language;

  /// @brief Field _overrideText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideText, put = __cordl_internal_set__overrideText))::StringW _overrideText;

  __declspec(property(get = get_language))::BGLib::Polyglot::Language language;

  __declspec(property(get = get_overrideText))::StringW overrideText;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get__language();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get__language() const;

  constexpr void __cordl_internal_set__language(::BGLib::Polyglot::Language value);

  constexpr ::StringW& __cordl_internal_get__overrideText();

  constexpr ::StringW const& __cordl_internal_get__overrideText() const;

  constexpr void __cordl_internal_set__overrideText(::StringW value);

  /// @brief Method get_language, addr 0xe35bb0, size 0x8, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::Language get_language();

  /// @brief Method get_overrideText, addr 0xe35bb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_overrideText();

  static inline ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride* New_ctor();

  /// @brief Method .ctor, addr 0xe35bc0, size 0x8, virtual false, abstract: false, final false
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
  ::BGLib::Polyglot::Language ____language;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15672))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16370))
// CS Name: ::LevelFailedTextOverride::<>c__DisplayClass6_0*
class CORDL_TYPE __LevelFailedTextOverride____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field selectedLanguage, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_selectedLanguage, put = __cordl_internal_set_selectedLanguage))::BGLib::Polyglot::Language selectedLanguage;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get_selectedLanguage();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get_selectedLanguage() const;

  constexpr void __cordl_internal_set_selectedLanguage(::BGLib::Polyglot::Language value);

  static inline ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor, addr 0xe35bc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__0, addr 0xe35bd0, size 0x24, virtual false, abstract: false, final false
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
  ::BGLib::Polyglot::Language ___selectedLanguage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0, ___selectedLanguage) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Start>d__6
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3396)), TypeDefinitionIndex(TypeDefinitionIndex(10790)),
// TypeDefinitionIndex(TypeDefinitionIndex(10802)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 5037 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3390), inst: 5038 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(16371)) CS Name: ::LevelFailedTextOverride::<Start>d__6
struct CORDL_TYPE __LevelFailedTextOverride___Start_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe35bf4, size 0xbe0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe367d4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelFailedTextOverride>",
  // modifiers: "", def_value: None }, CppParam { name: "_overrideData_5__2", ty: "::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*", modifiers: "", def_value: None }, CppParam { name:
  // "_levelId_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelSO>,::Array<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>>", modifiers: "", def_value: None
  // }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>,::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>>", modifiers: "",
  // def_value: None }]
  constexpr __LevelFailedTextOverride___Start_d__6(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelFailedTextOverride> __4__this,
      ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride* _overrideData_5__2, ::StringW _levelId_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFailedTextOverride___Start_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelFailedTextOverride> __4__this;

  /// @brief Field <overrideData>5__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride* _overrideData_5__2;

  /// @brief Field <levelId>5__3, offset: 0x38, size: 0x8, def value: None
  ::StringW _levelId_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, _overrideData_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, _levelId_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, __u__2) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelFailedTextOverride
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(10773))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16372))
// CS Name: ::LevelFailedTextOverride*
class CORDL_TYPE LevelFailedTextOverride : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__6 = ::GlobalNamespace::__LevelFailedTextOverride___Start_d__6;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0;

  using LanguageOverride = ::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride;

  /// @brief Field _perLanguageOverrides, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__perLanguageOverrides,
                      put = __cordl_internal_set__perLanguageOverrides))::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*,
                                                                                 ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> _perLanguageOverrides;

  /// @brief Field _beatmapLevelPacks, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__beatmapLevelPacks,
      put = __cordl_internal_set__beatmapLevelPacks))::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*,
                                                              ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>*> _beatmapLevelPacks;

  /// @brief Field _beatmapLevels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevels,
                      put = __cordl_internal_set__beatmapLevels))::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*,
                                                                          ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>*> _beatmapLevels;

  /// @brief Field _levelFailedTextEffect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFailedTextEffect, put = __cordl_internal_set__levelFailedTextEffect))::UnityW<::GlobalNamespace::LevelFailedText> _levelFailedTextEffect;

  /// @brief Field _beatmapKey, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey))::GlobalNamespace::BeatmapKey _beatmapKey;

  constexpr ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*>&
  __cordl_internal_get__perLanguageOverrides();

  constexpr ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> const&
  __cordl_internal_get__perLanguageOverrides() const;

  constexpr void __cordl_internal_set__perLanguageOverrides(
      ::ArrayW<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, ::Array<::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*>*> value);

  constexpr ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*,
                     ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>*>&
  __cordl_internal_get__beatmapLevelPacks();

  constexpr ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*,
                     ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>*> const&
  __cordl_internal_get__beatmapLevelPacks() const;

  constexpr void __cordl_internal_set__beatmapLevelPacks(::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*,
                                                                  ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>*>
                                                             value);

  constexpr ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*,
                     ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>*>&
  __cordl_internal_get__beatmapLevels();

  constexpr ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*,
                     ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>*> const&
  __cordl_internal_get__beatmapLevels() const;

  constexpr void __cordl_internal_set__beatmapLevels(::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*,
                                                              ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>*>
                                                         value);

  constexpr ::UnityW<::GlobalNamespace::LevelFailedText>& __cordl_internal_get__levelFailedTextEffect();

  constexpr ::UnityW<::GlobalNamespace::LevelFailedText> const& __cordl_internal_get__levelFailedTextEffect() const;

  constexpr void __cordl_internal_set__levelFailedTextEffect(::UnityW<::GlobalNamespace::LevelFailedText> value);

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method Start, addr 0xe35b14, size 0x94, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::LevelFailedTextOverride* New_ctor();

  /// @brief Method .ctor, addr 0xe35ba8, size 0x8, virtual false, abstract: false, final false
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
  ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*,
           ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>*>*>
      ____beatmapLevelPacks;

  /// @brief Field _beatmapLevels, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*,
           ::Array<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>*>
      ____beatmapLevels;

  /// @brief Field _levelFailedTextEffect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelFailedText> ____levelFailedTextEffect;

  /// @brief Field _beatmapKey, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedTextOverride, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____perLanguageOverrides) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____beatmapLevelPacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____beatmapLevels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____levelFailedTextEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextOverride, ____beatmapKey) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedTextOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedTextOverride*, "", "LevelFailedTextOverride");
NEED_NO_BOX(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFailedTextOverride__LanguageOverride*, "", "LevelFailedTextOverride/LanguageOverride");
NEED_NO_BOX(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFailedTextOverride____c__DisplayClass6_0*, "", "LevelFailedTextOverride/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFailedTextOverride___Start_d__6, "", "LevelFailedTextOverride/<Start>d__6");
