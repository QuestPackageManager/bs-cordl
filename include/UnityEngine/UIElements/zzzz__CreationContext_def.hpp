#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CreationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreationContext)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct TemplateAsset_AttributeOverride;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CreationContext);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.CreationContext
struct CORDL_TYPE CreationContext {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::UIElements::CreationContext Default;

  __declspec(property(get = get_attributeOverrides,
                      put = set_attributeOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides;

  __declspec(property(get = get_slotInsertionPoints,
                      put = set_slotInsertionPoints)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints;

  __declspec(property(get = get_target, put = set_target)) ::UnityEngine::UIElements::VisualElement* target;

  __declspec(property(get = get_visualTreeAsset, put = set_visualTreeAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAsset;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*();

  /// @brief Method Equals, addr 0x499d248, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x499d300, size 0x158, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::CreationContext other);

  /// @brief Method GetHashCode, addr 0x499d458, size 0x128, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x499d1d0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides, ::UnityEngine::UIElements::VisualTreeAsset* vta,
                    ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method .ctor, addr 0x499d150, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints, ::UnityEngine::UIElements::VisualTreeAsset* vta,
                    ::UnityEngine::UIElements::VisualElement* target);

  static inline ::UnityEngine::UIElements::CreationContext getStaticF_Default();

  /// @brief Method get_attributeOverrides, addr 0x499d140, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* get_attributeOverrides();

  /// @brief Method get_slotInsertionPoints, addr 0x499d130, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* get_slotInsertionPoints();

  /// @brief Method get_target, addr 0x499d110, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_target();

  /// @brief Method get_visualTreeAsset, addr 0x499d120, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_visualTreeAsset();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>* i___System__IEquatable_1___UnityEngine__UIElements__CreationContext_();

  static inline void setStaticF_Default(::UnityEngine::UIElements::CreationContext value);

  /// @brief Method set_attributeOverrides, addr 0x499d148, size 0x8, virtual false, abstract: false, final false
  inline void set_attributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* value);

  /// @brief Method set_slotInsertionPoints, addr 0x499d138, size 0x8, virtual false, abstract: false, final false
  inline void set_slotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_target, addr 0x499d118, size 0x8, virtual false, abstract: false, final false
  inline void set_target(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_visualTreeAsset, addr 0x499d128, size 0x8, virtual false, abstract: false, final false
  inline void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CreationContext();

  // Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name:
  // "_visualTreeAsset_k__BackingField", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None }, CppParam { name: "_slotInsertionPoints_k__BackingField", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "_attributeOverrides_k__BackingField", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*", modifiers: "", def_value: None }]
  constexpr CreationContext(::UnityEngine::UIElements::VisualElement* _target_k__BackingField, ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _visualTreeAsset_k__BackingField,
                            ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* _slotInsertionPoints_k__BackingField,
                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* _attributeOverrides_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6299 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field <target>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* _target_k__BackingField;

  /// @brief Field <visualTreeAsset>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _visualTreeAsset_k__BackingField;

  /// @brief Field <slotInsertionPoints>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* _slotInsertionPoints_k__BackingField;

  /// @brief Field <attributeOverrides>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* _attributeOverrides_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _target_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _visualTreeAsset_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _slotInsertionPoints_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _attributeOverrides_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CreationContext, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CreationContext, "UnityEngine.UIElements", "CreationContext");
