#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PromoViewController)
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class __PromoViewController__ButtonPromoTypePair;
}
namespace GlobalNamespace {
class __PromoViewController____c__DisplayClass5_0;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class PromoViewController;
}
namespace GlobalNamespace {
class __PromoViewController__ButtonPromoTypePair;
}
namespace GlobalNamespace {
class __PromoViewController____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PromoViewController);
MARK_REF_PTR_T(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair);
MARK_REF_PTR_T(::GlobalNamespace::__PromoViewController____c__DisplayClass5_0);
// Type: ::ButtonPromoTypePair
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5735))
// CS Name: ::PromoViewController::ButtonPromoTypePair*
class CORDL_TYPE __PromoViewController__ButtonPromoTypePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field button, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_button, put = __cordl_internal_set_button))::UnityW<::UnityEngine::UI::Button> button;

  /// @brief Field previewLevelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_previewLevelPack, put = __cordl_internal_set_previewLevelPack))::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> previewLevelPack;

  /// @brief Field levelPack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_levelPack, put = __cordl_internal_set_levelPack))::UnityW<::GlobalNamespace::BeatmapLevelPackSO> levelPack;

  /// @brief Field beatmapLevel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::UnityW<::GlobalNamespace::BeatmapLevelSO> beatmapLevel;

  /// @brief Field _annotatedBeatmapLevelCollection, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__annotatedBeatmapLevelCollection,
                      put = __cordl_internal_set__annotatedBeatmapLevelCollection))::GlobalNamespace::IAnnotatedBeatmapLevelCollection* _annotatedBeatmapLevelCollection;

  __declspec(property(get = get_annotatedBeatmapLevelCollection))::GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_button();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_button() const;

  constexpr void __cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO>& __cordl_internal_get_previewLevelPack();

  constexpr ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> const& __cordl_internal_get_previewLevelPack() const;

  constexpr void __cordl_internal_set_previewLevelPack(::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO>& __cordl_internal_get_levelPack();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> const& __cordl_internal_get_levelPack() const;

  constexpr void __cordl_internal_set_levelPack(::UnityW<::GlobalNamespace::BeatmapLevelPackSO> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get_beatmapLevel();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get_beatmapLevel() const;

  constexpr void __cordl_internal_set_beatmapLevel(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*& __cordl_internal_get__annotatedBeatmapLevelCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*> const& __cordl_internal_get__annotatedBeatmapLevelCollection() const;

  constexpr void __cordl_internal_set__annotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* value);

  /// @brief Method get_annotatedBeatmapLevelCollection, addr 0x22d5d7c, size 0xb0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* get_annotatedBeatmapLevelCollection();

  static inline ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* New_ctor();

  /// @brief Method .ctor, addr 0x22d5e2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PromoViewController__ButtonPromoTypePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PromoViewController__ButtonPromoTypePair(__PromoViewController__ButtonPromoTypePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PromoViewController__ButtonPromoTypePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PromoViewController__ButtonPromoTypePair(__PromoViewController__ButtonPromoTypePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PromoViewController__ButtonPromoTypePair();

public:
  /// @brief Field button, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___button;

  /// @brief Field previewLevelPack, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PreviewBeatmapLevelPackSO> ___previewLevelPack;

  /// @brief Field levelPack, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> ___levelPack;

  /// @brief Field beatmapLevel, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ___beatmapLevel;

  /// @brief Field _annotatedBeatmapLevelCollection, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* ____annotatedBeatmapLevelCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair, ___button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair, ___previewLevelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair, ___levelPack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair, ___beatmapLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair, ____annotatedBeatmapLevelCollection) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5736))
// CS Name: ::PromoViewController::<>c__DisplayClass5_0*
class CORDL_TYPE __PromoViewController____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item))::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* item;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PromoViewController> __4__this;

  constexpr ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*& __cordl_internal_get_item();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*> const& __cordl_internal_get_item() const;

  constexpr void __cordl_internal_set_item(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* value);

  constexpr ::UnityW<::GlobalNamespace::PromoViewController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::PromoViewController> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PromoViewController> value);

  static inline ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor, addr 0x22d5d6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__0, addr 0x22d5e34, size 0x64, virtual false, abstract: false, final false
  inline void _DidActivate_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__PromoViewController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PromoViewController____c__DisplayClass5_0(__PromoViewController____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PromoViewController____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PromoViewController____c__DisplayClass5_0(__PromoViewController____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PromoViewController____c__DisplayClass5_0();

public:
  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* ___item;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoViewController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromoViewController____c__DisplayClass5_0, ___item) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PromoViewController____c__DisplayClass5_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PromoViewController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13605))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5737))
// CS Name: ::PromoViewController*
class CORDL_TYPE PromoViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0;

  using ButtonPromoTypePair = ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair;

  /// @brief Field _elements, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__elements, put = __cordl_internal_set__elements))::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,
                                                                                                           ::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*> _elements;

  /// @brief Field promoButtonWasPressedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_promoButtonWasPressedEvent,
                      put = __cordl_internal_set_promoButtonWasPressedEvent))::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,
                                                                                                ::GlobalNamespace::IPreviewBeatmapLevel*>* promoButtonWasPressedEvent;

  constexpr ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, ::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>& __cordl_internal_get__elements();

  constexpr ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, ::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*> const&
  __cordl_internal_get__elements() const;

  constexpr void
  __cordl_internal_set__elements(::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, ::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*> value);

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*&
  __cordl_internal_get_promoButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const&
  __cordl_internal_get_promoButtonWasPressedEvent() const;

  constexpr void __cordl_internal_set_promoButtonWasPressedEvent(
      ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method add_promoButtonWasPressedEvent, addr 0x22d5ad4, size 0xb0, virtual false, abstract: false, final false
  inline void add_promoButtonWasPressedEvent(
      ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method remove_promoButtonWasPressedEvent, addr 0x22d5b84, size 0xb0, virtual false, abstract: false, final false
  inline void remove_promoButtonWasPressedEvent(
      ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  /// @brief Method DidActivate, addr 0x22d5c34, size 0x138, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::PromoViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d5d74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PromoViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PromoViewController(PromoViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PromoViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PromoViewController(PromoViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PromoViewController();

public:
  /// @brief Field _elements, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, ::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*> ____elements;

  /// @brief Field promoButtonWasPressedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::GlobalNamespace::PromoViewController>, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::IPreviewBeatmapLevel*>* ___promoButtonWasPressedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PromoViewController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoViewController, ____elements) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PromoViewController, ___promoButtonWasPressedEvent) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PromoViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoViewController*, "", "PromoViewController");
NEED_NO_BOX(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, "", "PromoViewController/ButtonPromoTypePair");
NEED_NO_BOX(::GlobalNamespace::__PromoViewController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*, "", "PromoViewController/<>c__DisplayClass5_0");
