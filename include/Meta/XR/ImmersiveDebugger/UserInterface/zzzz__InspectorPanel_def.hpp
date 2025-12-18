#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/InspectorPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__DebugPanel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InspectorPanel)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
struct Category;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ScrollView;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Toggle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class CategoryButton;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class DebugInterface;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class HierarchyItemButton;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IDebugUIPanel;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IInspector;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class InspectorPanel___c__DisplayClass40_0;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class InspectorPanel___c__DisplayClass42_0;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Inspector;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
struct RuntimeSettings_DistanceOption;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Action;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class InspectorPanel;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class InspectorPanel___c__DisplayClass40_0;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class InspectorPanel___c__DisplayClass42_0;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel/<>c__DisplayClass40_0
class CORDL_TYPE InspectorPanel___c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> __4__this;

  /// @brief Field button, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_button, put = __cordl_internal_set_button)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> button;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0* New_ctor();

  /// @brief Method <GetCategoryButton>b__0, addr 0x58a47ac, size 0x1c, virtual false, abstract: false, final false
  inline void _GetCategoryButton_b__0();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> const& __cordl_internal_get_button() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>& __cordl_internal_get_button();

  constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> value);

  constexpr void __cordl_internal_set_button(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> value);

  /// @brief Method .ctor, addr 0x58a3a44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectorPanel___c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectorPanel___c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectorPanel___c__DisplayClass40_0(InspectorPanel___c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectorPanel___c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectorPanel___c__DisplayClass40_0(InspectorPanel___c__DisplayClass40_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18338 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> _____4__this;

  /// @brief Field button, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> ___button;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0, ___button) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel/<>c__DisplayClass42_0
class CORDL_TYPE InspectorPanel___c__DisplayClass42_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> __4__this;

  /// @brief Field button, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_button, put = __cordl_internal_set_button)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> button;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0* New_ctor();

  /// @brief Method <GetHierarchyItemButton>b__0, addr 0x58a47c8, size 0x1c, virtual false, abstract: false, final false
  inline void _GetHierarchyItemButton_b__0();

  /// @brief Method <GetHierarchyItemButton>b__1, addr 0x58a47e4, size 0x18, virtual false, abstract: false, final false
  inline void _GetHierarchyItemButton_b__1();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> const& __cordl_internal_get_button() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>& __cordl_internal_get_button();

  constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> value);

  constexpr void __cordl_internal_set_button(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> value);

  /// @brief Method .ctor, addr 0x58a3e1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectorPanel___c__DisplayClass42_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectorPanel___c__DisplayClass42_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectorPanel___c__DisplayClass42_0(InspectorPanel___c__DisplayClass42_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectorPanel___c__DisplayClass42_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectorPanel___c__DisplayClass42_0(InspectorPanel___c__DisplayClass42_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18339 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> _____4__this;

  /// @brief Field button, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> ___button;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0, ___button) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.DebugPanel, UnityEngine.Vector3
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel
class CORDL_TYPE InspectorPanel : public ::Meta::XR::ImmersiveDebugger::UserInterface::DebugPanel {
public:
  // Declarations
  using __c__DisplayClass40_0 = ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0;

  using __c__DisplayClass42_0 = ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0;

  __declspec(property(put = set_CategoryBackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> CategoryBackgroundStyle;

  __declspec(property(get = get_CategoryFlex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> CategoryFlex;

  __declspec(property(get = get_Flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> Flex;

  __declspec(property(get = get_HierarchyFlex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> HierarchyFlex;

  __declspec(property(get = get_ScrollView)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> ScrollView;

  /// @brief Field _buttonsAnchor, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonsAnchor, put = __cordl_internal_set__buttonsAnchor)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _buttonsAnchor;

  /// @brief Field _categories, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__categories,
                      put = __cordl_internal_set__categories)) ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Manager::Category,
                                                                                                            ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>>* _categories;

  /// @brief Field _categoriesIcon, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__categoriesIcon, put = __cordl_internal_set__categoriesIcon)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _categoriesIcon;

  /// @brief Field _categoryBackground, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__categoryBackground, put = __cordl_internal_set__categoryBackground)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>
      _categoryBackground;

  /// @brief Field _categoryBackgroundImageStyle, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__categoryBackgroundImageStyle,
                      put = __cordl_internal_set__categoryBackgroundImageStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _categoryBackgroundImageStyle;

  /// @brief Field _categoryDiv, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__categoryDiv, put = __cordl_internal_set__categoryDiv)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _categoryDiv;

  /// @brief Field _categoryScrollView, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__categoryScrollView, put = __cordl_internal_set__categoryScrollView)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>
      _categoryScrollView;

  /// @brief Field _currentPosition, offset 0x128, size 0xc
  __declspec(property(get = __cordl_internal_get__currentPosition, put = __cordl_internal_set__currentPosition)) ::UnityEngine::Vector3 _currentPosition;

  /// @brief Field _debugInterface, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__debugInterface, put = __cordl_internal_set__debugInterface)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface> _debugInterface;

  /// @brief Field _hierarchyIcon, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__hierarchyIcon, put = __cordl_internal_set__hierarchyIcon)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _hierarchyIcon;

  /// @brief Field _hierarchyScrollView, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__hierarchyScrollView, put = __cordl_internal_set__hierarchyScrollView)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>
      _hierarchyScrollView;

  /// @brief Field _items, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__items,
                      put = __cordl_internal_set__items)) ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*,
                                                                                                       ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>>* _items;

  /// @brief Field _lerpCompleted, offset 0x144, size 0x1
  __declspec(property(get = __cordl_internal_get__lerpCompleted, put = __cordl_internal_set__lerpCompleted)) bool _lerpCompleted;

  /// @brief Field _lerpSpeed, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get__lerpSpeed, put = __cordl_internal_set__lerpSpeed)) float_t _lerpSpeed;

  /// @brief Field _registries, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__registries, put = __cordl_internal_set__registries)) ::System::Collections::Generic::Dictionary_2<
      ::Meta::XR::ImmersiveDebugger::Manager::Category,
      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle,
                                                                                                                 ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>*>* _registries;

  /// @brief Field _scrollView, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollView, put = __cordl_internal_set__scrollView)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> _scrollView;

  /// @brief Field _selectedCategory, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedCategory, put = __cordl_internal_set__selectedCategory)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>
      _selectedCategory;

  /// @brief Field _selectedItem, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedItem, put = __cordl_internal_set__selectedItem)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> _selectedItem;

  /// @brief Field _selectedModeTitle, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedModeTitle, put = __cordl_internal_set__selectedModeTitle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>
      _selectedModeTitle;

  /// @brief Field _targetPosition, offset 0x134, size 0xc
  __declspec(property(get = __cordl_internal_get__targetPosition, put = __cordl_internal_set__targetPosition)) ::UnityEngine::Vector3 _targetPosition;

  /// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel"
  constexpr operator ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*() noexcept;

  /// @brief Method ComputeIdealPreviousItem, addr 0x58a3bb8, size 0x264, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> ComputeIdealPreviousItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item);

  /// @brief Method FoldItem, addr 0x58a4464, size 0x30, virtual false, abstract: false, final false
  inline void FoldItem(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* button);

  /// @brief Method GetCategoryButton, addr 0x58a2fa8, size 0x27c, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> GetCategoryButton(::Meta::XR::ImmersiveDebugger::Manager::Category category, bool create);

  /// @brief Method GetHierarchyItemButton, addr 0x58a2954, size 0x3c0, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> GetHierarchyItemButton(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item, bool create);

  /// @brief Method GetInspector, addr 0x58a3a10, size 0x34, virtual true, abstract: false, final true
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* GetInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                ::Meta::XR::ImmersiveDebugger::Manager::Category category);

  /// @brief Method GetInspectorInternal, addr 0x58a2d14, size 0x294, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector> GetInspectorInternal(
      ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category category, bool createRegistries,
      ::ByRef<::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*> registry);

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel* New_ctor();

  /// @brief Method OnTransparencyChanged, addr 0x58a24f4, size 0x84, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RegisterControl, addr 0x58a2130, size 0x224, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> RegisterControl(::StringW buttonName, ::UnityEngine::Texture2D* icon,
                                                                                                 ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* style, ::System::Action* callback);

  /// @brief Method RegisterInspector, addr 0x58a2578, size 0x3dc, virtual true, abstract: false, final true
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* RegisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                     ::Meta::XR::ImmersiveDebugger::Manager::Category category);

  /// @brief Method RemoveInspector, addr 0x58a3658, size 0x15c, virtual false, abstract: false, final false
  inline void RemoveInspector(::Meta::XR::ImmersiveDebugger::Manager::Category category, ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector* inspector);

  /// @brief Method SelectCategory, addr 0x58a3fd0, size 0x3f4, virtual false, abstract: false, final false
  inline void SelectCategory(::Meta::XR::ImmersiveDebugger::Manager::Category category);

  /// @brief Method SelectCategoryButton, addr 0x58a3a48, size 0x170, virtual false, abstract: false, final false
  inline void SelectCategoryButton(::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton* categoryButton);

  /// @brief Method SelectCategoryMode, addr 0x58a2354, size 0xd0, virtual false, abstract: false, final false
  inline void SelectCategoryMode();

  /// @brief Method SelectHierarchyItemButton, addr 0x58a3e20, size 0x1b0, virtual false, abstract: false, final false
  inline void SelectHierarchyItemButton(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* button);

  /// @brief Method SelectHierarchyMode, addr 0x58a2424, size 0xd0, virtual false, abstract: false, final false
  inline void SelectHierarchyMode();

  /// @brief Method SelectItem, addr 0x58a44c8, size 0x58, virtual false, abstract: false, final false
  inline void SelectItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item);

  /// @brief Method SetPanelPosition, addr 0x589f720, size 0x144, virtual false, abstract: false, final false
  inline void SetPanelPosition(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption distanceOption, bool skipAnimation);

  /// @brief Method Setup, addr 0x58a19bc, size 0x774, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method ToggleFoldItem, addr 0x58a43c4, size 0xa0, virtual false, abstract: false, final false
  inline void ToggleFoldItem(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* button);

  /// @brief Method TryRemoveHierarchyItemButton, addr 0x58a37b4, size 0x108, virtual false, abstract: false, final false
  inline void TryRemoveHierarchyItemButton(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item);

  /// @brief Method UnfoldItem, addr 0x58a4494, size 0x34, virtual false, abstract: false, final false
  inline void UnfoldItem(::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* button);

  /// @brief Method UnregisterInspector, addr 0x58a3224, size 0x434, virtual true, abstract: false, final true
  inline void UnregisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::Manager::Category category, bool allCategories);

  /// @brief Method Update, addr 0x58a4520, size 0xf4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__buttonsAnchor() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__buttonsAnchor();

  constexpr ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Manager::Category, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>>* const&
  __cordl_internal_get__categories() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Manager::Category, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>>*&
  __cordl_internal_get__categories();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__categoriesIcon() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__categoriesIcon();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__categoryBackground() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__categoryBackground();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__categoryBackgroundImageStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__categoryBackgroundImageStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__categoryDiv() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__categoryDiv();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& __cordl_internal_get__categoryScrollView() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& __cordl_internal_get__categoryScrollView();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentPosition();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface> const& __cordl_internal_get__debugInterface() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface>& __cordl_internal_get__debugInterface();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__hierarchyIcon() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__hierarchyIcon();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& __cordl_internal_get__hierarchyScrollView() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& __cordl_internal_get__hierarchyScrollView();

  constexpr ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>>* const&
  __cordl_internal_get__items() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>>*&
  __cordl_internal_get__items();

  constexpr bool const& __cordl_internal_get__lerpCompleted() const;

  constexpr bool& __cordl_internal_get__lerpCompleted();

  constexpr float_t const& __cordl_internal_get__lerpSpeed() const;

  constexpr float_t& __cordl_internal_get__lerpSpeed();

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::Meta::XR::ImmersiveDebugger::Manager::Category,
      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle,
                                                                                                                 ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>*>* const&
  __cordl_internal_get__registries() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::Meta::XR::ImmersiveDebugger::Manager::Category,
      ::System::Collections::Generic::Dictionary_2<
          ::System::Type*, ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>*>*&
  __cordl_internal_get__registries();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const& __cordl_internal_get__scrollView() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>& __cordl_internal_get__scrollView();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> const& __cordl_internal_get__selectedCategory() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>& __cordl_internal_get__selectedCategory();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> const& __cordl_internal_get__selectedItem() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>& __cordl_internal_get__selectedItem();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__selectedModeTitle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__selectedModeTitle();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition();

  constexpr void __cordl_internal_set__buttonsAnchor(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__categories(
      ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Manager::Category, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>>* value);

  constexpr void __cordl_internal_set__categoriesIcon(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__categoryBackground(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__categoryBackgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__categoryDiv(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__categoryScrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value);

  constexpr void __cordl_internal_set__currentPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__debugInterface(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface> value);

  constexpr void __cordl_internal_set__hierarchyIcon(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__hierarchyScrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value);

  constexpr void __cordl_internal_set__items(
      ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>>* value);

  constexpr void __cordl_internal_set__lerpCompleted(bool value);

  constexpr void __cordl_internal_set__lerpSpeed(float_t value);

  constexpr void __cordl_internal_set__registries(
      ::System::Collections::Generic::Dictionary_2<
          ::Meta::XR::ImmersiveDebugger::Manager::Category,
          ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle,
                                                                                                                     ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>*>* value);

  constexpr void __cordl_internal_set__scrollView(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value);

  constexpr void __cordl_internal_set__selectedCategory(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> value);

  constexpr void __cordl_internal_set__selectedItem(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> value);

  constexpr void __cordl_internal_set__selectedModeTitle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x58a4614, size 0x198, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CategoryFlex, addr 0x58a18d8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> get_CategoryFlex();

  /// @brief Method get_Flex, addr 0x58a18ac, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> get_Flex();

  /// @brief Method get_HierarchyFlex, addr 0x58a18fc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> get_HierarchyFlex();

  /// @brief Method get_ScrollView, addr 0x58a18d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> get_ScrollView();

  /// @brief Convert to "::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel"
  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* i___Meta__XR__ImmersiveDebugger__UserInterface__IDebugUIPanel() noexcept;

  /// @brief Method set_CategoryBackgroundStyle, addr 0x58a1920, size 0x9c, virtual false, abstract: false, final false
  inline void set_CategoryBackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectorPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectorPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectorPanel(InspectorPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectorPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectorPanel(InspectorPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18340 };

  /// @brief Field _scrollView, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> ____scrollView;

  /// @brief Field _categoryScrollView, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> ____categoryScrollView;

  /// @brief Field _hierarchyScrollView, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> ____hierarchyScrollView;

  /// @brief Field _registries, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<
      ::Meta::XR::ImmersiveDebugger::Manager::Category,
      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle,
                                                                                                                 ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector>>*>*>* ____registries;

  /// @brief Field _categories, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Manager::Category, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton>>* ____categories;

  /// @brief Field _items, offset: 0x108, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton>>* ____items;

  /// @brief Field _selectedCategory, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton> ____selectedCategory;

  /// @brief Field _selectedItem, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton> ____selectedItem;

  /// @brief Field _categoryBackground, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____categoryBackground;

  /// @brief Field _currentPosition, offset: 0x128, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____currentPosition;

  /// @brief Field _targetPosition, offset: 0x134, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetPosition;

  /// @brief Field _lerpSpeed, offset: 0x140, size: 0x4, def value: None
  float_t ____lerpSpeed;

  /// @brief Field _lerpCompleted, offset: 0x144, size: 0x1, def value: None
  bool ____lerpCompleted;

  /// @brief Field _categoryBackgroundImageStyle, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____categoryBackgroundImageStyle;

  /// @brief Field _debugInterface, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::DebugInterface> ____debugInterface;

  /// @brief Field _buttonsAnchor, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____buttonsAnchor;

  /// @brief Field _selectedModeTitle, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____selectedModeTitle;

  /// @brief Field _hierarchyIcon, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____hierarchyIcon;

  /// @brief Field _categoriesIcon, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____categoriesIcon;

  /// @brief Field _categoryDiv, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____categoryDiv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____scrollView) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____categoryScrollView) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____hierarchyScrollView) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____registries) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____categories) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____items) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____selectedCategory) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____selectedItem) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____categoryBackground) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____currentPosition) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____targetPosition) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____lerpSpeed) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____lerpCompleted) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____categoryBackgroundImageStyle) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____debugInterface) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____buttonsAnchor) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____selectedModeTitle) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____hierarchyIcon) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____categoriesIcon) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, ____categoryDiv) == 0x178, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel, 0x180>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel*, "Meta.XR.ImmersiveDebugger.UserInterface", "InspectorPanel");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass40_0*, "Meta.XR.ImmersiveDebugger.UserInterface", "InspectorPanel/<>c__DisplayClass40_0");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel___c__DisplayClass42_0*, "Meta.XR.ImmersiveDebugger.UserInterface", "InspectorPanel/<>c__DisplayClass42_0");
